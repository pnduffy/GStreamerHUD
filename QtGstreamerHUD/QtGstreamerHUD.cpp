// QtGstreamerHUD.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include <QApplication>
#include <QMainWindow>
#include "QtGStreamerHUD.h"
#include "mediaapp.h"
#include "PrimaryFlightDisplayQML.h"
#include "HUDApplication.h"
#include <QGst/Init>


HUDApplication *theApp = NULL;
QMainWindow *theMainWindow = NULL;
PrimaryFlightDisplayQML *thePfd = NULL;

QTGSTREAMERHUD_EXPORT int InitHUDApp(int argc, char *argv[])
{
    HUDApplication app(argc, argv);
	theApp = &app;

	theMainWindow = new QMainWindow(NULL, Qt::CustomizeWindowHint | Qt::WindowTitleHint | Qt::WindowMinMaxButtonsHint);

	thePfd = new PrimaryFlightDisplayQML();

	QObject::connect(theApp, SIGNAL(close()), thePfd, SLOT(close()));

	theMainWindow->setCentralWidget(thePfd);
	theMainWindow->setMinimumSize(640,480);
	theMainWindow->show();

	int exitCode =  app.exec();
	
	QGst::cleanup();

	delete theMainWindow;
	theApp = NULL;

	return exitCode;
}

QTGSTREAMERHUD_EXPORT void InitQGst()
{
	QGst::init(NULL, NULL);
}

QTGSTREAMERHUD_EXPORT void ExitHUDApp()
{
	if (theApp)
	{
		theApp->sendCloseSignal();
		Sleep(100);
		theApp->quit();
	}
}

QTGSTREAMERHUD_EXPORT void SetCurrentState(CCurrentState &theState)
{
	if (thePfd)
	{
		thePfd->SetCurrentState(theState);
	}
}

#include "moc_QtGstreamerHUD.cpp"