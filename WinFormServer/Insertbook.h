#pragma once

#include<string>




using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Runtime::InteropServices;
using namespace std;
using namespace System::Threading;




[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
IntPtr CreateObject_API();



[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
void InsertProduct_API(IntPtr db, int id, string name, string filename, string bookdescription, string writer, string genre, string score, string price,string picturefilename);
[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
void Set_Profile_Picture_API(IntPtr db, string path, string username);
[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
int GetUsernametRowId_API(IntPtr db,string username);















namespace WinFormServer {

	/// <summary>
	/// Summary for Insertbook
	/// </summary>
	public ref class Insertbook : public System::Windows::Forms::UserControl
	{
	public:
		IntPtr db;
		Panel^ mainpanel;
		Panel^ Error_panel;
		Thread^ Browsfile;
		Thread^ browsepicture;
		String^ address_file;
		String^ address_picture;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Label^ label8;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox7;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog2;
	private: Guna::UI::WinForms::GunaButton^ gunaButton1;
	public:
	public:
		Label^ ErrorText_panel;
		Insertbook(Panel^c,Panel^x,Label^ v)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			Error_panel = x;
			ErrorText_panel = v;
			db = CreateObject_API();
			mainpanel = c;
			
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


	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox1;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox2;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox3;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox4;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox5;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox6;
	private: System::Windows::Forms::Label^ label7;
	private: Guna::UI::WinForms::GunaCircleProgressBar^ gunaCircleProgressBar1;
	private: Guna::UI::WinForms::GunaWinCircleProgressIndicator^ gunaWinCircleProgressIndicator1;
	private: Guna::UI::WinForms::GunaAdvenceButton^ gunaAdvenceButton1;



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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->gunaTextBox1 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaTextBox2 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaTextBox3 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaTextBox4 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaTextBox5 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaTextBox6 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->gunaCircleProgressBar1 = (gcnew Guna::UI::WinForms::GunaCircleProgressBar());
			this->gunaWinCircleProgressIndicator1 = (gcnew Guna::UI::WinForms::GunaWinCircleProgressIndicator());
			this->gunaAdvenceButton1 = (gcnew Guna::UI::WinForms::GunaAdvenceButton());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->gunaTextBox7 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->openFileDialog2 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->gunaButton1 = (gcnew Guna::UI::WinForms::GunaButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(111, 49);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(159, 178);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Insertbook::pictureBox1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label1->Location = System::Drawing::Point(764, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(68, 31);
			this->label1->TabIndex = 2;
			this->label1->Text = L"نام کتاب";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"B Nazanin", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label2->Location = System::Drawing::Point(745, 144);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(87, 31);
			this->label2->TabIndex = 3;
			this->label2->Text = L"قیمت کتاب";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"B Nazanin", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label3->Location = System::Drawing::Point(720, 331);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(112, 31);
			this->label3->TabIndex = 4;
			this->label3->Text = L"توضیحات کتاب";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"B Nazanin", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label4->Location = System::Drawing::Point(784, 196);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(48, 31);
			this->label4->TabIndex = 5;
			this->label4->Text = L"امتیاز";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"B Nazanin", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label5->Location = System::Drawing::Point(797, 248);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 31);
			this->label5->TabIndex = 6;
			this->label5->Text = L"ژانر";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"B Nazanin", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label6->Location = System::Drawing::Point(767, 94);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(65, 31);
			this->label6->TabIndex = 7;
			this->label6->Text = L"نویسنده";
			// 
			// gunaTextBox1
			// 
			this->gunaTextBox1->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox1->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->gunaTextBox1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox1->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox1->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox1->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaTextBox1->Location = System::Drawing::Point(522, 49);
			this->gunaTextBox1->Name = L"gunaTextBox1";
			this->gunaTextBox1->PasswordChar = '\0';
			this->gunaTextBox1->SelectedText = L"";
			this->gunaTextBox1->Size = System::Drawing::Size(201, 35);
			this->gunaTextBox1->TabIndex = 13;
			// 
			// gunaTextBox2
			// 
			this->gunaTextBox2->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox2->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->gunaTextBox2->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox2->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox2->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox2->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaTextBox2->Location = System::Drawing::Point(522, 94);
			this->gunaTextBox2->Name = L"gunaTextBox2";
			this->gunaTextBox2->PasswordChar = '\0';
			this->gunaTextBox2->SelectedText = L"";
			this->gunaTextBox2->Size = System::Drawing::Size(201, 35);
			this->gunaTextBox2->TabIndex = 14;
			// 
			// gunaTextBox3
			// 
			this->gunaTextBox3->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox3->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->gunaTextBox3->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox3->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox3->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox3->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaTextBox3->Location = System::Drawing::Point(522, 144);
			this->gunaTextBox3->Name = L"gunaTextBox3";
			this->gunaTextBox3->PasswordChar = '\0';
			this->gunaTextBox3->SelectedText = L"";
			this->gunaTextBox3->Size = System::Drawing::Size(201, 35);
			this->gunaTextBox3->TabIndex = 15;
			// 
			// gunaTextBox4
			// 
			this->gunaTextBox4->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox4->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->gunaTextBox4->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox4->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox4->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox4->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaTextBox4->Location = System::Drawing::Point(522, 192);
			this->gunaTextBox4->Name = L"gunaTextBox4";
			this->gunaTextBox4->PasswordChar = '\0';
			this->gunaTextBox4->SelectedText = L"";
			this->gunaTextBox4->Size = System::Drawing::Size(201, 35);
			this->gunaTextBox4->TabIndex = 16;
			// 
			// gunaTextBox5
			// 
			this->gunaTextBox5->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox5->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->gunaTextBox5->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox5->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox5->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox5->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaTextBox5->Location = System::Drawing::Point(522, 244);
			this->gunaTextBox5->Name = L"gunaTextBox5";
			this->gunaTextBox5->PasswordChar = '\0';
			this->gunaTextBox5->SelectedText = L"";
			this->gunaTextBox5->Size = System::Drawing::Size(201, 35);
			this->gunaTextBox5->TabIndex = 17;
			// 
			// gunaTextBox6
			// 
			this->gunaTextBox6->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox6->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->gunaTextBox6->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox6->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox6->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox6->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaTextBox6->Location = System::Drawing::Point(522, 365);
			this->gunaTextBox6->Name = L"gunaTextBox6";
			this->gunaTextBox6->PasswordChar = '\0';
			this->gunaTextBox6->SelectedText = L"";
			this->gunaTextBox6->Size = System::Drawing::Size(310, 197);
			this->gunaTextBox6->TabIndex = 18;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"B Nazanin", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label7->Location = System::Drawing::Point(146, 230);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(90, 31);
			this->label7->TabIndex = 19;
			this->label7->Text = L"تصویر کتاب";
			// 
			// gunaCircleProgressBar1
			// 
			this->gunaCircleProgressBar1->AnimationSpeed = 0.6F;
			this->gunaCircleProgressBar1->BackColor = System::Drawing::Color::Transparent;
			this->gunaCircleProgressBar1->BaseColor = System::Drawing::Color::White;
			this->gunaCircleProgressBar1->IdleColor = System::Drawing::Color::Gainsboro;
			this->gunaCircleProgressBar1->IdleOffset = 20;
			this->gunaCircleProgressBar1->Image = nullptr;
			this->gunaCircleProgressBar1->ImageSize = System::Drawing::Size(52, 52);
			this->gunaCircleProgressBar1->Location = System::Drawing::Point(152, 384);
			this->gunaCircleProgressBar1->Name = L"gunaCircleProgressBar1";
			this->gunaCircleProgressBar1->ProgressMaxColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCircleProgressBar1->ProgressMinColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCircleProgressBar1->ProgressOffset = 20;
			this->gunaCircleProgressBar1->Size = System::Drawing::Size(130, 130);
			this->gunaCircleProgressBar1->TabIndex = 20;
			// 
			// gunaWinCircleProgressIndicator1
			// 
			this->gunaWinCircleProgressIndicator1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->gunaWinCircleProgressIndicator1->Location = System::Drawing::Point(341, 419);
			this->gunaWinCircleProgressIndicator1->Name = L"gunaWinCircleProgressIndicator1";
			this->gunaWinCircleProgressIndicator1->ProgressColor = System::Drawing::Color::DodgerBlue;
			this->gunaWinCircleProgressIndicator1->Size = System::Drawing::Size(64, 64);
			this->gunaWinCircleProgressIndicator1->TabIndex = 21;
			// 
			// gunaAdvenceButton1
			// 
			this->gunaAdvenceButton1->AnimationHoverSpeed = 0.07F;
			this->gunaAdvenceButton1->AnimationSpeed = 0.03F;
			this->gunaAdvenceButton1->BackColor = System::Drawing::Color::Transparent;
			this->gunaAdvenceButton1->BaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(166)), static_cast<System::Int32>(static_cast<System::Byte>(232)));
			this->gunaAdvenceButton1->BorderColor = System::Drawing::Color::Black;
			this->gunaAdvenceButton1->CheckedBaseColor = System::Drawing::Color::Gray;
			this->gunaAdvenceButton1->CheckedBorderColor = System::Drawing::Color::Black;
			this->gunaAdvenceButton1->CheckedForeColor = System::Drawing::Color::White;
			this->gunaAdvenceButton1->CheckedImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaAdvenceButton1.CheckedImage")));
			this->gunaAdvenceButton1->CheckedLineColor = System::Drawing::Color::Firebrick;
			this->gunaAdvenceButton1->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaAdvenceButton1->FocusedColor = System::Drawing::Color::Empty;
			this->gunaAdvenceButton1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaAdvenceButton1->ForeColor = System::Drawing::Color::White;
			this->gunaAdvenceButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaAdvenceButton1.Image")));
			this->gunaAdvenceButton1->ImageSize = System::Drawing::Size(20, 20);
			this->gunaAdvenceButton1->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(170)));
			this->gunaAdvenceButton1->Location = System::Drawing::Point(111, 520);
			this->gunaAdvenceButton1->Name = L"gunaAdvenceButton1";
			this->gunaAdvenceButton1->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaAdvenceButton1->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaAdvenceButton1->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaAdvenceButton1->OnHoverImage = nullptr;
			this->gunaAdvenceButton1->OnHoverLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(170)));
			this->gunaAdvenceButton1->OnPressedColor = System::Drawing::Color::Black;
			this->gunaAdvenceButton1->Radius = 15;
			this->gunaAdvenceButton1->Size = System::Drawing::Size(215, 42);
			this->gunaAdvenceButton1->TabIndex = 32;
			this->gunaAdvenceButton1->Text = L"ثبت کتاب";
			this->gunaAdvenceButton1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->gunaAdvenceButton1->Click += gcnew System::EventHandler(this, &Insertbook::gunaAdvenceButton1_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"B Nazanin", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label8->Location = System::Drawing::Point(797, 293);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(36, 31);
			this->label8->TabIndex = 33;
			this->label8->Text = L"ID";
			// 
			// gunaTextBox7
			// 
			this->gunaTextBox7->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox7->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->gunaTextBox7->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox7->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox7->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox7->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaTextBox7->Location = System::Drawing::Point(522, 293);
			this->gunaTextBox7->Name = L"gunaTextBox7";
			this->gunaTextBox7->PasswordChar = '\0';
			this->gunaTextBox7->SelectedText = L"";
			this->gunaTextBox7->Size = System::Drawing::Size(201, 35);
			this->gunaTextBox7->TabIndex = 34;
			// 
			// openFileDialog2
			// 
			this->openFileDialog2->FileName = L"openFileDialog2";
			// 
			// gunaButton1
			// 
			this->gunaButton1->AnimationHoverSpeed = 0.07F;
			this->gunaButton1->AnimationSpeed = 0.03F;
			this->gunaButton1->BaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(88)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaButton1->BorderColor = System::Drawing::Color::Black;
			this->gunaButton1->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaButton1->FocusedColor = System::Drawing::Color::Empty;
			this->gunaButton1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaButton1->ForeColor = System::Drawing::Color::White;
			this->gunaButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaButton1.Image")));
			this->gunaButton1->ImageSize = System::Drawing::Size(20, 20);
			this->gunaButton1->Location = System::Drawing::Point(110, 264);
			this->gunaButton1->Name = L"gunaButton1";
			this->gunaButton1->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaButton1->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaButton1->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaButton1->OnHoverImage = nullptr;
			this->gunaButton1->OnPressedColor = System::Drawing::Color::Black;
			this->gunaButton1->Size = System::Drawing::Size(160, 42);
			this->gunaButton1->TabIndex = 35;
			this->gunaButton1->Text = L"gunaButton1";
			this->gunaButton1->Click += gcnew System::EventHandler(this, &Insertbook::gunaButton1_Click);
			// 
			// Insertbook
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->Controls->Add(this->gunaButton1);
			this->Controls->Add(this->gunaTextBox7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->gunaAdvenceButton1);
			this->Controls->Add(this->gunaWinCircleProgressIndicator1);
			this->Controls->Add(this->gunaCircleProgressBar1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->gunaTextBox6);
			this->Controls->Add(this->gunaTextBox5);
			this->Controls->Add(this->gunaTextBox4);
			this->Controls->Add(this->gunaTextBox3);
			this->Controls->Add(this->gunaTextBox2);
			this->Controls->Add(this->gunaTextBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Insertbook";
			this->Size = System::Drawing::Size(900, 624);
			this->Load += gcnew System::EventHandler(this, &Insertbook::Insertbook_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	


private: System::Void EXITCONTROLBOX_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void FILESELECT_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void Insertbook_Load(System::Object^ sender, System::EventArgs^ e) {
}









	private: System::Void gunaAdvenceButton1_Click(System::Object^ sender, System::EventArgs^ e)
	{

		if (gunaTextBox1->Text == "")
		{

		}
		else if (gunaTextBox2->Text == "")
		{

		}
		else if (gunaTextBox3->Text == "")
		{

		}
		else if (gunaTextBox4->Text == "")
		{

		}
		else if (gunaTextBox5->Text == "")
		{

		}
		else if (gunaTextBox6->Text == "")
		{

		}
		else if (gunaTextBox7->Text == "")
		{

		}
		else if (address_file == "")
		{

		}
		else if (address_picture == "")
		{

		}
		else
		{
			std::string str1;
			std::string str2;
			std::string str3;
			std::string str4;
			std::string str5;
			std::string str6;
			std::string str7;
			std::string str8;
			std::string str9;
			MarshalString(address_file, str1);
			MarshalString(gunaTextBox1->Text, str2);
			MarshalString(gunaTextBox2->Text, str3);
			MarshalString(gunaTextBox3->Text, str4);
			MarshalString(gunaTextBox4->Text, str5);
			MarshalString(gunaTextBox5->Text, str6);
			MarshalString(gunaTextBox6->Text, str7);
			MarshalString(gunaTextBox7->Text, str8);
			MarshalString(address_picture, str9);
			InsertProduct_API(db, stoi(str8), str2, str1, str7, str3, str6, str5, str4, str9);
		}
	}
	private:
	void MarshalString(String^ s, string& os)
	{
	using namespace Runtime::InteropServices;
	const char* chars =(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		
		openFileDialog1->Title = "Browse Picture";
		openFileDialog1->Filter = "png files (*.png)|*.png|jpg files (*jpg)|*.jpg";
		openFileDialog1->Multiselect = false;
		openFileDialog1->CheckFileExists = true;
		openFileDialog1->CheckPathExists = true;
		browsepicture = gcnew Thread(gcnew ThreadStart(this, &Insertbook::Browspicture));
		browsepicture->SetApartmentState(ApartmentState::STA);
		browsepicture->Start();
		browsepicture->Join();
		address_picture = openFileDialog1->FileName;
	
		
	}
	private:void Browspicture()
	{
		openFileDialog1->ShowDialog();
	}
private: System::Void gunaButton1_Click(System::Object^ sender, System::EventArgs^ e)
{
	openFileDialog2->Title = "Browse File";
	openFileDialog2->Filter = "pdf files (*.pdf)|*.pdf";
	openFileDialog2->Multiselect = false;
	openFileDialog2->CheckFileExists = true;
	openFileDialog2->CheckPathExists = true;
	Browsfile = gcnew Thread(gcnew ThreadStart(this, &Insertbook::BrowsFile));
	Browsfile->SetApartmentState(ApartmentState::STA);
	Browsfile->Start();
	Browsfile->Join();
	address_file = openFileDialog2->FileName;
}
	private:void BrowsFile()
	{
		openFileDialog2->ShowDialog();
	}
};
}
