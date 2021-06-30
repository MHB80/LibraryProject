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
			this->gunaCirclePictureBox1 = (gcnew Guna::UI::WinForms::GunaCirclePictureBox());
			this->gunaCirclePictureBox2 = (gcnew Guna::UI::WinForms::GunaCirclePictureBox());
			this->gunaLinePanel1 = (gcnew Guna::UI::WinForms::GunaLinePanel());
			this->gunaCirclePictureBox3 = (gcnew Guna::UI::WinForms::GunaCirclePictureBox());
			this->gunaTextBox1 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->gunaTextBox2 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaLinePanel2 = (gcnew Guna::UI::WinForms::GunaLinePanel());
			this->gunaTextBox3 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaTextBox4 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->gunaCirclePictureBox4 = (gcnew Guna::UI::WinForms::GunaCirclePictureBox());
			this->gunaTextBox5 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaCirclePictureBox5 = (gcnew Guna::UI::WinForms::GunaCirclePictureBox());
			this->gunaCirclePictureBox6 = (gcnew Guna::UI::WinForms::GunaCirclePictureBox());
			this->gunaTextBox6 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaLinePanel3 = (gcnew Guna::UI::WinForms::GunaLinePanel());
			this->gunaLabel2 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaLabel3 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaTextBox7 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaTextBox8 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaLabel4 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaLabel5 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaLabel6 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaLabel7 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaLabel8 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaElipsePanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaCirclePictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaCirclePictureBox2))->BeginInit();
			this->gunaLinePanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaCirclePictureBox3))->BeginInit();
			this->gunaLinePanel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaCirclePictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaCirclePictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaCirclePictureBox6))->BeginInit();
			this->gunaLinePanel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// gunaElipsePanel1
			// 
			this->gunaElipsePanel1->BackColor = System::Drawing::Color::Transparent;
			this->gunaElipsePanel1->BaseColor = System::Drawing::Color::DeepSkyBlue;
			this->gunaElipsePanel1->Controls->Add(this->gunaLabel8);
			this->gunaElipsePanel1->Controls->Add(this->gunaTextBox6);
			this->gunaElipsePanel1->Controls->Add(this->gunaCirclePictureBox1);
			this->gunaElipsePanel1->Location = System::Drawing::Point(21, 22);
			this->gunaElipsePanel1->Name = L"gunaElipsePanel1";
			this->gunaElipsePanel1->Size = System::Drawing::Size(843, 174);
			this->gunaElipsePanel1->TabIndex = 1;
			// 
			// gunaCirclePictureBox1
			// 
			this->gunaCirclePictureBox1->BaseColor = System::Drawing::Color::Maroon;
			this->gunaCirclePictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaCirclePictureBox1.Image")));
			this->gunaCirclePictureBox1->Location = System::Drawing::Point(691, 15);
			this->gunaCirclePictureBox1->Name = L"gunaCirclePictureBox1";
			this->gunaCirclePictureBox1->Size = System::Drawing::Size(131, 138);
			this->gunaCirclePictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->gunaCirclePictureBox1->TabIndex = 2;
			this->gunaCirclePictureBox1->TabStop = false;
			this->gunaCirclePictureBox1->UseTransfarantBackground = false;
			// 
			// gunaCirclePictureBox2
			// 
			this->gunaCirclePictureBox2->BaseColor = System::Drawing::Color::White;
			this->gunaCirclePictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaCirclePictureBox2.Image")));
			this->gunaCirclePictureBox2->Location = System::Drawing::Point(77, 152);
			this->gunaCirclePictureBox2->Name = L"gunaCirclePictureBox2";
			this->gunaCirclePictureBox2->Size = System::Drawing::Size(72, 76);
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
			this->gunaLinePanel1->Location = System::Drawing::Point(432, 239);
			this->gunaLinePanel1->Name = L"gunaLinePanel1";
			this->gunaLinePanel1->Size = System::Drawing::Size(432, 317);
			this->gunaLinePanel1->TabIndex = 3;
			// 
			// gunaCirclePictureBox3
			// 
			this->gunaCirclePictureBox3->BaseColor = System::Drawing::Color::White;
			this->gunaCirclePictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaCirclePictureBox3.Image")));
			this->gunaCirclePictureBox3->Location = System::Drawing::Point(350, 17);
			this->gunaCirclePictureBox3->Name = L"gunaCirclePictureBox3";
			this->gunaCirclePictureBox3->Size = System::Drawing::Size(72, 76);
			this->gunaCirclePictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->gunaCirclePictureBox3->TabIndex = 0;
			this->gunaCirclePictureBox3->TabStop = false;
			this->gunaCirclePictureBox3->UseTransfarantBackground = false;
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
			this->gunaTextBox1->Location = System::Drawing::Point(184, 42);
			this->gunaTextBox1->Name = L"gunaTextBox1";
			this->gunaTextBox1->PasswordChar = '\0';
			this->gunaTextBox1->SelectedText = L"";
			this->gunaTextBox1->Size = System::Drawing::Size(160, 32);
			this->gunaTextBox1->TabIndex = 1;
			this->gunaTextBox1->Text = L"0989123456789";
			this->gunaTextBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(242, 87);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 17);
			this->label1->TabIndex = 2;
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
			this->gunaTextBox2->Location = System::Drawing::Point(184, 134);
			this->gunaTextBox2->Name = L"gunaTextBox2";
			this->gunaTextBox2->PasswordChar = '\0';
			this->gunaTextBox2->SelectedText = L"";
			this->gunaTextBox2->Size = System::Drawing::Size(160, 32);
			this->gunaTextBox2->TabIndex = 5;
			this->gunaTextBox2->Text = L"@No_Name";
			this->gunaTextBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
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
			this->gunaLinePanel2->Location = System::Drawing::Point(30, 239);
			this->gunaLinePanel2->Name = L"gunaLinePanel2";
			this->gunaLinePanel2->Size = System::Drawing::Size(377, 166);
			this->gunaLinePanel2->TabIndex = 4;
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
			this->gunaTextBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaTextBox3->Location = System::Drawing::Point(38, 17);
			this->gunaTextBox3->Name = L"gunaTextBox3";
			this->gunaTextBox3->PasswordChar = '\0';
			this->gunaTextBox3->SelectedText = L"";
			this->gunaTextBox3->Size = System::Drawing::Size(207, 32);
			this->gunaTextBox3->TabIndex = 1;
			this->gunaTextBox3->Text = L"رمز را وارد کنید";
			this->gunaTextBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
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
			this->gunaTextBox4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaTextBox4->Location = System::Drawing::Point(38, 55);
			this->gunaTextBox4->Name = L"gunaTextBox4";
			this->gunaTextBox4->PasswordChar = '\0';
			this->gunaTextBox4->SelectedText = L"";
			this->gunaTextBox4->Size = System::Drawing::Size(207, 32);
			this->gunaTextBox4->TabIndex = 2;
			this->gunaTextBox4->Text = L"تکرار رمز عبور";
			this->gunaTextBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(38, 96);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(207, 42);
			this->button1->TabIndex = 5;
			this->button1->Text = L"ثبت";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// gunaCirclePictureBox4
			// 
			this->gunaCirclePictureBox4->BaseColor = System::Drawing::Color::White;
			this->gunaCirclePictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaCirclePictureBox4.Image")));
			this->gunaCirclePictureBox4->Location = System::Drawing::Point(350, 199);
			this->gunaCirclePictureBox4->Name = L"gunaCirclePictureBox4";
			this->gunaCirclePictureBox4->Size = System::Drawing::Size(72, 76);
			this->gunaCirclePictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->gunaCirclePictureBox4->TabIndex = 6;
			this->gunaCirclePictureBox4->TabStop = false;
			this->gunaCirclePictureBox4->UseTransfarantBackground = false;
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
			this->gunaTextBox5->Location = System::Drawing::Point(184, 216);
			this->gunaTextBox5->Name = L"gunaTextBox5";
			this->gunaTextBox5->PasswordChar = '\0';
			this->gunaTextBox5->SelectedText = L"";
			this->gunaTextBox5->Size = System::Drawing::Size(160, 32);
			this->gunaTextBox5->TabIndex = 7;
			this->gunaTextBox5->Text = L"example@gmail.com";
			this->gunaTextBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// gunaCirclePictureBox5
			// 
			this->gunaCirclePictureBox5->BaseColor = System::Drawing::Color::White;
			this->gunaCirclePictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaCirclePictureBox5.Image")));
			this->gunaCirclePictureBox5->Location = System::Drawing::Point(350, 110);
			this->gunaCirclePictureBox5->Name = L"gunaCirclePictureBox5";
			this->gunaCirclePictureBox5->Size = System::Drawing::Size(72, 76);
			this->gunaCirclePictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->gunaCirclePictureBox5->TabIndex = 9;
			this->gunaCirclePictureBox5->TabStop = false;
			this->gunaCirclePictureBox5->UseTransfarantBackground = false;
			// 
			// gunaCirclePictureBox6
			// 
			this->gunaCirclePictureBox6->BaseColor = System::Drawing::Color::White;
			this->gunaCirclePictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaCirclePictureBox6.Image")));
			this->gunaCirclePictureBox6->Location = System::Drawing::Point(285, 17);
			this->gunaCirclePictureBox6->Name = L"gunaCirclePictureBox6";
			this->gunaCirclePictureBox6->Size = System::Drawing::Size(72, 76);
			this->gunaCirclePictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->gunaCirclePictureBox6->TabIndex = 10;
			this->gunaCirclePictureBox6->TabStop = false;
			this->gunaCirclePictureBox6->UseTransfarantBackground = false;
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
			this->gunaTextBox6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaTextBox6->Location = System::Drawing::Point(522, 58);
			this->gunaTextBox6->Name = L"gunaTextBox6";
			this->gunaTextBox6->PasswordChar = '\0';
			this->gunaTextBox6->SelectedText = L"";
			this->gunaTextBox6->Size = System::Drawing::Size(160, 32);
			this->gunaTextBox6->TabIndex = 10;
			this->gunaTextBox6->Text = L"No Name";
			this->gunaTextBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// gunaLinePanel3
			// 
			this->gunaLinePanel3->Controls->Add(this->gunaTextBox7);
			this->gunaLinePanel3->Controls->Add(this->gunaTextBox8);
			this->gunaLinePanel3->Controls->Add(this->gunaLabel3);
			this->gunaLinePanel3->Controls->Add(this->gunaLabel2);
			this->gunaLinePanel3->LineColor = System::Drawing::Color::Black;
			this->gunaLinePanel3->LineStyle = System::Windows::Forms::BorderStyle::None;
			this->gunaLinePanel3->Location = System::Drawing::Point(30, 411);
			this->gunaLinePanel3->Name = L"gunaLinePanel3";
			this->gunaLinePanel3->Size = System::Drawing::Size(377, 150);
			this->gunaLinePanel3->TabIndex = 5;
			// 
			// gunaLabel2
			// 
			this->gunaLabel2->AutoSize = true;
			this->gunaLabel2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaLabel2->Location = System::Drawing::Point(330, 27);
			this->gunaLabel2->Name = L"gunaLabel2";
			this->gunaLabel2->Size = System::Drawing::Size(27, 20);
			this->gunaLabel2->TabIndex = 11;
			this->gunaLabel2->Text = L"نام";
			// 
			// gunaLabel3
			// 
			this->gunaLabel3->AutoSize = true;
			this->gunaLabel3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaLabel3->Location = System::Drawing::Point(281, 70);
			this->gunaLabel3->Name = L"gunaLabel3";
			this->gunaLabel3->Size = System::Drawing::Size(90, 20);
			this->gunaLabel3->TabIndex = 12;
			this->gunaLabel3->Text = L"نام خانوادگی";
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
			this->gunaTextBox7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaTextBox7->Location = System::Drawing::Point(85, 15);
			this->gunaTextBox7->Name = L"gunaTextBox7";
			this->gunaTextBox7->PasswordChar = '\0';
			this->gunaTextBox7->SelectedText = L"";
			this->gunaTextBox7->Size = System::Drawing::Size(160, 32);
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
			this->gunaTextBox8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaTextBox8->Location = System::Drawing::Point(85, 70);
			this->gunaTextBox8->Name = L"gunaTextBox8";
			this->gunaTextBox8->PasswordChar = '\0';
			this->gunaTextBox8->SelectedText = L"";
			this->gunaTextBox8->Size = System::Drawing::Size(160, 32);
			this->gunaTextBox8->TabIndex = 11;
			this->gunaTextBox8->Text = L"بی نامی";
			this->gunaTextBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// gunaLabel4
			// 
			this->gunaLabel4->AutoSize = true;
			this->gunaLabel4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaLabel4->Location = System::Drawing::Point(241, 255);
			this->gunaLabel4->Name = L"gunaLabel4";
			this->gunaLabel4->Size = System::Drawing::Size(42, 20);
			this->gunaLabel4->TabIndex = 13;
			this->gunaLabel4->Text = L"ایمیل";
			// 
			// gunaLabel5
			// 
			this->gunaLabel5->AutoSize = true;
			this->gunaLabel5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaLabel5->Location = System::Drawing::Point(225, 172);
			this->gunaLabel5->Name = L"gunaLabel5";
			this->gunaLabel5->Size = System::Drawing::Size(70, 20);
			this->gunaLabel5->TabIndex = 13;
			this->gunaLabel5->Text = L"نام کاربری";
			// 
			// gunaLabel6
			// 
			this->gunaLabel6->AutoSize = true;
			this->gunaLabel6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaLabel6->Location = System::Drawing::Point(235, 84);
			this->gunaLabel6->Name = L"gunaLabel6";
			this->gunaLabel6->Size = System::Drawing::Size(48, 20);
			this->gunaLabel6->TabIndex = 13;
			this->gunaLabel6->Text = L"شماره";
			// 
			// gunaLabel7
			// 
			this->gunaLabel7->AutoSize = true;
			this->gunaLabel7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaLabel7->Location = System::Drawing::Point(294, 107);
			this->gunaLabel7->Name = L"gunaLabel7";
			this->gunaLabel7->Size = System::Drawing::Size(63, 20);
			this->gunaLabel7->TabIndex = 14;
			this->gunaLabel7->Text = L"تغییر رمز";
			// 
			// gunaLabel8
			// 
			this->gunaLabel8->AutoSize = true;
			this->gunaLabel8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaLabel8->Location = System::Drawing::Point(571, 107);
			this->gunaLabel8->Name = L"gunaLabel8";
			this->gunaLabel8->Size = System::Drawing::Size(53, 20);
			this->gunaLabel8->TabIndex = 15;
			this->gunaLabel8->Text = L"Name ";
			// 
			// setting
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->gunaLinePanel3);
			this->Controls->Add(this->gunaLinePanel2);
			this->Controls->Add(this->gunaLinePanel1);
			this->Controls->Add(this->gunaCirclePictureBox2);
			this->Controls->Add(this->gunaElipsePanel1);
			this->Name = L"setting";
			this->Padding = System::Windows::Forms::Padding(2);
			this->Size = System::Drawing::Size(884, 605);
			this->gunaElipsePanel1->ResumeLayout(false);
			this->gunaElipsePanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaCirclePictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaCirclePictureBox2))->EndInit();
			this->gunaLinePanel1->ResumeLayout(false);
			this->gunaLinePanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaCirclePictureBox3))->EndInit();
			this->gunaLinePanel2->ResumeLayout(false);
			this->gunaLinePanel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaCirclePictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaCirclePictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaCirclePictureBox6))->EndInit();
			this->gunaLinePanel3->ResumeLayout(false);
			this->gunaLinePanel3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
