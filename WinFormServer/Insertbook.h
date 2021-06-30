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
	private: Guna::UI2::WinForms::Guna2ControlBox^ EXITCONTROLBOX;
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
			this->CANCEL = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->SEND = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->BOOKPICTURE = (gcnew Guna::UI2::WinForms::Guna2PictureBox());
			this->SENDPICTURE = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->FILESELECT = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->guna2Panel2 = (gcnew Guna::UI2::WinForms::Guna2Panel());
			this->guna2TextBox5 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->ADDITIONALINFORMATION = (gcnew System::Windows::Forms::Label());
			this->EXITCONTROLBOX = (gcnew Guna::UI2::WinForms::Guna2ControlBox());
			this->guna2ProgressBar1 = (gcnew Guna::UI2::WinForms::Guna2ProgressBar());
			this->COMPLETIONPROGGERSS = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->guna2Panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BOOKPICTURE))->BeginInit();
			this->guna2Panel2->SuspendLayout();
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
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 37);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 3;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 53.05755F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.76978F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.99281F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(829, 556);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->tableLayoutPanel2);
			this->panel2->Location = System::Drawing::Point(351, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(475, 288);
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
			this->tableLayoutPanel2->Size = System::Drawing::Size(471, 282);
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
			this->guna2TextBox2->Size = System::Drawing::Size(299, 40);
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
			this->guna2TextBox3->Size = System::Drawing::Size(299, 39);
			this->guna2TextBox3->TabIndex = 9;
			// 
			// BOOKPRICE
			// 
			this->BOOKPRICE->AutoSize = true;
			this->BOOKPRICE->Dock = System::Windows::Forms::DockStyle::Right;
			this->BOOKPRICE->Font = (gcnew System::Drawing::Font(L"B Titr", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->BOOKPRICE->Location = System::Drawing::Point(405, 97);
			this->BOOKPRICE->Name = L"BOOKPRICE";
			this->BOOKPRICE->Size = System::Drawing::Size(63, 49);
			this->BOOKPRICE->TabIndex = 1;
			this->BOOKPRICE->Text = L"قیمت کتاب";
			// 
			// BOOKNAME
			// 
			this->BOOKNAME->AutoSize = true;
			this->BOOKNAME->Dock = System::Windows::Forms::DockStyle::Right;
			this->BOOKNAME->Font = (gcnew System::Drawing::Font(L"B Titr", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->BOOKNAME->Location = System::Drawing::Point(417, 49);
			this->BOOKNAME->Name = L"BOOKNAME";
			this->BOOKNAME->Size = System::Drawing::Size(51, 48);
			this->BOOKNAME->TabIndex = 3;
			this->BOOKNAME->Text = L"نام کتاب";
			// 
			// WRITER
			// 
			this->WRITER->AutoSize = true;
			this->WRITER->Dock = System::Windows::Forms::DockStyle::Right;
			this->WRITER->Font = (gcnew System::Drawing::Font(L"B Titr", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->WRITER->Location = System::Drawing::Point(419, 146);
			this->WRITER->Name = L"WRITER";
			this->WRITER->Size = System::Drawing::Size(49, 49);
			this->WRITER->TabIndex = 4;
			this->WRITER->Text = L"نویسنده";
			// 
			// GENRES
			// 
			this->GENRES->AutoSize = true;
			this->GENRES->Dock = System::Windows::Forms::DockStyle::Right;
			this->GENRES->Font = (gcnew System::Drawing::Font(L"B Titr", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->GENRES->Location = System::Drawing::Point(424, 195);
			this->GENRES->Name = L"GENRES";
			this->GENRES->Size = System::Drawing::Size(44, 87);
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
			this->guna2TextBox1->Size = System::Drawing::Size(299, 40);
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
			this->guna2TextBox4->Size = System::Drawing::Size(299, 79);
			this->guna2TextBox4->TabIndex = 10;
			// 
			// BOOKINFORMATION
			// 
			this->BOOKINFORMATION->AutoSize = true;
			this->BOOKINFORMATION->Dock = System::Windows::Forms::DockStyle::Right;
			this->BOOKINFORMATION->Font = (gcnew System::Drawing::Font(L"B Titr", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->BOOKINFORMATION->Location = System::Drawing::Point(417, 0);
			this->BOOKINFORMATION->Name = L"BOOKINFORMATION";
			this->BOOKINFORMATION->Size = System::Drawing::Size(51, 49);
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
			this->guna2Panel1->Size = System::Drawing::Size(340, 184);
			this->guna2Panel1->TabIndex = 4;
			// 
			// CANCEL
			// 
			this->CANCEL->CheckedState->Parent = this->CANCEL;
			this->CANCEL->CustomImages->Parent = this->CANCEL;
			this->CANCEL->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->CANCEL->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
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
			this->SEND->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
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
			this->BOOKPICTURE->Size = System::Drawing::Size(342, 288);
			this->BOOKPICTURE->TabIndex = 5;
			this->BOOKPICTURE->TabStop = false;
			// 
			// SENDPICTURE
			// 
			this->SENDPICTURE->CheckedState->Parent = this->SENDPICTURE;
			this->SENDPICTURE->CustomImages->Parent = this->SENDPICTURE;
			this->SENDPICTURE->Dock = System::Windows::Forms::DockStyle::Fill;
			this->SENDPICTURE->FillColor = System::Drawing::Color::DimGray;
			this->SENDPICTURE->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->SENDPICTURE->ForeColor = System::Drawing::Color::White;
			this->SENDPICTURE->HoverState->Parent = this->SENDPICTURE;
			this->SENDPICTURE->Location = System::Drawing::Point(3, 298);
			this->SENDPICTURE->Name = L"SENDPICTURE";
			this->SENDPICTURE->ShadowDecoration->Parent = this->SENDPICTURE;
			this->SENDPICTURE->Size = System::Drawing::Size(342, 65);
			this->SENDPICTURE->TabIndex = 6;
			this->SENDPICTURE->Text = L"ارسال عکس کتاب";
			// 
			// FILESELECT
			// 
			this->FILESELECT->CheckedState->Parent = this->FILESELECT;
			this->FILESELECT->CustomImages->Parent = this->FILESELECT;
			this->FILESELECT->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->FILESELECT->ForeColor = System::Drawing::Color::White;
			this->FILESELECT->HoverState->Parent = this->FILESELECT;
			this->FILESELECT->Location = System::Drawing::Point(351, 298);
			this->FILESELECT->Name = L"FILESELECT";
			this->FILESELECT->ShadowDecoration->Parent = this->FILESELECT;
			this->FILESELECT->Size = System::Drawing::Size(472, 65);
			this->FILESELECT->TabIndex = 7;
			this->FILESELECT->Text = L"انتخاب فایل";
			// 
			// guna2Panel2
			// 
			this->guna2Panel2->Controls->Add(this->guna2TextBox5);
			this->guna2Panel2->Controls->Add(this->ADDITIONALINFORMATION);
			this->guna2Panel2->Location = System::Drawing::Point(351, 369);
			this->guna2Panel2->Name = L"guna2Panel2";
			this->guna2Panel2->ShadowDecoration->Parent = this->guna2Panel2;
			this->guna2Panel2->Size = System::Drawing::Size(475, 184);
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
			this->ADDITIONALINFORMATION->Font = (gcnew System::Drawing::Font(L"B Titr", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->ADDITIONALINFORMATION->Location = System::Drawing::Point(391, 12);
			this->ADDITIONALINFORMATION->Name = L"ADDITIONALINFORMATION";
			this->ADDITIONALINFORMATION->Size = System::Drawing::Size(89, 24);
			this->ADDITIONALINFORMATION->TabIndex = 0;
			this->ADDITIONALINFORMATION->Text = L"اطلاعات تکمیلی";
			// 
			// EXITCONTROLBOX
			// 
			this->EXITCONTROLBOX->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->EXITCONTROLBOX->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(152)),
				static_cast<System::Int32>(static_cast<System::Byte>(166)));
			this->EXITCONTROLBOX->HoverState->Parent = this->EXITCONTROLBOX;
			this->EXITCONTROLBOX->IconColor = System::Drawing::Color::White;
			this->EXITCONTROLBOX->Location = System::Drawing::Point(767, 5);
			this->EXITCONTROLBOX->Name = L"EXITCONTROLBOX";
			this->EXITCONTROLBOX->ShadowDecoration->Parent = this->EXITCONTROLBOX;
			this->EXITCONTROLBOX->Size = System::Drawing::Size(56, 29);
			this->EXITCONTROLBOX->TabIndex = 7;
			this->EXITCONTROLBOX->Click += gcnew System::EventHandler(this, &Insertbook::EXITCONTROLBOX_Click);
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
			// COMPLETIONPROGGERSS
			// 
			this->COMPLETIONPROGGERSS->AutoSize = true;
			this->COMPLETIONPROGGERSS->Font = (gcnew System::Drawing::Font(L"B Titr", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->COMPLETIONPROGGERSS->Location = System::Drawing::Point(235, 12);
			this->COMPLETIONPROGGERSS->Name = L"COMPLETIONPROGGERSS";
			this->COMPLETIONPROGGERSS->Size = System::Drawing::Size(80, 24);
			this->COMPLETIONPROGGERSS->TabIndex = 3;
			this->COMPLETIONPROGGERSS->Text = L"میزان پیشرفت";
			// 
			// Insertbook
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->EXITCONTROLBOX);
			this->Name = L"Insertbook";
			this->Size = System::Drawing::Size(832, 611);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->guna2Panel1->ResumeLayout(false);
			this->guna2Panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BOOKPICTURE))->EndInit();
			this->guna2Panel2->ResumeLayout(false);
			this->guna2Panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	


private: System::Void EXITCONTROLBOX_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
};
}
