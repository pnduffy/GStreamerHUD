/*
   Copyright (C) 2010 Marco Ballesio <gibrovacco@gmail.com>
   Copyright (C) 2011 Collabora Ltd.
     @author George Kiagiadakis <george.kiagiadakis@collabora.co.uk>

   This library is free software; you can redistribute it and/or modify
   it under the terms of the GNU Lesser General Public License as published
   by the Free Software Foundation; either version 2.1 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "stdafx.h"
#include "mediaapp.h"
#include "player.h"

#include <QBoxLayout>
#include <QFileDialog>
#include <QToolButton>
#include <QLabel>
#include <QSlider>
#include <QMouseEvent>

MediaApp::MediaApp(QWidget *parent)
    : QWidget(parent)
{
    //create the player
    m_player = new Player(this);
    connect(m_player, SIGNAL(positionChanged()), this, SLOT(onPositionChanged()));
    connect(m_player, SIGNAL(stateChanged()), this, SLOT(onStateChanged()));

    //m_baseDir is used to remember the last directory that was used.
    //defaults to the current working directory
    m_baseDir = QLatin1String(".");

	// Default strings to create the gstreamer pipeline
	m_pipelineString = "udpsrc port=%d  buffer-size=60000 ! application/x-rtp,encoding-name=H264,payload=96 ! rtph264depay ! h264parse ! queue ! avdec_h264 ! video/x-raw, format=I420 ! d3dvideosink sync=false";
	m_pipelineStringRecord = "udpsrc port=%d  buffer-size=60000 ! application/x-rtp,encoding-name=H264,payload=96 ! rtph264depay ! h264parse ! tee name=record ! queue ! avdec_h264 ! video/x-raw, format=I420 ! d3dvideosink sync=false record. ! queue ! mp4mux ! filesink location = %s";

    //this timer (re-)hides the controls after a few seconds when we are in fullscreen mode
    m_fullScreenTimer.setSingleShot(true);
    connect(&m_fullScreenTimer, SIGNAL(timeout()), this, SLOT(hideControls()));

	m_stopTimer.setSingleShot(true);
	connect(&m_stopTimer, SIGNAL(timeout()), this, SLOT(onStopTimer()));

	//create the UI
    QVBoxLayout *appLayout = new QVBoxLayout;
    appLayout->setContentsMargins(0, 0, 0, 0);
    createUI(appLayout);
    setLayout(appLayout);

    onStateChanged(); //set the controls to their default state

    setWindowTitle(tr("QtGStreamer HUD player"));
    resize(400, 400);
}

MediaApp::~MediaApp()
{
    delete m_player;
}

void MediaApp::openStream(const QString & pipelineString)
{
    m_player->stop();
    m_player->setPipelineString(pipelineString);
    m_player->play();
}

void MediaApp::open(bool saveStream)
{
	// TODO: make this user selectable
    QString saveFileName = "/Temp/FPV.mp4";
    m_baseDir = QFileInfo(saveFileName).path();

	QByteArray fileName = saveFileName.toUtf8();
	const char *pFileName = fileName.constData();

	QString pipelineString;
	pipelineString.sprintf((saveStream ? m_pipelineStringRecord : m_pipelineString).toStdString().c_str(), 9000, pFileName);
	openStream(pipelineString);
}

void MediaApp::toggleFullScreen()
{
    if (isFullScreen()) 
	{
        setMouseTracking(false);
        m_player->setMouseTracking(false);
        m_fullScreenTimer.stop();
        showControls();
        showNormal();
    } 
	else 
	{
        setMouseTracking(true);
        m_player->setMouseTracking(true);
        hideControls();
        showFullScreen();
    }
}

void MediaApp::onStateChanged()
{
    QGst::State newState = m_player->state();
    m_playButton->setEnabled(newState != QGst::StatePlaying);
    m_pauseButton->setEnabled(newState == QGst::StatePlaying);
    m_stopButton->setEnabled(newState != QGst::StateNull);
    m_volumeSlider->setEnabled(newState != QGst::StateNull);
    m_volumeLabel->setEnabled(newState != QGst::StateNull);
    m_volumeSlider->setValue(m_player->volume());

    //if we are in Null state, call onPositionChanged() to restore
    //the position of the slider and the text on the label
    if (newState == QGst::StateNull) 
	{
        onPositionChanged();
    }
}

/* Called when the positionChanged() is received from the player */
void MediaApp::onPositionChanged()
{
    QTime curpos(0,0);

    if (m_player->state() != QGst::StateReady &&
        m_player->state() != QGst::StateNull)
    {
        curpos = m_player->position();
    }

    m_positionLabel->setText(curpos.toString("hh:mm:ss.zzz"));

    if (curpos != QTime(0,0)) 
	{
        m_positionLabel->setEnabled(true);
    }
}

void MediaApp::onStop()
{
	m_player->sendEOS();
	m_stopTimer.start(1000);
}

void MediaApp::onStopTimer()
{
	m_stopTimer.stop();
	m_player->stop();
}

/* Called when the user changes the slider's position */
void MediaApp::setPosition(int value)
{
    uint length = -m_player->length().msecsTo(QTime(0,0));
    if (length != 0 && value > 0) 
	{
        QTime pos(0,0);
        pos = pos.addMSecs(length * (value / 1000.0));
        m_player->setPosition(pos);
    }
}

void MediaApp::showControls(bool show)
{
    m_playButton->setVisible(show);
    m_pauseButton->setVisible(show);
    m_stopButton->setVisible(show);
    m_fullScreenButton->setVisible(show);
    m_volumeSlider->setVisible(show);
    m_volumeLabel->setVisible(show);
    m_positionLabel->setVisible(show);
}

void MediaApp::mouseMoveEvent(QMouseEvent *event)
{
    Q_UNUSED(event);
    if (isFullScreen()) 
	{
        showControls();
        m_fullScreenTimer.start(3000); //re-hide controls after 3s
    }
}

QToolButton *MediaApp::initButton(QStyle::StandardPixmap icon, const QString & tip,
                                  QObject *dstobj, const char *slot_method, QLayout *layout)
{
    QToolButton *button = new QToolButton;
    button->setIcon(style()->standardIcon(icon));
    button->setIconSize(QSize(36, 36));
    button->setToolTip(tip);
    connect(button, SIGNAL(clicked()), dstobj, slot_method);
    layout->addWidget(button);

    return button;
}

void MediaApp::createUI(QBoxLayout *appLayout)
{
    appLayout->addWidget(m_player);

    m_positionLabel = new QLabel();

    m_volumeSlider = new QSlider(Qt::Horizontal);
    m_volumeSlider->setTickPosition(QSlider::TicksLeft);
    m_volumeSlider->setTickInterval(2);
    m_volumeSlider->setMaximum(10);
    m_volumeSlider->setMaximumSize(64,32);

    connect(m_volumeSlider, SIGNAL(sliderMoved(int)), m_player, SLOT(setVolume(int)));

    QHBoxLayout *btnLayout = new QHBoxLayout;
    btnLayout->addStretch();

    m_playButton = initButton(QStyle::SP_MediaPlay, tr("Play"),
                              m_player, SLOT(play()), btnLayout);

    m_pauseButton = initButton(QStyle::SP_MediaPause, tr("Pause"),
                               m_player, SLOT(pause()), btnLayout);

    m_stopButton = initButton(QStyle::SP_MediaStop, tr("Stop"),
                              this, SLOT(onStop()), btnLayout);

	m_fullScreenButton = initButton(QStyle::SP_TitleBarMaxButton, tr("Fullscreen"),
                                    this, SLOT(toggleFullScreen()), btnLayout);

    btnLayout->addStretch();

    m_volumeLabel = new QLabel();
    m_volumeLabel->setPixmap(
        style()->standardIcon(QStyle::SP_MediaVolume).pixmap(QSize(32, 32),
                QIcon::Normal, QIcon::On));

	btnLayout->addWidget(m_positionLabel);
    btnLayout->addWidget(m_volumeLabel);
    btnLayout->addWidget(m_volumeSlider);
    appLayout->addLayout(btnLayout);
}

#include "moc_mediaapp.cpp"
