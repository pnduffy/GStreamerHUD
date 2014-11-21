/*
   Copyright (C) 2010 Marco Ballesio <gibrovacco@gmail.com>
   Copyright (C) 2011-2013 Collabora Ltd.
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

#ifndef QCurrentState_H
#define QCurrentState_H

#include <QObject>
#include "QtGStreamerHUD.h"

class QTGSTREAMERHUD_EXPORT QCurrentState : public QObject
{
    Q_OBJECT
public:
    Q_PROPERTY(float roll READ getRoll WRITE setRoll NOTIFY rollChanged)
    Q_PROPERTY(float pitch READ getPitch WRITE setPitch NOTIFY pitchChanged)
    Q_PROPERTY(float yaw READ getYaw WRITE setYaw NOTIFY yawChanged)
	Q_PROPERTY(float groundspeed READ getGroundspeed WRITE setGroundspeed NOTIFY groundspeedChanged)
	Q_PROPERTY(float airspeed READ getAirspeed WRITE setAirspeed NOTIFY airspeedChanged)
	Q_PROPERTY(float batteryVoltage READ getBatteryVoltage WRITE setBatteryVoltage NOTIFY batteryVoltageChanged)
	Q_PROPERTY(float batteryCurrent READ getBatteryCurrent WRITE setBatteryCurrent NOTIFY batteryCurrentChanged)
	Q_PROPERTY(float batteryRemaining READ getBatteryRemaining WRITE setBatteryRemaining NOTIFY batteryRemainingChanged)
	Q_PROPERTY(float altitude READ getAltitude WRITE setAltitude NOTIFY altitudeChanged)
	Q_PROPERTY(QString flightMode READ getFlightMode WRITE setFlightMode NOTIFY flightModeChanged)

    explicit QCurrentState(QObject *parent = 0);
    ~QCurrentState();

    float getRoll() { return m_roll; }
	float getPitch() { return m_pitch; }
	float getYaw() { return m_yaw; }
	float getGroundspeed() { return m_groundspeed; }
	float getAirspeed() { return m_airspeed; }
	float getBatteryVoltage() { return m_batteryVoltage; }
	float getBatteryCurrent() { return m_batteryCurrent; }
	float getBatteryRemaining() { return m_batteryRemaining; }
	float getAltitude() { return m_altitude; }
	
	QString getFlightMode() { return m_flightMode; }

    void setRoll(float roll) { m_roll = roll; emit rollChanged(roll); }
    void setPitch(float pitch) { m_pitch = pitch; emit pitchChanged(pitch); }
    void setYaw(float yaw) { m_yaw = yaw; emit yawChanged(yaw); }
    void setGroundspeed(float speed) { m_groundspeed = speed; emit groundspeedChanged(speed); }
    void setAirspeed(float speed) { m_airspeed = speed; emit airspeedChanged(speed); }
    void setBatteryVoltage(float v) { m_batteryVoltage = v; emit batteryVoltageChanged(v); }
    void setBatteryCurrent(float i) { m_batteryCurrent = i; emit batteryCurrentChanged(i); }
    void setBatteryRemaining(float percent) { m_batteryRemaining = percent; emit batteryRemainingChanged(percent); }
    void setAltitude(float alt) { m_altitude = alt; emit altitudeChanged(alt); }
    void setFlightMode(QString mode) { m_flightMode = mode; emit flightModeChanged(mode); }

signals:
    void rollChanged(float);
	void pitchChanged(float);
	void yawChanged(float);
	void groundspeedChanged(float);
	void airspeedChanged(float);
	void batteryVoltageChanged(float);
	void batteryCurrentChanged(float);
	void batteryRemainingChanged(float);
	void altitudeChanged(float);
	void flightModeChanged(QString);

private:
	float m_roll;
	float m_pitch;
	float m_yaw;
	float m_groundspeed;
	float m_airspeed;
	float m_batteryVoltage;
	float m_batteryCurrent;
	float m_batteryRemaining;
	float m_altitude;

	QString m_flightMode;
};

#endif