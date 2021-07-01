#pragma once
#include "setting.h";
namespace WinFormServer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
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

	protected:

	private: System::Windows::Forms::Panel^ panel1;
	private: Guna::UI::WinForms::GunaSeparator^ gunaSeparator2;








	private: Guna::UI::WinForms::GunaCircleButton^ gunaCircleButton2;
	private: Guna::UI::WinForms::GunaCircleButton^ gunaCircleButton1;
	private: Guna::UI::WinForms::GunaGradientButton^ gunaGradientButton3;
	private: Guna::UI::WinForms::GunaGradientButton^ gunaGradientButton1;
	private: Guna::UI::WinForms::GunaGradientButton^ gunaGradientButton2;
	private: Guna::UI::WinForms::GunaPictureBox^ gunaPictureBox3;
	private: Guna::UI::WinForms::GunaPictureBox^ gunaPictureBox2;
	private: Guna::UI::WinForms::GunaPictureBox^ gunaPictureBox1;
	private: System::Windows::Forms::Panel^ panel2;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->gunaCircleButton2 = (gcnew Guna::UI::WinForms::GunaCircleButton());
			this->gunaSeparator2 = (gcnew Guna::UI::WinForms::GunaSeparator());
			this->gunaCircleButton1 = (gcnew Guna::UI::WinForms::GunaCircleButton());
			this->gunaGradientButton2 = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->gunaGradientButton1 = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->gunaGradientButton3 = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->gunaPictureBox3 = (gcnew Guna::UI::WinForms::GunaPictureBox());
			this->gunaPictureBox2 = (gcnew Guna::UI::WinForms::GunaPictureBox());
			this->gunaPictureBox1 = (gcnew Guna::UI::WinForms::GunaPictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox1))->BeginInit();
			this->SuspendLayout();
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
			this->panel1->Location = System::Drawing::Point(810, 171);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(213, 597);
			this->panel1->TabIndex = 2;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panel1_Paint);
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
			this->gunaCircleButton2->Click += gcnew System::EventHandler(this, &MainForm::gunaCircleButton2_Click);
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
			this->gunaCircleButton1->Click += gcnew System::EventHandler(this, &MainForm::gunaCircleButton1_Click);
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
			// gunaPictureBox3
			// 
			this->gunaPictureBox3->BaseColor = System::Drawing::Color::White;
			this->gunaPictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaPictureBox3.Image")));
			this->gunaPictureBox3->Location = System::Drawing::Point(831, 5);
			this->gunaPictureBox3->Name = L"gunaPictureBox3";
			this->gunaPictureBox3->Size = System::Drawing::Size(77, 48);
			this->gunaPictureBox3->TabIndex = 12;
			this->gunaPictureBox3->TabStop = false;
			// 
			// gunaPictureBox2
			// 
			this->gunaPictureBox2->BaseColor = System::Drawing::Color::White;
			this->gunaPictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaPictureBox2.Image")));
			this->gunaPictureBox2->Location = System::Drawing::Point(914, 5);
			this->gunaPictureBox2->Name = L"gunaPictureBox2";
			this->gunaPictureBox2->Size = System::Drawing::Size(51, 48);
			this->gunaPictureBox2->TabIndex = 11;
			this->gunaPictureBox2->TabStop = false;
			// 
			// gunaPictureBox1
			// 
			this->gunaPictureBox1->BaseColor = System::Drawing::Color::White;
			this->gunaPictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaPictureBox1.Image")));
			this->gunaPictureBox1->Location = System::Drawing::Point(973, 5);
			this->gunaPictureBox1->Name = L"gunaPictureBox1";
			this->gunaPictureBox1->Size = System::Drawing::Size(51, 48);
			this->gunaPictureBox1->TabIndex = 10;
			this->gunaPictureBox1->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::MediumSlateBlue;
			this->panel2->Location = System::Drawing::Point(810, 55);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(213, 119);
			this->panel2->TabIndex = 9;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1024, 768);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->gunaPictureBox3);
			this->Controls->Add(this->gunaPictureBox2);
			this->Controls->Add(this->gunaPictureBox1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion


private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void gunaCircleButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	//Main_Panel->Visible = false;
	//BTN_Hide->Visible = false;
	//BTN_Show->Visible = true;
	//Main_Panel->Width = 40;
	//Main_Panel->Visible = true;
}
private: System::Void gunaGradientButton1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void gunaCircleButton2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
