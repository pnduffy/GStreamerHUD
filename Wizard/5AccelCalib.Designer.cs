﻿using System.Windows.Forms;
namespace MissionPlanner.Wizard
{
    partial class _5AccelCalib
    {
        /// <summary> 
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary> 
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Component Designer generated code

        /// <summary> 
        /// Required method for Designer support - do not modify 
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(_5AccelCalib));
            this.panel1 = new System.Windows.Forms.Panel();
            this.BUT_continue = new MissionPlanner.Controls.MyButton();
            this.imageLabel1 = new MissionPlanner.Controls.ImageLabel();
            this.BUT_start = new MissionPlanner.Controls.MyButton();
            this.label2 = new System.Windows.Forms.Label();
            this.label1 = new System.Windows.Forms.Label();
            this.radialGradientBG1 = new MissionPlanner.Controls.GradientBG();
            this.panel1.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.radialGradientBG1.Image)).BeginInit();
            this.SuspendLayout();
            // 
            // panel1
            // 
            this.panel1.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(24)))), ((int)(((byte)(24)))), ((int)(((byte)(24)))));
            this.panel1.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.panel1.Controls.Add(this.BUT_continue);
            this.panel1.Controls.Add(this.imageLabel1);
            this.panel1.Controls.Add(this.BUT_start);
            this.panel1.Controls.Add(this.label2);
            this.panel1.Controls.Add(this.label1);
            resources.ApplyResources(this.panel1, "panel1");
            this.panel1.Name = "panel1";
            // 
            // BUT_continue
            // 
            resources.ApplyResources(this.BUT_continue, "BUT_continue");
            this.BUT_continue.Name = "BUT_continue";
            this.BUT_continue.UseVisualStyleBackColor = true;
            this.BUT_continue.Click += new System.EventHandler(this.BUT_continue_Click);
            // 
            // imageLabel1
            // 
            this.imageLabel1.Image = global::MissionPlanner.Properties.Resources.calibration01;
            resources.ApplyResources(this.imageLabel1, "imageLabel1");
            this.imageLabel1.Name = "imageLabel1";
            // 
            // BUT_start
            // 
            resources.ApplyResources(this.BUT_start, "BUT_start");
            this.BUT_start.Name = "BUT_start";
            this.BUT_start.UseVisualStyleBackColor = true;
            this.BUT_start.Click += new System.EventHandler(this.BUT_start_Click);
            // 
            // label2
            // 
            resources.ApplyResources(this.label2, "label2");
            this.label2.Name = "label2";
            // 
            // label1
            // 
            resources.ApplyResources(this.label1, "label1");
            this.label1.Name = "label1";
            // 
            // radialGradientBG1
            // 
            this.radialGradientBG1.BackColor = System.Drawing.Color.Black;
            this.radialGradientBG1.CenterColor = System.Drawing.Color.FromArgb(((int)(((byte)(121)))), ((int)(((byte)(164)))), ((int)(((byte)(33)))));
            // 
            // 
            // 
            this.radialGradientBG1.Image.BackColor = System.Drawing.Color.Transparent;
            this.radialGradientBG1.Image.Location = ((System.Drawing.Point)(resources.GetObject("radialGradientBG1.Image.Location")));
            this.radialGradientBG1.Image.MaximumSize = ((System.Drawing.Size)(resources.GetObject("radialGradientBG1.Image.MaximumSize")));
            this.radialGradientBG1.Image.MinimumSize = ((System.Drawing.Size)(resources.GetObject("radialGradientBG1.Image.MinimumSize")));
            this.radialGradientBG1.Image.Name = "_Image";
            this.radialGradientBG1.Image.Size = ((System.Drawing.Size)(resources.GetObject("radialGradientBG1.Image.Size")));
            this.radialGradientBG1.Image.TabIndex = ((int)(resources.GetObject("radialGradientBG1.Image.TabIndex")));
            this.radialGradientBG1.Image.TabStop = false;
            this.radialGradientBG1.Image.Visible = ((bool)(resources.GetObject("radialGradientBG1.Image.Visible")));
            // 
            // 
            // 
            this.radialGradientBG1.Label.AutoSize = ((bool)(resources.GetObject("radialGradientBG1.Label.AutoSize")));
            this.radialGradientBG1.Label.BackColor = System.Drawing.Color.Transparent;
            this.radialGradientBG1.Label.Font = ((System.Drawing.Font)(resources.GetObject("radialGradientBG1.Label.Font")));
            this.radialGradientBG1.Label.ForeColor = System.Drawing.Color.Black;
            this.radialGradientBG1.Label.Location = ((System.Drawing.Point)(resources.GetObject("radialGradientBG1.Label.Location")));
            this.radialGradientBG1.Label.Name = "_Label";
            this.radialGradientBG1.Label.Size = ((System.Drawing.Size)(resources.GetObject("radialGradientBG1.Label.Size")));
            this.radialGradientBG1.Label.TabIndex = ((int)(resources.GetObject("radialGradientBG1.Label.TabIndex")));
            this.radialGradientBG1.Label.Text = resources.GetString("radialGradientBG1.Label.Text");
            resources.ApplyResources(this.radialGradientBG1, "radialGradientBG1");
            this.radialGradientBG1.Name = "radialGradientBG1";
            this.radialGradientBG1.OutsideColor = System.Drawing.Color.FromArgb(((int)(((byte)(67)))), ((int)(((byte)(107)))), ((int)(((byte)(10)))));
            // 
            // _5AccelCalib
            // 
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.None;
            this.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(26)))), ((int)(((byte)(26)))), ((int)(((byte)(26)))));
            this.BackgroundImage = global::MissionPlanner.Properties.Resources.planebackground;
            this.Controls.Add(this.radialGradientBG1);
            this.Controls.Add(this.panel1);
            this.ForeColor = System.Drawing.Color.White;
            this.Name = "_5AccelCalib";
            resources.ApplyResources(this, "$this");
            this.panel1.ResumeLayout(false);
            this.panel1.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.radialGradientBG1.Image)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        private Panel panel1;
        private Label label1;
        private Controls.GradientBG radialGradientBG1;
        private Label label2;
        private Controls.ImageLabel imageLabel1;
        private Controls.MyButton BUT_start;
        private Controls.MyButton BUT_continue;

    }
}
