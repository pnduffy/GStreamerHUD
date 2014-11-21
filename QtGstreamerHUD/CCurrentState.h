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

#ifndef CCurrentState_H
#define CCurrentState_H

#include <string>

class QTGSTREAMERHUD_EXPORT CCurrentState 
{
public:

    explicit CCurrentState();
    ~CCurrentState();

    float getRoll() { return m_roll; }
	float getPitch() { return m_pitch; }
	float getYaw() { return m_yaw; }
	float getGroundspeed() { return m_groundspeed; }
	float getAirspeed() { return m_airspeed; }
	float getBatteryVoltage() { return m_batteryVoltage; }
	float getBatteryCurrent() { return m_batteryCurrent; }
	float getBatteryRemaining() { return m_batteryRemaining; }
	float getAltitude() { return m_altitude; }

	wchar_t* getFlightMode() { return m_flightMode; }

    void setRoll(float roll) { m_roll = roll; }
    void setPitch(float pitch) { m_pitch = pitch; }
    void setYaw(float yaw) { m_yaw = yaw; }
	void setGroundspeed(float speed) { m_groundspeed = speed; }
	void setAirspeed(float speed) { m_airspeed = speed; }
	void setBatteryVoltage(float v) { m_batteryVoltage = v; }
	void setBatteryCurrent(float i) { m_batteryCurrent = i; }
	void setBatteryRemaining(float percent) { m_batteryRemaining = percent; }
	void setAltitude(float alt) { m_altitude = alt; }
	void setFlightMode(const wchar_t *mode) { wcsncpy_s(m_flightMode, MAX_PATH, mode, MAX_PATH); }

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

	wchar_t m_flightMode[MAX_PATH];
};

#endif