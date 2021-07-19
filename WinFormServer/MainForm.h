﻿#pragma once
#include"Insertbook.h";
#include"search.h"
#include"setting.h"
#include"ChangeBookForm.h"

//#include"SignUpForm.h"
//#include"SignUpForm1.h"



[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
IntPtr CreateObject_API();










namespace WinFormServer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	using namespace System::Media;
	using namespace System::Globalization;
	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		//Insertbook^ form_insertbook;
		IntPtr db;
		search^ form_searchpanel;
		setting^ form_settingpanel;
		ChangeBookForm^ form_changebookform;
		Insertbook^ form_insertbook;
		System::Media::SoundPlayer^ music = gcnew System::Media::SoundPlayer();
		PersianCalendar Date_form;
		DateTime dt = DateTime::Now;
		Random^ RandString1 = gcnew Random();
		Random^ RandString2 = gcnew Random();
		Random^ RandString3 = gcnew Random();
		Random^ RandString4 = gcnew Random();
		Random^ RandString5 = gcnew Random();
		Random^ RandString6 = gcnew Random();
		Random^ RandString7 = gcnew Random();
		Random^ RandString8 = gcnew Random();
		Random^ RandString9 = gcnew Random();
		Random^ RandString10 = gcnew Random();
		Random^ RandString11 = gcnew Random();
		Random^ RandString12 = gcnew Random();
		Random^ RandString13 = gcnew Random();
		Random^ RandString14 = gcnew Random();
		Random^ RandString15 = gcnew Random();
		Random^ RandString16 = gcnew Random();
		




	public:
		MainForm(void)
		{

			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		//	form_insertbook = gcnew Insertbook(panel5,panel3,label3);
			db = CreateObject_API();
			this->flowLayoutPanel1->BackgroundImage = nullptr;
			this->panel5->Dock = System::Windows::Forms::DockStyle::Fill;
			form_searchpanel = gcnew search(panel5);
			form_settingpanel = gcnew setting(panel5, panel3, label3,db);
			form_changebookform = gcnew ChangeBookForm(panel5,db);
			form_insertbook = gcnew Insertbook(panel5, panel3, label3,db);
			timer2->Start();
			timer3->Start();
		}
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: Guna::UI::WinForms::GunaVProgressBar^ gunaVProgressBar1;
	private: Guna::UI::WinForms::GunaVProgressBar^ gunaVProgressBar2;
	private: Guna::UI::WinForms::GunaVProgressBar^ gunaVProgressBar3;
	private: Guna::UI::WinForms::GunaVProgressBar^ gunaVProgressBar4;
	private: Guna::UI::WinForms::GunaVProgressBar^ gunaVProgressBar5;
	private: Guna::UI::WinForms::GunaVProgressBar^ gunaVProgressBar6;
	private: Guna::UI::WinForms::GunaVProgressBar^ gunaVProgressBar7;
	private: Guna::UI::WinForms::GunaVProgressBar^ gunaVProgressBar8;
	private: Guna::UI::WinForms::GunaVProgressBar^ gunaVProgressBar9;
	private: Guna::UI::WinForms::GunaVProgressBar^ gunaVProgressBar10;
	private: Guna::UI::WinForms::GunaVProgressBar^ gunaVProgressBar11;
	private: Guna::UI::WinForms::GunaVProgressBar^ gunaVProgressBar12;
	private: Guna::UI::WinForms::GunaVProgressBar^ gunaVProgressBar13;
	private: Guna::UI::WinForms::GunaVProgressBar^ gunaVProgressBar14;
	private: Guna::UI::WinForms::GunaVProgressBar^ gunaVProgressBar15;
	private: Guna::UI::WinForms::GunaVProgressBar^ gunaVProgressBar16;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Timer^ timer3;
	private: Guna::UI::WinForms::GunaCircleButton^ gunaCircleButton3;
	private: System::Windows::Forms::Panel^ panel9;
	private: Guna::UI::WinForms::GunaCircleButton^ gunaCircleButton5;
	private: Guna::UI::WinForms::GunaCircleButton^ gunaCircleButton1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Panel^ panel1;
	private: Guna::UI::WinForms::GunaGradientButton^ gunaGradientButton7;
	private: Guna::UI::WinForms::GunaGradientButton^ gunaGradientButton2;
	private: Guna::UI::WinForms::GunaGradientButton^ gunaGradientButton3;
	private: Guna::UI::WinForms::GunaGradientButton^ gunaGradientButton4;
	private: System::Windows::Forms::Panel^ panel2;
	private: Guna::UI::WinForms::GunaGradientButton^ gunaGradientButton5;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label3;
	private: Guna::UI::WinForms::GunaCircleButton^ gunaCircleButton2;
	private: Guna::UI::WinForms::GunaTransition^ gunaTransition1;
	private: System::Windows::Forms::Timer^ timer1;
	private: Guna::UI::WinForms::GunaAdvenceTileButton^ gunaAdvenceTileButton2;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			Guna::UI::Animation::Animation^ animation1 = (gcnew Guna::UI::Animation::Animation());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->gunaCircleButton1 = (gcnew Guna::UI::WinForms::GunaCircleButton());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->gunaGradientButton4 = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->gunaGradientButton7 = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->gunaGradientButton2 = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->gunaGradientButton3 = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->gunaGradientButton5 = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->gunaCircleButton2 = (gcnew Guna::UI::WinForms::GunaCircleButton());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->gunaTransition1 = (gcnew Guna::UI::WinForms::GunaTransition(this->components));
			this->gunaAdvenceTileButton2 = (gcnew Guna::UI::WinForms::GunaAdvenceTileButton());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->gunaCircleButton3 = (gcnew Guna::UI::WinForms::GunaCircleButton());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->gunaCircleButton5 = (gcnew Guna::UI::WinForms::GunaCircleButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->gunaVProgressBar1 = (gcnew Guna::UI::WinForms::GunaVProgressBar());
			this->gunaVProgressBar2 = (gcnew Guna::UI::WinForms::GunaVProgressBar());
			this->gunaVProgressBar3 = (gcnew Guna::UI::WinForms::GunaVProgressBar());
			this->gunaVProgressBar4 = (gcnew Guna::UI::WinForms::GunaVProgressBar());
			this->gunaVProgressBar5 = (gcnew Guna::UI::WinForms::GunaVProgressBar());
			this->gunaVProgressBar6 = (gcnew Guna::UI::WinForms::GunaVProgressBar());
			this->gunaVProgressBar7 = (gcnew Guna::UI::WinForms::GunaVProgressBar());
			this->gunaVProgressBar8 = (gcnew Guna::UI::WinForms::GunaVProgressBar());
			this->gunaVProgressBar9 = (gcnew Guna::UI::WinForms::GunaVProgressBar());
			this->gunaVProgressBar10 = (gcnew Guna::UI::WinForms::GunaVProgressBar());
			this->gunaVProgressBar11 = (gcnew Guna::UI::WinForms::GunaVProgressBar());
			this->gunaVProgressBar12 = (gcnew Guna::UI::WinForms::GunaVProgressBar());
			this->gunaVProgressBar13 = (gcnew Guna::UI::WinForms::GunaVProgressBar());
			this->gunaVProgressBar14 = (gcnew Guna::UI::WinForms::GunaVProgressBar());
			this->gunaVProgressBar15 = (gcnew Guna::UI::WinForms::GunaVProgressBar());
			this->gunaVProgressBar16 = (gcnew Guna::UI::WinForms::GunaVProgressBar());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->flowLayoutPanel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// gunaCircleButton1
			// 
			this->gunaCircleButton1->AnimationHoverSpeed = 0.07F;
			this->gunaCircleButton1->AnimationSpeed = 0.03F;
			this->gunaCircleButton1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->gunaCircleButton1->BaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->gunaCircleButton1->BorderColor = System::Drawing::Color::Black;
			this->gunaTransition1->SetDecoration(this->gunaCircleButton1, Guna::UI::Animation::DecorationType::None);
			this->gunaCircleButton1->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaCircleButton1->FocusedColor = System::Drawing::Color::Empty;
			this->gunaCircleButton1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaCircleButton1->ForeColor = System::Drawing::Color::White;
			this->gunaCircleButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaCircleButton1.Image")));
			this->gunaCircleButton1->ImageSize = System::Drawing::Size(25, 25);
			this->gunaCircleButton1->Location = System::Drawing::Point(721, 388);
			this->gunaCircleButton1->Name = L"gunaCircleButton1";
			this->gunaCircleButton1->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCircleButton1->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaCircleButton1->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaCircleButton1->OnHoverImage = nullptr;
			this->gunaCircleButton1->OnPressedColor = System::Drawing::Color::Black;
			this->gunaCircleButton1->Size = System::Drawing::Size(30, 30);
			this->gunaCircleButton1->TabIndex = 10;
			this->gunaCircleButton1->Visible = false;
			this->gunaCircleButton1->Click += gcnew System::EventHandler(this, &MainForm::gunaCircleButton1_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::Transparent;
			this->flowLayoutPanel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"flowLayoutPanel1.BackgroundImage")));
			this->flowLayoutPanel1->Controls->Add(this->panel1);
			this->flowLayoutPanel1->Controls->Add(this->gunaGradientButton4);
			this->flowLayoutPanel1->Controls->Add(this->gunaGradientButton7);
			this->flowLayoutPanel1->Controls->Add(this->gunaGradientButton2);
			this->flowLayoutPanel1->Controls->Add(this->gunaGradientButton3);
			this->flowLayoutPanel1->Controls->Add(this->panel2);
			this->flowLayoutPanel1->Controls->Add(this->gunaGradientButton5);
			this->gunaTransition1->SetDecoration(this->flowLayoutPanel1, Guna::UI::Animation::DecorationType::None);
			this->flowLayoutPanel1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->flowLayoutPanel1->Location = System::Drawing::Point(870, 134);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->flowLayoutPanel1->Size = System::Drawing::Size(29, 393);
			this->flowLayoutPanel1->TabIndex = 12;
			this->flowLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::flowLayoutPanel1_Paint);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransition1->SetDecoration(this->panel1, Guna::UI::Animation::DecorationType::None);
			this->panel1->Location = System::Drawing::Point(-133, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(159, 53);
			this->panel1->TabIndex = 14;
			// 
			// gunaGradientButton4
			// 
			this->gunaGradientButton4->AnimationHoverSpeed = 0.07F;
			this->gunaGradientButton4->AnimationSpeed = 0.03F;
			this->gunaGradientButton4->BaseColor1 = System::Drawing::Color::SlateBlue;
			this->gunaGradientButton4->BaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->gunaGradientButton4->BorderColor = System::Drawing::Color::Black;
			this->gunaTransition1->SetDecoration(this->gunaGradientButton4, Guna::UI::Animation::DecorationType::None);
			this->gunaGradientButton4->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaGradientButton4->FocusedColor = System::Drawing::Color::Empty;
			this->gunaGradientButton4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaGradientButton4->ForeColor = System::Drawing::Color::White;
			this->gunaGradientButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaGradientButton4.Image")));
			this->gunaGradientButton4->ImageAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->gunaGradientButton4->ImageOffsetX = -7;
			this->gunaGradientButton4->ImageSize = System::Drawing::Size(20, 20);
			this->gunaGradientButton4->Location = System::Drawing::Point(-134, 62);
			this->gunaGradientButton4->Name = L"gunaGradientButton4";
			this->gunaGradientButton4->OnHoverBaseColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->gunaGradientButton4->OnHoverBaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaGradientButton4->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton4->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaGradientButton4->OnHoverImage = nullptr;
			this->gunaGradientButton4->OnPressedColor = System::Drawing::Color::Black;
			this->gunaGradientButton4->Size = System::Drawing::Size(160, 42);
			this->gunaGradientButton4->TabIndex = 17;
			this->gunaGradientButton4->Text = L"gunaGradientButton4";
			this->gunaGradientButton4->Click += gcnew System::EventHandler(this, &MainForm::gunaGradientButton4_Click);
			// 
			// gunaGradientButton7
			// 
			this->gunaGradientButton7->AnimationHoverSpeed = 0.07F;
			this->gunaGradientButton7->AnimationSpeed = 0.03F;
			this->gunaGradientButton7->BaseColor1 = System::Drawing::Color::SlateBlue;
			this->gunaGradientButton7->BaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->gunaGradientButton7->BorderColor = System::Drawing::Color::Black;
			this->gunaTransition1->SetDecoration(this->gunaGradientButton7, Guna::UI::Animation::DecorationType::None);
			this->gunaGradientButton7->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaGradientButton7->FocusedColor = System::Drawing::Color::Empty;
			this->gunaGradientButton7->Font = (gcnew System::Drawing::Font(L"B Nazanin", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaGradientButton7->ForeColor = System::Drawing::Color::White;
			this->gunaGradientButton7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaGradientButton7.Image")));
			this->gunaGradientButton7->ImageAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->gunaGradientButton7->ImageOffsetX = -7;
			this->gunaGradientButton7->ImageSize = System::Drawing::Size(20, 20);
			this->gunaGradientButton7->Location = System::Drawing::Point(-134, 110);
			this->gunaGradientButton7->Name = L"gunaGradientButton7";
			this->gunaGradientButton7->OnHoverBaseColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->gunaGradientButton7->OnHoverBaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaGradientButton7->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton7->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaGradientButton7->OnHoverImage = nullptr;
			this->gunaGradientButton7->OnPressedColor = System::Drawing::Color::Black;
			this->gunaGradientButton7->Size = System::Drawing::Size(160, 42);
			this->gunaGradientButton7->TabIndex = 13;
			this->gunaGradientButton7->Text = L"ثبت کتاب";
			this->gunaGradientButton7->Click += gcnew System::EventHandler(this, &MainForm::gunaGradientButton7_Click);
			// 
			// gunaGradientButton2
			// 
			this->gunaGradientButton2->AnimationHoverSpeed = 0.07F;
			this->gunaGradientButton2->AnimationSpeed = 0.03F;
			this->gunaGradientButton2->BaseColor1 = System::Drawing::Color::SlateBlue;
			this->gunaGradientButton2->BaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->gunaGradientButton2->BorderColor = System::Drawing::Color::Black;
			this->gunaTransition1->SetDecoration(this->gunaGradientButton2, Guna::UI::Animation::DecorationType::None);
			this->gunaGradientButton2->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaGradientButton2->FocusedColor = System::Drawing::Color::Empty;
			this->gunaGradientButton2->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaGradientButton2->ForeColor = System::Drawing::Color::White;
			this->gunaGradientButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaGradientButton2.Image")));
			this->gunaGradientButton2->ImageAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->gunaGradientButton2->ImageOffsetX = -7;
			this->gunaGradientButton2->ImageSize = System::Drawing::Size(20, 20);
			this->gunaGradientButton2->Location = System::Drawing::Point(-134, 158);
			this->gunaGradientButton2->Name = L"gunaGradientButton2";
			this->gunaGradientButton2->OnHoverBaseColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->gunaGradientButton2->OnHoverBaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaGradientButton2->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton2->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaGradientButton2->OnHoverImage = nullptr;
			this->gunaGradientButton2->OnPressedColor = System::Drawing::Color::Black;
			this->gunaGradientButton2->Size = System::Drawing::Size(160, 42);
			this->gunaGradientButton2->TabIndex = 15;
			this->gunaGradientButton2->Text = L"تغییر اطلاعات کتاب";
			this->gunaGradientButton2->Click += gcnew System::EventHandler(this, &MainForm::gunaGradientButton2_Click);
			// 
			// gunaGradientButton3
			// 
			this->gunaGradientButton3->AnimationHoverSpeed = 0.07F;
			this->gunaGradientButton3->AnimationSpeed = 0.03F;
			this->gunaGradientButton3->BaseColor1 = System::Drawing::Color::SlateBlue;
			this->gunaGradientButton3->BaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->gunaGradientButton3->BorderColor = System::Drawing::Color::Black;
			this->gunaTransition1->SetDecoration(this->gunaGradientButton3, Guna::UI::Animation::DecorationType::None);
			this->gunaGradientButton3->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaGradientButton3->FocusedColor = System::Drawing::Color::Empty;
			this->gunaGradientButton3->Font = (gcnew System::Drawing::Font(L"B Nazanin", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaGradientButton3->ForeColor = System::Drawing::Color::White;
			this->gunaGradientButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaGradientButton3.Image")));
			this->gunaGradientButton3->ImageAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->gunaGradientButton3->ImageOffsetX = -7;
			this->gunaGradientButton3->ImageSize = System::Drawing::Size(20, 20);
			this->gunaGradientButton3->Location = System::Drawing::Point(-134, 206);
			this->gunaGradientButton3->Name = L"gunaGradientButton3";
			this->gunaGradientButton3->OnHoverBaseColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->gunaGradientButton3->OnHoverBaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaGradientButton3->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton3->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaGradientButton3->OnHoverImage = nullptr;
			this->gunaGradientButton3->OnPressedColor = System::Drawing::Color::Black;
			this->gunaGradientButton3->Size = System::Drawing::Size(160, 42);
			this->gunaGradientButton3->TabIndex = 16;
			this->gunaGradientButton3->Text = L"جستوجو";
			this->gunaGradientButton3->Click += gcnew System::EventHandler(this, &MainForm::gunaGradientButton3_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransition1->SetDecoration(this->panel2, Guna::UI::Animation::DecorationType::None);
			this->panel2->Location = System::Drawing::Point(-133, 254);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(159, 38);
			this->panel2->TabIndex = 15;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panel2_Paint);
			// 
			// gunaGradientButton5
			// 
			this->gunaGradientButton5->AnimationHoverSpeed = 0.07F;
			this->gunaGradientButton5->AnimationSpeed = 0.03F;
			this->gunaGradientButton5->BaseColor1 = System::Drawing::Color::SlateBlue;
			this->gunaGradientButton5->BaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->gunaGradientButton5->BorderColor = System::Drawing::Color::Black;
			this->gunaTransition1->SetDecoration(this->gunaGradientButton5, Guna::UI::Animation::DecorationType::None);
			this->gunaGradientButton5->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaGradientButton5->FocusedColor = System::Drawing::Color::Empty;
			this->gunaGradientButton5->Font = (gcnew System::Drawing::Font(L"B Nazanin", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaGradientButton5->ForeColor = System::Drawing::Color::White;
			this->gunaGradientButton5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaGradientButton5.Image")));
			this->gunaGradientButton5->ImageAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->gunaGradientButton5->ImageOffsetX = -7;
			this->gunaGradientButton5->ImageSize = System::Drawing::Size(20, 20);
			this->gunaGradientButton5->Location = System::Drawing::Point(-134, 298);
			this->gunaGradientButton5->Name = L"gunaGradientButton5";
			this->gunaGradientButton5->OnHoverBaseColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->gunaGradientButton5->OnHoverBaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaGradientButton5->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton5->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaGradientButton5->OnHoverImage = nullptr;
			this->gunaGradientButton5->OnPressedColor = System::Drawing::Color::Black;
			this->gunaGradientButton5->Size = System::Drawing::Size(160, 42);
			this->gunaGradientButton5->TabIndex = 18;
			this->gunaGradientButton5->Text = L"تنظیمات";
			this->gunaGradientButton5->Click += gcnew System::EventHandler(this, &MainForm::gunaGradientButton5_Click);
			// 
			// gunaCircleButton2
			// 
			this->gunaCircleButton2->AnimationHoverSpeed = 0.07F;
			this->gunaCircleButton2->AnimationSpeed = 0.03F;
			this->gunaCircleButton2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaCircleButton2.BackgroundImage")));
			this->gunaCircleButton2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->gunaCircleButton2->BaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->gunaCircleButton2->BorderColor = System::Drawing::Color::Black;
			this->gunaTransition1->SetDecoration(this->gunaCircleButton2, Guna::UI::Animation::DecorationType::None);
			this->gunaCircleButton2->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaCircleButton2->FocusedColor = System::Drawing::Color::Empty;
			this->gunaCircleButton2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaCircleButton2->ForeColor = System::Drawing::Color::White;
			this->gunaCircleButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaCircleButton2.Image")));
			this->gunaCircleButton2->ImageSize = System::Drawing::Size(25, 25);
			this->gunaCircleButton2->Location = System::Drawing::Point(856, 388);
			this->gunaCircleButton2->Name = L"gunaCircleButton2";
			this->gunaCircleButton2->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCircleButton2->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaCircleButton2->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaCircleButton2->OnHoverImage = nullptr;
			this->gunaCircleButton2->OnPressedColor = System::Drawing::Color::Black;
			this->gunaCircleButton2->Size = System::Drawing::Size(30, 30);
			this->gunaCircleButton2->TabIndex = 11;
			this->gunaCircleButton2->Click += gcnew System::EventHandler(this, &MainForm::gunaCircleButton2_Click);
			// 
			// panel3
			// 
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->Controls->Add(this->label3);
			this->gunaTransition1->SetDecoration(this->panel3, Guna::UI::Animation::DecorationType::None);
			this->panel3->Location = System::Drawing::Point(249, 7);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(374, 98);
			this->panel3->TabIndex = 23;
			this->panel3->Visible = false;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panel3_Paint);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->gunaTransition1->SetDecoration(this->label3, Guna::UI::Animation::DecorationType::None);
			this->label3->Font = (gcnew System::Drawing::Font(L"B Nazanin", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label3->Location = System::Drawing::Point(58, 36);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 35);
			this->label3->TabIndex = 0;
			this->label3->Text = L"label3";
			// 
			// gunaTransition1
			// 
			this->gunaTransition1->AnimationType = Guna::UI::Animation::AnimationType::Rotate;
			this->gunaTransition1->Cursor = nullptr;
			animation1->AnimateOnlyDifferences = true;
			animation1->BlindCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation1.BlindCoeff")));
			animation1->LeafCoeff = 0;
			animation1->MaxTime = 1;
			animation1->MinTime = 0;
			animation1->MosaicCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation1.MosaicCoeff")));
			animation1->MosaicShift = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation1.MosaicShift")));
			animation1->MosaicSize = 0;
			animation1->Padding = System::Windows::Forms::Padding(50);
			animation1->RotateCoeff = 1;
			animation1->RotateLimit = 0;
			animation1->ScaleCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation1.ScaleCoeff")));
			animation1->SlideCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation1.SlideCoeff")));
			animation1->TimeCoeff = 0;
			animation1->TransparencyCoeff = 1;
			this->gunaTransition1->DefaultAnimation = animation1;
			// 
			// gunaAdvenceTileButton2
			// 
			this->gunaAdvenceTileButton2->AnimationHoverSpeed = 0.07F;
			this->gunaAdvenceTileButton2->AnimationSpeed = 0.03F;
			this->gunaAdvenceTileButton2->BaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaAdvenceTileButton2->BorderColor = System::Drawing::Color::Black;
			this->gunaAdvenceTileButton2->CheckedBaseColor = System::Drawing::Color::Gray;
			this->gunaAdvenceTileButton2->CheckedBorderColor = System::Drawing::Color::Black;
			this->gunaAdvenceTileButton2->CheckedForeColor = System::Drawing::Color::White;
			this->gunaAdvenceTileButton2->CheckedImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaAdvenceTileButton2.CheckedImage")));
			this->gunaAdvenceTileButton2->CheckedLineColor = System::Drawing::Color::DimGray;
			this->gunaTransition1->SetDecoration(this->gunaAdvenceTileButton2, Guna::UI::Animation::DecorationType::None);
			this->gunaAdvenceTileButton2->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaAdvenceTileButton2->FocusedColor = System::Drawing::Color::Empty;
			this->gunaAdvenceTileButton2->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15.75F));
			this->gunaAdvenceTileButton2->ForeColor = System::Drawing::Color::White;
			this->gunaAdvenceTileButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaAdvenceTileButton2.Image")));
			this->gunaAdvenceTileButton2->ImageSize = System::Drawing::Size(52, 52);
			this->gunaAdvenceTileButton2->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(170)));
			this->gunaAdvenceTileButton2->Location = System::Drawing::Point(143, 134);
			this->gunaAdvenceTileButton2->Name = L"gunaAdvenceTileButton2";
			this->gunaAdvenceTileButton2->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaAdvenceTileButton2->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaAdvenceTileButton2->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaAdvenceTileButton2->OnHoverImage = nullptr;
			this->gunaAdvenceTileButton2->OnHoverLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(170)));
			this->gunaAdvenceTileButton2->OnPressedColor = System::Drawing::Color::Black;
			this->gunaAdvenceTileButton2->Size = System::Drawing::Size(40, 39);
			this->gunaAdvenceTileButton2->TabIndex = 26;
			this->gunaAdvenceTileButton2->Text = L"gunaAdvenceTileButton2";
			this->gunaAdvenceTileButton2->Click += gcnew System::EventHandler(this, &MainForm::gunaAdvenceTileButton2_Click);
			// 
			// panel5
			// 
			this->gunaTransition1->SetDecoration(this->panel5, Guna::UI::Animation::DecorationType::None);
			this->panel5->Location = System::Drawing::Point(2, 7);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(27, 25);
			this->panel5->TabIndex = 26;
			this->panel5->Visible = false;
			this->panel5->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panel5_Paint);
			// 
			// gunaCircleButton3
			// 
			this->gunaCircleButton3->AnimationHoverSpeed = 0.07F;
			this->gunaCircleButton3->AnimationSpeed = 0.03F;
			this->gunaCircleButton3->BaseColor = System::Drawing::Color::Transparent;
			this->gunaCircleButton3->BorderColor = System::Drawing::Color::Black;
			this->gunaTransition1->SetDecoration(this->gunaCircleButton3, Guna::UI::Animation::DecorationType::None);
			this->gunaCircleButton3->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaCircleButton3->FocusedColor = System::Drawing::Color::Empty;
			this->gunaCircleButton3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaCircleButton3->ForeColor = System::Drawing::Color::White;
			this->gunaCircleButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaCircleButton3.Image")));
			this->gunaCircleButton3->ImageSize = System::Drawing::Size(40, 40);
			this->gunaCircleButton3->Location = System::Drawing::Point(30, 543);
			this->gunaCircleButton3->Name = L"gunaCircleButton3";
			this->gunaCircleButton3->OnHoverBaseColor = System::Drawing::Color::Transparent;
			this->gunaCircleButton3->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaCircleButton3->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaCircleButton3->OnHoverImage = nullptr;
			this->gunaCircleButton3->OnPressedColor = System::Drawing::Color::Black;
			this->gunaCircleButton3->Size = System::Drawing::Size(46, 49);
			this->gunaCircleButton3->TabIndex = 27;
			this->gunaCircleButton3->Click += gcnew System::EventHandler(this, &MainForm::gunaCircleButton3_Click);
			// 
			// panel9
			// 
			this->panel9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel9.BackgroundImage")));
			this->panel9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel9->Controls->Add(this->gunaCircleButton5);
			this->gunaTransition1->SetDecoration(this->panel9, Guna::UI::Animation::DecorationType::None);
			this->panel9->Location = System::Drawing::Point(35, 449);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(41, 143);
			this->panel9->TabIndex = 32;
			this->panel9->Visible = false;
			this->panel9->Click += gcnew System::EventHandler(this, &MainForm::panel9_Click);
			this->panel9->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panel9_Paint);
			// 
			// gunaCircleButton5
			// 
			this->gunaCircleButton5->AnimationHoverSpeed = 0.07F;
			this->gunaCircleButton5->AnimationSpeed = 0.03F;
			this->gunaCircleButton5->BaseColor = System::Drawing::Color::Transparent;
			this->gunaCircleButton5->BorderColor = System::Drawing::Color::Black;
			this->gunaTransition1->SetDecoration(this->gunaCircleButton5, Guna::UI::Animation::DecorationType::None);
			this->gunaCircleButton5->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaCircleButton5->FocusedColor = System::Drawing::Color::Empty;
			this->gunaCircleButton5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaCircleButton5->ForeColor = System::Drawing::Color::White;
			this->gunaCircleButton5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaCircleButton5.Image")));
			this->gunaCircleButton5->ImageSize = System::Drawing::Size(40, 40);
			this->gunaCircleButton5->Location = System::Drawing::Point(3, 97);
			this->gunaCircleButton5->Name = L"gunaCircleButton5";
			this->gunaCircleButton5->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCircleButton5->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaCircleButton5->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaCircleButton5->OnHoverImage = nullptr;
			this->gunaCircleButton5->OnPressedColor = System::Drawing::Color::Black;
			this->gunaCircleButton5->Size = System::Drawing::Size(35, 32);
			this->gunaCircleButton5->TabIndex = 29;
			this->gunaCircleButton5->Click += gcnew System::EventHandler(this, &MainForm::gunaCircleButton5_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->gunaTransition1->SetDecoration(this->label1, Guna::UI::Animation::DecorationType::None);
			this->label1->Location = System::Drawing::Point(382, 176);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 33;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->gunaTransition1->SetDecoration(this->label2, Guna::UI::Animation::DecorationType::None);
			this->label2->Location = System::Drawing::Point(460, 177);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 34;
			this->label2->Text = L"label2";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->gunaTransition1->SetDecoration(this->label4, Guna::UI::Animation::DecorationType::None);
			this->label4->Location = System::Drawing::Point(541, 177);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 35;
			this->label4->Text = L"label4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->gunaTransition1->SetDecoration(this->label5, Guna::UI::Animation::DecorationType::None);
			this->label5->Location = System::Drawing::Point(322, 244);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 36;
			this->label5->Text = L"label5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->gunaTransition1->SetDecoration(this->label6, Guna::UI::Animation::DecorationType::None);
			this->label6->Location = System::Drawing::Point(372, 244);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 37;
			this->label6->Text = L"label6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->gunaTransition1->SetDecoration(this->label7, Guna::UI::Animation::DecorationType::None);
			this->label7->Location = System::Drawing::Point(436, 244);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(35, 13);
			this->label7->TabIndex = 38;
			this->label7->Text = L"label7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->gunaTransition1->SetDecoration(this->label8, Guna::UI::Animation::DecorationType::None);
			this->label8->Location = System::Drawing::Point(670, 177);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(35, 13);
			this->label8->TabIndex = 39;
			this->label8->Text = L"label8";
			// 
			// gunaVProgressBar1
			// 
			this->gunaVProgressBar1->BorderColor = System::Drawing::Color::Black;
			this->gunaVProgressBar1->ColorStyle = Guna::UI::WinForms::ColorStyle::Default;
			this->gunaTransition1->SetDecoration(this->gunaVProgressBar1, Guna::UI::Animation::DecorationType::None);
			this->gunaVProgressBar1->IdleColor = System::Drawing::Color::Gainsboro;
			this->gunaVProgressBar1->Location = System::Drawing::Point(236, 3);
			this->gunaVProgressBar1->Name = L"gunaVProgressBar1";
			this->gunaVProgressBar1->ProgressMaxColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaVProgressBar1->ProgressMinColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaVProgressBar1->Size = System::Drawing::Size(15, 200);
			this->gunaVProgressBar1->TabIndex = 40;
			this->gunaVProgressBar1->Value = 80;
			// 
			// gunaVProgressBar2
			// 
			this->gunaVProgressBar2->BorderColor = System::Drawing::Color::Black;
			this->gunaVProgressBar2->ColorStyle = Guna::UI::WinForms::ColorStyle::Default;
			this->gunaTransition1->SetDecoration(this->gunaVProgressBar2, Guna::UI::Animation::DecorationType::None);
			this->gunaVProgressBar2->IdleColor = System::Drawing::Color::Gainsboro;
			this->gunaVProgressBar2->Location = System::Drawing::Point(258, 3);
			this->gunaVProgressBar2->Name = L"gunaVProgressBar2";
			this->gunaVProgressBar2->ProgressMaxColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaVProgressBar2->ProgressMinColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaVProgressBar2->Size = System::Drawing::Size(15, 200);
			this->gunaVProgressBar2->TabIndex = 41;
			this->gunaVProgressBar2->Value = 40;
			// 
			// gunaVProgressBar3
			// 
			this->gunaVProgressBar3->BorderColor = System::Drawing::Color::Black;
			this->gunaVProgressBar3->ColorStyle = Guna::UI::WinForms::ColorStyle::Default;
			this->gunaTransition1->SetDecoration(this->gunaVProgressBar3, Guna::UI::Animation::DecorationType::None);
			this->gunaVProgressBar3->IdleColor = System::Drawing::Color::Gainsboro;
			this->gunaVProgressBar3->Location = System::Drawing::Point(285, 3);
			this->gunaVProgressBar3->Name = L"gunaVProgressBar3";
			this->gunaVProgressBar3->ProgressMaxColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaVProgressBar3->ProgressMinColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaVProgressBar3->Size = System::Drawing::Size(15, 200);
			this->gunaVProgressBar3->TabIndex = 42;
			this->gunaVProgressBar3->Value = 60;
			// 
			// gunaVProgressBar4
			// 
			this->gunaVProgressBar4->BorderColor = System::Drawing::Color::Black;
			this->gunaVProgressBar4->ColorStyle = Guna::UI::WinForms::ColorStyle::Default;
			this->gunaTransition1->SetDecoration(this->gunaVProgressBar4, Guna::UI::Animation::DecorationType::None);
			this->gunaVProgressBar4->IdleColor = System::Drawing::Color::Gainsboro;
			this->gunaVProgressBar4->Location = System::Drawing::Point(306, 3);
			this->gunaVProgressBar4->Name = L"gunaVProgressBar4";
			this->gunaVProgressBar4->ProgressMaxColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaVProgressBar4->ProgressMinColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaVProgressBar4->Size = System::Drawing::Size(15, 200);
			this->gunaVProgressBar4->TabIndex = 43;
			this->gunaVProgressBar4->Value = 90;
			// 
			// gunaVProgressBar5
			// 
			this->gunaVProgressBar5->BorderColor = System::Drawing::Color::Black;
			this->gunaVProgressBar5->ColorStyle = Guna::UI::WinForms::ColorStyle::Default;
			this->gunaTransition1->SetDecoration(this->gunaVProgressBar5, Guna::UI::Animation::DecorationType::None);
			this->gunaVProgressBar5->IdleColor = System::Drawing::Color::Gainsboro;
			this->gunaVProgressBar5->Location = System::Drawing::Point(12, 3);
			this->gunaVProgressBar5->Name = L"gunaVProgressBar5";
			this->gunaVProgressBar5->ProgressMaxColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaVProgressBar5->ProgressMinColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaVProgressBar5->Size = System::Drawing::Size(15, 200);
			this->gunaVProgressBar5->TabIndex = 44;
			this->gunaVProgressBar5->Value = 47;
			// 
			// gunaVProgressBar6
			// 
			this->gunaVProgressBar6->BorderColor = System::Drawing::Color::Black;
			this->gunaVProgressBar6->ColorStyle = Guna::UI::WinForms::ColorStyle::Default;
			this->gunaTransition1->SetDecoration(this->gunaVProgressBar6, Guna::UI::Animation::DecorationType::None);
			this->gunaVProgressBar6->IdleColor = System::Drawing::Color::Gainsboro;
			this->gunaVProgressBar6->Location = System::Drawing::Point(33, 3);
			this->gunaVProgressBar6->Name = L"gunaVProgressBar6";
			this->gunaVProgressBar6->ProgressMaxColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaVProgressBar6->ProgressMinColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaVProgressBar6->Size = System::Drawing::Size(15, 200);
			this->gunaVProgressBar6->TabIndex = 45;
			this->gunaVProgressBar6->Value = 89;
			// 
			// gunaVProgressBar7
			// 
			this->gunaVProgressBar7->BorderColor = System::Drawing::Color::Black;
			this->gunaVProgressBar7->ColorStyle = Guna::UI::WinForms::ColorStyle::Default;
			this->gunaTransition1->SetDecoration(this->gunaVProgressBar7, Guna::UI::Animation::DecorationType::None);
			this->gunaVProgressBar7->IdleColor = System::Drawing::Color::Gainsboro;
			this->gunaVProgressBar7->Location = System::Drawing::Point(54, 3);
			this->gunaVProgressBar7->Name = L"gunaVProgressBar7";
			this->gunaVProgressBar7->ProgressMaxColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaVProgressBar7->ProgressMinColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaVProgressBar7->Size = System::Drawing::Size(15, 200);
			this->gunaVProgressBar7->TabIndex = 46;
			this->gunaVProgressBar7->Value = 98;
			// 
			// gunaVProgressBar8
			// 
			this->gunaVProgressBar8->BorderColor = System::Drawing::Color::Black;
			this->gunaVProgressBar8->ColorStyle = Guna::UI::WinForms::ColorStyle::Default;
			this->gunaTransition1->SetDecoration(this->gunaVProgressBar8, Guna::UI::Animation::DecorationType::None);
			this->gunaVProgressBar8->IdleColor = System::Drawing::Color::Gainsboro;
			this->gunaVProgressBar8->Location = System::Drawing::Point(76, 3);
			this->gunaVProgressBar8->Name = L"gunaVProgressBar8";
			this->gunaVProgressBar8->ProgressMaxColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaVProgressBar8->ProgressMinColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaVProgressBar8->Size = System::Drawing::Size(15, 200);
			this->gunaVProgressBar8->TabIndex = 47;
			this->gunaVProgressBar8->Value = 28;
			// 
			// gunaVProgressBar9
			// 
			this->gunaVProgressBar9->BorderColor = System::Drawing::Color::Black;
			this->gunaVProgressBar9->ColorStyle = Guna::UI::WinForms::ColorStyle::Default;
			this->gunaTransition1->SetDecoration(this->gunaVProgressBar9, Guna::UI::Animation::DecorationType::None);
			this->gunaVProgressBar9->IdleColor = System::Drawing::Color::Gainsboro;
			this->gunaVProgressBar9->Location = System::Drawing::Point(119, 3);
			this->gunaVProgressBar9->Name = L"gunaVProgressBar9";
			this->gunaVProgressBar9->ProgressMaxColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaVProgressBar9->ProgressMinColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaVProgressBar9->Size = System::Drawing::Size(15, 200);
			this->gunaVProgressBar9->TabIndex = 48;
			this->gunaVProgressBar9->Value = 64;
			// 
			// gunaVProgressBar10
			// 
			this->gunaVProgressBar10->BorderColor = System::Drawing::Color::Black;
			this->gunaVProgressBar10->ColorStyle = Guna::UI::WinForms::ColorStyle::Default;
			this->gunaTransition1->SetDecoration(this->gunaVProgressBar10, Guna::UI::Animation::DecorationType::None);
			this->gunaVProgressBar10->IdleColor = System::Drawing::Color::Gainsboro;
			this->gunaVProgressBar10->Location = System::Drawing::Point(140, 3);
			this->gunaVProgressBar10->Name = L"gunaVProgressBar10";
			this->gunaVProgressBar10->ProgressMaxColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaVProgressBar10->ProgressMinColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaVProgressBar10->Size = System::Drawing::Size(15, 200);
			this->gunaVProgressBar10->TabIndex = 49;
			this->gunaVProgressBar10->Value = 100;
			// 
			// gunaVProgressBar11
			// 
			this->gunaVProgressBar11->BorderColor = System::Drawing::Color::Black;
			this->gunaVProgressBar11->ColorStyle = Guna::UI::WinForms::ColorStyle::Default;
			this->gunaTransition1->SetDecoration(this->gunaVProgressBar11, Guna::UI::Animation::DecorationType::None);
			this->gunaVProgressBar11->IdleColor = System::Drawing::Color::Gainsboro;
			this->gunaVProgressBar11->Location = System::Drawing::Point(161, 3);
			this->gunaVProgressBar11->Name = L"gunaVProgressBar11";
			this->gunaVProgressBar11->ProgressMaxColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaVProgressBar11->ProgressMinColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaVProgressBar11->Size = System::Drawing::Size(15, 200);
			this->gunaVProgressBar11->TabIndex = 50;
			this->gunaVProgressBar11->Value = 59;
			// 
			// gunaVProgressBar12
			// 
			this->gunaVProgressBar12->BorderColor = System::Drawing::Color::Black;
			this->gunaVProgressBar12->ColorStyle = Guna::UI::WinForms::ColorStyle::Default;
			this->gunaTransition1->SetDecoration(this->gunaVProgressBar12, Guna::UI::Animation::DecorationType::None);
			this->gunaVProgressBar12->IdleColor = System::Drawing::Color::Gainsboro;
			this->gunaVProgressBar12->Location = System::Drawing::Point(182, 3);
			this->gunaVProgressBar12->Name = L"gunaVProgressBar12";
			this->gunaVProgressBar12->ProgressMaxColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaVProgressBar12->ProgressMinColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaVProgressBar12->Size = System::Drawing::Size(15, 200);
			this->gunaVProgressBar12->TabIndex = 51;
			this->gunaVProgressBar12->Value = 100;
			// 
			// gunaVProgressBar13
			// 
			this->gunaVProgressBar13->BorderColor = System::Drawing::Color::Black;
			this->gunaVProgressBar13->ColorStyle = Guna::UI::WinForms::ColorStyle::Default;
			this->gunaTransition1->SetDecoration(this->gunaVProgressBar13, Guna::UI::Animation::DecorationType::None);
			this->gunaVProgressBar13->IdleColor = System::Drawing::Color::Gainsboro;
			this->gunaVProgressBar13->Location = System::Drawing::Point(420, 3);
			this->gunaVProgressBar13->Name = L"gunaVProgressBar13";
			this->gunaVProgressBar13->ProgressMaxColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaVProgressBar13->ProgressMinColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaVProgressBar13->Size = System::Drawing::Size(15, 200);
			this->gunaVProgressBar13->TabIndex = 55;
			this->gunaVProgressBar13->Value = 100;
			// 
			// gunaVProgressBar14
			// 
			this->gunaVProgressBar14->BorderColor = System::Drawing::Color::Black;
			this->gunaVProgressBar14->ColorStyle = Guna::UI::WinForms::ColorStyle::Default;
			this->gunaTransition1->SetDecoration(this->gunaVProgressBar14, Guna::UI::Animation::DecorationType::None);
			this->gunaVProgressBar14->IdleColor = System::Drawing::Color::Gainsboro;
			this->gunaVProgressBar14->Location = System::Drawing::Point(399, 3);
			this->gunaVProgressBar14->Name = L"gunaVProgressBar14";
			this->gunaVProgressBar14->ProgressMaxColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaVProgressBar14->ProgressMinColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaVProgressBar14->Size = System::Drawing::Size(15, 200);
			this->gunaVProgressBar14->TabIndex = 54;
			this->gunaVProgressBar14->Value = 59;
			// 
			// gunaVProgressBar15
			// 
			this->gunaVProgressBar15->BorderColor = System::Drawing::Color::Black;
			this->gunaVProgressBar15->ColorStyle = Guna::UI::WinForms::ColorStyle::Default;
			this->gunaTransition1->SetDecoration(this->gunaVProgressBar15, Guna::UI::Animation::DecorationType::None);
			this->gunaVProgressBar15->IdleColor = System::Drawing::Color::Gainsboro;
			this->gunaVProgressBar15->Location = System::Drawing::Point(378, 3);
			this->gunaVProgressBar15->Name = L"gunaVProgressBar15";
			this->gunaVProgressBar15->ProgressMaxColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaVProgressBar15->ProgressMinColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaVProgressBar15->Size = System::Drawing::Size(15, 200);
			this->gunaVProgressBar15->TabIndex = 53;
			this->gunaVProgressBar15->Value = 100;
			// 
			// gunaVProgressBar16
			// 
			this->gunaVProgressBar16->BorderColor = System::Drawing::Color::Black;
			this->gunaVProgressBar16->ColorStyle = Guna::UI::WinForms::ColorStyle::Default;
			this->gunaTransition1->SetDecoration(this->gunaVProgressBar16, Guna::UI::Animation::DecorationType::None);
			this->gunaVProgressBar16->IdleColor = System::Drawing::Color::Gainsboro;
			this->gunaVProgressBar16->Location = System::Drawing::Point(357, 3);
			this->gunaVProgressBar16->Name = L"gunaVProgressBar16";
			this->gunaVProgressBar16->ProgressMaxColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaVProgressBar16->ProgressMinColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaVProgressBar16->Size = System::Drawing::Size(15, 200);
			this->gunaVProgressBar16->TabIndex = 52;
			this->gunaVProgressBar16->Value = 64;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->gunaVProgressBar6);
			this->panel4->Controls->Add(this->gunaVProgressBar13);
			this->panel4->Controls->Add(this->gunaVProgressBar5);
			this->panel4->Controls->Add(this->gunaVProgressBar14);
			this->panel4->Controls->Add(this->gunaVProgressBar7);
			this->panel4->Controls->Add(this->gunaVProgressBar15);
			this->panel4->Controls->Add(this->gunaVProgressBar8);
			this->panel4->Controls->Add(this->gunaVProgressBar16);
			this->panel4->Controls->Add(this->gunaVProgressBar10);
			this->panel4->Controls->Add(this->gunaVProgressBar4);
			this->panel4->Controls->Add(this->gunaVProgressBar12);
			this->panel4->Controls->Add(this->gunaVProgressBar3);
			this->panel4->Controls->Add(this->gunaVProgressBar9);
			this->panel4->Controls->Add(this->gunaVProgressBar2);
			this->panel4->Controls->Add(this->gunaVProgressBar1);
			this->panel4->Controls->Add(this->gunaVProgressBar11);
			this->gunaTransition1->SetDecoration(this->panel4, Guna::UI::Animation::DecorationType::None);
			this->panel4->Location = System::Drawing::Point(221, 388);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(447, 204);
			this->panel4->TabIndex = 56;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panel4_Paint);
			// 
			// timer2
			// 
			this->timer2->Interval = 1000;
			this->timer2->Tick += gcnew System::EventHandler(this, &MainForm::timer2_Tick);
			// 
			// timer3
			// 
			this->timer3->Interval = 400;
			this->timer3->Tick += gcnew System::EventHandler(this, &MainForm::timer3_Tick);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(900, 624);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->gunaCircleButton1);
			this->Controls->Add(this->gunaCircleButton2);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->gunaAdvenceTileButton2);
			this->Controls->Add(this->panel9);
			this->Controls->Add(this->gunaCircleButton3);
			this->gunaTransition1->SetDecoration(this, Guna::UI::Animation::DecorationType::None);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Thread^ SearchThread;
		//Thread^ InsertThread;
		//Thread^ settingThread;
		//void Open_search()
		//{
		//	//Application::Run(gcnew search());

		//}
		//void Open_insert()
		//{
		//	Application::Run(gcnew MainForm());

		//}void open_settings()
		//{
		//	Application::Run(gcnew MainForm());

		//}

	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void gunaCircleButton1_Click(System::Object^ sender, System::EventArgs^ e) {
		gunaCircleButton1->Visible = false;
		gunaTransition1->HideSync(flowLayoutPanel1, false, Guna::UI::Animation::Animation::Leaf);
		flowLayoutPanel1->Width = 32;
		flowLayoutPanel1->Location = System::Drawing::Point(870, 126);
		flowLayoutPanel1->BackgroundImage = nullptr;
		gunaTransition1->ShowSync(flowLayoutPanel1, false, Guna::UI::Animation::Animation::Leaf);
		gunaCircleButton2->Visible = true;
	}
	private: System::Void gunaGradientButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void gunaCircleButton2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
		gunaCircleButton2->Visible = false;
		gunaTransition1->HideSync(flowLayoutPanel1, false, Guna::UI::Animation::Animation::Leaf);
		flowLayoutPanel1->Width = 164;
		flowLayoutPanel1->Location = System::Drawing::Point(735, 126);
		flowLayoutPanel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"flowLayoutPanel1.BackgroundImage")));
		gunaTransition1->ShowSync(flowLayoutPanel1, false, Guna::UI::Animation::Animation::Leaf);
		gunaCircleButton1->Visible = true;
	}
	private: System::Void gunaGradientButton3_Click(System::Object^ sender, System::EventArgs^ e) {
		panel5->Controls->Clear();
		panel5->Controls->Add(form_searchpanel);
		panel5->Visible = true;
	}
	private: System::Void gunaGradientButton7_Click(System::Object^ sender, System::EventArgs^ e)
	{
		panel5->Controls->Clear();
		panel5->Controls->Add(form_insertbook);
		panel5->Visible = true;
	}

	private: System::Void panel1_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}

	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}



	private: System::Void gunaAdvenceTileButton2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		music->SoundLocation = "..\\music1.wav";
		music->Play();
	}
	private: System::Void gunaGradientButton2_Click(System::Object^ sender, System::EventArgs^ e) {

		panel5->Controls->Clear();
		panel5->Controls->Add(form_changebookform);
		panel5->Visible = true;

	}
	private: System::Void gunaGradientButton5_Click(System::Object^ sender, System::EventArgs^ e) {
		panel5->Controls->Clear();
		panel5->Controls->Add(form_settingpanel);
		panel5->Visible = true;
	}


	private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void panel5_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}




	private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void gunaAdvenceTileButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void gunaGradientButton4_Click(System::Object^ sender, System::EventArgs^ e)
	{
		panel5->Visible = false;
	}

	private: System::Void gunaCircleButton3_Click(System::Object^ sender, System::EventArgs^ e)

	{
		gunaTransition1->HideSync(gunaCircleButton3, false, Guna::UI::Animation::Animation::HorizSlide);
		gunaTransition1->ShowSync(panel9, false, Guna::UI::Animation::Animation::HorizSlide);
	}
	

private: System::Void panel9_Click(System::Object^ sender, System::EventArgs^ e) 
{
	gunaTransition1->HideSync(panel9, false, Guna::UI::Animation::Animation::HorizSlide);
	gunaTransition1->ShowSync(gunaCircleButton3, false, Guna::UI::Animation::Animation::HorizSlide);
}
private: System::Void gunaCircleButton5_Click(System::Object^ sender, System::EventArgs^ e)
{
	gunaTransition1->HideSync(panel9, false, Guna::UI::Animation::Animation::HorizSlide);
	gunaTransition1->ShowSync(gunaCircleButton3, false, Guna::UI::Animation::Animation::HorizSlide);
}


private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e)
{
	
	label1->Text = Date_form.GetYear(DateTime::Now).ToString();
	label2->Text = Date_form.GetMonth(DateTime::Now).ToString();
	label4->Text = Date_form.GetDayOfMonth(DateTime::Now).ToString();
	label5->Text = Date_form.GetDayOfWeek(DateTime::Now).ToString();

}
private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void timer3_Tick(System::Object^ sender, System::EventArgs^ e) 
{
	gunaVProgressBar1->Value = (RandString1->Next(5, 100));
	gunaVProgressBar2->Value = (RandString1->Next(5, 100));
	gunaVProgressBar3->Value = (RandString1->Next(5, 100));
	gunaVProgressBar4->Value = (RandString1->Next(5, 100));

	gunaVProgressBar5->Value = (RandString1->Next(5, 100));
	gunaVProgressBar6->Value = (RandString1->Next(5, 100));
	gunaVProgressBar7->Value = (RandString1->Next(5, 100));
	gunaVProgressBar8->Value = (RandString1->Next(5, 100));

	gunaVProgressBar9->Value =  (RandString2->Next(5, 100));
	gunaVProgressBar10->Value = (RandString2->Next(5, 100));
	gunaVProgressBar11->Value = (RandString2->Next(5, 100));
	gunaVProgressBar12->Value = (RandString2->Next(5, 100));

	gunaVProgressBar13->Value = (RandString2->Next(5, 100));
	gunaVProgressBar14->Value = (RandString2->Next(5, 100));
	gunaVProgressBar15->Value = (RandString2->Next(5, 100));
	gunaVProgressBar16->Value = (RandString2->Next(5, 100));
}
private: System::Void panel9_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
