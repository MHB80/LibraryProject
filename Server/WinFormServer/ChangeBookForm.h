#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace WinFormServer {

	/// <summary>
	/// Summary for ChangeBookForm
	/// </summary>
	public ref class ChangeBookForm : public System::Windows::Forms::UserControl
	{
	public:
		ChangeBookForm(void)
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
		~ChangeBookForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox1;
	protected:
	private: Guna::UI::WinForms::GunaPictureBox^ gunaPictureBox1;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox2;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox3;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox4;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox6;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox7;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;

	private: Guna::UI::WinForms::GunaImageButton^ gunaImageButton1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Panel^ panel3;
	private: Guna::UI::WinForms::GunaGradientButton^ gunaGradientButton3;
	private: Guna::UI::WinForms::GunaGradientButton^ gunaGradientButton1;
	private: Guna::UI::WinForms::GunaGradientButton^ gunaGradientButton2;
	private: Guna::UI::WinForms::GunaCircleButton^ gunaCircleButton1;
	private: Guna::UI::WinForms::GunaCircleButton^ gunaCircleButton2;
	private: Guna::UI::WinForms::GunaSeparator^ gunaSeparator2;
	private: System::Windows::Forms::Button^ button1;
	private: Guna::UI::WinForms::GunaPictureBox^ gunaPictureBox3;
	private: Guna::UI::WinForms::GunaPictureBox^ gunaPictureBox2;
	private: Guna::UI::WinForms::GunaPictureBox^ gunaPictureBox4;
	private: Guna::UI::WinForms::GunaGradientButton^ gunaGradientButton4;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ChangeBookForm::typeid));
			this->gunaTextBox1 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaPictureBox1 = (gcnew Guna::UI::WinForms::GunaPictureBox());
			this->gunaTextBox2 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaTextBox3 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaTextBox4 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaTextBox5 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->gunaTextBox6 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaTextBox7 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->gunaImageButton1 = (gcnew Guna::UI::WinForms::GunaImageButton());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->gunaGradientButton3 = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->gunaGradientButton1 = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->gunaGradientButton2 = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->gunaCircleButton1 = (gcnew Guna::UI::WinForms::GunaCircleButton());
			this->gunaCircleButton2 = (gcnew Guna::UI::WinForms::GunaCircleButton());
			this->gunaSeparator2 = (gcnew Guna::UI::WinForms::GunaSeparator());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->gunaPictureBox3 = (gcnew Guna::UI::WinForms::GunaPictureBox());
			this->gunaPictureBox2 = (gcnew Guna::UI::WinForms::GunaPictureBox());
			this->gunaPictureBox4 = (gcnew Guna::UI::WinForms::GunaPictureBox());
			this->gunaGradientButton4 = (gcnew Guna::UI::WinForms::GunaGradientButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox1))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// gunaTextBox1
			// 
			this->gunaTextBox1->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox1->BorderColor = System::Drawing::Color::Silver;
			this->gunaTextBox1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox1->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox1->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox1->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaTextBox1->Location = System::Drawing::Point(60, 93);
			this->gunaTextBox1->Margin = System::Windows::Forms::Padding(4);
			this->gunaTextBox1->Name = L"gunaTextBox1";
			this->gunaTextBox1->PasswordChar = '\0';
			this->gunaTextBox1->SelectedText = L"";
			this->gunaTextBox1->Size = System::Drawing::Size(543, 37);
			this->gunaTextBox1->TabIndex = 0;
			// 
			// gunaPictureBox1
			// 
			this->gunaPictureBox1->BaseColor = System::Drawing::Color::White;
			this->gunaPictureBox1->Location = System::Drawing::Point(214, 152);
			this->gunaPictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->gunaPictureBox1->Name = L"gunaPictureBox1";
			this->gunaPictureBox1->Size = System::Drawing::Size(243, 208);
			this->gunaPictureBox1->TabIndex = 1;
			this->gunaPictureBox1->TabStop = false;
			// 
			// gunaTextBox2
			// 
			this->gunaTextBox2->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox2->BorderColor = System::Drawing::Color::Silver;
			this->gunaTextBox2->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox2->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox2->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox2->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaTextBox2->Location = System::Drawing::Point(214, 368);
			this->gunaTextBox2->Margin = System::Windows::Forms::Padding(4);
			this->gunaTextBox2->Name = L"gunaTextBox2";
			this->gunaTextBox2->PasswordChar = '\0';
			this->gunaTextBox2->SelectedText = L"";
			this->gunaTextBox2->Size = System::Drawing::Size(243, 37);
			this->gunaTextBox2->TabIndex = 2;
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
			this->gunaTextBox3->Location = System::Drawing::Point(214, 413);
			this->gunaTextBox3->Margin = System::Windows::Forms::Padding(4);
			this->gunaTextBox3->Name = L"gunaTextBox3";
			this->gunaTextBox3->PasswordChar = '\0';
			this->gunaTextBox3->SelectedText = L"";
			this->gunaTextBox3->Size = System::Drawing::Size(243, 37);
			this->gunaTextBox3->TabIndex = 3;
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
			this->gunaTextBox4->Location = System::Drawing::Point(214, 458);
			this->gunaTextBox4->Margin = System::Windows::Forms::Padding(4);
			this->gunaTextBox4->Name = L"gunaTextBox4";
			this->gunaTextBox4->PasswordChar = '\0';
			this->gunaTextBox4->SelectedText = L"";
			this->gunaTextBox4->Size = System::Drawing::Size(243, 37);
			this->gunaTextBox4->TabIndex = 4;
			// 
			// gunaTextBox5
			// 
			this->gunaTextBox5->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox5->BorderColor = System::Drawing::Color::Silver;
			this->gunaTextBox5->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox5->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox5->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox5->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaTextBox5->Location = System::Drawing::Point(214, 503);
			this->gunaTextBox5->Margin = System::Windows::Forms::Padding(4);
			this->gunaTextBox5->Name = L"gunaTextBox5";
			this->gunaTextBox5->PasswordChar = '\0';
			this->gunaTextBox5->SelectedText = L"";
			this->gunaTextBox5->Size = System::Drawing::Size(243, 37);
			this->gunaTextBox5->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label1->Location = System::Drawing::Point(510, 368);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 41);
			this->label1->TabIndex = 6;
			this->label1->Text = L"نام کتاب";
			this->label1->Click += gcnew System::EventHandler(this, &ChangeBookForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"B Nazanin", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label2->Location = System::Drawing::Point(492, 408);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(117, 41);
			this->label2->TabIndex = 7;
			this->label2->Text = L"نام نویسنده";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"B Nazanin", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label3->Location = System::Drawing::Point(535, 453);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(68, 41);
			this->label3->TabIndex = 8;
			this->label3->Text = L"قیمت";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"B Nazanin", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label4->Location = System::Drawing::Point(556, 497);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 41);
			this->label4->TabIndex = 9;
			this->label4->Text = L"ژانر";
			// 
			// gunaTextBox6
			// 
			this->gunaTextBox6->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox6->BorderColor = System::Drawing::Color::Silver;
			this->gunaTextBox6->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox6->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox6->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox6->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaTextBox6->Location = System::Drawing::Point(214, 545);
			this->gunaTextBox6->Margin = System::Windows::Forms::Padding(4);
			this->gunaTextBox6->Name = L"gunaTextBox6";
			this->gunaTextBox6->PasswordChar = '\0';
			this->gunaTextBox6->SelectedText = L"";
			this->gunaTextBox6->Size = System::Drawing::Size(243, 37);
			this->gunaTextBox6->TabIndex = 10;
			// 
			// gunaTextBox7
			// 
			this->gunaTextBox7->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox7->BorderColor = System::Drawing::Color::Silver;
			this->gunaTextBox7->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox7->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox7->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox7->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaTextBox7->Location = System::Drawing::Point(214, 589);
			this->gunaTextBox7->Margin = System::Windows::Forms::Padding(4);
			this->gunaTextBox7->Name = L"gunaTextBox7";
			this->gunaTextBox7->PasswordChar = '\0';
			this->gunaTextBox7->SelectedText = L"";
			this->gunaTextBox7->Size = System::Drawing::Size(243, 37);
			this->gunaTextBox7->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"B Nazanin", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label5->Location = System::Drawing::Point(478, 541);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(125, 41);
			this->label5->TabIndex = 12;
			this->label5->Text = L"شماره نسخه";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"B Nazanin", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label6->Location = System::Drawing::Point(492, 589);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(111, 41);
			this->label6->TabIndex = 13;
			this->label6->Text = L"سال انتشار";
			// 
			// gunaImageButton1
			// 
			this->gunaImageButton1->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->gunaImageButton1->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaImageButton1->Image = nullptr;
			this->gunaImageButton1->ImageSize = System::Drawing::Size(64, 64);
			this->gunaImageButton1->Location = System::Drawing::Point(611, 93);
			this->gunaImageButton1->Margin = System::Windows::Forms::Padding(4);
			this->gunaImageButton1->Name = L"gunaImageButton1";
			this->gunaImageButton1->OnHoverImage = nullptr;
			this->gunaImageButton1->OnHoverImageOffset = System::Drawing::Point(0, 0);
			this->gunaImageButton1->Size = System::Drawing::Size(37, 37);
			this->gunaImageButton1->TabIndex = 15;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::MediumSlateBlue;
			this->flowLayoutPanel1->Location = System::Drawing::Point(810, 56);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(214, 669);
			this->flowLayoutPanel1->TabIndex = 16;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::MediumSlateBlue;
			this->panel3->Controls->Add(this->gunaGradientButton4);
			this->panel3->Controls->Add(this->gunaGradientButton3);
			this->panel3->Controls->Add(this->gunaGradientButton1);
			this->panel3->Controls->Add(this->gunaGradientButton2);
			this->panel3->Controls->Add(this->gunaCircleButton1);
			this->panel3->Controls->Add(this->gunaCircleButton2);
			this->panel3->Controls->Add(this->gunaSeparator2);
			this->panel3->Location = System::Drawing::Point(810, 167);
			this->panel3->Margin = System::Windows::Forms::Padding(4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(213, 558);
			this->panel3->TabIndex = 17;
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
			this->gunaGradientButton3->Location = System::Drawing::Point(0, 191);
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
			this->gunaGradientButton1->Location = System::Drawing::Point(1, 95);
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
			this->gunaGradientButton2->Location = System::Drawing::Point(1, 0);
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
			this->gunaCircleButton2->Size = System::Drawing::Size(46, 37);
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
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button1->Location = System::Drawing::Point(214, 648);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(243, 42);
			this->button1->TabIndex = 18;
			this->button1->Text = L"ثبت";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// gunaPictureBox3
			// 
			this->gunaPictureBox3->BaseColor = System::Drawing::Color::White;
			this->gunaPictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaPictureBox3.Image")));
			this->gunaPictureBox3->Location = System::Drawing::Point(821, 3);
			this->gunaPictureBox3->Name = L"gunaPictureBox3";
			this->gunaPictureBox3->Size = System::Drawing::Size(77, 48);
			this->gunaPictureBox3->TabIndex = 21;
			this->gunaPictureBox3->TabStop = false;
			// 
			// gunaPictureBox2
			// 
			this->gunaPictureBox2->BaseColor = System::Drawing::Color::White;
			this->gunaPictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaPictureBox2.Image")));
			this->gunaPictureBox2->Location = System::Drawing::Point(904, 3);
			this->gunaPictureBox2->Name = L"gunaPictureBox2";
			this->gunaPictureBox2->Size = System::Drawing::Size(51, 48);
			this->gunaPictureBox2->TabIndex = 20;
			this->gunaPictureBox2->TabStop = false;
			// 
			// gunaPictureBox4
			// 
			this->gunaPictureBox4->BaseColor = System::Drawing::Color::White;
			this->gunaPictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaPictureBox4.Image")));
			this->gunaPictureBox4->Location = System::Drawing::Point(963, 3);
			this->gunaPictureBox4->Name = L"gunaPictureBox4";
			this->gunaPictureBox4->Size = System::Drawing::Size(51, 48);
			this->gunaPictureBox4->TabIndex = 19;
			this->gunaPictureBox4->TabStop = false;
			// 
			// gunaGradientButton4
			// 
			this->gunaGradientButton4->AnimationHoverSpeed = 0.07F;
			this->gunaGradientButton4->AnimationSpeed = 0.03F;
			this->gunaGradientButton4->BaseColor1 = System::Drawing::Color::MediumBlue;
			this->gunaGradientButton4->BaseColor2 = System::Drawing::Color::Black;
			this->gunaGradientButton4->BorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton4->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaGradientButton4->FocusedColor = System::Drawing::Color::Empty;
			this->gunaGradientButton4->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaGradientButton4->ForeColor = System::Drawing::Color::White;
			this->gunaGradientButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaGradientButton4.Image")));
			this->gunaGradientButton4->ImageAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->gunaGradientButton4->ImageSize = System::Drawing::Size(50, 50);
			this->gunaGradientButton4->Location = System::Drawing::Point(1, 291);
			this->gunaGradientButton4->Name = L"gunaGradientButton4";
			this->gunaGradientButton4->OnHoverBaseColor1 = System::Drawing::Color::DarkBlue;
			this->gunaGradientButton4->OnHoverBaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->gunaGradientButton4->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton4->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaGradientButton4->OnHoverImage = nullptr;
			this->gunaGradientButton4->OnPressedColor = System::Drawing::Color::Black;
			this->gunaGradientButton4->Size = System::Drawing::Size(213, 94);
			this->gunaGradientButton4->TabIndex = 22;
			this->gunaGradientButton4->Text = L"جستجو";
			// 
			// ChangeBookForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->gunaPictureBox3);
			this->Controls->Add(this->gunaPictureBox2);
			this->Controls->Add(this->gunaPictureBox4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->gunaImageButton1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->gunaTextBox7);
			this->Controls->Add(this->gunaTextBox6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->gunaTextBox5);
			this->Controls->Add(this->gunaTextBox4);
			this->Controls->Add(this->gunaTextBox3);
			this->Controls->Add(this->gunaTextBox2);
			this->Controls->Add(this->gunaPictureBox1);
			this->Controls->Add(this->gunaTextBox1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"ChangeBookForm";
			this->Size = System::Drawing::Size(1024, 724);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox1))->EndInit();
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion










private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
