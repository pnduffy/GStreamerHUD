// This is the main DLL file.

#include "stdafx.h"

#include "MissionPlanner.HUD.CLI.h"
#include "QtGStreamerHUD.h"
#include <string>
#include <msclr\marshal.h>
#include <msclr\marshal_windows.h>
#include <msclr\marshal_cppstd.h>

namespace MissionPlannerHUDCLI {

TCHAR curDir[MAX_PATH] = L"";

CCurrentState theCurrentState;

void HUD_Plugin::AppThreadLoop()
{
	// Call to open HUD Frame
	std::wstring dllPath(curDir);
	if (dllPath == L"")
	{
		GetCurrentDirectory(MAX_PATH, curDir);
		dllPath = curDir;
		dllPath += L"\\plugins";
		SetDllDirectory(dllPath.c_str());
	}

	int argc = 0;
	char** argv = NULL;
	LPWSTR* argvw = CommandLineToArgvW(GetCommandLine(), &argc);

	if (argc>0)
	{
		argv = new char*[argc];
		for (int index = 0; index < argc; index++)
		{
			argv[index] = new char[MAX_PATH];
			size_t numChars;
			wcstombs_s(&numChars, argv[index], MAX_PATH, argvw[index], MAX_PATH);
		}
	}

	LocalFree(argvw);
	
	InitHUDApp(argc,argv);
}

bool HUD_Plugin::Init()
{
    loopratehz = 5;
    MainV2::instance->Invoke(gcnew Action(this, &HUD_Plugin::InitMenu));
	InitQGst();
    return true;
}

bool HUD_Plugin::Loop()
{
	theCurrentState.setRoll(this->Host->cs->roll);
	theCurrentState.setPitch(this->Host->cs->pitch);
	theCurrentState.setYaw(this->Host->cs->yaw);
	theCurrentState.setGroundspeed(this->Host->cs->groundspeed);
	theCurrentState.setAirspeed(this->Host->cs->airspeed);
	theCurrentState.setAltitude(this->Host->cs->altoffsethome);
	theCurrentState.setBatteryVoltage(this->Host->cs->battery_voltage);
	theCurrentState.setBatteryCurrent(this->Host->cs->current);
	theCurrentState.setBatteryRemaining((float)this->Host->cs->battery_remaining);
	
	std::wstring mode = msclr::interop::marshal_as<std::wstring>(this->Host->cs->mode);
	theCurrentState.setFlightMode(mode.c_str());

	SetCurrentState(theCurrentState);
    return true;
}


bool HUD_Plugin::Exit()
{
	ExitHUDApp();
    return true;
}

}
