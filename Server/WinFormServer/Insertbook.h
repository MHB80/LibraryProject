#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace WinFormServer {

	/// <summary>
	/// Summary for Insertbook
	/// </summary>
	public ref class Insertbook : public System::Windows::Forms::UserControl
	{
	public:
		Insertbook(void)
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
		~Insertbook()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;

	protected:



















	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: Guna::UI2::WinForms::Guna2TextBox^ guna2TextBox2;
	private: Guna::UI2::WinForms::Guna2TextBox^ guna2TextBox3;
	private: System::Windows::Forms::Label^ BOOKPRICE;
	private: System::Windows::Forms::Label^ BOOKNAME;
	private: System::Windows::Forms::Label^ WRITER;
	private: System::Windows::Forms::Label^ GENRES;
	private: Guna::UI2::WinForms::Guna2TextBox^ guna2TextBox1;
	private: Guna::UI2::WinForms::Guna2TextBox^ guna2TextBox4;
	private: Guna::UI2::WinForms::Guna2Panel^ guna2Panel1;
	private: Guna::UI2::WinForms::Guna2Button^ CANCEL;

	private: Guna::UI2::WinForms::Guna2Button^ SEND;
	private: System::Windows::Forms::Label^ BOOKINFORMATION;
	private: Guna::UI2::WinForms::Guna2PictureBox^ BOOKPICTURE;
	private: Guna::UI2::WinForms::Guna2Button^ SENDPICTURE;
	private: Guna::UI2::WinForms::Guna2Button^ FILESELECT;
	private: Guna::UI2::WinForms::Guna2Panel^ guna2Panel2;
	private: Guna::UI2::WinForms::Guna2TextBox^ guna2TextBox5;
	private: System::Windows::Forms::Label^ ADDITIONALINFORMATION;
	private: System::Windows::Forms::Label^ COMPLETIONPROGGERSS;
	private: Guna::UI2::WinForms::Guna2ProgressBar^ guna2ProgressBar1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel3;
	private: Guna::UI::WinForms::GunaGradientButton^ gunaGradientButton3;
	private: Guna::UI::WinForms::GunaGradientButton^ gunaGradientButton1;
	private: Guna::UI::WinForms::GunaGradientButton^ gunaGradientButton2;
	private: Guna::UI::WinForms::GunaCircleButton^ gunaCircleButton1;
	private: Guna::UI::WinForms::GunaCircleButton^ gunaCircleButton2;
	private: Guna::UI::WinForms::GunaSeparator^ gunaSeparator2;
	private: Guna::UI::WinForms::GunaPictureBox^ gunaPictureBox3;
	private: Guna::UI::WinForms::GunaPictureBox^ gunaPictureBox2;
	private: Guna::UI::WinForms::GunaPictureBox^ gunaPictureBox5;
	private: Guna::UI::WinForms::GunaGradientButton^ gunaGradientButton4;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Insertbook::typeid));
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->guna2TextBox2 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->guna2TextBox3 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->BOOKPRICE = (gcnew System::Windows::Forms::Label());
			this->BOOKNAME = (gcnew System::Windows::Forms::Label());
			this->WRITER = (gcnew System::Windows::Forms::Label());
			this->GENRES = (gcnew System::Windows::Forms::Label());
			this->guna2TextBox1 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->guna2TextBox4 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->BOOKINFORMATION = (gcnew System::Windows::Forms::Label());
			this->guna2Panel1 = (gcnew Guna::UI2::WinForms::Guna2Panel());
			this->COMPLETIONPROGGERSS = (gcnew System::Windows::Forms::Label());
			this->guna2ProgressBar1 = (gcnew Guna::UI2::WinForms::Guna2ProgressBar());
			this->CANCEL = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->SEND = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->BOOKPICTURE = (gcnew Guna::UI2::WinForms::Guna2PictureBox());
			this->SENDPICTURE = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->FILESELECT = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->guna2Panel2 = (gcnew Guna::UI2::WinForms::Guna2Panel());
			this->guna2TextBox5 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->ADDITIONALINFORMATION = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->gunaGradientButton3 = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->gunaGradientButton1 = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->gunaGradientButton2 = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->gunaCircleButton1 = (gcnew Guna::UI::WinForms::GunaCircleButton());
			this->gunaCircleButton2 = (gcnew Guna::UI::WinForms::GunaCircleButton());
			this->gunaSeparator2 = (gcnew Guna::UI::WinForms::GunaSeparator());
			this->gunaPictureBox3 = (gcnew Guna::UI::WinForms::GunaPictureBox());
			this->gunaPictureBox2 = (gcnew Guna::UI::WinForms::GunaPictureBox());
			this->gunaPictureBox5 = (gcnew Guna::UI::WinForms::GunaPictureBox());
			this->gunaGradientButton4 = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->tableLayoutPanel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->guna2Panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BOOKPICTURE))->BeginInit();
			this->guna2Panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				41.97829F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				58.02171F)));
			this->tableLayoutPanel1->Controls->Add(this->panel2, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->guna2Panel1, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->BOOKPICTURE, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->SENDPICTURE, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->FILESELECT, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->guna2Panel2, 1, 2);
			this->tableLayoutPanel1->Location = System::Drawing::Point(8, 118);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 3;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 53.05755F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.76978F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.99281F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(795, 556);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->tableLayoutPanel2);
			this->panel2->Location = System::Drawing::Point(336, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(456, 288);
			this->panel2->TabIndex = 3;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				65.39278F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				34.60722F)));
			this->tableLayoutPanel2->Controls->Add(this->guna2TextBox2, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->guna2TextBox3, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->BOOKPRICE, 1, 2);
			this->tableLayoutPanel2->Controls->Add(this->BOOKNAME, 1, 1);
			this->tableLayoutPanel2->Controls->Add(this->WRITER, 1, 3);
			this->tableLayoutPanel2->Controls->Add(this->GENRES, 1, 4);
			this->tableLayoutPanel2->Controls->Add(this->guna2TextBox1, 0, 3);
			this->tableLayoutPanel2->Controls->Add(this->guna2TextBox4, 0, 4);
			this->tableLayoutPanel2->Controls->Add(this->BOOKINFORMATION, 1, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 5;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25.13089F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 24.60733F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 84)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(454, 282);
			this->tableLayoutPanel2->TabIndex = 1;
			// 
			// guna2TextBox2
			// 
			this->guna2TextBox2->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->guna2TextBox2->DefaultText = L"";
			this->guna2TextBox2->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->guna2TextBox2->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->guna2TextBox2->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->guna2TextBox2->DisabledState->Parent = this->guna2TextBox2;
			this->guna2TextBox2->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->guna2TextBox2->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->guna2TextBox2->FocusedState->Parent = this->guna2TextBox2;
			this->guna2TextBox2->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->guna2TextBox2->HoverState->Parent = this->guna2TextBox2;
			this->guna2TextBox2->Location = System::Drawing::Point(4, 101);
			this->guna2TextBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->guna2TextBox2->Name = L"guna2TextBox2";
			this->guna2TextBox2->PasswordChar = '\0';
			this->guna2TextBox2->PlaceholderText = L"";
			this->guna2TextBox2->SelectedText = L"";
			this->guna2TextBox2->ShadowDecoration->Parent = this->guna2TextBox2;
			this->guna2TextBox2->Size = System::Drawing::Size(288, 40);
			this->guna2TextBox2->TabIndex = 8;
			// 
			// guna2TextBox3
			// 
			this->guna2TextBox3->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->guna2TextBox3->DefaultText = L"";
			this->guna2TextBox3->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->guna2TextBox3->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->guna2TextBox3->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->guna2TextBox3->DisabledState->Parent = this->guna2TextBox3;
			this->guna2TextBox3->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->guna2TextBox3->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->guna2TextBox3->FocusedState->Parent = this->guna2TextBox3;
			this->guna2TextBox3->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->guna2TextBox3->HoverState->Parent = this->guna2TextBox3;
			this->guna2TextBox3->Location = System::Drawing::Point(4, 53);
			this->guna2TextBox3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->guna2TextBox3->Name = L"guna2TextBox3";
			this->guna2TextBox3->PasswordChar = '\0';
			this->guna2TextBox3->PlaceholderText = L"";
			this->guna2TextBox3->SelectedText = L"";
			this->guna2TextBox3->ShadowDecoration->Parent = this->guna2TextBox3;
			this->guna2TextBox3->Size = System::Drawing::Size(288, 39);
			this->guna2TextBox3->TabIndex = 9;
			// 
			// BOOKPRICE
			// 
			this->BOOKPRICE->AutoSize = true;
			this->BOOKPRICE->Dock = System::Windows::Forms::DockStyle::Right;
			this->BOOKPRICE->Font = (gcnew System::Drawing::Font(L"B Nazanin", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->BOOKPRICE->Location = System::Drawing::Point(386, 97);
			this->BOOKPRICE->Name = L"BOOKPRICE";
			this->BOOKPRICE->Size = System::Drawing::Size(65, 49);
			this->BOOKPRICE->TabIndex = 1;
			this->BOOKPRICE->Text = L"قیمت کتاب";
			// 
			// BOOKNAME
			// 
			this->BOOKNAME->AutoSize = true;
			this->BOOKNAME->Dock = System::Windows::Forms::DockStyle::Right;
			this->BOOKNAME->Font = (gcnew System::Drawing::Font(L"B Nazanin", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->BOOKNAME->Location = System::Drawing::Point(399, 49);
			this->BOOKNAME->Name = L"BOOKNAME";
			this->BOOKNAME->Size = System::Drawing::Size(52, 48);
			this->BOOKNAME->TabIndex = 3;
			this->BOOKNAME->Text = L"نام کتاب";
			// 
			// WRITER
			// 
			this->WRITER->AutoSize = true;
			this->WRITER->Dock = System::Windows::Forms::DockStyle::Right;
			this->WRITER->Font = (gcnew System::Drawing::Font(L"B Nazanin", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->WRITER->Location = System::Drawing::Point(400, 146);
			this->WRITER->Name = L"WRITER";
			this->WRITER->Size = System::Drawing::Size(51, 49);
			this->WRITER->TabIndex = 4;
			this->WRITER->Text = L"نویسنده";
			// 
			// GENRES
			// 
			this->GENRES->AutoSize = true;
			this->GENRES->Dock = System::Windows::Forms::DockStyle::Right;
			this->GENRES->Font = (gcnew System::Drawing::Font(L"B Nazanin", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->GENRES->Location = System::Drawing::Point(411, 195);
			this->GENRES->Name = L"GENRES";
			this->GENRES->Size = System::Drawing::Size(40, 87);
			this->GENRES->TabIndex = 5;
			this->GENRES->Text = L"ژانر ها";
			// 
			// guna2TextBox1
			// 
			this->guna2TextBox1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->guna2TextBox1->DefaultText = L"";
			this->guna2TextBox1->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->guna2TextBox1->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->guna2TextBox1->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->guna2TextBox1->DisabledState->Parent = this->guna2TextBox1;
			this->guna2TextBox1->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->guna2TextBox1->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->guna2TextBox1->FocusedState->Parent = this->guna2TextBox1;
			this->guna2TextBox1->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->guna2TextBox1->HoverState->Parent = this->guna2TextBox1;
			this->guna2TextBox1->Location = System::Drawing::Point(4, 150);
			this->guna2TextBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->guna2TextBox1->Name = L"guna2TextBox1";
			this->guna2TextBox1->PasswordChar = '\0';
			this->guna2TextBox1->PlaceholderText = L"";
			this->guna2TextBox1->SelectedText = L"";
			this->guna2TextBox1->ShadowDecoration->Parent = this->guna2TextBox1;
			this->guna2TextBox1->Size = System::Drawing::Size(288, 40);
			this->guna2TextBox1->TabIndex = 6;
			// 
			// guna2TextBox4
			// 
			this->guna2TextBox4->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->guna2TextBox4->DefaultText = L"";
			this->guna2TextBox4->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->guna2TextBox4->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->guna2TextBox4->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->guna2TextBox4->DisabledState->Parent = this->guna2TextBox4;
			this->guna2TextBox4->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->guna2TextBox4->Dock = System::Windows::Forms::DockStyle::Right;
			this->guna2TextBox4->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->guna2TextBox4->FocusedState->Parent = this->guna2TextBox4;
			this->guna2TextBox4->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->guna2TextBox4->HoverState->Parent = this->guna2TextBox4;
			this->guna2TextBox4->Location = System::Drawing::Point(4, 199);
			this->guna2TextBox4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->guna2TextBox4->Name = L"guna2TextBox4";
			this->guna2TextBox4->PasswordChar = '\0';
			this->guna2TextBox4->PlaceholderText = L"";
			this->guna2TextBox4->SelectedText = L"";
			this->guna2TextBox4->ShadowDecoration->Parent = this->guna2TextBox4;
			this->guna2TextBox4->Size = System::Drawing::Size(288, 79);
			this->guna2TextBox4->TabIndex = 10;
			// 
			// BOOKINFORMATION
			// 
			this->BOOKINFORMATION->AutoSize = true;
			this->BOOKINFORMATION->Dock = System::Windows::Forms::DockStyle::Right;
			this->BOOKINFORMATION->Font = (gcnew System::Drawing::Font(L"B Nazanin", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->BOOKINFORMATION->Location = System::Drawing::Point(399, 0);
			this->BOOKINFORMATION->Name = L"BOOKINFORMATION";
			this->BOOKINFORMATION->Size = System::Drawing::Size(52, 49);
			this->BOOKINFORMATION->TabIndex = 11;
			this->BOOKINFORMATION->Text = L"نام کتاب";
			// 
			// guna2Panel1
			// 
			this->guna2Panel1->Controls->Add(this->COMPLETIONPROGGERSS);
			this->guna2Panel1->Controls->Add(this->guna2ProgressBar1);
			this->guna2Panel1->Controls->Add(this->CANCEL);
			this->guna2Panel1->Controls->Add(this->SEND);
			this->guna2Panel1->Location = System::Drawing::Point(3, 369);
			this->guna2Panel1->Name = L"guna2Panel1";
			this->guna2Panel1->ShadowDecoration->Parent = this->guna2Panel1;
			this->guna2Panel1->Size = System::Drawing::Size(327, 184);
			this->guna2Panel1->TabIndex = 4;
			// 
			// COMPLETIONPROGGERSS
			// 
			this->COMPLETIONPROGGERSS->AutoSize = true;
			this->COMPLETIONPROGGERSS->Font = (gcnew System::Drawing::Font(L"B Nazanin", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->COMPLETIONPROGGERSS->Location = System::Drawing::Point(235, 12);
			this->COMPLETIONPROGGERSS->Name = L"COMPLETIONPROGGERSS";
			this->COMPLETIONPROGGERSS->Size = System::Drawing::Size(82, 23);
			this->COMPLETIONPROGGERSS->TabIndex = 3;
			this->COMPLETIONPROGGERSS->Text = L"میزان پیشرفت";
			// 
			// guna2ProgressBar1
			// 
			this->guna2ProgressBar1->GradientMode = System::Drawing::Drawing2D::LinearGradientMode::Horizontal;
			this->guna2ProgressBar1->Location = System::Drawing::Point(15, 67);
			this->guna2ProgressBar1->Name = L"guna2ProgressBar1";
			this->guna2ProgressBar1->ShadowDecoration->Parent = this->guna2ProgressBar1;
			this->guna2ProgressBar1->Size = System::Drawing::Size(300, 30);
			this->guna2ProgressBar1->TabIndex = 2;
			this->guna2ProgressBar1->TextRenderingHint = System::Drawing::Text::TextRenderingHint::SystemDefault;
			// 
			// CANCEL
			// 
			this->CANCEL->CheckedState->Parent = this->CANCEL;
			this->CANCEL->CustomImages->Parent = this->CANCEL;
			this->CANCEL->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->CANCEL->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->CANCEL->ForeColor = System::Drawing::Color::White;
			this->CANCEL->HoverState->Parent = this->CANCEL;
			this->CANCEL->Location = System::Drawing::Point(196, 135);
			this->CANCEL->Name = L"CANCEL";
			this->CANCEL->ShadowDecoration->Parent = this->CANCEL;
			this->CANCEL->Size = System::Drawing::Size(119, 45);
			this->CANCEL->TabIndex = 1;
			this->CANCEL->Text = L"لغو";
			// 
			// SEND
			// 
			this->SEND->CheckedState->Parent = this->SEND;
			this->SEND->CustomImages->Parent = this->SEND;
			this->SEND->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->SEND->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->SEND->ForeColor = System::Drawing::Color::White;
			this->SEND->HoverState->Parent = this->SEND;
			this->SEND->Location = System::Drawing::Point(15, 135);
			this->SEND->Name = L"SEND";
			this->SEND->ShadowDecoration->Parent = this->SEND;
			this->SEND->Size = System::Drawing::Size(129, 45);
			this->SEND->TabIndex = 0;
			this->SEND->Text = L"ارسال به دیتابیس";
			// 
			// BOOKPICTURE
			// 
			this->BOOKPICTURE->Location = System::Drawing::Point(3, 3);
			this->BOOKPICTURE->Name = L"BOOKPICTURE";
			this->BOOKPICTURE->ShadowDecoration->Parent = this->BOOKPICTURE;
			this->BOOKPICTURE->Size = System::Drawing::Size(327, 288);
			this->BOOKPICTURE->TabIndex = 5;
			this->BOOKPICTURE->TabStop = false;
			// 
			// SENDPICTURE
			// 
			this->SENDPICTURE->CheckedState->Parent = this->SENDPICTURE;
			this->SENDPICTURE->CustomImages->Parent = this->SENDPICTURE;
			this->SENDPICTURE->Dock = System::Windows::Forms::DockStyle::Fill;
			this->SENDPICTURE->FillColor = System::Drawing::Color::DimGray;
			this->SENDPICTURE->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->SENDPICTURE->ForeColor = System::Drawing::Color::White;
			this->SENDPICTURE->HoverState->Parent = this->SENDPICTURE;
			this->SENDPICTURE->Location = System::Drawing::Point(3, 298);
			this->SENDPICTURE->Name = L"SENDPICTURE";
			this->SENDPICTURE->ShadowDecoration->Parent = this->SENDPICTURE;
			this->SENDPICTURE->Size = System::Drawing::Size(327, 65);
			this->SENDPICTURE->TabIndex = 6;
			this->SENDPICTURE->Text = L"ارسال عکس کتاب";
			// 
			// FILESELECT
			// 
			this->FILESELECT->CheckedState->Parent = this->FILESELECT;
			this->FILESELECT->CustomImages->Parent = this->FILESELECT;
			this->FILESELECT->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->FILESELECT->ForeColor = System::Drawing::Color::White;
			this->FILESELECT->HoverState->Parent = this->FILESELECT;
			this->FILESELECT->Location = System::Drawing::Point(336, 298);
			this->FILESELECT->Name = L"FILESELECT";
			this->FILESELECT->ShadowDecoration->Parent = this->FILESELECT;
			this->FILESELECT->Size = System::Drawing::Size(456, 65);
			this->FILESELECT->TabIndex = 7;
			this->FILESELECT->Text = L"انتخاب فایل";
			this->FILESELECT->Click += gcnew System::EventHandler(this, &Insertbook::FILESELECT_Click);
			// 
			// guna2Panel2
			// 
			this->guna2Panel2->Controls->Add(this->guna2TextBox5);
			this->guna2Panel2->Controls->Add(this->ADDITIONALINFORMATION);
			this->guna2Panel2->Location = System::Drawing::Point(336, 369);
			this->guna2Panel2->Name = L"guna2Panel2";
			this->guna2Panel2->ShadowDecoration->Parent = this->guna2Panel2;
			this->guna2Panel2->Size = System::Drawing::Size(456, 184);
			this->guna2Panel2->TabIndex = 8;
			// 
			// guna2TextBox5
			// 
			this->guna2TextBox5->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->guna2TextBox5->DefaultText = L"";
			this->guna2TextBox5->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->guna2TextBox5->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->guna2TextBox5->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->guna2TextBox5->DisabledState->Parent = this->guna2TextBox5;
			this->guna2TextBox5->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->guna2TextBox5->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->guna2TextBox5->FocusedState->Parent = this->guna2TextBox5;
			this->guna2TextBox5->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->guna2TextBox5->HoverState->Parent = this->guna2TextBox5;
			this->guna2TextBox5->Location = System::Drawing::Point(7, 12);
			this->guna2TextBox5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->guna2TextBox5->Name = L"guna2TextBox5";
			this->guna2TextBox5->PasswordChar = '\0';
			this->guna2TextBox5->PlaceholderText = L"";
			this->guna2TextBox5->SelectedText = L"";
			this->guna2TextBox5->ShadowDecoration->Parent = this->guna2TextBox5;
			this->guna2TextBox5->Size = System::Drawing::Size(299, 168);
			this->guna2TextBox5->TabIndex = 1;
			// 
			// ADDITIONALINFORMATION
			// 
			this->ADDITIONALINFORMATION->AutoSize = true;
			this->ADDITIONALINFORMATION->Font = (gcnew System::Drawing::Font(L"B Nazanin", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->ADDITIONALINFORMATION->Location = System::Drawing::Point(368, 12);
			this->ADDITIONALINFORMATION->Name = L"ADDITIONALINFORMATION";
			this->ADDITIONALINFORMATION->Size = System::Drawing::Size(89, 23);
			this->ADDITIONALINFORMATION->TabIndex = 0;
			this->ADDITIONALINFORMATION->Text = L"اطلاعات تکمیلی";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::MediumSlateBlue;
			this->panel1->Location = System::Drawing::Point(810, 55);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(213, 112);
			this->panel1->TabIndex = 12;
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
			this->panel3->Location = System::Drawing::Point(810, 166);
			this->panel3->Margin = System::Windows::Forms::Padding(4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(213, 558);
			this->panel3->TabIndex = 11;
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
			// gunaPictureBox3
			// 
			this->gunaPictureBox3->BaseColor = System::Drawing::Color::White;
			this->gunaPictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaPictureBox3.Image")));
			this->gunaPictureBox3->Location = System::Drawing::Point(819, 3);
			this->gunaPictureBox3->Name = L"gunaPictureBox3";
			this->gunaPictureBox3->Size = System::Drawing::Size(77, 48);
			this->gunaPictureBox3->TabIndex = 12;
			this->gunaPictureBox3->TabStop = false;
			// 
			// gunaPictureBox2
			// 
			this->gunaPictureBox2->BaseColor = System::Drawing::Color::White;
			this->gunaPictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaPictureBox2.Image")));
			this->gunaPictureBox2->Location = System::Drawing::Point(902, 3);
			this->gunaPictureBox2->Name = L"gunaPictureBox2";
			this->gunaPictureBox2->Size = System::Drawing::Size(51, 48);
			this->gunaPictureBox2->TabIndex = 11;
			this->gunaPictureBox2->TabStop = false;
			// 
			// gunaPictureBox5
			// 
			this->gunaPictureBox5->BaseColor = System::Drawing::Color::White;
			this->gunaPictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaPictureBox5.Image")));
			this->gunaPictureBox5->Location = System::Drawing::Point(962, 3);
			this->gunaPictureBox5->Name = L"gunaPictureBox5";
			this->gunaPictureBox5->Size = System::Drawing::Size(51, 48);
			this->gunaPictureBox5->TabIndex = 13;
			this->gunaPictureBox5->TabStop = false;
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
			this->gunaGradientButton4->Location = System::Drawing::Point(0, 291);
			this->gunaGradientButton4->Name = L"gunaGradientButton4";
			this->gunaGradientButton4->OnHoverBaseColor1 = System::Drawing::Color::DarkBlue;
			this->gunaGradientButton4->OnHoverBaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->gunaGradientButton4->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton4->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaGradientButton4->OnHoverImage = nullptr;
			this->gunaGradientButton4->OnPressedColor = System::Drawing::Color::Black;
			this->gunaGradientButton4->Size = System::Drawing::Size(213, 94);
			this->gunaGradientButton4->TabIndex = 15;
			this->gunaGradientButton4->Text = L"جستجو";
			// 
			// Insertbook
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->gunaPictureBox5);
			this->Controls->Add(this->gunaPictureBox3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->gunaPictureBox2);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Name = L"Insertbook";
			this->Size = System::Drawing::Size(1024, 724);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->guna2Panel1->ResumeLayout(false);
			this->guna2Panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BOOKPICTURE))->EndInit();
			this->guna2Panel2->ResumeLayout(false);
			this->guna2Panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox5))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	


private: System::Void EXITCONTROLBOX_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void FILESELECT_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
