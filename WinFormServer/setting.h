#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace WinFormServer {

	/// <summary>
	/// Summary for setting
	/// </summary>
	public ref class setting : public System::Windows::Forms::UserControl
	{
	public:
		setting(void)
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
		~setting()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Guna::UI::WinForms::GunaElipsePanel^ gunaElipsePanel1;
	protected:
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel8;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox6;
	private: Guna::UI::WinForms::GunaCirclePictureBox^ gunaCirclePictureBox1;
	private: Guna::UI::WinForms::GunaCirclePictureBox^ gunaCirclePictureBox2;
	private: Guna::UI::WinForms::GunaLinePanel^ gunaLinePanel1;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel6;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel5;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel4;
	private: Guna::UI::WinForms::GunaCirclePictureBox^ gunaCirclePictureBox5;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox5;
	private: Guna::UI::WinForms::GunaCirclePictureBox^ gunaCirclePictureBox4;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox2;
	private: System::Windows::Forms::Label^ label1;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox1;
	private: Guna::UI::WinForms::GunaCirclePictureBox^ gunaCirclePictureBox3;
	private: Guna::UI::WinForms::GunaLinePanel^ gunaLinePanel2;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel7;
	private: Guna::UI::WinForms::GunaCirclePictureBox^ gunaCirclePictureBox6;
	private: System::Windows::Forms::Button^ button1;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox4;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox3;

	private: Guna::UI::WinForms::GunaLinePanel^ gunaLinePanel3;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox7;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox8;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel3;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel2;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Panel^ panel1;
	private: Guna::UI::WinForms::GunaGradientButton^ gunaGradientButton3;
	private: Guna::UI::WinForms::GunaGradientButton^ gunaGradientButton1;
	private: Guna::UI::WinForms::GunaGradientButton^ gunaGradientButton2;
	private: Guna::UI::WinForms::GunaCircleButton^ gunaCircleButton1;
	private: Guna::UI::WinForms::GunaCircleButton^ gunaCircleButton2;
	private: Guna::UI::WinForms::GunaSeparator^ gunaSeparator2;
	private: Guna::UI::WinForms::GunaPictureBox^ gunaPictureBox1;
	private: Guna::UI::WinForms::GunaPictureBox^ gunaPictureBox2;
	private: Guna::UI::WinForms::GunaPictureBox^ gunaPictureBox3;









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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(setting::typeid));
			this->gunaElipsePanel1 = (gcnew Guna::UI::WinForms::GunaElipsePanel());
			this->gunaLabel8 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaTextBox6 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaCirclePictureBox1 = (gcnew Guna::UI::WinForms::GunaCirclePictureBox());
			this->gunaCirclePictureBox2 = (gcnew Guna::UI::WinForms::GunaCirclePictureBox());
			this->gunaLinePanel1 = (gcnew Guna::UI::WinForms::GunaLinePanel());
			this->gunaLabel6 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaLabel5 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaLabel4 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaCirclePictureBox5 = (gcnew Guna::UI::WinForms::GunaCirclePictureBox());
			this->gunaTextBox5 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaCirclePictureBox4 = (gcnew Guna::UI::WinForms::GunaCirclePictureBox());
			this->gunaTextBox2 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->gunaTextBox1 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaCirclePictureBox3 = (gcnew Guna::UI::WinForms::GunaCirclePictureBox());
			this->gunaLinePanel2 = (gcnew Guna::UI::WinForms::GunaLinePanel());
			this->gunaLabel7 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaCirclePictureBox6 = (gcnew Guna::UI::WinForms::GunaCirclePictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->gunaTextBox4 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaTextBox3 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaLinePanel3 = (gcnew Guna::UI::WinForms::GunaLinePanel());
			this->gunaTextBox7 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaTextBox8 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaLabel3 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaLabel2 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->gunaGradientButton3 = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->gunaGradientButton1 = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->gunaGradientButton2 = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->gunaCircleButton1 = (gcnew Guna::UI::WinForms::GunaCircleButton());
			this->gunaCircleButton2 = (gcnew Guna::UI::WinForms::GunaCircleButton());
			this->gunaSeparator2 = (gcnew Guna::UI::WinForms::GunaSeparator());
			this->gunaPictureBox1 = (gcnew Guna::UI::WinForms::GunaPictureBox());
			this->gunaPictureBox2 = (gcnew Guna::UI::WinForms::GunaPictureBox());
			this->gunaPictureBox3 = (gcnew Guna::UI::WinForms::GunaPictureBox());
			this->gunaElipsePanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaCirclePictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaCirclePictureBox2))->BeginInit();
			this->gunaLinePanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaCirclePictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaCirclePictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaCirclePictureBox3))->BeginInit();
			this->gunaLinePanel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaCirclePictureBox6))->BeginInit();
			this->gunaLinePanel3->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// gunaElipsePanel1
			// 
			this->gunaElipsePanel1->BackColor = System::Drawing::Color::Transparent;
			this->gunaElipsePanel1->BaseColor = System::Drawing::Color::DeepSkyBlue;
			this->gunaElipsePanel1->Controls->Add(this->gunaLabel8);
			this->gunaElipsePanel1->Controls->Add(this->gunaTextBox6);
			this->gunaElipsePanel1->Controls->Add(this->gunaCirclePictureBox1);
			this->gunaElipsePanel1->Location = System::Drawing::Point(21, 48);
			this->gunaElipsePanel1->Name = L"gunaElipsePanel1";
			this->gunaElipsePanel1->Size = System::Drawing::Size(783, 174);
			this->gunaElipsePanel1->TabIndex = 1;
			// 
			// gunaLabel8
			// 
			this->gunaLabel8->AutoSize = true;
			this->gunaLabel8->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaLabel8->Location = System::Drawing::Point(511, 107);
			this->gunaLabel8->Name = L"gunaLabel8";
			this->gunaLabel8->Size = System::Drawing::Size(54, 23);
			this->gunaLabel8->TabIndex = 15;
			this->gunaLabel8->Text = L"Name ";
			// 
			// gunaTextBox6
			// 
			this->gunaTextBox6->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox6->BorderColor = System::Drawing::Color::Silver;
			this->gunaTextBox6->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox6->Enabled = false;
			this->gunaTextBox6->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox6->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox6->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox6->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaTextBox6->Location = System::Drawing::Point(458, 58);
			this->gunaTextBox6->Name = L"gunaTextBox6";
			this->gunaTextBox6->PasswordChar = '\0';
			this->gunaTextBox6->SelectedText = L"";
			this->gunaTextBox6->Size = System::Drawing::Size(160, 33);
			this->gunaTextBox6->TabIndex = 10;
			this->gunaTextBox6->Text = L"No Name";
			this->gunaTextBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// gunaCirclePictureBox1
			// 
			this->gunaCirclePictureBox1->BaseColor = System::Drawing::Color::Maroon;
			this->gunaCirclePictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaCirclePictureBox1.Image")));
			this->gunaCirclePictureBox1->Location = System::Drawing::Point(640, 6);
			this->gunaCirclePictureBox1->Name = L"gunaCirclePictureBox1";
			this->gunaCirclePictureBox1->Size = System::Drawing::Size(118, 124);
			this->gunaCirclePictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->gunaCirclePictureBox1->TabIndex = 2;
			this->gunaCirclePictureBox1->TabStop = false;
			this->gunaCirclePictureBox1->UseTransfarantBackground = false;
			// 
			// gunaCirclePictureBox2
			// 
			this->gunaCirclePictureBox2->BaseColor = System::Drawing::Color::White;
			this->gunaCirclePictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaCirclePictureBox2.Image")));
			this->gunaCirclePictureBox2->Location = System::Drawing::Point(68, 183);
			this->gunaCirclePictureBox2->Name = L"gunaCirclePictureBox2";
			this->gunaCirclePictureBox2->Size = System::Drawing::Size(68, 71);
			this->gunaCirclePictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->gunaCirclePictureBox2->TabIndex = 2;
			this->gunaCirclePictureBox2->TabStop = false;
			this->gunaCirclePictureBox2->UseTransfarantBackground = false;
			// 
			// gunaLinePanel1
			// 
			this->gunaLinePanel1->Controls->Add(this->gunaLabel6);
			this->gunaLinePanel1->Controls->Add(this->gunaLabel5);
			this->gunaLinePanel1->Controls->Add(this->gunaLabel4);
			this->gunaLinePanel1->Controls->Add(this->gunaCirclePictureBox5);
			this->gunaLinePanel1->Controls->Add(this->gunaTextBox5);
			this->gunaLinePanel1->Controls->Add(this->gunaCirclePictureBox4);
			this->gunaLinePanel1->Controls->Add(this->gunaTextBox2);
			this->gunaLinePanel1->Controls->Add(this->label1);
			this->gunaLinePanel1->Controls->Add(this->gunaTextBox1);
			this->gunaLinePanel1->Controls->Add(this->gunaCirclePictureBox3);
			this->gunaLinePanel1->LineColor = System::Drawing::Color::Black;
			this->gunaLinePanel1->LineStyle = System::Windows::Forms::BorderStyle::None;
			this->gunaLinePanel1->Location = System::Drawing::Point(431, 259);
			this->gunaLinePanel1->Name = L"gunaLinePanel1";
			this->gunaLinePanel1->Size = System::Drawing::Size(372, 460);
			this->gunaLinePanel1->TabIndex = 3;
			// 
			// gunaLabel6
			// 
			this->gunaLabel6->AutoSize = true;
			this->gunaLabel6->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaLabel6->Location = System::Drawing::Point(125, 143);
			this->gunaLabel6->Name = L"gunaLabel6";
			this->gunaLabel6->Size = System::Drawing::Size(39, 23);
			this->gunaLabel6->TabIndex = 13;
			this->gunaLabel6->Text = L"شماره";
			// 
			// gunaLabel5
			// 
			this->gunaLabel5->AutoSize = true;
			this->gunaLabel5->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaLabel5->Location = System::Drawing::Point(125, 299);
			this->gunaLabel5->Name = L"gunaLabel5";
			this->gunaLabel5->Size = System::Drawing::Size(59, 23);
			this->gunaLabel5->TabIndex = 13;
			this->gunaLabel5->Text = L"نام کاربری";
			// 
			// gunaLabel4
			// 
			this->gunaLabel4->AutoSize = true;
			this->gunaLabel4->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaLabel4->Location = System::Drawing::Point(148, 399);
			this->gunaLabel4->Name = L"gunaLabel4";
			this->gunaLabel4->Size = System::Drawing::Size(36, 23);
			this->gunaLabel4->TabIndex = 13;
			this->gunaLabel4->Text = L"ایمیل";
			// 
			// gunaCirclePictureBox5
			// 
			this->gunaCirclePictureBox5->BaseColor = System::Drawing::Color::White;
			this->gunaCirclePictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaCirclePictureBox5.Image")));
			this->gunaCirclePictureBox5->Location = System::Drawing::Point(245, 197);
			this->gunaCirclePictureBox5->Name = L"gunaCirclePictureBox5";
			this->gunaCirclePictureBox5->Size = System::Drawing::Size(72, 76);
			this->gunaCirclePictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->gunaCirclePictureBox5->TabIndex = 9;
			this->gunaCirclePictureBox5->TabStop = false;
			this->gunaCirclePictureBox5->UseTransfarantBackground = false;
			// 
			// gunaTextBox5
			// 
			this->gunaTextBox5->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox5->BorderColor = System::Drawing::Color::Silver;
			this->gunaTextBox5->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox5->Enabled = false;
			this->gunaTextBox5->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox5->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox5->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaTextBox5->Location = System::Drawing::Point(70, 364);
			this->gunaTextBox5->Name = L"gunaTextBox5";
			this->gunaTextBox5->PasswordChar = '\0';
			this->gunaTextBox5->SelectedText = L"";
			this->gunaTextBox5->Size = System::Drawing::Size(160, 32);
			this->gunaTextBox5->TabIndex = 7;
			this->gunaTextBox5->Text = L"example@gmail.com";
			this->gunaTextBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// gunaCirclePictureBox4
			// 
			this->gunaCirclePictureBox4->BaseColor = System::Drawing::Color::White;
			this->gunaCirclePictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaCirclePictureBox4.Image")));
			this->gunaCirclePictureBox4->Location = System::Drawing::Point(245, 346);
			this->gunaCirclePictureBox4->Name = L"gunaCirclePictureBox4";
			this->gunaCirclePictureBox4->Size = System::Drawing::Size(72, 76);
			this->gunaCirclePictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->gunaCirclePictureBox4->TabIndex = 6;
			this->gunaCirclePictureBox4->TabStop = false;
			this->gunaCirclePictureBox4->UseTransfarantBackground = false;
			// 
			// gunaTextBox2
			// 
			this->gunaTextBox2->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox2->BorderColor = System::Drawing::Color::Silver;
			this->gunaTextBox2->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox2->Enabled = false;
			this->gunaTextBox2->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox2->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox2->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaTextBox2->Location = System::Drawing::Point(70, 228);
			this->gunaTextBox2->Name = L"gunaTextBox2";
			this->gunaTextBox2->PasswordChar = '\0';
			this->gunaTextBox2->SelectedText = L"";
			this->gunaTextBox2->Size = System::Drawing::Size(160, 32);
			this->gunaTextBox2->TabIndex = 5;
			this->gunaTextBox2->Text = L"@No_Name";
			this->gunaTextBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(242, 87);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 17);
			this->label1->TabIndex = 2;
			// 
			// gunaTextBox1
			// 
			this->gunaTextBox1->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox1->BorderColor = System::Drawing::Color::Silver;
			this->gunaTextBox1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox1->Enabled = false;
			this->gunaTextBox1->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox1->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox1->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaTextBox1->Location = System::Drawing::Point(70, 99);
			this->gunaTextBox1->Name = L"gunaTextBox1";
			this->gunaTextBox1->PasswordChar = '\0';
			this->gunaTextBox1->SelectedText = L"";
			this->gunaTextBox1->Size = System::Drawing::Size(160, 32);
			this->gunaTextBox1->TabIndex = 1;
			this->gunaTextBox1->Text = L"0989123456789";
			this->gunaTextBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// gunaCirclePictureBox3
			// 
			this->gunaCirclePictureBox3->BaseColor = System::Drawing::Color::White;
			this->gunaCirclePictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaCirclePictureBox3.Image")));
			this->gunaCirclePictureBox3->Location = System::Drawing::Point(245, 64);
			this->gunaCirclePictureBox3->Name = L"gunaCirclePictureBox3";
			this->gunaCirclePictureBox3->Size = System::Drawing::Size(72, 76);
			this->gunaCirclePictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->gunaCirclePictureBox3->TabIndex = 0;
			this->gunaCirclePictureBox3->TabStop = false;
			this->gunaCirclePictureBox3->UseTransfarantBackground = false;
			// 
			// gunaLinePanel2
			// 
			this->gunaLinePanel2->Controls->Add(this->gunaLabel7);
			this->gunaLinePanel2->Controls->Add(this->gunaCirclePictureBox6);
			this->gunaLinePanel2->Controls->Add(this->button1);
			this->gunaLinePanel2->Controls->Add(this->gunaTextBox4);
			this->gunaLinePanel2->Controls->Add(this->gunaTextBox3);
			this->gunaLinePanel2->LineColor = System::Drawing::Color::Black;
			this->gunaLinePanel2->LineStyle = System::Windows::Forms::BorderStyle::None;
			this->gunaLinePanel2->Location = System::Drawing::Point(30, 260);
			this->gunaLinePanel2->Name = L"gunaLinePanel2";
			this->gunaLinePanel2->Size = System::Drawing::Size(377, 232);
			this->gunaLinePanel2->TabIndex = 4;
			// 
			// gunaLabel7
			// 
			this->gunaLabel7->AutoSize = true;
			this->gunaLabel7->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaLabel7->Location = System::Drawing::Point(294, 143);
			this->gunaLabel7->Name = L"gunaLabel7";
			this->gunaLabel7->Size = System::Drawing::Size(54, 23);
			this->gunaLabel7->TabIndex = 14;
			this->gunaLabel7->Text = L"تغییر رمز";
			// 
			// gunaCirclePictureBox6
			// 
			this->gunaCirclePictureBox6->BaseColor = System::Drawing::Color::White;
			this->gunaCirclePictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaCirclePictureBox6.Image")));
			this->gunaCirclePictureBox6->Location = System::Drawing::Point(285, 55);
			this->gunaCirclePictureBox6->Name = L"gunaCirclePictureBox6";
			this->gunaCirclePictureBox6->Size = System::Drawing::Size(72, 76);
			this->gunaCirclePictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->gunaCirclePictureBox6->TabIndex = 10;
			this->gunaCirclePictureBox6->TabStop = false;
			this->gunaCirclePictureBox6->UseTransfarantBackground = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button1->Location = System::Drawing::Point(29, 172);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(207, 42);
			this->button1->TabIndex = 5;
			this->button1->Text = L"ثبت";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// gunaTextBox4
			// 
			this->gunaTextBox4->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox4->BorderColor = System::Drawing::Color::Silver;
			this->gunaTextBox4->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox4->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox4->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox4->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox4->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaTextBox4->Location = System::Drawing::Point(29, 107);
			this->gunaTextBox4->Name = L"gunaTextBox4";
			this->gunaTextBox4->PasswordChar = '\0';
			this->gunaTextBox4->SelectedText = L"";
			this->gunaTextBox4->Size = System::Drawing::Size(207, 33);
			this->gunaTextBox4->TabIndex = 2;
			this->gunaTextBox4->Text = L"تکرار رمز عبور";
			this->gunaTextBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// gunaTextBox3
			// 
			this->gunaTextBox3->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox3->BorderColor = System::Drawing::Color::Silver;
			this->gunaTextBox3->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox3->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox3->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox3->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox3->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaTextBox3->Location = System::Drawing::Point(29, 55);
			this->gunaTextBox3->Name = L"gunaTextBox3";
			this->gunaTextBox3->PasswordChar = '\0';
			this->gunaTextBox3->SelectedText = L"";
			this->gunaTextBox3->Size = System::Drawing::Size(207, 33);
			this->gunaTextBox3->TabIndex = 1;
			this->gunaTextBox3->Text = L"رمز را وارد کنید";
			this->gunaTextBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// gunaLinePanel3
			// 
			this->gunaLinePanel3->Controls->Add(this->gunaTextBox7);
			this->gunaLinePanel3->Controls->Add(this->gunaTextBox8);
			this->gunaLinePanel3->Controls->Add(this->gunaLabel3);
			this->gunaLinePanel3->Controls->Add(this->gunaLabel2);
			this->gunaLinePanel3->LineColor = System::Drawing::Color::Black;
			this->gunaLinePanel3->LineStyle = System::Windows::Forms::BorderStyle::None;
			this->gunaLinePanel3->Location = System::Drawing::Point(30, 498);
			this->gunaLinePanel3->Name = L"gunaLinePanel3";
			this->gunaLinePanel3->Size = System::Drawing::Size(377, 221);
			this->gunaLinePanel3->TabIndex = 5;
			// 
			// gunaTextBox7
			// 
			this->gunaTextBox7->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox7->BorderColor = System::Drawing::Color::Silver;
			this->gunaTextBox7->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox7->Enabled = false;
			this->gunaTextBox7->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox7->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox7->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox7->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaTextBox7->Location = System::Drawing::Point(85, 50);
			this->gunaTextBox7->Name = L"gunaTextBox7";
			this->gunaTextBox7->PasswordChar = '\0';
			this->gunaTextBox7->SelectedText = L"";
			this->gunaTextBox7->Size = System::Drawing::Size(160, 33);
			this->gunaTextBox7->TabIndex = 10;
			this->gunaTextBox7->Text = L"بی نام";
			this->gunaTextBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// gunaTextBox8
			// 
			this->gunaTextBox8->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox8->BorderColor = System::Drawing::Color::Silver;
			this->gunaTextBox8->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox8->Enabled = false;
			this->gunaTextBox8->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox8->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox8->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox8->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaTextBox8->Location = System::Drawing::Point(85, 150);
			this->gunaTextBox8->Name = L"gunaTextBox8";
			this->gunaTextBox8->PasswordChar = '\0';
			this->gunaTextBox8->SelectedText = L"";
			this->gunaTextBox8->Size = System::Drawing::Size(160, 33);
			this->gunaTextBox8->TabIndex = 11;
			this->gunaTextBox8->Text = L"بی نامی";
			this->gunaTextBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// gunaLabel3
			// 
			this->gunaLabel3->AutoSize = true;
			this->gunaLabel3->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaLabel3->Location = System::Drawing::Point(281, 160);
			this->gunaLabel3->Name = L"gunaLabel3";
			this->gunaLabel3->Size = System::Drawing::Size(69, 23);
			this->gunaLabel3->TabIndex = 12;
			this->gunaLabel3->Text = L"نام خانوادگی";
			this->gunaLabel3->Click += gcnew System::EventHandler(this, &setting::gunaLabel3_Click);
			// 
			// gunaLabel2
			// 
			this->gunaLabel2->AutoSize = true;
			this->gunaLabel2->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaLabel2->Location = System::Drawing::Point(326, 60);
			this->gunaLabel2->Name = L"gunaLabel2";
			this->gunaLabel2->Size = System::Drawing::Size(22, 23);
			this->gunaLabel2->TabIndex = 11;
			this->gunaLabel2->Text = L"نام";
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::MediumSlateBlue;
			this->flowLayoutPanel1->Location = System::Drawing::Point(810, 48);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(214, 671);
			this->flowLayoutPanel1->TabIndex = 6;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::MediumSlateBlue;
			this->panel1->Controls->Add(this->gunaGradientButton3);
			this->panel1->Controls->Add(this->gunaGradientButton1);
			this->panel1->Controls->Add(this->gunaGradientButton2);
			this->panel1->Controls->Add(this->gunaCircleButton1);
			this->panel1->Controls->Add(this->gunaCircleButton2);
			this->panel1->Controls->Add(this->gunaSeparator2);
			this->panel1->Location = System::Drawing::Point(810, 157);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(213, 567);
			this->panel1->TabIndex = 3;
			// 
			// gunaGradientButton3
			// 
			this->gunaGradientButton3->AnimationHoverSpeed = 0.07F;
			this->gunaGradientButton3->AnimationSpeed = 0.03F;
			this->gunaGradientButton3->BaseColor1 = System::Drawing::Color::MediumBlue;
			this->gunaGradientButton3->BaseColor2 = System::Drawing::Color::Black;
			this->gunaGradientButton3->BorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton3->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaGradientButton3->FocusedColor = System::Drawing::Color::Empty;
			this->gunaGradientButton3->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaGradientButton3->ForeColor = System::Drawing::Color::White;
			this->gunaGradientButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaGradientButton3.Image")));
			this->gunaGradientButton3->ImageAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->gunaGradientButton3->ImageSize = System::Drawing::Size(50, 50);
			this->gunaGradientButton3->Location = System::Drawing::Point(0, 163);
			this->gunaGradientButton3->Name = L"gunaGradientButton3";
			this->gunaGradientButton3->OnHoverBaseColor1 = System::Drawing::Color::DarkBlue;
			this->gunaGradientButton3->OnHoverBaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->gunaGradientButton3->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton3->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaGradientButton3->OnHoverImage = nullptr;
			this->gunaGradientButton3->OnPressedColor = System::Drawing::Color::Black;
			this->gunaGradientButton3->Size = System::Drawing::Size(214, 94);
			this->gunaGradientButton3->TabIndex = 13;
			this->gunaGradientButton3->Text = L"تنظیمات";
			// 
			// gunaGradientButton1
			// 
			this->gunaGradientButton1->AnimationHoverSpeed = 0.07F;
			this->gunaGradientButton1->AnimationSpeed = 0.03F;
			this->gunaGradientButton1->BaseColor1 = System::Drawing::Color::MediumBlue;
			this->gunaGradientButton1->BaseColor2 = System::Drawing::Color::Black;
			this->gunaGradientButton1->BorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton1->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaGradientButton1->FocusedColor = System::Drawing::Color::Empty;
			this->gunaGradientButton1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaGradientButton1->ForeColor = System::Drawing::Color::White;
			this->gunaGradientButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaGradientButton1.Image")));
			this->gunaGradientButton1->ImageAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->gunaGradientButton1->ImageSize = System::Drawing::Size(50, 50);
			this->gunaGradientButton1->Location = System::Drawing::Point(0, 87);
			this->gunaGradientButton1->Name = L"gunaGradientButton1";
			this->gunaGradientButton1->OnHoverBaseColor1 = System::Drawing::Color::DarkBlue;
			this->gunaGradientButton1->OnHoverBaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->gunaGradientButton1->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton1->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaGradientButton1->OnHoverImage = nullptr;
			this->gunaGradientButton1->OnPressedColor = System::Drawing::Color::Black;
			this->gunaGradientButton1->Size = System::Drawing::Size(214, 90);
			this->gunaGradientButton1->TabIndex = 12;
			this->gunaGradientButton1->Text = L"تغییر کتاب";
			// 
			// gunaGradientButton2
			// 
			this->gunaGradientButton2->AnimationHoverSpeed = 0.07F;
			this->gunaGradientButton2->AnimationSpeed = 0.03F;
			this->gunaGradientButton2->BaseColor1 = System::Drawing::Color::MediumBlue;
			this->gunaGradientButton2->BaseColor2 = System::Drawing::Color::Black;
			this->gunaGradientButton2->BorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton2->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaGradientButton2->FocusedColor = System::Drawing::Color::Empty;
			this->gunaGradientButton2->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaGradientButton2->ForeColor = System::Drawing::Color::White;
			this->gunaGradientButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaGradientButton2.Image")));
			this->gunaGradientButton2->ImageAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->gunaGradientButton2->ImageSize = System::Drawing::Size(50, 50);
			this->gunaGradientButton2->Location = System::Drawing::Point(0, 3);
			this->gunaGradientButton2->Name = L"gunaGradientButton2";
			this->gunaGradientButton2->OnHoverBaseColor1 = System::Drawing::Color::DarkBlue;
			this->gunaGradientButton2->OnHoverBaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->gunaGradientButton2->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton2->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaGradientButton2->OnHoverImage = nullptr;
			this->gunaGradientButton2->OnPressedColor = System::Drawing::Color::Black;
			this->gunaGradientButton2->Size = System::Drawing::Size(214, 89);
			this->gunaGradientButton2->TabIndex = 11;
			this->gunaGradientButton2->Text = L"ثبت کتاب";
			// 
			// gunaCircleButton1
			// 
			this->gunaCircleButton1->AnimationHoverSpeed = 0.07F;
			this->gunaCircleButton1->AnimationSpeed = 0.03F;
			this->gunaCircleButton1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaCircleButton1.BackgroundImage")));
			this->gunaCircleButton1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->gunaCircleButton1->BaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->gunaCircleButton1->BorderColor = System::Drawing::Color::Black;
			this->gunaCircleButton1->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaCircleButton1->FocusedColor = System::Drawing::Color::Empty;
			this->gunaCircleButton1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaCircleButton1->ForeColor = System::Drawing::Color::White;
			this->gunaCircleButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaCircleButton1.Image")));
			this->gunaCircleButton1->ImageSize = System::Drawing::Size(25, 25);
			this->gunaCircleButton1->Location = System::Drawing::Point(4, 415);
			this->gunaCircleButton1->Margin = System::Windows::Forms::Padding(4);
			this->gunaCircleButton1->Name = L"gunaCircleButton1";
			this->gunaCircleButton1->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCircleButton1->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaCircleButton1->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaCircleButton1->OnHoverImage = nullptr;
			this->gunaCircleButton1->OnPressedColor = System::Drawing::Color::Black;
			this->gunaCircleButton1->Size = System::Drawing::Size(40, 37);
			this->gunaCircleButton1->TabIndex = 10;
			// 
			// gunaCircleButton2
			// 
			this->gunaCircleButton2->AnimationHoverSpeed = 0.07F;
			this->gunaCircleButton2->AnimationSpeed = 0.03F;
			this->gunaCircleButton2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaCircleButton2.BackgroundImage")));
			this->gunaCircleButton2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->gunaCircleButton2->BaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->gunaCircleButton2->BorderColor = System::Drawing::Color::Black;
			this->gunaCircleButton2->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaCircleButton2->FocusedColor = System::Drawing::Color::Empty;
			this->gunaCircleButton2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaCircleButton2->ForeColor = System::Drawing::Color::White;
			this->gunaCircleButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaCircleButton2.Image")));
			this->gunaCircleButton2->ImageSize = System::Drawing::Size(25, 25);
			this->gunaCircleButton2->Location = System::Drawing::Point(163, 415);
			this->gunaCircleButton2->Margin = System::Windows::Forms::Padding(4);
			this->gunaCircleButton2->Name = L"gunaCircleButton2";
			this->gunaCircleButton2->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCircleButton2->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaCircleButton2->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaCircleButton2->OnHoverImage = nullptr;
			this->gunaCircleButton2->OnPressedColor = System::Drawing::Color::Black;
			this->gunaCircleButton2->Size = System::Drawing::Size(40, 37);
			this->gunaCircleButton2->TabIndex = 11;
			// 
			// gunaSeparator2
			// 
			this->gunaSeparator2->BackColor = System::Drawing::Color::Transparent;
			this->gunaSeparator2->LineColor = System::Drawing::Color::Blue;
			this->gunaSeparator2->Location = System::Drawing::Point(0, 425);
			this->gunaSeparator2->Margin = System::Windows::Forms::Padding(4);
			this->gunaSeparator2->Name = L"gunaSeparator2";
			this->gunaSeparator2->Size = System::Drawing::Size(155, 17);
			this->gunaSeparator2->TabIndex = 8;
			// 
			// gunaPictureBox1
			// 
			this->gunaPictureBox1->BaseColor = System::Drawing::Color::White;
			this->gunaPictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaPictureBox1.Image")));
			this->gunaPictureBox1->Location = System::Drawing::Point(973, 0);
			this->gunaPictureBox1->Name = L"gunaPictureBox1";
			this->gunaPictureBox1->Size = System::Drawing::Size(51, 48);
			this->gunaPictureBox1->TabIndex = 7;
			this->gunaPictureBox1->TabStop = false;
			// 
			// gunaPictureBox2
			// 
			this->gunaPictureBox2->BaseColor = System::Drawing::Color::White;
			this->gunaPictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaPictureBox2.Image")));
			this->gunaPictureBox2->Location = System::Drawing::Point(914, 0);
			this->gunaPictureBox2->Name = L"gunaPictureBox2";
			this->gunaPictureBox2->Size = System::Drawing::Size(51, 48);
			this->gunaPictureBox2->TabIndex = 8;
			this->gunaPictureBox2->TabStop = false;
			// 
			// gunaPictureBox3
			// 
			this->gunaPictureBox3->BaseColor = System::Drawing::Color::White;
			this->gunaPictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaPictureBox3.Image")));
			this->gunaPictureBox3->Location = System::Drawing::Point(831, 0);
			this->gunaPictureBox3->Name = L"gunaPictureBox3";
			this->gunaPictureBox3->Size = System::Drawing::Size(77, 48);
			this->gunaPictureBox3->TabIndex = 9;
			this->gunaPictureBox3->TabStop = false;
			// 
			// setting
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->gunaPictureBox3);
			this->Controls->Add(this->gunaPictureBox2);
			this->Controls->Add(this->gunaPictureBox1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->gunaLinePanel3);
			this->Controls->Add(this->gunaLinePanel2);
			this->Controls->Add(this->gunaLinePanel1);
			this->Controls->Add(this->gunaCirclePictureBox2);
			this->Controls->Add(this->gunaElipsePanel1);
			this->Name = L"setting";
			this->Padding = System::Windows::Forms::Padding(2);
			this->Size = System::Drawing::Size(1024, 724);
			this->Load += gcnew System::EventHandler(this, &setting::setting_Load);
			this->gunaElipsePanel1->ResumeLayout(false);
			this->gunaElipsePanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaCirclePictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaCirclePictureBox2))->EndInit();
			this->gunaLinePanel1->ResumeLayout(false);
			this->gunaLinePanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaCirclePictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaCirclePictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaCirclePictureBox3))->EndInit();
			this->gunaLinePanel2->ResumeLayout(false);
			this->gunaLinePanel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaCirclePictureBox6))->EndInit();
			this->gunaLinePanel3->ResumeLayout(false);
			this->gunaLinePanel3->PerformLayout();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void setting_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void gunaLabel3_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
