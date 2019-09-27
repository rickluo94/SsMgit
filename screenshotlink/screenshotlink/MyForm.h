#pragma once
#include <Windows.h>
#include <cstddef>
#include <WinUser.h>
#include <shellapi.h>
#include <tchar.h>

namespace screenshotlink {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ menuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ loginNASToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::LinkLabel^ linkLabel2;
	private: System::Windows::Forms::LinkLabel^ linkLabel3;
	private: System::Windows::Forms::LinkLabel^ linkLabel4;
	private: System::Windows::Forms::LinkLabel^ linkLabel5;
	private: System::Windows::Forms::LinkLabel^ linkLabel6;
	private: System::Windows::Forms::LinkLabel^ linkLabel7;
	private: System::Windows::Forms::LinkLabel^ linkLabel8;
	private: System::Windows::Forms::LinkLabel^ linkLabel9;
	private: System::Windows::Forms::LinkLabel^ linkLabel10;
	private: System::Windows::Forms::LinkLabel^ linkLabel11;
	private: System::Windows::Forms::LinkLabel^ linkLabel12;
	private: System::Windows::Forms::LinkLabel^ linkLabel13;
	private: System::Windows::Forms::LinkLabel^ linkLabel14;
	private: System::Windows::Forms::LinkLabel^ linkLabel15;
	private: System::Windows::Forms::LinkLabel^ linkLabel16;
	private: System::Windows::Forms::LinkLabel^ linkLabel17;
	private: System::Windows::Forms::LinkLabel^ linkLabel18;
	private: System::Windows::Forms::LinkLabel^ linkLabel19;
	private: System::Windows::Forms::LinkLabel^ linkLabel20;
	private: System::Windows::Forms::LinkLabel^ linkLabel21;
	private: System::Windows::Forms::LinkLabel^ linkLabel22;
	private: System::Windows::Forms::LinkLabel^ linkLabel23;
	private: System::Windows::Forms::LinkLabel^ linkLabel24;
	private: System::Windows::Forms::LinkLabel^ linkLabel25;
	private: System::Windows::Forms::LinkLabel^ linkLabel26;
	private: System::Windows::Forms::LinkLabel^ linkLabel27;
	private: System::Windows::Forms::LinkLabel^ linkLabel28;
	private: System::Windows::Forms::LinkLabel^ linkLabel29;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::LinkLabel^ linkLabel39;
	private: System::Windows::Forms::LinkLabel^ linkLabel38;
	private: System::Windows::Forms::LinkLabel^ linkLabel37;
	private: System::Windows::Forms::LinkLabel^ linkLabel36;
	private: System::Windows::Forms::LinkLabel^ linkLabel35;
	private: System::Windows::Forms::LinkLabel^ linkLabel34;
	private: System::Windows::Forms::LinkLabel^ linkLabel33;
	private: System::Windows::Forms::LinkLabel^ linkLabel32;
	private: System::Windows::Forms::LinkLabel^ linkLabel31;
	private: System::Windows::Forms::LinkLabel^ linkLabel30;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::ToolStripMenuItem^ logoutNASToolStripMenuItem;







	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->loginNASToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->logoutNASToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel3 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel4 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel5 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel6 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel7 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel8 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel9 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel10 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel11 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel12 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel13 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel14 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel15 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel16 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel17 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel18 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel19 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel20 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel21 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel22 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel23 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel24 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel25 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel26 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel27 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel28 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel29 = (gcnew System::Windows::Forms::LinkLabel());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->linkLabel39 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel38 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel37 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel36 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel35 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel34 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel33 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel32 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel31 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel30 = (gcnew System::Windows::Forms::LinkLabel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::Gainsboro;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->menuToolStripMenuItem,
					this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(698, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->loginNASToolStripMenuItem,
					this->logoutNASToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(43, 20);
			this->menuToolStripMenuItem->Text = L"選單";
			// 
			// loginNASToolStripMenuItem
			// 
			this->loginNASToolStripMenuItem->Name = L"loginNASToolStripMenuItem";
			this->loginNASToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->loginNASToolStripMenuItem->Text = L"登入NAS";
			this->loginNASToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::LoginNASToolStripMenuItem_Click);
			// 
			// logoutNASToolStripMenuItem
			// 
			this->logoutNASToolStripMenuItem->Name = L"logoutNASToolStripMenuItem";
			this->logoutNASToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->logoutNASToolStripMenuItem->Text = L"登出NAS";
			this->logoutNASToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::logoutNASToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->exitToolStripMenuItem->Text = L"退出";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ExitToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->aboutToolStripMenuItem });
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->aboutToolStripMenuItem->Text = L"關於";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::AboutToolStripMenuItem_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(666, 523);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->BackColor = System::Drawing::Color::White;
			this->linkLabel1->DisabledLinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(133)));
			this->linkLabel1->Location = System::Drawing::Point(43, 203);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(32, 13);
			this->linkLabel1->TabIndex = 2;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"A251";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::LinkLabel1_LinkClicked);
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->BackColor = System::Drawing::Color::White;
			this->linkLabel2->Location = System::Drawing::Point(43, 149);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(32, 13);
			this->linkLabel2->TabIndex = 3;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"A249";
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::LinkLabel2_LinkClicked);
			// 
			// linkLabel3
			// 
			this->linkLabel3->AutoSize = true;
			this->linkLabel3->BackColor = System::Drawing::Color::White;
			this->linkLabel3->Location = System::Drawing::Point(45, 83);
			this->linkLabel3->Name = L"linkLabel3";
			this->linkLabel3->Size = System::Drawing::Size(32, 13);
			this->linkLabel3->TabIndex = 4;
			this->linkLabel3->TabStop = true;
			this->linkLabel3->Text = L"A247";
			this->linkLabel3->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::LinkLabel3_LinkClicked);
			// 
			// linkLabel4
			// 
			this->linkLabel4->AutoSize = true;
			this->linkLabel4->BackColor = System::Drawing::Color::White;
			this->linkLabel4->Location = System::Drawing::Point(88, 84);
			this->linkLabel4->Name = L"linkLabel4";
			this->linkLabel4->Size = System::Drawing::Size(32, 13);
			this->linkLabel4->TabIndex = 5;
			this->linkLabel4->TabStop = true;
			this->linkLabel4->Text = L"A246";
			this->linkLabel4->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::LinkLabel4_LinkClicked);
			// 
			// linkLabel5
			// 
			this->linkLabel5->AutoSize = true;
			this->linkLabel5->BackColor = System::Drawing::Color::White;
			this->linkLabel5->Location = System::Drawing::Point(86, 149);
			this->linkLabel5->Name = L"linkLabel5";
			this->linkLabel5->Size = System::Drawing::Size(32, 13);
			this->linkLabel5->TabIndex = 6;
			this->linkLabel5->TabStop = true;
			this->linkLabel5->Text = L"A248";
			this->linkLabel5->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::LinkLabel5_LinkClicked);
			// 
			// linkLabel6
			// 
			this->linkLabel6->AutoSize = true;
			this->linkLabel6->BackColor = System::Drawing::Color::White;
			this->linkLabel6->Location = System::Drawing::Point(88, 202);
			this->linkLabel6->Name = L"linkLabel6";
			this->linkLabel6->Size = System::Drawing::Size(32, 13);
			this->linkLabel6->TabIndex = 7;
			this->linkLabel6->TabStop = true;
			this->linkLabel6->Text = L"A250";
			this->linkLabel6->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::LinkLabel6_LinkClicked);
			// 
			// linkLabel7
			// 
			this->linkLabel7->AutoSize = true;
			this->linkLabel7->BackColor = System::Drawing::Color::White;
			this->linkLabel7->Location = System::Drawing::Point(66, 325);
			this->linkLabel7->Name = L"linkLabel7";
			this->linkLabel7->Size = System::Drawing::Size(32, 13);
			this->linkLabel7->TabIndex = 8;
			this->linkLabel7->TabStop = true;
			this->linkLabel7->Text = L"A252";
			this->linkLabel7->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::LinkLabel7_LinkClicked);
			// 
			// linkLabel8
			// 
			this->linkLabel8->AutoSize = true;
			this->linkLabel8->BackColor = System::Drawing::Color::White;
			this->linkLabel8->Location = System::Drawing::Point(210, 83);
			this->linkLabel8->Name = L"linkLabel8";
			this->linkLabel8->Size = System::Drawing::Size(32, 13);
			this->linkLabel8->TabIndex = 9;
			this->linkLabel8->TabStop = true;
			this->linkLabel8->Text = L"A237";
			this->linkLabel8->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::LinkLabel8_LinkClicked);
			// 
			// linkLabel9
			// 
			this->linkLabel9->AutoSize = true;
			this->linkLabel9->BackColor = System::Drawing::Color::White;
			this->linkLabel9->Location = System::Drawing::Point(208, 147);
			this->linkLabel9->Name = L"linkLabel9";
			this->linkLabel9->Size = System::Drawing::Size(32, 13);
			this->linkLabel9->TabIndex = 10;
			this->linkLabel9->TabStop = true;
			this->linkLabel9->Text = L"A239";
			this->linkLabel9->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::LinkLabel9_LinkClicked);
			// 
			// linkLabel10
			// 
			this->linkLabel10->AutoSize = true;
			this->linkLabel10->BackColor = System::Drawing::Color::White;
			this->linkLabel10->Location = System::Drawing::Point(210, 202);
			this->linkLabel10->Name = L"linkLabel10";
			this->linkLabel10->Size = System::Drawing::Size(32, 13);
			this->linkLabel10->TabIndex = 11;
			this->linkLabel10->TabStop = true;
			this->linkLabel10->Text = L"A241";
			this->linkLabel10->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::LinkLabel10_LinkClicked);
			// 
			// linkLabel11
			// 
			this->linkLabel11->AutoSize = true;
			this->linkLabel11->BackColor = System::Drawing::Color::White;
			this->linkLabel11->Location = System::Drawing::Point(204, 339);
			this->linkLabel11->Name = L"linkLabel11";
			this->linkLabel11->Size = System::Drawing::Size(32, 13);
			this->linkLabel11->TabIndex = 12;
			this->linkLabel11->TabStop = true;
			this->linkLabel11->Text = L"A243";
			this->linkLabel11->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::LinkLabel11_LinkClicked);
			// 
			// linkLabel12
			// 
			this->linkLabel12->AutoSize = true;
			this->linkLabel12->BackColor = System::Drawing::Color::White;
			this->linkLabel12->Location = System::Drawing::Point(206, 397);
			this->linkLabel12->Name = L"linkLabel12";
			this->linkLabel12->Size = System::Drawing::Size(32, 13);
			this->linkLabel12->TabIndex = 13;
			this->linkLabel12->TabStop = true;
			this->linkLabel12->Text = L"A245";
			this->linkLabel12->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::LinkLabel12_LinkClicked);
			// 
			// linkLabel13
			// 
			this->linkLabel13->AutoSize = true;
			this->linkLabel13->BackColor = System::Drawing::Color::White;
			this->linkLabel13->Location = System::Drawing::Point(247, 82);
			this->linkLabel13->Name = L"linkLabel13";
			this->linkLabel13->Size = System::Drawing::Size(32, 13);
			this->linkLabel13->TabIndex = 14;
			this->linkLabel13->TabStop = true;
			this->linkLabel13->Text = L"A236";
			this->linkLabel13->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::LinkLabel13_LinkClicked);
			// 
			// linkLabel14
			// 
			this->linkLabel14->AutoSize = true;
			this->linkLabel14->BackColor = System::Drawing::Color::White;
			this->linkLabel14->Location = System::Drawing::Point(247, 147);
			this->linkLabel14->Name = L"linkLabel14";
			this->linkLabel14->Size = System::Drawing::Size(32, 13);
			this->linkLabel14->TabIndex = 15;
			this->linkLabel14->TabStop = true;
			this->linkLabel14->Text = L"A238";
			this->linkLabel14->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::LinkLabel14_LinkClicked);
			// 
			// linkLabel15
			// 
			this->linkLabel15->AutoSize = true;
			this->linkLabel15->BackColor = System::Drawing::Color::White;
			this->linkLabel15->Location = System::Drawing::Point(247, 200);
			this->linkLabel15->Name = L"linkLabel15";
			this->linkLabel15->Size = System::Drawing::Size(32, 13);
			this->linkLabel15->TabIndex = 16;
			this->linkLabel15->TabStop = true;
			this->linkLabel15->Text = L"A240";
			this->linkLabel15->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::LinkLabel15_LinkClicked);
			// 
			// linkLabel16
			// 
			this->linkLabel16->AutoSize = true;
			this->linkLabel16->BackColor = System::Drawing::Color::White;
			this->linkLabel16->Location = System::Drawing::Point(249, 339);
			this->linkLabel16->Name = L"linkLabel16";
			this->linkLabel16->Size = System::Drawing::Size(32, 13);
			this->linkLabel16->TabIndex = 17;
			this->linkLabel16->TabStop = true;
			this->linkLabel16->Text = L"A242";
			this->linkLabel16->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::LinkLabel16_LinkClicked);
			// 
			// linkLabel17
			// 
			this->linkLabel17->AutoSize = true;
			this->linkLabel17->BackColor = System::Drawing::Color::White;
			this->linkLabel17->Location = System::Drawing::Point(251, 396);
			this->linkLabel17->Name = L"linkLabel17";
			this->linkLabel17->Size = System::Drawing::Size(32, 13);
			this->linkLabel17->TabIndex = 18;
			this->linkLabel17->TabStop = true;
			this->linkLabel17->Text = L"A244";
			this->linkLabel17->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::LinkLabel17_LinkClicked);
			// 
			// linkLabel18
			// 
			this->linkLabel18->AutoSize = true;
			this->linkLabel18->BackColor = System::Drawing::Color::White;
			this->linkLabel18->Location = System::Drawing::Point(375, 86);
			this->linkLabel18->Name = L"linkLabel18";
			this->linkLabel18->Size = System::Drawing::Size(32, 13);
			this->linkLabel18->TabIndex = 19;
			this->linkLabel18->TabStop = true;
			this->linkLabel18->Text = L"A229";
			this->linkLabel18->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::LinkLabel18_LinkClicked);
			// 
			// linkLabel19
			// 
			this->linkLabel19->AutoSize = true;
			this->linkLabel19->BackColor = System::Drawing::Color::White;
			this->linkLabel19->Location = System::Drawing::Point(373, 153);
			this->linkLabel19->Name = L"linkLabel19";
			this->linkLabel19->Size = System::Drawing::Size(32, 13);
			this->linkLabel19->TabIndex = 20;
			this->linkLabel19->TabStop = true;
			this->linkLabel19->Text = L"A231";
			this->linkLabel19->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::LinkLabel19_LinkClicked);
			// 
			// linkLabel20
			// 
			this->linkLabel20->AutoSize = true;
			this->linkLabel20->BackColor = System::Drawing::Color::White;
			this->linkLabel20->Location = System::Drawing::Point(373, 212);
			this->linkLabel20->Name = L"linkLabel20";
			this->linkLabel20->Size = System::Drawing::Size(32, 13);
			this->linkLabel20->TabIndex = 21;
			this->linkLabel20->TabStop = true;
			this->linkLabel20->Text = L"A233";
			this->linkLabel20->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::LinkLabel20_LinkClicked);
			// 
			// linkLabel21
			// 
			this->linkLabel21->AutoSize = true;
			this->linkLabel21->BackColor = System::Drawing::Color::White;
			this->linkLabel21->Location = System::Drawing::Point(375, 264);
			this->linkLabel21->Name = L"linkLabel21";
			this->linkLabel21->Size = System::Drawing::Size(32, 13);
			this->linkLabel21->TabIndex = 22;
			this->linkLabel21->TabStop = true;
			this->linkLabel21->Text = L"A235";
			this->linkLabel21->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::LinkLabel21_LinkClicked);
			// 
			// linkLabel22
			// 
			this->linkLabel22->AutoSize = true;
			this->linkLabel22->BackColor = System::Drawing::Color::White;
			this->linkLabel22->Location = System::Drawing::Point(420, 86);
			this->linkLabel22->Name = L"linkLabel22";
			this->linkLabel22->Size = System::Drawing::Size(32, 13);
			this->linkLabel22->TabIndex = 23;
			this->linkLabel22->TabStop = true;
			this->linkLabel22->Text = L"A228";
			this->linkLabel22->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::LinkLabel22_LinkClicked);
			// 
			// linkLabel23
			// 
			this->linkLabel23->AutoSize = true;
			this->linkLabel23->BackColor = System::Drawing::Color::White;
			this->linkLabel23->Location = System::Drawing::Point(410, 153);
			this->linkLabel23->Name = L"linkLabel23";
			this->linkLabel23->Size = System::Drawing::Size(32, 13);
			this->linkLabel23->TabIndex = 24;
			this->linkLabel23->TabStop = true;
			this->linkLabel23->Text = L"A230";
			this->linkLabel23->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::LinkLabel23_LinkClicked);
			// 
			// linkLabel24
			// 
			this->linkLabel24->AutoSize = true;
			this->linkLabel24->BackColor = System::Drawing::Color::White;
			this->linkLabel24->Location = System::Drawing::Point(412, 208);
			this->linkLabel24->Name = L"linkLabel24";
			this->linkLabel24->Size = System::Drawing::Size(32, 13);
			this->linkLabel24->TabIndex = 25;
			this->linkLabel24->TabStop = true;
			this->linkLabel24->Text = L"A232";
			this->linkLabel24->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::LinkLabel24_LinkClicked);
			// 
			// linkLabel25
			// 
			this->linkLabel25->AutoSize = true;
			this->linkLabel25->BackColor = System::Drawing::Color::White;
			this->linkLabel25->Location = System::Drawing::Point(412, 265);
			this->linkLabel25->Name = L"linkLabel25";
			this->linkLabel25->Size = System::Drawing::Size(32, 13);
			this->linkLabel25->TabIndex = 26;
			this->linkLabel25->TabStop = true;
			this->linkLabel25->Text = L"A234";
			this->linkLabel25->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::LinkLabel25_LinkClicked);
			// 
			// linkLabel26
			// 
			this->linkLabel26->AutoSize = true;
			this->linkLabel26->BackColor = System::Drawing::Color::White;
			this->linkLabel26->Location = System::Drawing::Point(532, 214);
			this->linkLabel26->Name = L"linkLabel26";
			this->linkLabel26->Size = System::Drawing::Size(32, 13);
			this->linkLabel26->TabIndex = 27;
			this->linkLabel26->TabStop = true;
			this->linkLabel26->Text = L"A225";
			this->linkLabel26->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::LinkLabel26_LinkClicked);
			// 
			// linkLabel27
			// 
			this->linkLabel27->AutoSize = true;
			this->linkLabel27->BackColor = System::Drawing::Color::White;
			this->linkLabel27->Location = System::Drawing::Point(534, 273);
			this->linkLabel27->Name = L"linkLabel27";
			this->linkLabel27->Size = System::Drawing::Size(32, 13);
			this->linkLabel27->TabIndex = 28;
			this->linkLabel27->TabStop = true;
			this->linkLabel27->Text = L"A227";
			this->linkLabel27->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::LinkLabel27_LinkClicked);
			// 
			// linkLabel28
			// 
			this->linkLabel28->AutoSize = true;
			this->linkLabel28->BackColor = System::Drawing::Color::White;
			this->linkLabel28->Location = System::Drawing::Point(575, 212);
			this->linkLabel28->Name = L"linkLabel28";
			this->linkLabel28->Size = System::Drawing::Size(32, 13);
			this->linkLabel28->TabIndex = 29;
			this->linkLabel28->TabStop = true;
			this->linkLabel28->Text = L"A224";
			this->linkLabel28->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::LinkLabel28_LinkClicked);
			// 
			// linkLabel29
			// 
			this->linkLabel29->AutoSize = true;
			this->linkLabel29->BackColor = System::Drawing::Color::White;
			this->linkLabel29->Location = System::Drawing::Point(577, 276);
			this->linkLabel29->Name = L"linkLabel29";
			this->linkLabel29->Size = System::Drawing::Size(32, 13);
			this->linkLabel29->TabIndex = 30;
			this->linkLabel29->TabStop = true;
			this->linkLabel29->Text = L"A226";
			this->linkLabel29->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::LinkLabel29_LinkClicked);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(12, 30);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(674, 549);
			this->tabControl1->TabIndex = 31;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->linkLabel29);
			this->tabPage1->Controls->Add(this->linkLabel1);
			this->tabPage1->Controls->Add(this->linkLabel28);
			this->tabPage1->Controls->Add(this->linkLabel2);
			this->tabPage1->Controls->Add(this->linkLabel27);
			this->tabPage1->Controls->Add(this->linkLabel3);
			this->tabPage1->Controls->Add(this->linkLabel26);
			this->tabPage1->Controls->Add(this->linkLabel4);
			this->tabPage1->Controls->Add(this->linkLabel25);
			this->tabPage1->Controls->Add(this->linkLabel5);
			this->tabPage1->Controls->Add(this->linkLabel24);
			this->tabPage1->Controls->Add(this->linkLabel6);
			this->tabPage1->Controls->Add(this->linkLabel23);
			this->tabPage1->Controls->Add(this->linkLabel7);
			this->tabPage1->Controls->Add(this->linkLabel22);
			this->tabPage1->Controls->Add(this->linkLabel8);
			this->tabPage1->Controls->Add(this->linkLabel21);
			this->tabPage1->Controls->Add(this->linkLabel9);
			this->tabPage1->Controls->Add(this->linkLabel20);
			this->tabPage1->Controls->Add(this->linkLabel10);
			this->tabPage1->Controls->Add(this->linkLabel19);
			this->tabPage1->Controls->Add(this->linkLabel11);
			this->tabPage1->Controls->Add(this->linkLabel18);
			this->tabPage1->Controls->Add(this->linkLabel12);
			this->tabPage1->Controls->Add(this->linkLabel17);
			this->tabPage1->Controls->Add(this->linkLabel13);
			this->tabPage1->Controls->Add(this->linkLabel16);
			this->tabPage1->Controls->Add(this->linkLabel14);
			this->tabPage1->Controls->Add(this->linkLabel15);
			this->tabPage1->Controls->Add(this->pictureBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(666, 523);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"2F財務部";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->linkLabel39);
			this->tabPage2->Controls->Add(this->linkLabel38);
			this->tabPage2->Controls->Add(this->linkLabel37);
			this->tabPage2->Controls->Add(this->linkLabel36);
			this->tabPage2->Controls->Add(this->linkLabel35);
			this->tabPage2->Controls->Add(this->linkLabel34);
			this->tabPage2->Controls->Add(this->linkLabel33);
			this->tabPage2->Controls->Add(this->linkLabel32);
			this->tabPage2->Controls->Add(this->linkLabel31);
			this->tabPage2->Controls->Add(this->linkLabel30);
			this->tabPage2->Controls->Add(this->pictureBox2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(666, 575);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"帳號部";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// linkLabel39
			// 
			this->linkLabel39->AutoSize = true;
			this->linkLabel39->BackColor = System::Drawing::Color::White;
			this->linkLabel39->Location = System::Drawing::Point(394, 128);
			this->linkLabel39->Name = L"linkLabel39";
			this->linkLabel39->Size = System::Drawing::Size(32, 13);
			this->linkLabel39->TabIndex = 10;
			this->linkLabel39->TabStop = true;
			this->linkLabel39->Text = L"A321";
			this->linkLabel39->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::LinkLabel39_LinkClicked);
			// 
			// linkLabel38
			// 
			this->linkLabel38->AutoSize = true;
			this->linkLabel38->BackColor = System::Drawing::Color::White;
			this->linkLabel38->Location = System::Drawing::Point(394, 190);
			this->linkLabel38->Name = L"linkLabel38";
			this->linkLabel38->Size = System::Drawing::Size(32, 13);
			this->linkLabel38->TabIndex = 9;
			this->linkLabel38->TabStop = true;
			this->linkLabel38->Text = L"A323";
			this->linkLabel38->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::LinkLabel38_LinkClicked);
			// 
			// linkLabel37
			// 
			this->linkLabel37->AutoSize = true;
			this->linkLabel37->BackColor = System::Drawing::Color::White;
			this->linkLabel37->Location = System::Drawing::Point(354, 127);
			this->linkLabel37->Name = L"linkLabel37";
			this->linkLabel37->Size = System::Drawing::Size(32, 13);
			this->linkLabel37->TabIndex = 8;
			this->linkLabel37->TabStop = true;
			this->linkLabel37->Text = L"A322";
			this->linkLabel37->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::LinkLabel37_LinkClicked);
			// 
			// linkLabel36
			// 
			this->linkLabel36->AutoSize = true;
			this->linkLabel36->BackColor = System::Drawing::Color::White;
			this->linkLabel36->Location = System::Drawing::Point(354, 190);
			this->linkLabel36->Name = L"linkLabel36";
			this->linkLabel36->Size = System::Drawing::Size(32, 13);
			this->linkLabel36->TabIndex = 7;
			this->linkLabel36->TabStop = true;
			this->linkLabel36->Text = L"A324";
			this->linkLabel36->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::LinkLabel36_LinkClicked);
			// 
			// linkLabel35
			// 
			this->linkLabel35->AutoSize = true;
			this->linkLabel35->BackColor = System::Drawing::Color::White;
			this->linkLabel35->Location = System::Drawing::Point(282, 134);
			this->linkLabel35->Name = L"linkLabel35";
			this->linkLabel35->Size = System::Drawing::Size(32, 13);
			this->linkLabel35->TabIndex = 6;
			this->linkLabel35->TabStop = true;
			this->linkLabel35->Text = L"A325";
			this->linkLabel35->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::LinkLabel35_LinkClicked);
			// 
			// linkLabel34
			// 
			this->linkLabel34->AutoSize = true;
			this->linkLabel34->BackColor = System::Drawing::Color::White;
			this->linkLabel34->Location = System::Drawing::Point(282, 189);
			this->linkLabel34->Name = L"linkLabel34";
			this->linkLabel34->Size = System::Drawing::Size(32, 13);
			this->linkLabel34->TabIndex = 5;
			this->linkLabel34->TabStop = true;
			this->linkLabel34->Text = L"A327";
			this->linkLabel34->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::LinkLabel34_LinkClicked);
			// 
			// linkLabel33
			// 
			this->linkLabel33->AutoSize = true;
			this->linkLabel33->BackColor = System::Drawing::Color::White;
			this->linkLabel33->Location = System::Drawing::Point(279, 252);
			this->linkLabel33->Name = L"linkLabel33";
			this->linkLabel33->Size = System::Drawing::Size(32, 13);
			this->linkLabel33->TabIndex = 4;
			this->linkLabel33->TabStop = true;
			this->linkLabel33->Text = L"A329";
			this->linkLabel33->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::LinkLabel33_LinkClicked);
			// 
			// linkLabel32
			// 
			this->linkLabel32->AutoSize = true;
			this->linkLabel32->BackColor = System::Drawing::Color::White;
			this->linkLabel32->Location = System::Drawing::Point(240, 134);
			this->linkLabel32->Name = L"linkLabel32";
			this->linkLabel32->Size = System::Drawing::Size(32, 13);
			this->linkLabel32->TabIndex = 3;
			this->linkLabel32->TabStop = true;
			this->linkLabel32->Text = L"A326";
			this->linkLabel32->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::LinkLabel32_LinkClicked);
			// 
			// linkLabel31
			// 
			this->linkLabel31->AutoSize = true;
			this->linkLabel31->BackColor = System::Drawing::Color::White;
			this->linkLabel31->Location = System::Drawing::Point(235, 190);
			this->linkLabel31->Name = L"linkLabel31";
			this->linkLabel31->Size = System::Drawing::Size(32, 13);
			this->linkLabel31->TabIndex = 2;
			this->linkLabel31->TabStop = true;
			this->linkLabel31->Text = L"A328";
			this->linkLabel31->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::LinkLabel31_LinkClicked);
			// 
			// linkLabel30
			// 
			this->linkLabel30->AutoSize = true;
			this->linkLabel30->BackColor = System::Drawing::Color::White;
			this->linkLabel30->Location = System::Drawing::Point(235, 254);
			this->linkLabel30->Name = L"linkLabel30";
			this->linkLabel30->Size = System::Drawing::Size(32, 13);
			this->linkLabel30->TabIndex = 1;
			this->linkLabel30->TabStop = true;
			this->linkLabel30->Text = L"A330";
			this->linkLabel30->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::LinkLabel30_LinkClicked);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(0, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(666, 573);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DimGray;
			this->ClientSize = System::Drawing::Size(698, 581);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"ScreenShot";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void LoginNASToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		system("NET USE \\\\10.224.22.219 /user:fileserver19\\administrator !qaz2wsx");
		ShellExecute(NULL, NULL, L"\\\\10.224.22.219\\Screen", NULL, NULL, SW_SHOWNORMAL);
	}
	private: System::Void logoutNASToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		system("NET USE \\\\10.224.22.219 /delete");
	}
	private: System::Void ExitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void AboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		//MessageBox::Show("Create By Dr.StrikeLo");
		MessageBox::Show("Dr.StrikeLo", "Create By",
			MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: System::Void LinkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		ShellExecute(NULL, NULL, L"\\\\10.224.22.219\\Screen\\A251", NULL, NULL, SW_SHOWNORMAL);
	}
	private: System::Void LinkLabel2_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		ShellExecute(NULL, NULL, L"\\\\10.224.22.219\\Screen\\A249", NULL, NULL, SW_SHOWNORMAL);
	}
	private: System::Void LinkLabel3_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		ShellExecute(NULL, NULL, L"\\\\10.224.22.219\\Screen\\A247", NULL, NULL, SW_SHOWNORMAL);
	}
	private: System::Void LinkLabel4_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		ShellExecute(NULL, NULL, L"\\\\10.224.22.219\\Screen\\A246", NULL, NULL, SW_SHOWNORMAL);
	}
	private: System::Void LinkLabel5_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		ShellExecute(NULL, NULL, L"\\\\10.224.22.219\\Screen\\A248", NULL, NULL, SW_SHOWNORMAL);
	}
	private: System::Void LinkLabel6_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		ShellExecute(NULL, NULL, L"\\\\10.224.22.219\\Screen\\A250", NULL, NULL, SW_SHOWNORMAL);
	}
	private: System::Void LinkLabel7_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		ShellExecute(NULL, NULL, L"\\\\10.224.22.219\\Screen\\A252", NULL, NULL, SW_SHOWNORMAL);
	}
	private: System::Void LinkLabel8_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		ShellExecute(NULL, NULL, L"\\\\10.224.22.219\\Screen\\A237", NULL, NULL, SW_SHOWNORMAL);
	}
	private: System::Void LinkLabel9_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		ShellExecute(NULL, NULL, L"\\\\10.224.22.219\\Screen\\A239", NULL, NULL, SW_SHOWNORMAL);
	}
	private: System::Void LinkLabel10_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		ShellExecute(NULL, NULL, L"\\\\10.224.22.219\\Screen\\A241", NULL, NULL, SW_SHOWNORMAL);
	}
	private: System::Void LinkLabel11_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		ShellExecute(NULL, NULL, L"\\\\10.224.22.219\\Screen\\A243", NULL, NULL, SW_SHOWNORMAL);
	}
	private: System::Void LinkLabel12_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		ShellExecute(NULL, NULL, L"\\\\10.224.22.219\\Screen\\A245", NULL, NULL, SW_SHOWNORMAL);
	}
	private: System::Void LinkLabel13_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		ShellExecute(NULL, NULL, L"\\\\10.224.22.219\\Screen\\A236", NULL, NULL, SW_SHOWNORMAL);
	}
	private: System::Void LinkLabel14_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		ShellExecute(NULL, NULL, L"\\\\10.224.22.219\\Screen\\A238", NULL, NULL, SW_SHOWNORMAL);
	}
	private: System::Void LinkLabel15_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		ShellExecute(NULL, NULL, L"\\\\10.224.22.219\\Screen\\A240", NULL, NULL, SW_SHOWNORMAL);
	}
	private: System::Void LinkLabel16_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		ShellExecute(NULL, NULL, L"\\\\10.224.22.219\\Screen\\A242", NULL, NULL, SW_SHOWNORMAL);
	}
	private: System::Void LinkLabel17_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		ShellExecute(NULL, NULL, L"\\\\10.224.22.219\\Screen\\A244", NULL, NULL, SW_SHOWNORMAL);
	}
	private: System::Void LinkLabel18_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		ShellExecute(NULL, NULL, L"\\\\10.224.22.219\\Screen\\A229", NULL, NULL, SW_SHOWNORMAL);
	}
	private: System::Void LinkLabel19_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		ShellExecute(NULL, NULL, L"\\\\10.224.22.219\\Screen\\A231", NULL, NULL, SW_SHOWNORMAL);
	}
	private: System::Void LinkLabel20_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		ShellExecute(NULL, NULL, L"\\\\10.224.22.219\\Screen\\A233", NULL, NULL, SW_SHOWNORMAL);
	}
	private: System::Void LinkLabel21_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		ShellExecute(NULL, NULL, L"\\\\10.224.22.219\\Screen\\A235", NULL, NULL, SW_SHOWNORMAL);
	}
	private: System::Void LinkLabel22_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		ShellExecute(NULL, NULL, L"\\\\10.224.22.219\\Screen\\A228", NULL, NULL, SW_SHOWNORMAL);
	}
	private: System::Void LinkLabel23_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		ShellExecute(NULL, NULL, L"\\\\10.224.22.219\\Screen\\A230", NULL, NULL, SW_SHOWNORMAL);
	}
	private: System::Void LinkLabel24_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		ShellExecute(NULL, NULL, L"\\\\10.224.22.219\\Screen\\A232", NULL, NULL, SW_SHOWNORMAL);
	}
	private: System::Void LinkLabel25_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		ShellExecute(NULL, NULL, L"\\\\10.224.22.219\\Screen\\A234", NULL, NULL, SW_SHOWNORMAL);
	}
	private: System::Void LinkLabel26_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		ShellExecute(NULL, NULL, L"\\\\10.224.22.219\\Screen\\A225", NULL, NULL, SW_SHOWNORMAL);
	}
	private: System::Void LinkLabel27_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		ShellExecute(NULL, NULL, L"\\\\10.224.22.219\\Screen\\A227", NULL, NULL, SW_SHOWNORMAL);
	}
	private: System::Void LinkLabel28_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		ShellExecute(NULL, NULL, L"\\\\10.224.22.219\\Screen\\A224", NULL, NULL, SW_SHOWNORMAL);
	}
	private: System::Void LinkLabel29_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		ShellExecute(NULL, NULL, L"\\\\10.224.22.219\\Screen\\A226", NULL, NULL, SW_SHOWNORMAL);
	}
	private: System::Void LinkLabel30_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		ShellExecute(NULL, NULL, L"\\\\10.224.22.219\\Screen\\A330", NULL, NULL, SW_SHOWNORMAL);
	}
	private: System::Void LinkLabel31_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		ShellExecute(NULL, NULL, L"\\\\10.224.22.219\\Screen\\A328", NULL, NULL, SW_SHOWNORMAL);
	}
	private: System::Void LinkLabel32_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		ShellExecute(NULL, NULL, L"\\\\10.224.22.219\\Screen\\A326", NULL, NULL, SW_SHOWNORMAL);
	}
	private: System::Void LinkLabel33_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		ShellExecute(NULL, NULL, L"\\\\10.224.22.219\\Screen\\A329", NULL, NULL, SW_SHOWNORMAL);
	}
	private: System::Void LinkLabel34_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		ShellExecute(NULL, NULL, L"\\\\10.224.22.219\\Screen\\A327", NULL, NULL, SW_SHOWNORMAL);
	}
	private: System::Void LinkLabel35_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		ShellExecute(NULL, NULL, L"\\\\10.224.22.219\\Screen\\A325", NULL, NULL, SW_SHOWNORMAL);
	}
	private: System::Void LinkLabel36_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		ShellExecute(NULL, NULL, L"\\\\10.224.22.219\\Screen\\A324", NULL, NULL, SW_SHOWNORMAL);
	}
	private: System::Void LinkLabel37_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		ShellExecute(NULL, NULL, L"\\\\10.224.22.219\\Screen\\A322", NULL, NULL, SW_SHOWNORMAL);
	}
	private: System::Void LinkLabel38_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		ShellExecute(NULL, NULL, L"\\\\10.224.22.219\\Screen\\A323", NULL, NULL, SW_SHOWNORMAL);
	}
	private: System::Void LinkLabel39_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		ShellExecute(NULL, NULL, L"\\\\10.224.22.219\\Screen\\A321", NULL, NULL, SW_SHOWNORMAL);
	}
};
}
