#pragma once
#include "setting.h";
#include"Insertbook.h";
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
		Insertbook^ form_insertbook;
		System::Media::SoundPlayer^ music = gcnew System::Media::SoundPlayer();
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			form_insertbook = gcnew Insertbook(panel5);

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












	private: Guna::UI::WinForms::GunaCircleButton^ gunaCircleButton1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Panel^ panel1;
	private: Guna::UI::WinForms::GunaGradientButton^ gunaGradientButton7;

	private: Guna::UI::WinForms::GunaGradientButton^ gunaGradientButton2;
	private: Guna::UI::WinForms::GunaGradientButton^ gunaGradientButton3;
	private: Guna::UI::WinForms::GunaGradientButton^ gunaGradientButton4;
	private: System::Windows::Forms::Panel^ panel2;
	private: Guna::UI::WinForms::GunaGradientButton^ gunaGradientButton5;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label3;
	private: Guna::UI::WinForms::GunaCircleButton^ gunaCircleButton2;
	private: Guna::UI::WinForms::GunaTransition^ gunaTransition1;
	private: System::Windows::Forms::Timer^ timer1;
	private: Guna::UI::WinForms::GunaAdvenceTileButton^ gunaAdvenceTileButton1;
	private: System::Windows::Forms::Panel^ panel4;
	private: Guna::UI::WinForms::GunaAdvenceTileButton^ gunaAdvenceTileButton3;
	private: Guna::UI::WinForms::GunaAdvenceTileButton^ gunaAdvenceTileButton2;
	private: System::Windows::Forms::Panel^ panel5;







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
			Guna::UI::Animation::Animation^ animation1 = (gcnew Guna::UI::Animation::Animation());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->gunaCircleButton1 = (gcnew Guna::UI::WinForms::GunaCircleButton());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->gunaGradientButton7 = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->gunaGradientButton2 = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->gunaGradientButton3 = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->gunaGradientButton4 = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->gunaGradientButton5 = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->gunaCircleButton2 = (gcnew Guna::UI::WinForms::GunaCircleButton());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->gunaTransition1 = (gcnew Guna::UI::WinForms::GunaTransition(this->components));
			this->gunaAdvenceTileButton1 = (gcnew Guna::UI::WinForms::GunaAdvenceTileButton());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->gunaAdvenceTileButton3 = (gcnew Guna::UI::WinForms::GunaAdvenceTileButton());
			this->gunaAdvenceTileButton2 = (gcnew Guna::UI::WinForms::GunaAdvenceTileButton());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// gunaCircleButton1
			// 
			this->gunaCircleButton1->AnimationHoverSpeed = 0.07F;
			this->gunaCircleButton1->AnimationSpeed = 0.03F;
			this->gunaCircleButton1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->gunaCircleButton1->BaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->gunaCircleButton1->BorderColor = System::Drawing::Color::Black;
			this->gunaTransition1->SetDecoration(this->gunaCircleButton1, Guna::UI::Animation::DecorationType::None);
			this->gunaCircleButton1->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaCircleButton1->FocusedColor = System::Drawing::Color::Empty;
			this->gunaCircleButton1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaCircleButton1->ForeColor = System::Drawing::Color::White;
			this->gunaCircleButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaCircleButton1.Image")));
			this->gunaCircleButton1->ImageSize = System::Drawing::Size(25, 25);
			this->gunaCircleButton1->Location = System::Drawing::Point(610, 394);
			this->gunaCircleButton1->Name = L"gunaCircleButton1";
			this->gunaCircleButton1->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCircleButton1->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaCircleButton1->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaCircleButton1->OnHoverImage = nullptr;
			this->gunaCircleButton1->OnPressedColor = System::Drawing::Color::Black;
			this->gunaCircleButton1->Size = System::Drawing::Size(30, 30);
			this->gunaCircleButton1->TabIndex = 10;
			this->gunaCircleButton1->Click += gcnew System::EventHandler(this, &MainForm::gunaCircleButton1_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::Transparent;
			this->flowLayoutPanel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"flowLayoutPanel1.BackgroundImage")));
			this->flowLayoutPanel1->Controls->Add(this->panel1);
			this->flowLayoutPanel1->Controls->Add(this->gunaGradientButton7);
			this->flowLayoutPanel1->Controls->Add(this->gunaGradientButton2);
			this->flowLayoutPanel1->Controls->Add(this->gunaGradientButton3);
			this->flowLayoutPanel1->Controls->Add(this->gunaGradientButton4);
			this->flowLayoutPanel1->Controls->Add(this->panel2);
			this->flowLayoutPanel1->Controls->Add(this->gunaGradientButton5);
			this->gunaTransition1->SetDecoration(this->flowLayoutPanel1, Guna::UI::Animation::DecorationType::None);
			this->flowLayoutPanel1->FlowDirection = System::Windows::Forms::FlowDirection::RightToLeft;
			this->flowLayoutPanel1->Location = System::Drawing::Point(733, 126);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(166, 393);
			this->flowLayoutPanel1->TabIndex = 12;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransition1->SetDecoration(this->panel1, Guna::UI::Animation::DecorationType::None);
			this->panel1->Location = System::Drawing::Point(4, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(159, 53);
			this->panel1->TabIndex = 14;
			// 
			// gunaGradientButton7
			// 
			this->gunaGradientButton7->AnimationHoverSpeed = 0.07F;
			this->gunaGradientButton7->AnimationSpeed = 0.03F;
			this->gunaGradientButton7->BaseColor1 = System::Drawing::Color::SlateBlue;
			this->gunaGradientButton7->BaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->gunaGradientButton7->BorderColor = System::Drawing::Color::Black;
			this->gunaTransition1->SetDecoration(this->gunaGradientButton7, Guna::UI::Animation::DecorationType::None);
			this->gunaGradientButton7->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaGradientButton7->FocusedColor = System::Drawing::Color::Empty;
			this->gunaGradientButton7->Font = (gcnew System::Drawing::Font(L"B Nazanin", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaGradientButton7->ForeColor = System::Drawing::Color::White;
			this->gunaGradientButton7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaGradientButton7.Image")));
			this->gunaGradientButton7->ImageAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->gunaGradientButton7->ImageOffsetX = -7;
			this->gunaGradientButton7->ImageSize = System::Drawing::Size(20, 20);
			this->gunaGradientButton7->Location = System::Drawing::Point(3, 62);
			this->gunaGradientButton7->Name = L"gunaGradientButton7";
			this->gunaGradientButton7->OnHoverBaseColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->gunaGradientButton7->OnHoverBaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaGradientButton7->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton7->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaGradientButton7->OnHoverImage = nullptr;
			this->gunaGradientButton7->OnPressedColor = System::Drawing::Color::Black;
			this->gunaGradientButton7->Size = System::Drawing::Size(160, 42);
			this->gunaGradientButton7->TabIndex = 13;
			this->gunaGradientButton7->Text = L"ثبت کتاب";
			this->gunaGradientButton7->Click += gcnew System::EventHandler(this, &MainForm::gunaGradientButton7_Click);
			// 
			// gunaGradientButton2
			// 
			this->gunaGradientButton2->AnimationHoverSpeed = 0.07F;
			this->gunaGradientButton2->AnimationSpeed = 0.03F;
			this->gunaGradientButton2->BaseColor1 = System::Drawing::Color::SlateBlue;
			this->gunaGradientButton2->BaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->gunaGradientButton2->BorderColor = System::Drawing::Color::Black;
			this->gunaTransition1->SetDecoration(this->gunaGradientButton2, Guna::UI::Animation::DecorationType::None);
			this->gunaGradientButton2->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaGradientButton2->FocusedColor = System::Drawing::Color::Empty;
			this->gunaGradientButton2->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaGradientButton2->ForeColor = System::Drawing::Color::White;
			this->gunaGradientButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaGradientButton2.Image")));
			this->gunaGradientButton2->ImageAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->gunaGradientButton2->ImageOffsetX = -7;
			this->gunaGradientButton2->ImageSize = System::Drawing::Size(20, 20);
			this->gunaGradientButton2->Location = System::Drawing::Point(3, 110);
			this->gunaGradientButton2->Name = L"gunaGradientButton2";
			this->gunaGradientButton2->OnHoverBaseColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->gunaGradientButton2->OnHoverBaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaGradientButton2->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton2->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaGradientButton2->OnHoverImage = nullptr;
			this->gunaGradientButton2->OnPressedColor = System::Drawing::Color::Black;
			this->gunaGradientButton2->Size = System::Drawing::Size(160, 42);
			this->gunaGradientButton2->TabIndex = 15;
			this->gunaGradientButton2->Text = L"تغییر اطلاعات کتاب";
			// 
			// gunaGradientButton3
			// 
			this->gunaGradientButton3->AnimationHoverSpeed = 0.07F;
			this->gunaGradientButton3->AnimationSpeed = 0.03F;
			this->gunaGradientButton3->BaseColor1 = System::Drawing::Color::SlateBlue;
			this->gunaGradientButton3->BaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->gunaGradientButton3->BorderColor = System::Drawing::Color::Black;
			this->gunaTransition1->SetDecoration(this->gunaGradientButton3, Guna::UI::Animation::DecorationType::None);
			this->gunaGradientButton3->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaGradientButton3->FocusedColor = System::Drawing::Color::Empty;
			this->gunaGradientButton3->Font = (gcnew System::Drawing::Font(L"B Nazanin", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaGradientButton3->ForeColor = System::Drawing::Color::White;
			this->gunaGradientButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaGradientButton3.Image")));
			this->gunaGradientButton3->ImageAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->gunaGradientButton3->ImageOffsetX = -7;
			this->gunaGradientButton3->ImageSize = System::Drawing::Size(20, 20);
			this->gunaGradientButton3->Location = System::Drawing::Point(3, 158);
			this->gunaGradientButton3->Name = L"gunaGradientButton3";
			this->gunaGradientButton3->OnHoverBaseColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->gunaGradientButton3->OnHoverBaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaGradientButton3->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton3->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaGradientButton3->OnHoverImage = nullptr;
			this->gunaGradientButton3->OnPressedColor = System::Drawing::Color::Black;
			this->gunaGradientButton3->Size = System::Drawing::Size(160, 42);
			this->gunaGradientButton3->TabIndex = 16;
			this->gunaGradientButton3->Text = L"جستوجو";
			this->gunaGradientButton3->Click += gcnew System::EventHandler(this, &MainForm::gunaGradientButton3_Click);
			// 
			// gunaGradientButton4
			// 
			this->gunaGradientButton4->AnimationHoverSpeed = 0.07F;
			this->gunaGradientButton4->AnimationSpeed = 0.03F;
			this->gunaGradientButton4->BaseColor1 = System::Drawing::Color::SlateBlue;
			this->gunaGradientButton4->BaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->gunaGradientButton4->BorderColor = System::Drawing::Color::Black;
			this->gunaTransition1->SetDecoration(this->gunaGradientButton4, Guna::UI::Animation::DecorationType::None);
			this->gunaGradientButton4->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaGradientButton4->FocusedColor = System::Drawing::Color::Empty;
			this->gunaGradientButton4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaGradientButton4->ForeColor = System::Drawing::Color::White;
			this->gunaGradientButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaGradientButton4.Image")));
			this->gunaGradientButton4->ImageAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->gunaGradientButton4->ImageOffsetX = -7;
			this->gunaGradientButton4->ImageSize = System::Drawing::Size(20, 20);
			this->gunaGradientButton4->Location = System::Drawing::Point(3, 206);
			this->gunaGradientButton4->Name = L"gunaGradientButton4";
			this->gunaGradientButton4->OnHoverBaseColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->gunaGradientButton4->OnHoverBaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaGradientButton4->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton4->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaGradientButton4->OnHoverImage = nullptr;
			this->gunaGradientButton4->OnPressedColor = System::Drawing::Color::Black;
			this->gunaGradientButton4->Size = System::Drawing::Size(160, 42);
			this->gunaGradientButton4->TabIndex = 17;
			this->gunaGradientButton4->Text = L"gunaGradientButton4";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransition1->SetDecoration(this->panel2, Guna::UI::Animation::DecorationType::None);
			this->panel2->Location = System::Drawing::Point(4, 254);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(159, 38);
			this->panel2->TabIndex = 15;
			// 
			// gunaGradientButton5
			// 
			this->gunaGradientButton5->AnimationHoverSpeed = 0.07F;
			this->gunaGradientButton5->AnimationSpeed = 0.03F;
			this->gunaGradientButton5->BaseColor1 = System::Drawing::Color::SlateBlue;
			this->gunaGradientButton5->BaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->gunaGradientButton5->BorderColor = System::Drawing::Color::Black;
			this->gunaTransition1->SetDecoration(this->gunaGradientButton5, Guna::UI::Animation::DecorationType::None);
			this->gunaGradientButton5->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaGradientButton5->FocusedColor = System::Drawing::Color::Empty;
			this->gunaGradientButton5->Font = (gcnew System::Drawing::Font(L"B Nazanin", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaGradientButton5->ForeColor = System::Drawing::Color::White;
			this->gunaGradientButton5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaGradientButton5.Image")));
			this->gunaGradientButton5->ImageAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->gunaGradientButton5->ImageOffsetX = -7;
			this->gunaGradientButton5->ImageSize = System::Drawing::Size(20, 20);
			this->gunaGradientButton5->Location = System::Drawing::Point(3, 298);
			this->gunaGradientButton5->Name = L"gunaGradientButton5";
			this->gunaGradientButton5->OnHoverBaseColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->gunaGradientButton5->OnHoverBaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaGradientButton5->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton5->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaGradientButton5->OnHoverImage = nullptr;
			this->gunaGradientButton5->OnPressedColor = System::Drawing::Color::Black;
			this->gunaGradientButton5->Size = System::Drawing::Size(160, 42);
			this->gunaGradientButton5->TabIndex = 18;
			this->gunaGradientButton5->Text = L"تنظیمات";
			// 
			// gunaCircleButton2
			// 
			this->gunaCircleButton2->AnimationHoverSpeed = 0.07F;
			this->gunaCircleButton2->AnimationSpeed = 0.03F;
			this->gunaCircleButton2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaCircleButton2.BackgroundImage")));
			this->gunaCircleButton2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->gunaCircleButton2->BaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->gunaCircleButton2->BorderColor = System::Drawing::Color::Black;
			this->gunaTransition1->SetDecoration(this->gunaCircleButton2, Guna::UI::Animation::DecorationType::None);
			this->gunaCircleButton2->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaCircleButton2->FocusedColor = System::Drawing::Color::Empty;
			this->gunaCircleButton2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaCircleButton2->ForeColor = System::Drawing::Color::White;
			this->gunaCircleButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaCircleButton2.Image")));
			this->gunaCircleButton2->ImageSize = System::Drawing::Size(25, 25);
			this->gunaCircleButton2->Location = System::Drawing::Point(610, 180);
			this->gunaCircleButton2->Name = L"gunaCircleButton2";
			this->gunaCircleButton2->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCircleButton2->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaCircleButton2->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaCircleButton2->OnHoverImage = nullptr;
			this->gunaCircleButton2->OnPressedColor = System::Drawing::Color::Black;
			this->gunaCircleButton2->Size = System::Drawing::Size(30, 30);
			this->gunaCircleButton2->TabIndex = 11;
			this->gunaCircleButton2->Click += gcnew System::EventHandler(this, &MainForm::gunaCircleButton2_Click);
			// 
			// panel3
			// 
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->Controls->Add(this->label3);
			this->gunaTransition1->SetDecoration(this->panel3, Guna::UI::Animation::DecorationType::None);
			this->panel3->Location = System::Drawing::Point(245, 8);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(374, 98);
			this->panel3->TabIndex = 23;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->gunaTransition1->SetDecoration(this->label3, Guna::UI::Animation::DecorationType::None);
			this->label3->Font = (gcnew System::Drawing::Font(L"B Nazanin", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label3->Location = System::Drawing::Point(58, 36);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 35);
			this->label3->TabIndex = 0;
			this->label3->Text = L"label3";
			// 
			// gunaTransition1
			// 
			this->gunaTransition1->AnimationType = Guna::UI::Animation::AnimationType::Scale;
			this->gunaTransition1->Cursor = nullptr;
			animation1->AnimateOnlyDifferences = true;
			animation1->BlindCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation1.BlindCoeff")));
			animation1->LeafCoeff = 0;
			animation1->MaxTime = 1;
			animation1->MinTime = 0;
			animation1->MosaicCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation1.MosaicCoeff")));
			animation1->MosaicShift = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation1.MosaicShift")));
			animation1->MosaicSize = 0;
			animation1->Padding = System::Windows::Forms::Padding(0);
			animation1->RotateCoeff = 0;
			animation1->RotateLimit = 0;
			animation1->ScaleCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation1.ScaleCoeff")));
			animation1->SlideCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation1.SlideCoeff")));
			animation1->TimeCoeff = 0;
			animation1->TransparencyCoeff = 0;
			this->gunaTransition1->DefaultAnimation = animation1;
			// 
			// gunaAdvenceTileButton1
			// 
			this->gunaAdvenceTileButton1->AnimationHoverSpeed = 0.07F;
			this->gunaAdvenceTileButton1->AnimationSpeed = 0.03F;
			this->gunaAdvenceTileButton1->BackColor = System::Drawing::Color::Transparent;
			this->gunaAdvenceTileButton1->BaseColor = System::Drawing::Color::Transparent;
			this->gunaAdvenceTileButton1->BorderColor = System::Drawing::Color::Black;
			this->gunaAdvenceTileButton1->CheckedBaseColor = System::Drawing::Color::Gray;
			this->gunaAdvenceTileButton1->CheckedBorderColor = System::Drawing::Color::Black;
			this->gunaAdvenceTileButton1->CheckedForeColor = System::Drawing::Color::White;
			this->gunaAdvenceTileButton1->CheckedImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaAdvenceTileButton1.CheckedImage")));
			this->gunaAdvenceTileButton1->CheckedLineColor = System::Drawing::Color::DimGray;
			this->gunaTransition1->SetDecoration(this->gunaAdvenceTileButton1, Guna::UI::Animation::DecorationType::None);
			this->gunaAdvenceTileButton1->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaAdvenceTileButton1->FocusedColor = System::Drawing::Color::Empty;
			this->gunaAdvenceTileButton1->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15.75F));
			this->gunaAdvenceTileButton1->ForeColor = System::Drawing::Color::White;
			this->gunaAdvenceTileButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaAdvenceTileButton1.Image")));
			this->gunaAdvenceTileButton1->ImageSize = System::Drawing::Size(52, 52);
			this->gunaAdvenceTileButton1->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(170)));
			this->gunaAdvenceTileButton1->Location = System::Drawing::Point(27, 554);
			this->gunaAdvenceTileButton1->Name = L"gunaAdvenceTileButton1";
			this->gunaAdvenceTileButton1->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaAdvenceTileButton1->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaAdvenceTileButton1->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaAdvenceTileButton1->OnHoverImage = nullptr;
			this->gunaAdvenceTileButton1->OnHoverLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(170)));
			this->gunaAdvenceTileButton1->OnPressedColor = System::Drawing::Color::Black;
			this->gunaAdvenceTileButton1->Size = System::Drawing::Size(43, 42);
			this->gunaAdvenceTileButton1->TabIndex = 24;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->gunaAdvenceTileButton3);
			this->panel4->Controls->Add(this->gunaAdvenceTileButton2);
			this->gunaTransition1->SetDecoration(this->panel4, Guna::UI::Animation::DecorationType::None);
			this->panel4->Location = System::Drawing::Point(29, 455);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(41, 103);
			this->panel4->TabIndex = 25;
			this->panel4->Visible = false;
			// 
			// gunaAdvenceTileButton3
			// 
			this->gunaAdvenceTileButton3->AnimationHoverSpeed = 0.07F;
			this->gunaAdvenceTileButton3->AnimationSpeed = 0.03F;
			this->gunaAdvenceTileButton3->BaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaAdvenceTileButton3->BorderColor = System::Drawing::Color::Black;
			this->gunaAdvenceTileButton3->CheckedBaseColor = System::Drawing::Color::Gray;
			this->gunaAdvenceTileButton3->CheckedBorderColor = System::Drawing::Color::Black;
			this->gunaAdvenceTileButton3->CheckedForeColor = System::Drawing::Color::White;
			this->gunaAdvenceTileButton3->CheckedImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaAdvenceTileButton3.CheckedImage")));
			this->gunaAdvenceTileButton3->CheckedLineColor = System::Drawing::Color::DimGray;
			this->gunaTransition1->SetDecoration(this->gunaAdvenceTileButton3, Guna::UI::Animation::DecorationType::None);
			this->gunaAdvenceTileButton3->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaAdvenceTileButton3->FocusedColor = System::Drawing::Color::Empty;
			this->gunaAdvenceTileButton3->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15.75F));
			this->gunaAdvenceTileButton3->ForeColor = System::Drawing::Color::White;
			this->gunaAdvenceTileButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaAdvenceTileButton3.Image")));
			this->gunaAdvenceTileButton3->ImageSize = System::Drawing::Size(52, 52);
			this->gunaAdvenceTileButton3->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(170)));
			this->gunaAdvenceTileButton3->Location = System::Drawing::Point(0, 9);
			this->gunaAdvenceTileButton3->Name = L"gunaAdvenceTileButton3";
			this->gunaAdvenceTileButton3->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaAdvenceTileButton3->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaAdvenceTileButton3->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaAdvenceTileButton3->OnHoverImage = nullptr;
			this->gunaAdvenceTileButton3->OnHoverLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(170)));
			this->gunaAdvenceTileButton3->OnPressedColor = System::Drawing::Color::Black;
			this->gunaAdvenceTileButton3->Size = System::Drawing::Size(39, 39);
			this->gunaAdvenceTileButton3->TabIndex = 27;
			this->gunaAdvenceTileButton3->Text = L"gunaAdvenceTileButton3";
			// 
			// gunaAdvenceTileButton2
			// 
			this->gunaAdvenceTileButton2->AnimationHoverSpeed = 0.07F;
			this->gunaAdvenceTileButton2->AnimationSpeed = 0.03F;
			this->gunaAdvenceTileButton2->BaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaAdvenceTileButton2->BorderColor = System::Drawing::Color::Black;
			this->gunaAdvenceTileButton2->CheckedBaseColor = System::Drawing::Color::Gray;
			this->gunaAdvenceTileButton2->CheckedBorderColor = System::Drawing::Color::Black;
			this->gunaAdvenceTileButton2->CheckedForeColor = System::Drawing::Color::White;
			this->gunaAdvenceTileButton2->CheckedImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaAdvenceTileButton2.CheckedImage")));
			this->gunaAdvenceTileButton2->CheckedLineColor = System::Drawing::Color::DimGray;
			this->gunaTransition1->SetDecoration(this->gunaAdvenceTileButton2, Guna::UI::Animation::DecorationType::None);
			this->gunaAdvenceTileButton2->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaAdvenceTileButton2->FocusedColor = System::Drawing::Color::Empty;
			this->gunaAdvenceTileButton2->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15.75F));
			this->gunaAdvenceTileButton2->ForeColor = System::Drawing::Color::White;
			this->gunaAdvenceTileButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaAdvenceTileButton2.Image")));
			this->gunaAdvenceTileButton2->ImageSize = System::Drawing::Size(52, 52);
			this->gunaAdvenceTileButton2->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(170)));
			this->gunaAdvenceTileButton2->Location = System::Drawing::Point(1, 58);
			this->gunaAdvenceTileButton2->Name = L"gunaAdvenceTileButton2";
			this->gunaAdvenceTileButton2->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaAdvenceTileButton2->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaAdvenceTileButton2->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaAdvenceTileButton2->OnHoverImage = nullptr;
			this->gunaAdvenceTileButton2->OnHoverLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(170)));
			this->gunaAdvenceTileButton2->OnPressedColor = System::Drawing::Color::Black;
			this->gunaAdvenceTileButton2->Size = System::Drawing::Size(40, 39);
			this->gunaAdvenceTileButton2->TabIndex = 26;
			this->gunaAdvenceTileButton2->Text = L"gunaAdvenceTileButton2";
			this->gunaAdvenceTileButton2->Click += gcnew System::EventHandler(this, &MainForm::gunaAdvenceTileButton2_Click);
			// 
			// panel5
			// 
			this->gunaTransition1->SetDecoration(this->panel5, Guna::UI::Animation::DecorationType::None);
			this->panel5->Location = System::Drawing::Point(-1, -2);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(536, 290);
			this->panel5->TabIndex = 26;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(900, 624);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->gunaAdvenceTileButton1);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->gunaCircleButton2);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->gunaCircleButton1);
			this->gunaTransition1->SetDecoration(this, Guna::UI::Animation::DecorationType::None);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion


private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void gunaCircleButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	gunaCircleButton1->Visible = false;
	gunaTransition1->HideSync(flowLayoutPanel1, false, Guna::UI::Animation::Animation::Leaf);
	gunaCircleButton2->Visible = true;
	flowLayoutPanel1->Width = 32;
}
private: System::Void gunaGradientButton1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void gunaCircleButton2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	gunaCircleButton2->Visible = false;
	gunaTransition1->ShowSync(flowLayoutPanel1, false, Guna::UI::Animation::Animation::Leaf);
	gunaCircleButton2->Visible = true;
	flowLayoutPanel1->Width = 164;
}
private: System::Void gunaGradientButton3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void gunaGradientButton7_Click(System::Object^ sender, System::EventArgs^ e)
{
	panel5->Controls->Add(form_insertbook);
}

private: System::Void panel1_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
}



private: System::Void gunaAdvenceTileButton2_Click(System::Object^ sender, System::EventArgs^ e)
{
	music->SoundLocation = "music1.mp3";
	music->Play();
}
};
}
