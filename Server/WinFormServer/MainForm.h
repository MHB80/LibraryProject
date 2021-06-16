#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace WinFormServer {

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::UserControl
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Guna::UI::WinForms::GunaElipse^ gunaElipse1;
	protected:

	private: Guna::UI::WinForms::GunaControlBox^ gunaControlBox1;











	private: Guna::UI::WinForms::GunaPictureBox^ gunaPictureBox1;



	private: Guna::UI::WinForms::GunaGradientButton^ gunaGradientButton5;
	private: Guna::UI::WinForms::GunaGradientButton^ gunaGradientButton3;
	private: Guna::UI::WinForms::GunaGradientButton^ gunaGradientButton4;
	private: Guna::UI::WinForms::GunaGradientButton^ gunaGradientButton2;
	private: Guna::UI::WinForms::GunaGradientButton^ gunaGradientButton1;
	private: Guna::UI::WinForms::GunaGradientButton^ gunaGradientButton6;



	private: Guna::UI::WinForms::GunaDragControl^ gunaDragControl1;
	private: System::Windows::Forms::Panel^ panel1;





	private: Guna::UI::WinForms::GunaSeparator^ gunaSeparator2;
	private: System::Windows::Forms::FlowLayoutPanel^ Main_Panel;





	private: Guna::UI::WinForms::GunaCircleButton^ BTN_Show;

	private: Guna::UI::WinForms::GunaCircleButton^ BTN_Hide;
	private: Guna::UI::WinForms::GunaTransition^ gunaTransition1;

































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
			Guna::UI::Animation::Animation^ animation2 = (gcnew Guna::UI::Animation::Animation());
	
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->gunaElipse1 = (gcnew Guna::UI::WinForms::GunaElipse(this->components));
			this->gunaControlBox1 = (gcnew Guna::UI::WinForms::GunaControlBox());
			this->gunaPictureBox1 = (gcnew Guna::UI::WinForms::GunaPictureBox());
			this->gunaGradientButton6 = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->gunaGradientButton1 = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->gunaGradientButton2 = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->gunaGradientButton4 = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->gunaGradientButton3 = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->gunaGradientButton5 = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->gunaDragControl1 = (gcnew Guna::UI::WinForms::GunaDragControl(this->components));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->gunaSeparator2 = (gcnew Guna::UI::WinForms::GunaSeparator());
			this->Main_Panel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->BTN_Hide = (gcnew Guna::UI::WinForms::GunaCircleButton());
			this->BTN_Show = (gcnew Guna::UI::WinForms::GunaCircleButton());
			this->gunaTransition1 = (gcnew Guna::UI::WinForms::GunaTransition(this->components));
		
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->Main_Panel->SuspendLayout();
			this->SuspendLayout();
			// 
			// gunaElipse1
			// 
			this->gunaElipse1->TargetControl = this;
			// 
			// gunaControlBox1
			// 
			this->gunaControlBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->gunaControlBox1->AnimationHoverSpeed = 0.07F;
			this->gunaControlBox1->AnimationSpeed = 0.03F;
			this->gunaControlBox1->BackColor = System::Drawing::Color::Transparent;

			this->gunaTransition1->SetDecoration(this->gunaControlBox1, Guna::UI::Animation::DecorationType::None);
			this->gunaControlBox1->IconColor = System::Drawing::Color::Black;
			this->gunaControlBox1->IconSize = 15;
			this->gunaControlBox1->Location = System::Drawing::Point(-8, 0);
			this->gunaControlBox1->Name = L"gunaControlBox1";
			this->gunaControlBox1->OnHoverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(183)));
			this->gunaControlBox1->OnHoverIconColor = System::Drawing::Color::White;
			this->gunaControlBox1->OnPressedColor = System::Drawing::Color::Black;
			this->gunaControlBox1->Size = System::Drawing::Size(45, 29);
			this->gunaControlBox1->TabIndex = 1;
			// 
			// gunaPictureBox1
			// 
			this->gunaPictureBox1->BaseColor = System::Drawing::Color::White;

			this->gunaTransition1->SetDecoration(this->gunaPictureBox1, Guna::UI::Animation::DecorationType::None);
			this->gunaPictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaPictureBox1.Image")));
			this->gunaPictureBox1->Location = System::Drawing::Point(-640, 311);
			this->gunaPictureBox1->Name = L"gunaPictureBox1";
			this->gunaPictureBox1->Size = System::Drawing::Size(234, 42);
			this->gunaPictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->gunaPictureBox1->TabIndex = 2;
			this->gunaPictureBox1->TabStop = false;
			// 
			// gunaGradientButton6
			// 
			this->gunaGradientButton6->Animated = true;
			this->gunaGradientButton6->AnimationHoverSpeed = 0.07F;
			this->gunaGradientButton6->AnimationSpeed = 0.03F;
			this->gunaGradientButton6->BaseColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->gunaGradientButton6->BaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->gunaGradientButton6->BorderColor = System::Drawing::Color::White;
		
			this->gunaTransition1->SetDecoration(this->gunaGradientButton6, Guna::UI::Animation::DecorationType::None);
			this->gunaGradientButton6->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaGradientButton6->FocusedColor = System::Drawing::Color::Empty;
			this->gunaGradientButton6->Font = (gcnew System::Drawing::Font(L"Gill Sans MT Ext Condensed Bold", 9));
			this->gunaGradientButton6->ForeColor = System::Drawing::Color::White;
			this->gunaGradientButton6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaGradientButton6.Image")));
			this->gunaGradientButton6->ImageAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->gunaGradientButton6->ImageSize = System::Drawing::Size(20, 20);
			this->gunaGradientButton6->Location = System::Drawing::Point(0, 537);
			this->gunaGradientButton6->Name = L"gunaGradientButton6";
			this->gunaGradientButton6->OnHoverBaseColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->gunaGradientButton6->OnHoverBaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaGradientButton6->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton6->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaGradientButton6->OnHoverImage = nullptr;
			this->gunaGradientButton6->OnPressedColor = System::Drawing::Color::Black;
			this->gunaGradientButton6->Size = System::Drawing::Size(257, 50);
			this->gunaGradientButton6->TabIndex = 6;
			this->gunaGradientButton6->Text = L"تنظیمات";
			this->gunaGradientButton6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->gunaGradientButton6->Click += gcnew System::EventHandler(this, &MainForm::gunaGradientButton6_Click);
			// 
			// gunaGradientButton1
			// 
			this->gunaGradientButton1->Animated = true;
			this->gunaGradientButton1->AnimationHoverSpeed = 0.07F;
			this->gunaGradientButton1->AnimationSpeed = 0.03F;
			this->gunaGradientButton1->BaseColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(232)));
			this->gunaGradientButton1->BaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->gunaGradientButton1->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
	
			this->gunaTransition1->SetDecoration(this->gunaGradientButton1, Guna::UI::Animation::DecorationType::None);
			this->gunaGradientButton1->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaGradientButton1->FocusedColor = System::Drawing::Color::White;
			this->gunaGradientButton1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaGradientButton1->ForeColor = System::Drawing::Color::White;
			this->gunaGradientButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaGradientButton1.Image")));
			this->gunaGradientButton1->ImageAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->gunaGradientButton1->ImageSize = System::Drawing::Size(20, 20);
			this->gunaGradientButton1->ImeMode = System::Windows::Forms::ImeMode::Hiragana;
			this->gunaGradientButton1->Location = System::Drawing::Point(0, 63);
			this->gunaGradientButton1->Name = L"gunaGradientButton1";
			this->gunaGradientButton1->OnHoverBaseColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaGradientButton1->OnHoverBaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->gunaGradientButton1->OnHoverBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaGradientButton1->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaGradientButton1->OnHoverImage = nullptr;
			this->gunaGradientButton1->OnPressedColor = System::Drawing::Color::Black;
			this->gunaGradientButton1->Size = System::Drawing::Size(257, 52);
			this->gunaGradientButton1->TabIndex = 1;
			this->gunaGradientButton1->Text = L"صفحه اصلی";
			this->gunaGradientButton1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->gunaGradientButton1->Click += gcnew System::EventHandler(this, &MainForm::gunaGradientButton1_Click);
			// 
			// gunaGradientButton2
			// 
			this->gunaGradientButton2->AnimationHoverSpeed = 0.07F;
			this->gunaGradientButton2->AnimationSpeed = 0.03F;
			this->gunaGradientButton2->BaseColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(52)));
			this->gunaGradientButton2->BaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->gunaGradientButton2->BorderColor = System::Drawing::Color::Black;
	
			this->gunaTransition1->SetDecoration(this->gunaGradientButton2, Guna::UI::Animation::DecorationType::None);
			this->gunaGradientButton2->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaGradientButton2->FocusedColor = System::Drawing::Color::Empty;
			this->gunaGradientButton2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaGradientButton2->ForeColor = System::Drawing::Color::White;
			this->gunaGradientButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaGradientButton2.Image")));
			this->gunaGradientButton2->ImageAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->gunaGradientButton2->ImageSize = System::Drawing::Size(20, 20);
			this->gunaGradientButton2->Location = System::Drawing::Point(0, 265);
			this->gunaGradientButton2->Name = L"gunaGradientButton2";
			this->gunaGradientButton2->OnHoverBaseColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->gunaGradientButton2->OnHoverBaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaGradientButton2->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton2->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaGradientButton2->OnHoverImage = nullptr;
			this->gunaGradientButton2->OnPressedColor = System::Drawing::Color::Black;
			this->gunaGradientButton2->Size = System::Drawing::Size(257, 50);
			this->gunaGradientButton2->TabIndex = 2;
			this->gunaGradientButton2->Text = L"پشتیبانی";
			this->gunaGradientButton2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->gunaGradientButton2->Click += gcnew System::EventHandler(this, &MainForm::gunaGradientButton2_Click);
			// 
			// gunaGradientButton4
			// 
			this->gunaGradientButton4->AnimationHoverSpeed = 0.07F;
			this->gunaGradientButton4->AnimationSpeed = 0.03F;
			this->gunaGradientButton4->BaseColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(52)));
			this->gunaGradientButton4->BaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->gunaGradientButton4->BorderColor = System::Drawing::Color::Black;

			this->gunaTransition1->SetDecoration(this->gunaGradientButton4, Guna::UI::Animation::DecorationType::None);
			this->gunaGradientButton4->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaGradientButton4->FocusedColor = System::Drawing::Color::Empty;
			this->gunaGradientButton4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaGradientButton4->ForeColor = System::Drawing::Color::White;
			this->gunaGradientButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaGradientButton4.Image")));
			this->gunaGradientButton4->ImageAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->gunaGradientButton4->ImageSize = System::Drawing::Size(20, 20);
			this->gunaGradientButton4->Location = System::Drawing::Point(-3, 215);
			this->gunaGradientButton4->Name = L"gunaGradientButton4";
			this->gunaGradientButton4->OnHoverBaseColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->gunaGradientButton4->OnHoverBaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaGradientButton4->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton4->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaGradientButton4->OnHoverImage = nullptr;
			this->gunaGradientButton4->OnPressedColor = System::Drawing::Color::Black;
			this->gunaGradientButton4->Size = System::Drawing::Size(260, 50);
			this->gunaGradientButton4->TabIndex = 4;
			this->gunaGradientButton4->Text = L"جست جو";
			this->gunaGradientButton4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->gunaGradientButton4->Click += gcnew System::EventHandler(this, &MainForm::gunaGradientButton4_Click);
			// 
			// gunaGradientButton3
			// 
			this->gunaGradientButton3->AnimationHoverSpeed = 0.07F;
			this->gunaGradientButton3->AnimationSpeed = 0.03F;
			this->gunaGradientButton3->BaseColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->gunaGradientButton3->BaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->gunaGradientButton3->BorderColor = System::Drawing::Color::Black;
	
			this->gunaTransition1->SetDecoration(this->gunaGradientButton3, Guna::UI::Animation::DecorationType::None);
			this->gunaGradientButton3->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaGradientButton3->FocusedColor = System::Drawing::Color::Empty;
			this->gunaGradientButton3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaGradientButton3->ForeColor = System::Drawing::Color::White;
			this->gunaGradientButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaGradientButton3.Image")));
			this->gunaGradientButton3->ImageAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->gunaGradientButton3->ImageSize = System::Drawing::Size(20, 20);
			this->gunaGradientButton3->Location = System::Drawing::Point(0, 165);
			this->gunaGradientButton3->Name = L"gunaGradientButton3";
			this->gunaGradientButton3->OnHoverBaseColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->gunaGradientButton3->OnHoverBaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaGradientButton3->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton3->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaGradientButton3->OnHoverImage = nullptr;
			this->gunaGradientButton3->OnPressedColor = System::Drawing::Color::Black;
			this->gunaGradientButton3->Size = System::Drawing::Size(257, 50);
			this->gunaGradientButton3->TabIndex = 3;
			this->gunaGradientButton3->Text = L"تغییر اطلاعات";
			this->gunaGradientButton3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->gunaGradientButton3->Click += gcnew System::EventHandler(this, &MainForm::gunaGradientButton3_Click);
			// 
			// gunaGradientButton5
			// 
			this->gunaGradientButton5->AnimationHoverSpeed = 0.07F;
			this->gunaGradientButton5->AnimationSpeed = 0.03F;
			this->gunaGradientButton5->BaseColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(232)));
			this->gunaGradientButton5->BaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->gunaGradientButton5->BorderColor = System::Drawing::Color::Black;
		
			this->gunaTransition1->SetDecoration(this->gunaGradientButton5, Guna::UI::Animation::DecorationType::None);
			this->gunaGradientButton5->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaGradientButton5->FocusedColor = System::Drawing::Color::Empty;
			this->gunaGradientButton5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaGradientButton5->ForeColor = System::Drawing::Color::White;
			this->gunaGradientButton5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaGradientButton5.Image")));
			this->gunaGradientButton5->ImageAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->gunaGradientButton5->ImageSize = System::Drawing::Size(20, 20);
			this->gunaGradientButton5->Location = System::Drawing::Point(0, 115);
			this->gunaGradientButton5->Name = L"gunaGradientButton5";
			this->gunaGradientButton5->OnHoverBaseColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->gunaGradientButton5->OnHoverBaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaGradientButton5->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton5->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaGradientButton5->OnHoverImage = nullptr;
			this->gunaGradientButton5->OnPressedColor = System::Drawing::Color::Black;
			this->gunaGradientButton5->Size = System::Drawing::Size(257, 50);
			this->gunaGradientButton5->TabIndex = 5;
			this->gunaGradientButton5->Text = L"ثبت کتاب";
			this->gunaGradientButton5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->gunaGradientButton5->Click += gcnew System::EventHandler(this, &MainForm::gunaGradientButton5_Click);
			// 
			// gunaDragControl1
			// 
			this->gunaDragControl1->TargetControl = this;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->panel1->Controls->Add(this->gunaGradientButton1);
			this->panel1->Controls->Add(this->gunaGradientButton5);
			this->panel1->Controls->Add(this->gunaGradientButton3);
			this->panel1->Controls->Add(this->gunaGradientButton2);
			this->panel1->Controls->Add(this->gunaGradientButton4);
			this->panel1->Controls->Add(this->gunaSeparator2);
			this->panel1->Controls->Add(this->gunaGradientButton6);
		
			this->gunaTransition1->SetDecoration(this->panel1, Guna::UI::Animation::DecorationType::None);
			this->panel1->Location = System::Drawing::Point(-218, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(255, 649);
			this->panel1->TabIndex = 8;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panel1_Paint);
			// 
			// gunaSeparator2
			// 
		
			this->gunaTransition1->SetDecoration(this->gunaSeparator2, Guna::UI::Animation::DecorationType::None);
			this->gunaSeparator2->LineColor = System::Drawing::Color::DimGray;
			this->gunaSeparator2->Location = System::Drawing::Point(0, 405);
			this->gunaSeparator2->Name = L"gunaSeparator2";
			this->gunaSeparator2->Size = System::Drawing::Size(257, 107);
			this->gunaSeparator2->TabIndex = 12;
			this->gunaSeparator2->Click += gcnew System::EventHandler(this, &MainForm::gunaSeparator2_Click);
			// 
			// Main_Panel
			// 
			this->Main_Panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->Main_Panel->Controls->Add(this->panel1);
			this->gunaTransition1->SetDecoration(this->Main_Panel, Guna::UI::Animation::DecorationType::None);
		
			this->Main_Panel->Dock = System::Windows::Forms::DockStyle::Right;
			this->Main_Panel->Location = System::Drawing::Point(962, 0);
			this->Main_Panel->Name = L"Main_Panel";
			this->Main_Panel->Size = System::Drawing::Size(40, 700);
			this->Main_Panel->TabIndex = 11;
			this->Main_Panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::Main_Panel_Paint);
			// 
			// BTN_Hide
			// 
			this->BTN_Hide->AnimationHoverSpeed = 0.07F;
			this->BTN_Hide->AnimationSpeed = 0.03F;
			this->BTN_Hide->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BTN_Hide.BackgroundImage")));
			this->BTN_Hide->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BTN_Hide->BaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->BTN_Hide->BorderColor = System::Drawing::Color::Black;

			this->gunaTransition1->SetDecoration(this->BTN_Hide, Guna::UI::Animation::DecorationType::None);
			this->BTN_Hide->DialogResult = System::Windows::Forms::DialogResult::None;
			this->BTN_Hide->FocusedColor = System::Drawing::Color::Empty;
			this->BTN_Hide->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->BTN_Hide->ForeColor = System::Drawing::Color::White;
			this->BTN_Hide->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BTN_Hide.Image")));
			this->BTN_Hide->ImageSize = System::Drawing::Size(25, 25);
			this->BTN_Hide->Location = System::Drawing::Point(724, 450);
			this->BTN_Hide->Name = L"BTN_Hide";
			this->BTN_Hide->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->BTN_Hide->OnHoverBorderColor = System::Drawing::Color::Black;
			this->BTN_Hide->OnHoverForeColor = System::Drawing::Color::White;
			this->BTN_Hide->OnHoverImage = nullptr;
			this->BTN_Hide->OnPressedColor = System::Drawing::Color::Black;
			this->BTN_Hide->Size = System::Drawing::Size(30, 30);
			this->BTN_Hide->TabIndex = 14;
			this->BTN_Hide->Visible = false;
			this->BTN_Hide->Click += gcnew System::EventHandler(this, &MainForm::BTN_Hide_Click_1);
			// 
			// BTN_Show
			// 
			this->BTN_Show->AnimationHoverSpeed = 0.07F;
			this->BTN_Show->AnimationSpeed = 0.03F;
			this->BTN_Show->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BTN_Show.BackgroundImage")));
			this->BTN_Show->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BTN_Show->BaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->BTN_Show->BorderColor = System::Drawing::Color::Black;
	
			this->gunaTransition1->SetDecoration(this->BTN_Show, Guna::UI::Animation::DecorationType::None);
			this->BTN_Show->DialogResult = System::Windows::Forms::DialogResult::None;
			this->BTN_Show->FocusedColor = System::Drawing::Color::Empty;
			this->BTN_Show->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->BTN_Show->ForeColor = System::Drawing::Color::White;
			this->BTN_Show->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BTN_Show.Image")));
			this->BTN_Show->ImageSize = System::Drawing::Size(25, 25);
			this->BTN_Show->Location = System::Drawing::Point(946, 448);
			this->BTN_Show->Name = L"BTN_Show";
			this->BTN_Show->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->BTN_Show->OnHoverBorderColor = System::Drawing::Color::Black;
			this->BTN_Show->OnHoverForeColor = System::Drawing::Color::White;
			this->BTN_Show->OnHoverImage = nullptr;
			this->BTN_Show->OnPressedColor = System::Drawing::Color::Black;
			this->BTN_Show->Size = System::Drawing::Size(30, 30);
			this->BTN_Show->TabIndex = 15;
			this->BTN_Show->Click += gcnew System::EventHandler(this, &MainForm::BTN_Show_Click_1);
			// 
			// gunaTransition1
			// 
			this->gunaTransition1->AnimationType = Guna::UI::Animation::AnimationType::Scale;
			this->gunaTransition1->Cursor = nullptr;
			animation2->AnimateOnlyDifferences = true;
			animation2->BlindCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation2.BlindCoeff")));
			animation2->LeafCoeff = 0;
			animation2->MaxTime = 1;
			animation2->MinTime = 0;
			animation2->MosaicCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation2.MosaicCoeff")));
			animation2->MosaicShift = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation2.MosaicShift")));
			animation2->MosaicSize = 0;
			animation2->Padding = System::Windows::Forms::Padding(0);
			animation2->RotateCoeff = 0;
			animation2->RotateLimit = 0;
			animation2->ScaleCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation2.ScaleCoeff")));
			animation2->SlideCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation2.SlideCoeff")));
			animation2->TimeCoeff = 0;
			animation2->TransparencyCoeff = 0;
			this->gunaTransition1->DefaultAnimation = animation2;
			
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::Disable;
			this->BackColor = System::Drawing::Color::Gray;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->Controls->Add(this->BTN_Show);
			this->Controls->Add(this->BTN_Hide);
			this->Controls->Add(this->gunaPictureBox1);
			this->Controls->Add(this->gunaControlBox1);
			this->Controls->Add(this->Main_Panel);
			this->gunaTransition1->SetDecoration(this, Guna::UI::Animation::DecorationType::None);
	
			this->DoubleBuffered = true;
			this->Name = L"MainForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->Size = System::Drawing::Size(1002, 700);
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->Main_Panel->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void gunaPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void gunaPictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void gunaGradientButton6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void gunaGradientButton2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void gunaCircleButton1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void gunaCircleButton1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void gunaCirclePictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void gunaCircleButton3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void BTN_Show_Click(System::Object^ sender, System::EventArgs^ e) 
{
	


}
private: System::Void BTN_Hide_Click(System::Object^ sender, System::EventArgs^ e) 
{
	

}
private: System::Void MainPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void gunaGradientButton5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void gunaGradientButton4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void gunaGradientButton3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void gunaGradientButton1_Click(System::Object^ sender, System::EventArgs^ e) {
}



private: System::Void MainPanel_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void gunaSeparator2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel6_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void gunaCircleButton1_Click_2(System::Object^ sender, System::EventArgs^ e)
{
}
private: System::Void BTN_Hide_Click_1(System::Object^ sender, System::EventArgs^ e)
{
	
	Main_Panel->Visible = false;
	BTN_Hide->Visible = false;
	BTN_Show->Visible = true;
	Main_Panel->Width = 40;
	Main_Panel->Visible = true;
	
	
}
private: System::Void BTN_Show_Click_1(System::Object^ sender, System::EventArgs^ e)
{
	
	BTN_Show->Visible = false;
	BTN_Hide->Visible = true;
	Main_Panel->Visible = false;
	Main_Panel->Width = 259;
	Main_Panel->Visible = true;
	
	
}

private: System::Void Main_Panel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
