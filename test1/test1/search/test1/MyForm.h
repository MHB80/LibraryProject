#pragma once
#include <string>
//using namespace std;
#include <msclr/marshal_cppstd.h>
namespace test1 {

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

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox1;
	private: Guna::UI::WinForms::GunaImageButton^ gunaImageButton1;
	private: System::Windows::Forms::Panel^ panel1;
	private: Guna::UI::WinForms::GunaPanel^ gunaPanel1;

	private: System::Windows::Forms::Label^ label1;
	private: Guna::UI::WinForms::GunaCheckBox^ All_language;


	private: Guna::UI::WinForms::GunaCheckBox^ gunaCheckBox4;
	private: Guna::UI::WinForms::GunaCheckBox^ gunaCheckBox3;
	private: Guna::UI::WinForms::GunaCheckBox^ gunaCheckBox2;
	private: System::Windows::Forms::Panel^ panel2;
	private: Guna::UI::WinForms::GunaLineTextBox^ gunaLineTextBox2;
	private: Guna::UI::WinForms::GunaLineTextBox^ gunaLineTextBox1;
	private: Guna::UI::WinForms::GunaAdvenceButton^ gunaAdvenceButton2;
	private: Guna::UI::WinForms::GunaAdvenceButton^ gunaAdvenceButton1;
	private: System::Windows::Forms::Panel^ panel3;

	private: Guna::UI::WinForms::GunaLabel^ gunaLabel1;
	private: Guna::UI::WinForms::GunaCheckBox^ All_Book;
	private: Guna::UI::WinForms::GunaCheckBox^ B12;


	private: Guna::UI::WinForms::GunaCheckBox^ B11;

	private: Guna::UI::WinForms::GunaCheckBox^ B10;

	private: Guna::UI::WinForms::GunaCheckBox^ B9;

	private: Guna::UI::WinForms::GunaCheckBox^ B8;

	private: Guna::UI::WinForms::GunaCheckBox^ B7;

	private: Guna::UI::WinForms::GunaCheckBox^ B5;
	private: Guna::UI::WinForms::GunaCheckBox^ B6;


	private: Guna::UI::WinForms::GunaCheckBox^ B4;

	private: Guna::UI::WinForms::GunaCheckBox^ B3;

	private: Guna::UI::WinForms::GunaCheckBox^ B2;

	private: Guna::UI::WinForms::GunaCheckBox^ B1;

	private: System::Windows::Forms::Panel^ panel4;
	private: Guna::UI::WinForms::GunaCheckBox^ T2;

	private: Guna::UI::WinForms::GunaCheckBox^ T1;

	private: Guna::UI::WinForms::GunaCheckBox^ All_Type;

	private: Guna::UI::WinForms::GunaLabel^ gunaLabel2;
	private: System::Windows::Forms::Panel^ panel5;

	private: Guna::UI::WinForms::GunaLabel^ gunaLabel3;

	private: System::Windows::Forms::TextBox^ Textpricelow;




	private: System::Windows::Forms::TextBox^ Textpricehigh;

	private: Guna::UI::WinForms::GunaTrackBar^ PHtrackbar;
	private: Guna::UI::WinForms::GunaTrackBar^ PLtractbar;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;




	protected:

	protected:

































	protected:



	protected:






	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->gunaTextBox1 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaImageButton1 = (gcnew Guna::UI::WinForms::GunaImageButton());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->gunaPanel1 = (gcnew Guna::UI::WinForms::GunaPanel());
			this->gunaCheckBox4 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->gunaCheckBox3 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->All_language = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->gunaCheckBox2 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->gunaLineTextBox2 = (gcnew Guna::UI::WinForms::GunaLineTextBox());
			this->gunaLineTextBox1 = (gcnew Guna::UI::WinForms::GunaLineTextBox());
			this->gunaAdvenceButton2 = (gcnew Guna::UI::WinForms::GunaAdvenceButton());
			this->gunaAdvenceButton1 = (gcnew Guna::UI::WinForms::GunaAdvenceButton());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->All_Book = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->B12 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->B11 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->B10 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->B9 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->B8 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->B7 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->B5 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->B6 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->B4 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->B3 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->B2 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->B1 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->gunaLabel1 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->T2 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->T1 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->All_Type = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->gunaLabel2 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->PLtractbar = (gcnew Guna::UI::WinForms::GunaTrackBar());
			this->PHtrackbar = (gcnew Guna::UI::WinForms::GunaTrackBar());
			this->Textpricelow = (gcnew System::Windows::Forms::TextBox());
			this->Textpricehigh = (gcnew System::Windows::Forms::TextBox());
			this->gunaLabel3 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->gunaPanel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::HotTrack;
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(899, 86);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// gunaTextBox1
			// 
			this->gunaTextBox1->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox1->BorderColor = System::Drawing::Color::Transparent;
			this->gunaTextBox1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox1->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox1->FocusedBorderColor = System::Drawing::Color::White;
			this->gunaTextBox1->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaTextBox1->Location = System::Drawing::Point(60, 3);
			this->gunaTextBox1->Name = L"gunaTextBox1";
			this->gunaTextBox1->PasswordChar = '\0';
			this->gunaTextBox1->SelectedText = L"";
			this->gunaTextBox1->Size = System::Drawing::Size(424, 51);
			this->gunaTextBox1->TabIndex = 1;
			this->gunaTextBox1->Text = L"...جستجو کتاب";
			this->gunaTextBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// gunaImageButton1
			// 
			this->gunaImageButton1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->gunaImageButton1->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaImageButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaImageButton1.Image")));
			this->gunaImageButton1->ImageSize = System::Drawing::Size(64, 64);
			this->gunaImageButton1->Location = System::Drawing::Point(0, 3);
			this->gunaImageButton1->Name = L"gunaImageButton1";
			this->gunaImageButton1->OnHoverImage = nullptr;
			this->gunaImageButton1->OnHoverImageOffset = System::Drawing::Point(0, 0);
			this->gunaImageButton1->Size = System::Drawing::Size(54, 51);
			this->gunaImageButton1->TabIndex = 2;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->gunaImageButton1);
			this->panel1->Controls->Add(this->gunaTextBox1);
			this->panel1->Location = System::Drawing::Point(214, 24);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(489, 58);
			this->panel1->TabIndex = 3;
			// 
			// gunaPanel1
			// 
			this->gunaPanel1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->gunaPanel1->Controls->Add(this->gunaCheckBox4);
			this->gunaPanel1->Controls->Add(this->label1);
			this->gunaPanel1->Controls->Add(this->gunaCheckBox3);
			this->gunaPanel1->Controls->Add(this->All_language);
			this->gunaPanel1->Controls->Add(this->gunaCheckBox2);
			this->gunaPanel1->Location = System::Drawing::Point(12, 225);
			this->gunaPanel1->Name = L"gunaPanel1";
			this->gunaPanel1->Size = System::Drawing::Size(901, 72);
			this->gunaPanel1->TabIndex = 4;
			// 
			// gunaCheckBox4
			// 
			this->gunaCheckBox4->BaseColor = System::Drawing::Color::White;
			this->gunaCheckBox4->CheckedOffColor = System::Drawing::Color::Gray;
			this->gunaCheckBox4->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCheckBox4->FillColor = System::Drawing::Color::White;
			this->gunaCheckBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gunaCheckBox4->Location = System::Drawing::Point(115, 33);
			this->gunaCheckBox4->Name = L"gunaCheckBox4";
			this->gunaCheckBox4->Size = System::Drawing::Size(71, 27);
			this->gunaCheckBox4->TabIndex = 7;
			this->gunaCheckBox4->Text = L"عربی";
			this->gunaCheckBox4->Click += gcnew System::EventHandler(this, &MyForm::gunaCheckBox4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Sitka Subheading", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(790, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 40);
			this->label1->TabIndex = 0;
			this->label1->Text = L" : زبان ";
			// 
			// gunaCheckBox3
			// 
			this->gunaCheckBox3->BaseColor = System::Drawing::Color::White;
			this->gunaCheckBox3->CheckedOffColor = System::Drawing::Color::Gray;
			this->gunaCheckBox3->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCheckBox3->FillColor = System::Drawing::Color::White;
			this->gunaCheckBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gunaCheckBox3->Location = System::Drawing::Point(316, 33);
			this->gunaCheckBox3->Name = L"gunaCheckBox3";
			this->gunaCheckBox3->Size = System::Drawing::Size(85, 27);
			this->gunaCheckBox3->TabIndex = 6;
			this->gunaCheckBox3->Text = L"انگلیسی";
			this->gunaCheckBox3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::gunaCheckBox3_CheckedChanged);
			this->gunaCheckBox3->Click += gcnew System::EventHandler(this, &MyForm::gunaCheckBox3_Click);
			// 
			// All_language
			// 
			this->All_language->BaseColor = System::Drawing::Color::White;
			this->All_language->CheckedOffColor = System::Drawing::Color::Gray;
			this->All_language->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->All_language->FillColor = System::Drawing::Color::White;
			this->All_language->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->All_language->Location = System::Drawing::Point(701, 33);
			this->All_language->Name = L"All_language";
			this->All_language->Size = System::Drawing::Size(58, 27);
			this->All_language->TabIndex = 6;
			this->All_language->Text = L"همه ";
			this->All_language->CheckedChanged += gcnew System::EventHandler(this, &MyForm::All_language_CheckedChanged);
			this->All_language->Click += gcnew System::EventHandler(this, &MyForm::All_language_Click);
			// 
			// gunaCheckBox2
			// 
			this->gunaCheckBox2->BaseColor = System::Drawing::Color::White;
			this->gunaCheckBox2->CheckedOffColor = System::Drawing::Color::Gray;
			this->gunaCheckBox2->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCheckBox2->FillColor = System::Drawing::Color::White;
			this->gunaCheckBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gunaCheckBox2->Location = System::Drawing::Point(518, 29);
			this->gunaCheckBox2->Name = L"gunaCheckBox2";
			this->gunaCheckBox2->Size = System::Drawing::Size(78, 27);
			this->gunaCheckBox2->TabIndex = 5;
			this->gunaCheckBox2->Text = L"فارسی ";
			this->gunaCheckBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::gunaCheckBox2_CheckedChanged);
			this->gunaCheckBox2->Click += gcnew System::EventHandler(this, &MyForm::gunaCheckBox2_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->gunaLineTextBox2);
			this->panel2->Controls->Add(this->gunaLineTextBox1);
			this->panel2->Controls->Add(this->gunaAdvenceButton2);
			this->panel2->Controls->Add(this->gunaAdvenceButton1);
			this->panel2->Location = System::Drawing::Point(12, 122);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(901, 97);
			this->panel2->TabIndex = 5;
			// 
			// gunaLineTextBox2
			// 
			this->gunaLineTextBox2->BackColor = System::Drawing::Color::White;
			this->gunaLineTextBox2->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaLineTextBox2->FocusedLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaLineTextBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaLineTextBox2->LineColor = System::Drawing::Color::Gainsboro;
			this->gunaLineTextBox2->Location = System::Drawing::Point(3, 52);
			this->gunaLineTextBox2->Name = L"gunaLineTextBox2";
			this->gunaLineTextBox2->PasswordChar = '\0';
			this->gunaLineTextBox2->SelectedText = L"";
			this->gunaLineTextBox2->Size = System::Drawing::Size(672, 42);
			this->gunaLineTextBox2->TabIndex = 3;
			this->gunaLineTextBox2->Text = L"....جستجو";
			this->gunaLineTextBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// gunaLineTextBox1
			// 
			this->gunaLineTextBox1->BackColor = System::Drawing::Color::White;
			this->gunaLineTextBox1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaLineTextBox1->FocusedLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaLineTextBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaLineTextBox1->LineColor = System::Drawing::Color::WhiteSmoke;
			this->gunaLineTextBox1->Location = System::Drawing::Point(3, 3);
			this->gunaLineTextBox1->Name = L"gunaLineTextBox1";
			this->gunaLineTextBox1->PasswordChar = '\0';
			this->gunaLineTextBox1->SelectedText = L"";
			this->gunaLineTextBox1->Size = System::Drawing::Size(672, 42);
			this->gunaLineTextBox1->TabIndex = 2;
			this->gunaLineTextBox1->Text = L"....جستجو";
			this->gunaLineTextBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// gunaAdvenceButton2
			// 
			this->gunaAdvenceButton2->AnimationHoverSpeed = 0.07F;
			this->gunaAdvenceButton2->AnimationSpeed = 0.03F;
			this->gunaAdvenceButton2->BaseColor = System::Drawing::SystemColors::ControlDark;
			this->gunaAdvenceButton2->BorderColor = System::Drawing::Color::Black;
			this->gunaAdvenceButton2->CheckedBaseColor = System::Drawing::Color::Gray;
			this->gunaAdvenceButton2->CheckedBorderColor = System::Drawing::Color::Black;
			this->gunaAdvenceButton2->CheckedForeColor = System::Drawing::Color::White;
			this->gunaAdvenceButton2->CheckedImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaAdvenceButton2.CheckedImage")));
			this->gunaAdvenceButton2->CheckedLineColor = System::Drawing::Color::DimGray;
			this->gunaAdvenceButton2->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaAdvenceButton2->FocusedColor = System::Drawing::Color::Empty;
			this->gunaAdvenceButton2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaAdvenceButton2->ForeColor = System::Drawing::Color::White;
			this->gunaAdvenceButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaAdvenceButton2.Image")));
			this->gunaAdvenceButton2->ImageSize = System::Drawing::Size(20, 20);
			this->gunaAdvenceButton2->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(170)));
			this->gunaAdvenceButton2->Location = System::Drawing::Point(681, 51);
			this->gunaAdvenceButton2->Name = L"gunaAdvenceButton2";
			this->gunaAdvenceButton2->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaAdvenceButton2->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaAdvenceButton2->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaAdvenceButton2->OnHoverImage = nullptr;
			this->gunaAdvenceButton2->OnHoverLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(170)));
			this->gunaAdvenceButton2->OnPressedColor = System::Drawing::Color::Black;
			this->gunaAdvenceButton2->Size = System::Drawing::Size(215, 42);
			this->gunaAdvenceButton2->TabIndex = 1;
			this->gunaAdvenceButton2->Text = L"جستجو کتاب ";
			// 
			// gunaAdvenceButton1
			// 
			this->gunaAdvenceButton1->AnimationHoverSpeed = 0.07F;
			this->gunaAdvenceButton1->AnimationSpeed = 0.03F;
			this->gunaAdvenceButton1->BaseColor = System::Drawing::SystemColors::ControlDark;
			this->gunaAdvenceButton1->BorderColor = System::Drawing::Color::Black;
			this->gunaAdvenceButton1->CheckedBaseColor = System::Drawing::Color::Gray;
			this->gunaAdvenceButton1->CheckedBorderColor = System::Drawing::Color::Black;
			this->gunaAdvenceButton1->CheckedForeColor = System::Drawing::Color::White;
			this->gunaAdvenceButton1->CheckedImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaAdvenceButton1.CheckedImage")));
			this->gunaAdvenceButton1->CheckedLineColor = System::Drawing::SystemColors::Desktop;
			this->gunaAdvenceButton1->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaAdvenceButton1->FocusedColor = System::Drawing::Color::Empty;
			this->gunaAdvenceButton1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaAdvenceButton1->ForeColor = System::Drawing::Color::White;
			this->gunaAdvenceButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaAdvenceButton1.Image")));
			this->gunaAdvenceButton1->ImageSize = System::Drawing::Size(20, 20);
			this->gunaAdvenceButton1->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(170)));
			this->gunaAdvenceButton1->Location = System::Drawing::Point(681, 3);
			this->gunaAdvenceButton1->Name = L"gunaAdvenceButton1";
			this->gunaAdvenceButton1->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaAdvenceButton1->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaAdvenceButton1->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaAdvenceButton1->OnHoverImage = nullptr;
			this->gunaAdvenceButton1->OnHoverLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(170)));
			this->gunaAdvenceButton1->OnPressedColor = System::Drawing::Color::Black;
			this->gunaAdvenceButton1->Size = System::Drawing::Size(215, 42);
			this->gunaAdvenceButton1->TabIndex = 0;
			this->gunaAdvenceButton1->Text = L"جستجو بر اساس نویسنده";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel3->Controls->Add(this->All_Book);
			this->panel3->Controls->Add(this->B12);
			this->panel3->Controls->Add(this->B11);
			this->panel3->Controls->Add(this->B10);
			this->panel3->Controls->Add(this->B9);
			this->panel3->Controls->Add(this->B8);
			this->panel3->Controls->Add(this->B7);
			this->panel3->Controls->Add(this->B5);
			this->panel3->Controls->Add(this->B6);
			this->panel3->Controls->Add(this->B4);
			this->panel3->Controls->Add(this->B3);
			this->panel3->Controls->Add(this->B2);
			this->panel3->Controls->Add(this->B1);
			this->panel3->Controls->Add(this->gunaLabel1);
			this->panel3->Location = System::Drawing::Point(12, 303);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(904, 192);
			this->panel3->TabIndex = 6;
			// 
			// All_Book
			// 
			this->All_Book->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->All_Book->BaseColor = System::Drawing::Color::White;
			this->All_Book->CheckedOffColor = System::Drawing::Color::Gray;
			this->All_Book->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(88)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->All_Book->FillColor = System::Drawing::Color::White;
			this->All_Book->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->All_Book->Location = System::Drawing::Point(490, 32);
			this->All_Book->Name = L"All_Book";
			this->All_Book->Size = System::Drawing::Size(58, 27);
			this->All_Book->TabIndex = 14;
			this->All_Book->Text = L"همه";
			this->All_Book->CheckedChanged += gcnew System::EventHandler(this, &MyForm::All_Book_CheckedChanged);
			this->All_Book->Click += gcnew System::EventHandler(this, &MyForm::All_Book_Click);
			// 
			// B12
			// 
			this->B12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->B12->BaseColor = System::Drawing::Color::White;
			this->B12->CheckedOffColor = System::Drawing::Color::Gray;
			this->B12->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(88)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->B12->FillColor = System::Drawing::Color::White;
			this->B12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B12->Location = System::Drawing::Point(109, 145);
			this->B12->Name = L"B12";
			this->B12->Size = System::Drawing::Size(65, 27);
			this->B12->TabIndex = 13;
			this->B12->Text = L"سایر";
			this->B12->Click += gcnew System::EventHandler(this, &MyForm::B12_Click);
			// 
			// B11
			// 
			this->B11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->B11->BaseColor = System::Drawing::Color::White;
			this->B11->CheckedOffColor = System::Drawing::Color::Gray;
			this->B11->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(88)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->B11->FillColor = System::Drawing::Color::White;
			this->B11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B11->Location = System::Drawing::Point(336, 145);
			this->B11->Name = L"B11";
			this->B11->Size = System::Drawing::Size(82, 27);
			this->B11->TabIndex = 12;
			this->B11->Text = L"ترسناک";
			this->B11->Click += gcnew System::EventHandler(this, &MyForm::B11_Click);
			// 
			// B10
			// 
			this->B10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->B10->BaseColor = System::Drawing::Color::White;
			this->B10->CheckedOffColor = System::Drawing::Color::Gray;
			this->B10->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(88)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->B10->FillColor = System::Drawing::Color::White;
			this->B10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B10->Location = System::Drawing::Point(544, 145);
			this->B10->Name = L"B10";
			this->B10->Size = System::Drawing::Size(106, 27);
			this->B10->TabIndex = 11;
			this->B10->Text = L"زندگی نامه";
			this->B10->Click += gcnew System::EventHandler(this, &MyForm::B10_Click);
			// 
			// B9
			// 
			this->B9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->B9->BaseColor = System::Drawing::Color::White;
			this->B9->CheckedOffColor = System::Drawing::Color::Gray;
			this->B9->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(88)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->B9->FillColor = System::Drawing::Color::White;
			this->B9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B9->Location = System::Drawing::Point(804, 145);
			this->B9->Name = L"B9";
			this->B9->Size = System::Drawing::Size(64, 27);
			this->B9->TabIndex = 10;
			this->B9->Text = L"مقاله";
			this->B9->CheckedChanged += gcnew System::EventHandler(this, &MyForm::B9_CheckedChanged);
			this->B9->Click += gcnew System::EventHandler(this, &MyForm::B9_Click);
			// 
			// B8
			// 
			this->B8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->B8->BaseColor = System::Drawing::Color::White;
			this->B8->CheckedOffColor = System::Drawing::Color::Gray;
			this->B8->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(88)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->B8->FillColor = System::Drawing::Color::White;
			this->B8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B8->Location = System::Drawing::Point(109, 112);
			this->B8->Name = L"B8";
			this->B8->Size = System::Drawing::Size(77, 27);
			this->B8->TabIndex = 9;
			this->B8->Text = L"فانتزی";
			this->B8->CheckedChanged += gcnew System::EventHandler(this, &MyForm::B8_CheckedChanged);
			this->B8->Click += gcnew System::EventHandler(this, &MyForm::B8_Click);
			// 
			// B7
			// 
			this->B7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->B7->BaseColor = System::Drawing::Color::White;
			this->B7->CheckedOffColor = System::Drawing::Color::Gray;
			this->B7->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(88)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->B7->FillColor = System::Drawing::Color::White;
			this->B7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B7->Location = System::Drawing::Point(336, 112);
			this->B7->Name = L"B7";
			this->B7->Size = System::Drawing::Size(85, 27);
			this->B7->TabIndex = 8;
			this->B7->Text = L"عاشقانه";
			this->B7->CheckedChanged += gcnew System::EventHandler(this, &MyForm::B7_CheckedChanged);
			this->B7->Click += gcnew System::EventHandler(this, &MyForm::B7_Click);
			// 
			// B5
			// 
			this->B5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->B5->BaseColor = System::Drawing::Color::White;
			this->B5->CheckedOffColor = System::Drawing::Color::Gray;
			this->B5->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(88)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->B5->FillColor = System::Drawing::Color::White;
			this->B5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B5->Location = System::Drawing::Point(804, 112);
			this->B5->Name = L"B5";
			this->B5->Size = System::Drawing::Size(81, 27);
			this->B5->TabIndex = 7;
			this->B5->Text = L"تاریخی";
			this->B5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::B5_CheckedChanged);
			this->B5->Click += gcnew System::EventHandler(this, &MyForm::B5_Click);
			// 
			// B6
			// 
			this->B6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->B6->BaseColor = System::Drawing::Color::White;
			this->B6->CheckedOffColor = System::Drawing::Color::Gray;
			this->B6->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(88)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->B6->FillColor = System::Drawing::Color::White;
			this->B6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B6->Location = System::Drawing::Point(543, 112);
			this->B6->Name = L"B6";
			this->B6->Size = System::Drawing::Size(66, 27);
			this->B6->TabIndex = 6;
			this->B6->Text = L"کمیک";
			this->B6->Click += gcnew System::EventHandler(this, &MyForm::B6_Click);
			// 
			// B4
			// 
			this->B4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->B4->BaseColor = System::Drawing::Color::White;
			this->B4->CheckedOffColor = System::Drawing::Color::Gray;
			this->B4->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(88)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->B4->FillColor = System::Drawing::Color::White;
			this->B4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B4->Location = System::Drawing::Point(109, 79);
			this->B4->Name = L"B4";
			this->B4->Size = System::Drawing::Size(74, 27);
			this->B4->TabIndex = 5;
			this->B4->Text = L"درسی";
			this->B4->Click += gcnew System::EventHandler(this, &MyForm::B4_Click);
			// 
			// B3
			// 
			this->B3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->B3->BaseColor = System::Drawing::Color::White;
			this->B3->CheckedOffColor = System::Drawing::Color::Gray;
			this->B3->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(88)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->B3->FillColor = System::Drawing::Color::White;
			this->B3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B3->Location = System::Drawing::Point(336, 79);
			this->B3->Name = L"B3";
			this->B3->Size = System::Drawing::Size(74, 27);
			this->B3->TabIndex = 4;
			this->B3->Text = L"مذهبی";
			this->B3->Click += gcnew System::EventHandler(this, &MyForm::B3_Click);
			// 
			// B2
			// 
			this->B2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->B2->BaseColor = System::Drawing::Color::White;
			this->B2->CheckedOffColor = System::Drawing::Color::Gray;
			this->B2->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(88)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->B2->FillColor = System::Drawing::Color::White;
			this->B2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B2->Location = System::Drawing::Point(543, 79);
			this->B2->Name = L"B2";
			this->B2->Size = System::Drawing::Size(112, 27);
			this->B2->TabIndex = 3;
			this->B2->Text = L"علمی تخیلی";
			this->B2->Click += gcnew System::EventHandler(this, &MyForm::B2_Click);
			// 
			// B1
			// 
			this->B1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->B1->BaseColor = System::Drawing::Color::White;
			this->B1->CheckedOffColor = System::Drawing::Color::Gray;
			this->B1->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(88)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->B1->FillColor = System::Drawing::Color::White;
			this->B1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B1->Location = System::Drawing::Point(804, 79);
			this->B1->Name = L"B1";
			this->B1->Size = System::Drawing::Size(69, 27);
			this->B1->TabIndex = 2;
			this->B1->Text = L"کمدی ";
			this->B1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::B1_CheckedChanged);
			this->B1->Click += gcnew System::EventHandler(this, &MyForm::B1_Click);
			// 
			// gunaLabel1
			// 
			this->gunaLabel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->gunaLabel1->AutoSize = true;
			this->gunaLabel1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gunaLabel1->Location = System::Drawing::Point(565, 21);
			this->gunaLabel1->Name = L"gunaLabel1";
			this->gunaLabel1->Size = System::Drawing::Size(328, 38);
			this->gunaLabel1->TabIndex = 1;
			this->gunaLabel1->Text = L" : دسته بندی موضوع کتاب ";
			this->gunaLabel1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel4->Controls->Add(this->T2);
			this->panel4->Controls->Add(this->T1);
			this->panel4->Controls->Add(this->All_Type);
			this->panel4->Controls->Add(this->gunaLabel2);
			this->panel4->Location = System::Drawing::Point(13, 501);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(903, 73);
			this->panel4->TabIndex = 7;
			// 
			// T2
			// 
			this->T2->BaseColor = System::Drawing::Color::White;
			this->T2->CheckedOffColor = System::Drawing::Color::Gray;
			this->T2->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(88)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->T2->FillColor = System::Drawing::Color::White;
			this->T2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T2->Location = System::Drawing::Point(108, 25);
			this->T2->Name = L"T2";
			this->T2->Size = System::Drawing::Size(66, 27);
			this->T2->TabIndex = 9;
			this->T2->Text = L"چاپی";
			this->T2->Click += gcnew System::EventHandler(this, &MyForm::T2_Click);
			// 
			// T1
			// 
			this->T1->BaseColor = System::Drawing::Color::White;
			this->T1->CheckedOffColor = System::Drawing::Color::Gray;
			this->T1->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(88)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->T1->FillColor = System::Drawing::Color::White;
			this->T1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T1->Location = System::Drawing::Point(374, 25);
			this->T1->Name = L"T1";
			this->T1->Size = System::Drawing::Size(87, 27);
			this->T1->TabIndex = 8;
			this->T1->Text = L"دیجیتالی";
			this->T1->Click += gcnew System::EventHandler(this, &MyForm::T1_Click);
			// 
			// All_Type
			// 
			this->All_Type->BaseColor = System::Drawing::Color::White;
			this->All_Type->CheckedOffColor = System::Drawing::Color::Gray;
			this->All_Type->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(88)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->All_Type->FillColor = System::Drawing::Color::White;
			this->All_Type->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->All_Type->Location = System::Drawing::Point(671, 23);
			this->All_Type->Name = L"All_Type";
			this->All_Type->Size = System::Drawing::Size(58, 27);
			this->All_Type->TabIndex = 7;
			this->All_Type->Text = L"همه ";
			this->All_Type->CheckedChanged += gcnew System::EventHandler(this, &MyForm::All_Type_CheckedChanged);
			this->All_Type->Click += gcnew System::EventHandler(this, &MyForm::All_Type_Click);
			// 
			// gunaLabel2
			// 
			this->gunaLabel2->AutoSize = true;
			this->gunaLabel2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gunaLabel2->Location = System::Drawing::Point(740, 14);
			this->gunaLabel2->Name = L"gunaLabel2";
			this->gunaLabel2->Size = System::Drawing::Size(158, 38);
			this->gunaLabel2->TabIndex = 0;
			this->gunaLabel2->Text = L" : نوع کتاب  ";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel5->Controls->Add(this->label3);
			this->panel5->Controls->Add(this->label2);
			this->panel5->Controls->Add(this->PLtractbar);
			this->panel5->Controls->Add(this->PHtrackbar);
			this->panel5->Controls->Add(this->Textpricelow);
			this->panel5->Controls->Add(this->Textpricehigh);
			this->panel5->Controls->Add(this->gunaLabel3);
			this->panel5->Location = System::Drawing::Point(12, 580);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(903, 159);
			this->panel5->TabIndex = 8;
			// 
			// PLtractbar
			// 
			this->PLtractbar->Location = System::Drawing::Point(21, 53);
			this->PLtractbar->Maximum = 1000000;
			this->PLtractbar->Name = L"PLtractbar";
			this->PLtractbar->Size = System::Drawing::Size(864, 23);
			this->PLtractbar->SmallChange = 10000;
			this->PLtractbar->TabIndex = 19;
			this->PLtractbar->TrackColor = System::Drawing::Color::DimGray;
			this->PLtractbar->TrackHoverColor = System::Drawing::Color::Gray;
			this->PLtractbar->TrackIdleColor = System::Drawing::Color::Silver;
			this->PLtractbar->TrackPressedColor = System::Drawing::Color::Black;
			this->PLtractbar->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::PLtractbar_Scroll);
			// 
			// PHtrackbar
			// 
			this->PHtrackbar->Location = System::Drawing::Point(21, 119);
			this->PHtrackbar->Maximum = 1000000;
			this->PHtrackbar->Name = L"PHtrackbar";
			this->PHtrackbar->Size = System::Drawing::Size(864, 23);
			this->PHtrackbar->TabIndex = 18;
			this->PHtrackbar->TrackColor = System::Drawing::Color::DimGray;
			this->PHtrackbar->TrackHoverColor = System::Drawing::Color::Gray;
			this->PHtrackbar->TrackIdleColor = System::Drawing::Color::Silver;
			this->PHtrackbar->TrackPressedColor = System::Drawing::Color::Black;
			this->PHtrackbar->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::PHtrackbar_Scroll);
			// 
			// Textpricelow
			// 
			this->Textpricelow->Location = System::Drawing::Point(21, 15);
			this->Textpricelow->Name = L"Textpricelow";
			this->Textpricelow->Size = System::Drawing::Size(592, 22);
			this->Textpricelow->TabIndex = 17;
			this->Textpricelow->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Textpricelow->TextChanged += gcnew System::EventHandler(this, &MyForm::Textpricelow_TextChanged);
			// 
			// Textpricehigh
			// 
			this->Textpricehigh->Location = System::Drawing::Point(21, 82);
			this->Textpricehigh->Name = L"Textpricehigh";
			this->Textpricehigh->Size = System::Drawing::Size(592, 22);
			this->Textpricehigh->TabIndex = 16;
			this->Textpricehigh->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Textpricehigh->TextChanged += gcnew System::EventHandler(this, &MyForm::Textpricehigh_TextChanged);
			// 
			// gunaLabel3
			// 
			this->gunaLabel3->AutoSize = true;
			this->gunaLabel3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gunaLabel3->Location = System::Drawing::Point(784, 12);
			this->gunaLabel3->Name = L"gunaLabel3";
			this->gunaLabel3->Size = System::Drawing::Size(112, 38);
			this->gunaLabel3->TabIndex = 10;
			this->gunaLabel3->Text = L" : قیمت ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(679, 15);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(96, 25);
			this->label2->TabIndex = 20;
			this->label2->Text = L"کمترین قیمت";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(679, 82);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(101, 25);
			this->label3->TabIndex = 21;
			this->label3->Text = L"بیشترین قیمت";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(923, 773);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->gunaPanel1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"جستجوی پیشرفته";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->gunaPanel1->ResumeLayout(false);
			this->gunaPanel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void All_language_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void gunaCheckBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void gunaCheckBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	//check();
}
private: void check()
	{
	if (gunaCheckBox2->Checked == false || gunaCheckBox3->Checked==false || gunaCheckBox4->Checked==false)
	{
		All_language->Checked = false;
	}
	if (gunaCheckBox2->Checked == true && gunaCheckBox3->Checked == true && gunaCheckBox4->Checked == true)
	{
		All_language->Checked = true;
	}
	}
private: System::Void All_language_Click(System::Object^ sender, System::EventArgs^ e) {
	if (All_language->Checked == true)
	{
		gunaCheckBox3->Checked = true;
		gunaCheckBox2->Checked = true;
		gunaCheckBox4->Checked = true;
	}
	else
	{
		gunaCheckBox3->Checked = false;
		gunaCheckBox2->Checked = false;
		gunaCheckBox4->Checked = false;
	}
}
private: System::Void gunaCheckBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	check();
}
private: System::Void gunaCheckBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	check();
}
private: System::Void gunaCheckBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	check();
}
private: void check_Book()
{
	if (B1->Checked == true && B2->Checked == true && B3->Checked == true && B4->Checked == true && B5->Checked == true && B6->Checked == true && B7->Checked == true && B8->Checked == true && B9->Checked == true && B10->Checked == true && B11->Checked == true && B12->Checked == true)
	{
		All_Book->Checked = true;
	}
	if (B1->Checked == false || B2->Checked == false || B3->Checked == false || B4->Checked == false || B5->Checked == false || B6->Checked == false || B7->Checked == false || B8->Checked == false || B9->Checked == false || B10->Checked == false || B11->Checked == false || B12->Checked == false  )
	{
		All_Book->Checked = false;
	}
}
private: System::Void All_Book_Click(System::Object^ sender, System::EventArgs^ e) {
	if (All_Book->Checked == true)
	{
		B1->Checked = true;
		B2->Checked = true;
		B3->Checked = true;
		//check();
		B4->Checked = true;
		B5->Checked = true;
		B6->Checked = true;
		B7->Checked = true;
		B8->Checked = true;
		B9->Checked = true;
		B10->Checked = true;
		B11->Checked = true;
		B12->Checked = true;
	}
	else
	{
		B1->Checked = false;
		B2->Checked = false;
		B3->Checked = false;
		B4->Checked = false;
		B5->Checked = false;
		B6->Checked = false;
		B7->Checked = false;
		B8->Checked = false;
		B9->Checked = false;
		B10->Checked = false;
		B11->Checked = false;
		B12->Checked = false;
	}
}
private: System::Void B1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void All_Book_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void B1_Click(System::Object^ sender, System::EventArgs^ e) {
	check_Book();
}
private: System::Void B2_Click(System::Object^ sender, System::EventArgs^ e) {
	check_Book();
}
private: System::Void B3_Click(System::Object^ sender, System::EventArgs^ e) {
	check_Book();
}
private: System::Void B4_Click(System::Object^ sender, System::EventArgs^ e) {
	check_Book();
}
private: System::Void B5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void B5_Click(System::Object^ sender, System::EventArgs^ e) {
	check_Book();
}
private: System::Void B6_Click(System::Object^ sender, System::EventArgs^ e) {
	check_Book();
}
private: System::Void B7_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void B8_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void B8_Click(System::Object^ sender, System::EventArgs^ e) {
	check_Book();
}
private: System::Void B9_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void B9_Click(System::Object^ sender, System::EventArgs^ e) {
	check_Book();
}
private: System::Void B10_Click(System::Object^ sender, System::EventArgs^ e) {
	check_Book();
}
private: System::Void B11_Click(System::Object^ sender, System::EventArgs^ e) {
	check_Book();
}
private: System::Void B12_Click(System::Object^ sender, System::EventArgs^ e) {
	check_Book();
}
private: System::Void B7_Click(System::Object^ sender, System::EventArgs^ e) {
	check_Book();
}
private: System::Void All_Type_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private:void check_type()
{
	if (T1->Checked == true && T2->Checked == true)
	{
		All_Type->Checked = true;
	}
	if (T1->Checked == false || T2->Checked == false)
	{
		All_Type->Checked = false;
	}
}
private: System::Void All_Type_Click(System::Object^ sender, System::EventArgs^ e) {
	if (All_Type->Checked == true)
	{
		T1->Checked = true;
		T2->Checked = true;
	}
	else
	{
		T1->Checked = false;
		T2->Checked = false;
	}
}
private: System::Void T1_Click(System::Object^ sender, System::EventArgs^ e) {
	check_type();
}
private: System::Void T2_Click(System::Object^ sender, System::EventArgs^ e) {
	check_type();
}
private: System::Void PHtrackbar_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	if (PLtractbar->Value >= PHtrackbar->Value)
	{
		Textpricehigh->Text = PLtractbar->Value.ToString();
		PHtrackbar->Value = PLtractbar->Value;
	}
	else
	{
		Textpricehigh->Text = PHtrackbar->Value.ToString();
	}
}
private: System::Void PLtractbar_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	Textpricelow->Text = PLtractbar->Value.ToString();
	if (PLtractbar->Value >= PHtrackbar->Value)
	{
		Textpricehigh->Text = PLtractbar->Value.ToString();
		PHtrackbar->Value = PLtractbar->Value;
	}
}
private: System::Void Textpricelow_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	double a;
	if (Textpricelow->Text == "")
	{
		//a = 0;
		Textpricelow->Text = "0";
	}
	System::String^ string_system = Textpricelow->Text;
	//std::string std_system = msclr::interop::marshal_as<std::string>(string_system);
	//a = Convert::ToDouble(string_system);
	a = Double::Parse(string_system);
	if (a >= 1000000)
	{
		a = 1000000;
	}
	PLtractbar->Value = a;
	if (PLtractbar->Value >= PHtrackbar->Value)
	{
		PHtrackbar->Value = PLtractbar->Value;
		//PLtractbar->Value = PHtrackbar->Value;
	}
}
private: System::Void Textpricehigh_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	double a;
	System::String^ string_system = Textpricehigh->Text;
	a = Double::Parse(string_system);
	if (a >= 1000000)
	{
		a = 1000000;
	}
	PHtrackbar->Value = a;
	if (PLtractbar->Value > PHtrackbar->Value )
	{
		PHtrackbar->Value = PLtractbar->Value;
		a = PLtractbar->Value;
		
	}
}
};
}

