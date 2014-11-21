// MissionPlanner.HUD.CLI.h

#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Linq;
using namespace System::Text;
using namespace MissionPlanner;
using namespace MissionPlanner::Utilities;
using namespace System::IO;
using namespace System::Windows::Forms;

namespace MissionPlannerHUDCLI {

	public ref class HUD_Plugin : public MissionPlanner::Plugin::Plugin
	{
		System::Threading::Thread^ appThread;

        void AppThreadLoop();

	public:
		property String^ Name 
		{
			virtual String^ get() override { return "GStreamer HUD"; }
		}

        property String^ Version
        {
            virtual String^ get() override { return "0.1"; }
        }

        property String^ Author
        {
            virtual String^ get() override { return "Patrick Duffy"; }
        }

        void menu_Click(Object^ sender, EventArgs^ e)
        {
            if (this->appThread != nullptr && this->appThread->IsAlive) return;
            this->appThread = gcnew System::Threading::Thread(gcnew System::Threading::ThreadStart(this, &HUD_Plugin::AppThreadLoop));
			this->appThread->SetApartmentState(System::Threading::ApartmentState::STA);

            this->appThread->Start();
        }

		void InitMenu()
		{
            ToolStripMenuItem^ menu = gcnew ToolStripMenuItem();
			menu->Text = "GStreamer HUD";
            menu->Click += gcnew System::EventHandler(this, &HUD_Plugin::menu_Click);
            Host->FDMenuMap->Items->Add(menu);
		}

		virtual bool Init() override;

        virtual bool Loaded() override
        {
            return true;
        }

        virtual bool Loop() override;

        virtual bool Exit() override;
	};
}
