#pragma once
#include"Settings.h"
#include"Home.h"
#include"Paymentcount.h"
#include"CompleteInformationUserControl.h";
namespace Client {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		//[System::Runtime::InteropServices::DllImport("user32.dll")] ;
	public:
		MyForm(void)
		{
			InitializeComponent();
			
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
	private: Guna::UI::WinForms::GunaGradient2Panel^ gunaGradient2Panel1;
	protected:
	private: Guna::UI::WinForms::GunaButton^ gunaButton1;
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: Guna::UI::WinForms::GunaButton^ gunaButton3;
	private: Guna::UI::WinForms::GunaGradientPanel^ RIGHTBAR;
	private: Guna::UI::WinForms::GunaGradientPanel^ MainPanel;




	private: Guna::UI::WinForms::GunaGradientButton^ HOMEBTN;
	private: Guna::UI::WinForms::GunaCirclePictureBox^ gunaCirclePictureBox1;
	private: Guna::UI::WinForms::GunaGradientButton^ SEARCHBTN;
	private: Guna::UI::WinForms::GunaGradientButton^ BUYRECIETEBTN;
	private: Guna::UI::WinForms::GunaGradientButton^ SORTBTN;
	private: Guna::UI::WinForms::GunaGradientButton^ SETTINGBTN;
	private: Guna::UI::WinForms::GunaGradientButton^ MinMaxBar;


	private: Guna::UI::WinForms::GunaTransition^ RIGHTBAR_TRANSITION;


	private: System::ComponentModel::IContainer^ components;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->gunaGradient2Panel1 = (gcnew Guna::UI::WinForms::GunaGradient2Panel());
			this->gunaButton3 = (gcnew Guna::UI::WinForms::GunaButton());
			this->gunaButton1 = (gcnew Guna::UI::WinForms::GunaButton());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->SETTINGBTN = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->MinMaxBar = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->SEARCHBTN = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->SORTBTN = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->BUYRECIETEBTN = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->RIGHTBAR = (gcnew Guna::UI::WinForms::GunaGradientPanel());
			this->gunaCirclePictureBox1 = (gcnew Guna::UI::WinForms::GunaCirclePictureBox());
			this->HOMEBTN = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->MainPanel = (gcnew Guna::UI::WinForms::GunaGradientPanel());
			this->RIGHTBAR_TRANSITION = (gcnew Guna::UI::WinForms::GunaTransition(this->components));
			this->gunaGradient2Panel1->SuspendLayout();
			this->RIGHTBAR->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaCirclePictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// gunaGradient2Panel1
			// 
			this->gunaGradient2Panel1->BackColor = System::Drawing::Color::Transparent;
			this->gunaGradient2Panel1->Controls->Add(this->gunaButton3);
			this->gunaGradient2Panel1->Controls->Add(this->gunaButton1);
			this->RIGHTBAR_TRANSITION->SetDecoration(this->gunaGradient2Panel1, Guna::UI::Animation::DecorationType::None);
			this->gunaGradient2Panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->gunaGradient2Panel1->GradientColor1 = System::Drawing::Color::DarkGray;
			this->gunaGradient2Panel1->GradientColor2 = System::Drawing::Color::White;
			this->gunaGradient2Panel1->Location = System::Drawing::Point(0, 0);
			this->gunaGradient2Panel1->Name = L"gunaGradient2Panel1";
			this->gunaGradient2Panel1->Size = System::Drawing::Size(1360, 38);
			this->gunaGradient2Panel1->TabIndex = 0;
			this->gunaGradient2Panel1->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::gunaGradient2Panel1_MouseDoubleClick);
			// 
			// gunaButton3
			// 
			this->gunaButton3->Animated = true;
			this->gunaButton3->AnimationHoverSpeed = 0.07F;
			this->gunaButton3->AnimationSpeed = 0.03F;
			this->gunaButton3->BaseColor = System::Drawing::Color::Transparent;
			this->gunaButton3->BorderColor = System::Drawing::Color::Black;
			this->RIGHTBAR_TRANSITION->SetDecoration(this->gunaButton3, Guna::UI::Animation::DecorationType::None);
			this->gunaButton3->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaButton3->Dock = System::Windows::Forms::DockStyle::Right;
			this->gunaButton3->FocusedColor = System::Drawing::Color::Empty;
			this->gunaButton3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaButton3->ForeColor = System::Drawing::Color::White;
			this->gunaButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaButton3.Image")));
			this->gunaButton3->ImageSize = System::Drawing::Size(20, 20);
			this->gunaButton3->Location = System::Drawing::Point(1254, 0);
			this->gunaButton3->Name = L"gunaButton3";
			this->gunaButton3->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaButton3->OnHoverBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->gunaButton3->OnHoverForeColor = System::Drawing::Color::Red;
			this->gunaButton3->OnHoverImage = nullptr;
			this->gunaButton3->OnPressedColor = System::Drawing::Color::Black;
			this->gunaButton3->Size = System::Drawing::Size(56, 38);
			this->gunaButton3->TabIndex = 3;
			this->gunaButton3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->gunaButton3->Click += gcnew System::EventHandler(this, &MyForm::gunaButton3_Click);
			// 
			// gunaButton1
			// 
			this->gunaButton1->Animated = true;
			this->gunaButton1->AnimationHoverSpeed = 0.07F;
			this->gunaButton1->AnimationSpeed = 0.03F;
			this->gunaButton1->BaseColor = System::Drawing::Color::Transparent;
			this->gunaButton1->BorderColor = System::Drawing::Color::Black;
			this->RIGHTBAR_TRANSITION->SetDecoration(this->gunaButton1, Guna::UI::Animation::DecorationType::None);
			this->gunaButton1->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaButton1->Dock = System::Windows::Forms::DockStyle::Right;
			this->gunaButton1->FocusedColor = System::Drawing::Color::Empty;
			this->gunaButton1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaButton1->ForeColor = System::Drawing::Color::White;
			this->gunaButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaButton1.Image")));
			this->gunaButton1->ImageSize = System::Drawing::Size(20, 20);
			this->gunaButton1->Location = System::Drawing::Point(1310, 0);
			this->gunaButton1->Name = L"gunaButton1";
			this->gunaButton1->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->gunaButton1->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaButton1->OnHoverForeColor = System::Drawing::Color::Red;
			this->gunaButton1->OnHoverImage = nullptr;
			this->gunaButton1->OnPressedColor = System::Drawing::Color::Black;
			this->gunaButton1->Size = System::Drawing::Size(50, 38);
			this->gunaButton1->TabIndex = 0;
			this->gunaButton1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->toolTip1->SetToolTip(this->gunaButton1, L"خروج از برنامه");
			this->gunaButton1->Click += gcnew System::EventHandler(this, &MyForm::gunaButton1_Click);
			// 
			// SETTINGBTN
			// 
			this->SETTINGBTN->Animated = true;
			this->SETTINGBTN->AnimationHoverSpeed = 0.07F;
			this->SETTINGBTN->AnimationSpeed = 0.03F;
			this->SETTINGBTN->BackColor = System::Drawing::Color::Transparent;
			this->SETTINGBTN->BaseColor1 = System::Drawing::Color::Transparent;
			this->SETTINGBTN->BaseColor2 = System::Drawing::Color::Transparent;
			this->SETTINGBTN->BorderColor = System::Drawing::Color::Black;
			this->RIGHTBAR_TRANSITION->SetDecoration(this->SETTINGBTN, Guna::UI::Animation::DecorationType::None);
			this->SETTINGBTN->DialogResult = System::Windows::Forms::DialogResult::None;
			this->SETTINGBTN->FocusedColor = System::Drawing::Color::Empty;
			this->SETTINGBTN->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->SETTINGBTN->ForeColor = System::Drawing::Color::White;
			this->SETTINGBTN->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SETTINGBTN.Image")));
			this->SETTINGBTN->ImageAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->SETTINGBTN->ImageSize = System::Drawing::Size(20, 20);
			this->SETTINGBTN->Location = System::Drawing::Point(260, 16);
			this->SETTINGBTN->Name = L"SETTINGBTN";
			this->SETTINGBTN->OnHoverBaseColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->SETTINGBTN->OnHoverBaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->SETTINGBTN->OnHoverBorderColor = System::Drawing::Color::Black;
			this->SETTINGBTN->OnHoverForeColor = System::Drawing::Color::White;
			this->SETTINGBTN->OnHoverImage = nullptr;
			this->SETTINGBTN->OnPressedColor = System::Drawing::Color::Black;
			this->SETTINGBTN->Padding = System::Windows::Forms::Padding(0, 40, 0, 40);
			this->SETTINGBTN->Size = System::Drawing::Size(65, 48);
			this->SETTINGBTN->TabIndex = 2;
			this->toolTip1->SetToolTip(this->SETTINGBTN, L"تنظیمات");
			// 
			// MinMaxBar
			// 
			this->MinMaxBar->Animated = true;
			this->MinMaxBar->AnimationHoverSpeed = 0.07F;
			this->MinMaxBar->AnimationSpeed = 0.03F;
			this->MinMaxBar->BackColor = System::Drawing::Color::Transparent;
			this->MinMaxBar->BaseColor1 = System::Drawing::Color::Transparent;
			this->MinMaxBar->BaseColor2 = System::Drawing::Color::Transparent;
			this->MinMaxBar->BorderColor = System::Drawing::Color::Black;
			this->RIGHTBAR_TRANSITION->SetDecoration(this->MinMaxBar, Guna::UI::Animation::DecorationType::None);
			this->MinMaxBar->DialogResult = System::Windows::Forms::DialogResult::None;
			this->MinMaxBar->FocusedColor = System::Drawing::Color::Empty;
			this->MinMaxBar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->MinMaxBar->ForeColor = System::Drawing::Color::White;
			this->MinMaxBar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MinMaxBar.Image")));
			this->MinMaxBar->ImageAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->MinMaxBar->ImageSize = System::Drawing::Size(20, 20);
			this->MinMaxBar->Location = System::Drawing::Point(3, 16);
			this->MinMaxBar->Name = L"MinMaxBar";
			this->MinMaxBar->OnHoverBaseColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->MinMaxBar->OnHoverBaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->MinMaxBar->OnHoverBorderColor = System::Drawing::Color::Black;
			this->MinMaxBar->OnHoverForeColor = System::Drawing::Color::White;
			this->MinMaxBar->OnHoverImage = nullptr;
			this->MinMaxBar->OnPressedColor = System::Drawing::Color::Black;
			this->MinMaxBar->Padding = System::Windows::Forms::Padding(0, 40, 0, 40);
			this->MinMaxBar->Size = System::Drawing::Size(65, 48);
			this->MinMaxBar->TabIndex = 1;
			this->toolTip1->SetToolTip(this->MinMaxBar, L"باز/بسته");
			this->MinMaxBar->Click += gcnew System::EventHandler(this, &MyForm::gunaGradientButton5_Click);
			// 
			// SEARCHBTN
			// 
			this->SEARCHBTN->Animated = true;
			this->SEARCHBTN->AnimationHoverSpeed = 0.07F;
			this->SEARCHBTN->AnimationSpeed = 0.03F;
			this->SEARCHBTN->BackColor = System::Drawing::Color::Transparent;
			this->SEARCHBTN->BaseColor1 = System::Drawing::Color::DodgerBlue;
			this->SEARCHBTN->BaseColor2 = System::Drawing::Color::Transparent;
			this->SEARCHBTN->BorderColor = System::Drawing::Color::Black;
			this->RIGHTBAR_TRANSITION->SetDecoration(this->SEARCHBTN, Guna::UI::Animation::DecorationType::None);
			this->SEARCHBTN->DialogResult = System::Windows::Forms::DialogResult::None;
			this->SEARCHBTN->FocusedColor = System::Drawing::Color::Empty;
			this->SEARCHBTN->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->SEARCHBTN->ForeColor = System::Drawing::Color::White;
			this->SEARCHBTN->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SEARCHBTN.Image")));
			this->SEARCHBTN->ImageSize = System::Drawing::Size(20, 20);
			this->SEARCHBTN->Location = System::Drawing::Point(49, 597);
			this->SEARCHBTN->Name = L"SEARCHBTN";
			this->SEARCHBTN->OnHoverBaseColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->SEARCHBTN->OnHoverBaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->SEARCHBTN->OnHoverBorderColor = System::Drawing::Color::Black;
			this->SEARCHBTN->OnHoverForeColor = System::Drawing::Color::White;
			this->SEARCHBTN->OnHoverImage = nullptr;
			this->SEARCHBTN->OnPressedColor = System::Drawing::Color::Black;
			this->SEARCHBTN->Padding = System::Windows::Forms::Padding(0, 40, 0, 40);
			this->SEARCHBTN->Size = System::Drawing::Size(226, 69);
			this->SEARCHBTN->TabIndex = 9;
			this->SEARCHBTN->Text = L"جست و جو";
			this->toolTip1->SetToolTip(this->SEARCHBTN, L"جست و جو");
			this->SEARCHBTN->Click += gcnew System::EventHandler(this, &MyForm::SEARCHBTN_Click);
			// 
			// SORTBTN
			// 
			this->SORTBTN->Animated = true;
			this->SORTBTN->AnimationHoverSpeed = 0.07F;
			this->SORTBTN->AnimationSpeed = 0.03F;
			this->SORTBTN->BackColor = System::Drawing::Color::Transparent;
			this->SORTBTN->BaseColor1 = System::Drawing::Color::DodgerBlue;
			this->SORTBTN->BaseColor2 = System::Drawing::Color::Transparent;
			this->SORTBTN->BorderColor = System::Drawing::Color::Black;
			this->RIGHTBAR_TRANSITION->SetDecoration(this->SORTBTN, Guna::UI::Animation::DecorationType::None);
			this->SORTBTN->DialogResult = System::Windows::Forms::DialogResult::None;
			this->SORTBTN->FocusedColor = System::Drawing::Color::Empty;
			this->SORTBTN->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->SORTBTN->ForeColor = System::Drawing::Color::White;
			this->SORTBTN->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SORTBTN.Image")));
			this->SORTBTN->ImageSize = System::Drawing::Size(20, 20);
			this->SORTBTN->Location = System::Drawing::Point(49, 411);
			this->SORTBTN->Name = L"SORTBTN";
			this->SORTBTN->OnHoverBaseColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->SORTBTN->OnHoverBaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->SORTBTN->OnHoverBorderColor = System::Drawing::Color::Black;
			this->SORTBTN->OnHoverForeColor = System::Drawing::Color::White;
			this->SORTBTN->OnHoverImage = nullptr;
			this->SORTBTN->OnPressedColor = System::Drawing::Color::Black;
			this->SORTBTN->Padding = System::Windows::Forms::Padding(0, 40, 0, 40);
			this->SORTBTN->Size = System::Drawing::Size(226, 69);
			this->SORTBTN->TabIndex = 7;
			this->SORTBTN->Text = L"دسته بندی ها";
			this->toolTip1->SetToolTip(this->SORTBTN, L"صفجه اصلی");
			// 
			// BUYRECIETEBTN
			// 
			this->BUYRECIETEBTN->Animated = true;
			this->BUYRECIETEBTN->AnimationHoverSpeed = 0.07F;
			this->BUYRECIETEBTN->AnimationSpeed = 0.03F;
			this->BUYRECIETEBTN->BackColor = System::Drawing::Color::Transparent;
			this->BUYRECIETEBTN->BaseColor1 = System::Drawing::Color::DodgerBlue;
			this->BUYRECIETEBTN->BaseColor2 = System::Drawing::Color::Transparent;
			this->BUYRECIETEBTN->BorderColor = System::Drawing::Color::Black;
			this->RIGHTBAR_TRANSITION->SetDecoration(this->BUYRECIETEBTN, Guna::UI::Animation::DecorationType::None);
			this->BUYRECIETEBTN->DialogResult = System::Windows::Forms::DialogResult::None;
			this->BUYRECIETEBTN->FocusedColor = System::Drawing::Color::Empty;
			this->BUYRECIETEBTN->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->BUYRECIETEBTN->ForeColor = System::Drawing::Color::White;
			this->BUYRECIETEBTN->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BUYRECIETEBTN.Image")));
			this->BUYRECIETEBTN->ImageSize = System::Drawing::Size(20, 20);
			this->BUYRECIETEBTN->Location = System::Drawing::Point(49, 502);
			this->BUYRECIETEBTN->Name = L"BUYRECIETEBTN";
			this->BUYRECIETEBTN->OnHoverBaseColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->BUYRECIETEBTN->OnHoverBaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->BUYRECIETEBTN->OnHoverBorderColor = System::Drawing::Color::Black;
			this->BUYRECIETEBTN->OnHoverForeColor = System::Drawing::Color::White;
			this->BUYRECIETEBTN->OnHoverImage = nullptr;
			this->BUYRECIETEBTN->OnPressedColor = System::Drawing::Color::Black;
			this->BUYRECIETEBTN->Padding = System::Windows::Forms::Padding(0, 40, 0, 40);
			this->BUYRECIETEBTN->Size = System::Drawing::Size(226, 69);
			this->BUYRECIETEBTN->TabIndex = 8;
			this->BUYRECIETEBTN->Text = L"سبد خرید";
			this->toolTip1->SetToolTip(this->BUYRECIETEBTN, L"سبد خرید");
			this->BUYRECIETEBTN->Click += gcnew System::EventHandler(this, &MyForm::BUYRECIETEBTN_Click);
			// 
			// RIGHTBAR
			// 
			this->RIGHTBAR->BackColor = System::Drawing::SystemColors::HotTrack;
			this->RIGHTBAR->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"RIGHTBAR.BackgroundImage")));
			this->RIGHTBAR->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->RIGHTBAR->Controls->Add(this->SETTINGBTN);
			this->RIGHTBAR->Controls->Add(this->MinMaxBar);
			this->RIGHTBAR->Controls->Add(this->gunaCirclePictureBox1);
			this->RIGHTBAR->Controls->Add(this->HOMEBTN);
			this->RIGHTBAR->Controls->Add(this->SEARCHBTN);
			this->RIGHTBAR->Controls->Add(this->SORTBTN);
			this->RIGHTBAR->Controls->Add(this->BUYRECIETEBTN);
			this->RIGHTBAR_TRANSITION->SetDecoration(this->RIGHTBAR, Guna::UI::Animation::DecorationType::None);
			this->RIGHTBAR->Dock = System::Windows::Forms::DockStyle::Right;
			this->RIGHTBAR->GradientColor1 = System::Drawing::SystemColors::HotTrack;
			this->RIGHTBAR->GradientColor2 = System::Drawing::Color::Navy;
			this->RIGHTBAR->GradientColor3 = System::Drawing::Color::White;
			this->RIGHTBAR->GradientColor4 = System::Drawing::Color::White;
			this->RIGHTBAR->Location = System::Drawing::Point(1032, 38);
			this->RIGHTBAR->Name = L"RIGHTBAR";
			this->RIGHTBAR->Quality = 100;
			this->RIGHTBAR->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->RIGHTBAR->Size = System::Drawing::Size(328, 730);
			this->RIGHTBAR->TabIndex = 1;
			this->RIGHTBAR->Text = L"gunaGradientPanel1";
			// 
			// gunaCirclePictureBox1
			// 
			this->gunaCirclePictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->gunaCirclePictureBox1->BaseColor = System::Drawing::Color::White;
			this->RIGHTBAR_TRANSITION->SetDecoration(this->gunaCirclePictureBox1, Guna::UI::Animation::DecorationType::None);
			this->gunaCirclePictureBox1->Location = System::Drawing::Point(66, 70);
			this->gunaCirclePictureBox1->Name = L"gunaCirclePictureBox1";
			this->gunaCirclePictureBox1->Size = System::Drawing::Size(193, 193);
			this->gunaCirclePictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->gunaCirclePictureBox1->TabIndex = 0;
			this->gunaCirclePictureBox1->TabStop = false;
			this->gunaCirclePictureBox1->UseTransfarantBackground = false;
			// 
			// HOMEBTN
			// 
			this->HOMEBTN->Animated = true;
			this->HOMEBTN->AnimationHoverSpeed = 0.07F;
			this->HOMEBTN->AnimationSpeed = 0.03F;
			this->HOMEBTN->BackColor = System::Drawing::Color::Transparent;
			this->HOMEBTN->BaseColor1 = System::Drawing::Color::DodgerBlue;
			this->HOMEBTN->BaseColor2 = System::Drawing::Color::Transparent;
			this->HOMEBTN->BorderColor = System::Drawing::Color::Black;
			this->RIGHTBAR_TRANSITION->SetDecoration(this->HOMEBTN, Guna::UI::Animation::DecorationType::None);
			this->HOMEBTN->DialogResult = System::Windows::Forms::DialogResult::None;
			this->HOMEBTN->FocusedColor = System::Drawing::Color::Empty;
			this->HOMEBTN->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->HOMEBTN->ForeColor = System::Drawing::Color::White;
			this->HOMEBTN->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"HOMEBTN.Image")));
			this->HOMEBTN->ImageSize = System::Drawing::Size(20, 20);
			this->HOMEBTN->Location = System::Drawing::Point(49, 312);
			this->HOMEBTN->Name = L"HOMEBTN";
			this->HOMEBTN->OnHoverBaseColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->HOMEBTN->OnHoverBaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->HOMEBTN->OnHoverBorderColor = System::Drawing::Color::Black;
			this->HOMEBTN->OnHoverForeColor = System::Drawing::Color::White;
			this->HOMEBTN->OnHoverImage = nullptr;
			this->HOMEBTN->OnPressedColor = System::Drawing::Color::Black;
			this->HOMEBTN->Padding = System::Windows::Forms::Padding(0, 40, 0, 40);
			this->HOMEBTN->Size = System::Drawing::Size(226, 69);
			this->HOMEBTN->TabIndex = 0;
			this->HOMEBTN->Text = L"خانه";
			this->HOMEBTN->Click += gcnew System::EventHandler(this, &MyForm::HOMEBTN_Click);
			// 
			// MainPanel
			// 
			this->MainPanel->BackColor = System::Drawing::SystemColors::Control;
			this->MainPanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MainPanel.BackgroundImage")));
			this->MainPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->RIGHTBAR_TRANSITION->SetDecoration(this->MainPanel, Guna::UI::Animation::DecorationType::None);
			this->MainPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->MainPanel->GradientColor1 = System::Drawing::Color::White;
			this->MainPanel->GradientColor2 = System::Drawing::Color::White;
			this->MainPanel->GradientColor3 = System::Drawing::Color::Teal;
			this->MainPanel->GradientColor4 = System::Drawing::Color::GreenYellow;
			this->MainPanel->Location = System::Drawing::Point(0, 38);
			this->MainPanel->Name = L"MainPanel";
			this->MainPanel->Size = System::Drawing::Size(1032, 730);
			this->MainPanel->TabIndex = 0;
			this->MainPanel->Text = L"gunaGradientPanel2";
			// 
			// RIGHTBAR_TRANSITION
			// 
			this->RIGHTBAR_TRANSITION->AnimationType = Guna::UI::Animation::AnimationType::Scale;
			this->RIGHTBAR_TRANSITION->Cursor = nullptr;
			animation1->AnimateOnlyDifferences = true;
			animation1->BlindCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation1.BlindCoeff")));
			animation1->LeafCoeff = 0;
			animation1->MaxTime = 1;
			animation1->MinTime = 0;
			animation1->MosaicCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation1.MosaicCoeff")));
			animation1->MosaicShift = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation1.MosaicShift")));
			animation1->MosaicSize = 0;
			animation1->Padding = System::Windows::Forms::Padding(0);
			animation1->RotateCoeff = 0;
			animation1->RotateLimit = 0;
			animation1->ScaleCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation1.ScaleCoeff")));
			animation1->SlideCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation1.SlideCoeff")));
			animation1->TimeCoeff = 0;
			animation1->TransparencyCoeff = 0;
			this->RIGHTBAR_TRANSITION->DefaultAnimation = animation1;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1360, 768);
			this->Controls->Add(this->MainPanel);
			this->Controls->Add(this->RIGHTBAR);
			this->Controls->Add(this->gunaGradient2Panel1);
			this->RIGHTBAR_TRANSITION->SetDecoration(this, Guna::UI::Animation::DecorationType::None);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->toolTip1->SetToolTip(this, L"خانه");
			this->gunaGradient2Panel1->ResumeLayout(false);
			this->RIGHTBAR->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaCirclePictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		Home^ home = gcnew Home();
		Settings^ setting = gcnew Settings();
		Paymentcount^ buy = gcnew Paymentcount();
	private: System::Void gunaButton1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
		   //checking if the form is maximized or not
		   bool Is_Maximized = false;
	private: System::Void gunaButton3_Click(System::Object^ sender, System::EventArgs^ e)
	{

		//adding funtionality to button
		if (Is_Maximized == false)
		{
			this->WindowState = FormWindowState::Maximized;
			MainPanel->Size = this->Size;
			Is_Maximized = true;

			
		}
		else if (Is_Maximized == true)
		{
			//this->Height = 1360;
			//this->Width = 768;
			this->WindowState = FormWindowState::Normal;
			MainPanel->Size = this->Size;
			Is_Maximized = false;
		}

	}

		   /*
		   * this is just a Help for the deloper to use the bar
		   */

		   //checking if the right panel is open or closed
		   bool IS_BAR_OPEN = true;
	private: System::Void gunaGradientButton5_Click(System::Object^ sender, System::EventArgs^ e) {
		//DO aCTION WITH THE PANEL IF IT IS OPEN
		if (IS_BAR_OPEN == true)
		{
			//Ask this  transition Please
			
			RIGHTBAR->Width = 50;

			//home button

			HOMEBTN->Text = "";
			HOMEBTN->Size = System::Drawing::Size(50, 50);
			//I havre to finf the center *********************************************
			HOMEBTN->Location = System::Drawing::Point(MinMaxBar->Height-40, (RIGHTBAR->Top+150));
			
			//sort button

			SORTBTN->Width = 50;
			SORTBTN->Height = 50;
			SORTBTN->Text = "";
			SORTBTN->Location = System::Drawing::Point(MinMaxBar->Height - 40, (RIGHTBAR->Top + 200));

			//buy button
			BUYRECIETEBTN->Text = "";
			BUYRECIETEBTN->Width = 65;
			BUYRECIETEBTN->Height = 50;
			BUYRECIETEBTN->Location = System::Drawing::Point(MinMaxBar->Height - 40, (RIGHTBAR->Top + 250));

			//search button

			SEARCHBTN->Text = "";
			SEARCHBTN->Width = 65;
			SEARCHBTN->Height = 50;
			SEARCHBTN->Location = System::Drawing::Point(MinMaxBar->Height - 40, (RIGHTBAR->Top + 300));



			IS_BAR_OPEN = false;
		}

		//returning the left bar to its previous mode
		else if (IS_BAR_OPEN == false)
		{
			RIGHTBAR->Width = 250;
			
			//HOMEBTN

			HOMEBTN->Text = " خانه";
			HOMEBTN->Width = 226;
			HOMEBTN->Height = 50;

			SORTBTN->Text = L"دسته بندی";
			SORTBTN->Width = 226;
			SORTBTN->Height = 50;
			//BUYBTN
			BUYRECIETEBTN->Text = L" سبد خرید";
			BUYRECIETEBTN->Width = 226;
			BUYRECIETEBTN->Height = 50;
			//SEARCGBTN
			SEARCHBTN->Text = L"جست و جو";
			SEARCHBTN->Width = 226;
			SEARCHBTN->Height = 50;
			IS_BAR_OPEN = true;
		}
	}
		   
	private: System::Void SETTING_Click(System::Object^ sender, System::EventArgs^ e) {
		MainPanel->Controls->Clear();
		MainPanel->Controls->Add(setting);
		
	}
		   bool YEK_BAR_ZADI_IN_LANATIRO;
	private: System::Void HOMEBTN_Click(System::Object^ sender, System::EventArgs^ e) {
		
	
		
		
			MainPanel->Controls->Clear();
			MainPanel->Controls->Add(home);
			home->Enabled =true;
			home->Dock = System::Windows::Forms::DockStyle::Fill;
			
			
		
	}
private: System::Void BUYRECIETEBTN_Click(System::Object^ sender, System::EventArgs^ e) {
	
	MainPanel->Controls->Clear();
	MainPanel->Controls->Add(buy);
	if (Is_Maximized == true)
	{
		if (IS_BAR_OPEN == true)
		{
			buy->Dock = System::Windows::Forms::DockStyle::Fill;
		}
		else if (IS_BAR_OPEN==false)
		{
			buy->Dock = System::Windows::Forms::DockStyle::Fill;
		}
	}
	else if (Is_Maximized == false)
	{
		if (IS_BAR_OPEN==true)
		{
			buy->Dock = System::Windows::Forms::DockStyle::Fill;
		}
		else if (IS_BAR_OPEN==false)
		{
			buy->Dock = System::Windows::Forms::DockStyle::Fill;
		}
	}
}
private: System::Void gunaGradient2Panel1_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (Is_Maximized == false)
	{
		this->WindowState = FormWindowState::Maximized;
		MainPanel->Size = this->Size;
		Is_Maximized = true;
	}
	else if (Is_Maximized == true)
	{
		//this->Height = 1360;
		//this->Width = 768;
		this->WindowState = FormWindowState::Normal;
		MainPanel->Size = this->Size;
		Is_Maximized = false;
		
	}
}

private: System::Void SEARCHBTN_Click(System::Object^ sender, System::EventArgs^ e) {
	//removing other instances   =>home / settingpanel / etc ...
	
}
};
}
