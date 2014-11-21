using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using MissionPlanner.Utilities;
using System.IO;
using System.Windows.Forms;

namespace MissionPlanner.HUD
{
    public class HUD_Plugin : MissionPlanner.Plugin.Plugin
    {
        private System.Threading.Thread appThread;

        public override string Name
        {
            get { return "GStreamer HUD"; }
        }

        public override string Version
        {
            get { return "0.1"; }
        }

        public override string Author
        {
            get { return "Patrick Duffy"; }
        }

        //[DebuggerHidden]
        public override bool Init()
        {
            loopratehz = 1;
            MainV2.instance.Invoke((Action)
                delegate
                {
                    System.Windows.Forms.ToolStripMenuItem men = new System.Windows.Forms.ToolStripMenuItem() { Text = "GStreamer HUD" };
                    men.Click += men_Click;
                    Host.FDMenuMap.Items.Add(men);
                });

            return true;
        }

        void men_Click(object sender, EventArgs e)
        {
            if (this.appThread != null && this.appThread.IsAlive) return;
            this.appThread = new System.Threading.Thread(new System.Threading.ThreadStart(AppThreadLoop));
            this.appThread.Start();
        }

        public override bool Loaded()
        {
            return true;
        }

        public override bool Loop()
        {
            return true;
        }

        public override bool Exit()
        {
            return true;
        }

        private void AppThreadLoop()
        {
        }
    }
}
