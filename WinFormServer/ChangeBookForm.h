#pragma once
#include <string>
#include"nlohmann/json.hpp"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace std;
using namespace System::Runtime::InteropServices;
using json = nlohmann::json;




[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
IntPtr CreateObject_API();



[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
void Select_Product_API(IntPtr db, string name);

[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
void send_FW(int a,string &str);
[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
void GetProductFile(IntPtr db, string name, string path);
[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
void GetProductFile2(IntPtr db, string name, string path);
namespace WinFormServer {

	/// <summary>
	/// Summary for ChangeBookForm
	/// </summary>
	public ref class ChangeBookForm : public System::Windows::Forms::UserControl
	{
		IntPtr db;
	private: Guna::UI::WinForms::GunaPictureBox^ gunaPictureBox1;

	public:
		Panel^ mainpanel;
		ChangeBookForm(Panel^a)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			mainpanel = a;
			db=CreateObject_API();
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














	private: Guna::UI::WinForms::GunaImageButton^ gunaImageButton1;











	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox6;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox5;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox4;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox3;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox2;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox8;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ChangeBookForm::typeid));
			this->gunaTextBox1 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaImageButton1 = (gcnew Guna::UI::WinForms::GunaImageButton());
			this->gunaTextBox6 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaTextBox5 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaTextBox4 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaTextBox3 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaTextBox2 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaTextBox8 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->gunaAdvenceButton1 = (gcnew Guna::UI::WinForms::GunaAdvenceButton());
			this->gunaPictureBox1 = (gcnew Guna::UI::WinForms::GunaPictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox1))->BeginInit();
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
			this->gunaTextBox1->Location = System::Drawing::Point(234, 46);
			this->gunaTextBox1->Name = L"gunaTextBox1";
			this->gunaTextBox1->PasswordChar = '\0';
			this->gunaTextBox1->SelectedText = L"";
			this->gunaTextBox1->Size = System::Drawing::Size(407, 30);
			this->gunaTextBox1->TabIndex = 0;
			// 
			// gunaImageButton1
			// 
			this->gunaImageButton1->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->gunaImageButton1->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaImageButton1->Image = nullptr;
			this->gunaImageButton1->ImageSize = System::Drawing::Size(64, 64);
			this->gunaImageButton1->Location = System::Drawing::Point(647, 46);
			this->gunaImageButton1->Name = L"gunaImageButton1";
			this->gunaImageButton1->OnHoverImage = nullptr;
			this->gunaImageButton1->OnHoverImageOffset = System::Drawing::Point(0, 0);
			this->gunaImageButton1->Size = System::Drawing::Size(28, 30);
			this->gunaImageButton1->TabIndex = 15;
			this->gunaImageButton1->Click += gcnew System::EventHandler(this, &ChangeBookForm::gunaImageButton1_Click);
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
			this->gunaTextBox6->Location = System::Drawing::Point(539, 449);
			this->gunaTextBox6->Name = L"gunaTextBox6";
			this->gunaTextBox6->PasswordChar = '\0';
			this->gunaTextBox6->SelectedText = L"";
			this->gunaTextBox6->Size = System::Drawing::Size(310, 122);
			this->gunaTextBox6->TabIndex = 46;
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
			this->gunaTextBox5->Location = System::Drawing::Point(539, 326);
			this->gunaTextBox5->Name = L"gunaTextBox5";
			this->gunaTextBox5->PasswordChar = '\0';
			this->gunaTextBox5->SelectedText = L"";
			this->gunaTextBox5->Size = System::Drawing::Size(201, 32);
			this->gunaTextBox5->TabIndex = 45;
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
			this->gunaTextBox4->Location = System::Drawing::Point(539, 274);
			this->gunaTextBox4->Name = L"gunaTextBox4";
			this->gunaTextBox4->PasswordChar = '\0';
			this->gunaTextBox4->SelectedText = L"";
			this->gunaTextBox4->Size = System::Drawing::Size(201, 32);
			this->gunaTextBox4->TabIndex = 44;
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
			this->gunaTextBox3->Location = System::Drawing::Point(539, 226);
			this->gunaTextBox3->Name = L"gunaTextBox3";
			this->gunaTextBox3->PasswordChar = '\0';
			this->gunaTextBox3->SelectedText = L"";
			this->gunaTextBox3->Size = System::Drawing::Size(201, 32);
			this->gunaTextBox3->TabIndex = 43;
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
			this->gunaTextBox2->Location = System::Drawing::Point(539, 176);
			this->gunaTextBox2->Name = L"gunaTextBox2";
			this->gunaTextBox2->PasswordChar = '\0';
			this->gunaTextBox2->SelectedText = L"";
			this->gunaTextBox2->Size = System::Drawing::Size(201, 32);
			this->gunaTextBox2->TabIndex = 42;
			// 
			// gunaTextBox8
			// 
			this->gunaTextBox8->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox8->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->gunaTextBox8->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox8->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox8->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox8->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaTextBox8->Location = System::Drawing::Point(539, 131);
			this->gunaTextBox8->Name = L"gunaTextBox8";
			this->gunaTextBox8->PasswordChar = '\0';
			this->gunaTextBox8->SelectedText = L"";
			this->gunaTextBox8->Size = System::Drawing::Size(201, 32);
			this->gunaTextBox8->TabIndex = 41;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"B Nazanin", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label6->Location = System::Drawing::Point(784, 173);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(65, 31);
			this->label6->TabIndex = 40;
			this->label6->Text = L"نویسنده";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"B Nazanin", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label5->Location = System::Drawing::Point(814, 327);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 31);
			this->label5->TabIndex = 39;
			this->label5->Text = L"ژانر";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"B Nazanin", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label4->Location = System::Drawing::Point(801, 275);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(48, 31);
			this->label4->TabIndex = 38;
			this->label4->Text = L"امتیاز";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"B Nazanin", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label3->Location = System::Drawing::Point(737, 416);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(112, 31);
			this->label3->TabIndex = 37;
			this->label3->Text = L"توضیحات کتاب";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"B Nazanin", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label2->Location = System::Drawing::Point(762, 223);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(87, 31);
			this->label2->TabIndex = 36;
			this->label2->Text = L"قیمت کتاب";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label1->Location = System::Drawing::Point(781, 128);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(68, 31);
			this->label1->TabIndex = 35;
			this->label1->Text = L"نام کتاب";
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
			this->gunaAdvenceButton1->Location = System::Drawing::Point(110, 529);
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
			this->gunaAdvenceButton1->TabIndex = 49;
			this->gunaAdvenceButton1->Text = L"ثبت کتاب";
			this->gunaAdvenceButton1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// gunaPictureBox1
			// 
			this->gunaPictureBox1->BaseColor = System::Drawing::Color::White;
			this->gunaPictureBox1->Location = System::Drawing::Point(110, 108);
			this->gunaPictureBox1->Name = L"gunaPictureBox1";
			this->gunaPictureBox1->Size = System::Drawing::Size(161, 228);
			this->gunaPictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->gunaPictureBox1->TabIndex = 50;
			this->gunaPictureBox1->TabStop = false;
			// 
			// ChangeBookForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->Controls->Add(this->gunaPictureBox1);
			this->Controls->Add(this->gunaAdvenceButton1);
			this->Controls->Add(this->gunaTextBox6);
			this->Controls->Add(this->gunaTextBox5);
			this->Controls->Add(this->gunaTextBox4);
			this->Controls->Add(this->gunaTextBox3);
			this->Controls->Add(this->gunaTextBox2);
			this->Controls->Add(this->gunaTextBox8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->gunaImageButton1);
			this->Controls->Add(this->gunaTextBox1);
			this->DoubleBuffered = true;
			this->Name = L"ChangeBookForm";
			this->Size = System::Drawing::Size(900, 624);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



private: System::Void gunaPictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void gunaImageButton1_Click(System::Object^ sender, System::EventArgs^ e)
{
	string str1;
	MarshalString(gunaTextBox1->Text, str1);
	GetProductFile(db, str1, "..\\temp\\x1.png");
	GetProductFile2(db, str1, "..\\temp\\x2.pdf");
	Select_Product_API(db, str1);
	gunaPictureBox1->ImageLocation = "..\\temp\\x1.png";	
	send_FW(4,str1);
	String^ bookdescription = gcnew String(str1.c_str());
	send_FW(5, str1);
	String^ writer = gcnew String(str1.c_str());
	send_FW(6, str1);
	String^ genre = gcnew String(str1.c_str());
	send_FW(7, str1);
	String^ score = gcnew String(str1.c_str());
	send_FW(8, str1);
	String^ price = gcnew String(str1.c_str());
	send_FW(1, str1);
	String^ name = gcnew String(str1.c_str());


	gunaTextBox8->Text = name;
	gunaTextBox2->Text = writer;
	gunaTextBox3->Text = price;
	gunaTextBox4->Text = score;
	gunaTextBox5->Text = genre;
	gunaTextBox6->Text = bookdescription;

}
private:
	void MarshalString(String^ s, string& os)
	{
	using namespace Runtime::InteropServices;
	const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
	}
};
}
