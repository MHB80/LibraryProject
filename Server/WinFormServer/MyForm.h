#pragma once

namespace WinFormServer {

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




	private: Bunifu::UI::WinForms::BunifuButton::BunifuButton^ bunifuButton1;
	private: Bunifu::Framework::UI::BunifuCheckbox^ bunifuCheckbox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: Bunifu::UI::WinForms::BunifuTextbox::BunifuTextBox^ bunifuTextBox1;
	private: Bunifu::UI::WinForms::BunifuTextbox::BunifuTextBox^ bunifuTextBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			Bunifu::UI::WinForms::BunifuButton::BunifuButton::StateProperties^ stateProperties2 = (gcnew Bunifu::UI::WinForms::BunifuButton::BunifuButton::StateProperties());
			this->bunifuButton1 = (gcnew Bunifu::UI::WinForms::BunifuButton::BunifuButton());
			this->bunifuCheckbox1 = (gcnew Bunifu::Framework::UI::BunifuCheckbox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->bunifuTextBox1 = (gcnew Bunifu::UI::WinForms::BunifuTextbox::BunifuTextBox());
			this->bunifuTextBox2 = (gcnew Bunifu::UI::WinForms::BunifuTextbox::BunifuTextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// bunifuButton1
			// 
			this->bunifuButton1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuButton1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuButton1.BackgroundImage")));
			this->bunifuButton1->ButtonText = L"Login";
			this->bunifuButton1->ButtonTextMarginLeft = 0;
			this->bunifuButton1->DisabledBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(161)), static_cast<System::Int32>(static_cast<System::Byte>(161)));
			this->bunifuButton1->DisabledFillColor = System::Drawing::Color::Gray;
			this->bunifuButton1->DisabledForecolor = System::Drawing::Color::White;
			this->bunifuButton1->ForeColor = System::Drawing::Color::White;
			this->bunifuButton1->IconLeftCursor = System::Windows::Forms::Cursors::Default;
			this->bunifuButton1->IconPadding = 10;
			this->bunifuButton1->IconRightCursor = System::Windows::Forms::Cursors::Default;
			this->bunifuButton1->IdleBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->bunifuButton1->IdleBorderRadius = 1;
			this->bunifuButton1->IdleBorderThickness = 3;
			this->bunifuButton1->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(183)));
			this->bunifuButton1->IdleIconLeftImage = nullptr;
			this->bunifuButton1->IdleIconRightImage = nullptr;
			this->bunifuButton1->Location = System::Drawing::Point(136, 414);
			this->bunifuButton1->Name = L"bunifuButton1";
			stateProperties2->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(96)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)));
			stateProperties2->BorderRadius = 1;
			stateProperties2->BorderThickness = 1;
			stateProperties2->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(96)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)));
			stateProperties2->IconLeftImage = nullptr;
			stateProperties2->IconRightImage = nullptr;
			this->bunifuButton1->onHoverState = stateProperties2;
			this->bunifuButton1->Size = System::Drawing::Size(236, 42);
			this->bunifuButton1->TabIndex = 4;
			this->bunifuButton1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuCheckbox1
			// 
			this->bunifuCheckbox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->bunifuCheckbox1->ChechedOffColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)), static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->bunifuCheckbox1->Checked = true;
			this->bunifuCheckbox1->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->bunifuCheckbox1->ForeColor = System::Drawing::Color::White;
			this->bunifuCheckbox1->Location = System::Drawing::Point(64, 376);
			this->bunifuCheckbox1->Name = L"bunifuCheckbox1";
			this->bunifuCheckbox1->Size = System::Drawing::Size(20, 20);
			this->bunifuCheckbox1->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(90, 381);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(124, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Remmber your Password";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)), static_cast<System::Int32>(static_cast<System::Byte>(181)),
				static_cast<System::Int32>(static_cast<System::Byte>(245)));
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(795, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(40, 43);
			this->button1->TabIndex = 7;
			this->button1->UseVisualStyleBackColor = false;
			// 
			// bunifuTextBox1
			// 
			this->bunifuTextBox1->AcceptsReturn = false;
			this->bunifuTextBox1->AcceptsTab = false;
			this->bunifuTextBox1->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::None;
			this->bunifuTextBox1->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::None;
			this->bunifuTextBox1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuTextBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextBox1.BackgroundImage")));
			this->bunifuTextBox1->BorderColorActive = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(102)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(145)));
			this->bunifuTextBox1->BorderColorDisabled = System::Drawing::Color::Fuchsia;
			this->bunifuTextBox1->BorderColorHover = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(157)));
			this->bunifuTextBox1->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->bunifuTextBox1->BorderRadius = 1;
			this->bunifuTextBox1->BorderThickness = 2;
			this->bunifuTextBox1->CharacterCasing = System::Windows::Forms::CharacterCasing::Normal;
			this->bunifuTextBox1->DefaultFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuTextBox1->DefaultText = L"";
			this->bunifuTextBox1->FillColor = System::Drawing::Color::White;
			this->bunifuTextBox1->HideSelection = true;
			this->bunifuTextBox1->IconLeft = nullptr;
			this->bunifuTextBox1->IconLeftCursor = System::Windows::Forms::Cursors::Default;
			this->bunifuTextBox1->IconPadding = 10;
			this->bunifuTextBox1->IconRight = nullptr;
			this->bunifuTextBox1->IconRightCursor = System::Windows::Forms::Cursors::Default;
			this->bunifuTextBox1->Location = System::Drawing::Point(64, 236);
			this->bunifuTextBox1->MaxLength = 32767;
			this->bunifuTextBox1->MinimumSize = System::Drawing::Size(100, 35);
			this->bunifuTextBox1->Modified = false;
			this->bunifuTextBox1->Name = L"bunifuTextBox1";
			this->bunifuTextBox1->PasswordChar = '\0';
			this->bunifuTextBox1->ReadOnly = false;
			this->bunifuTextBox1->SelectedText = L"";
			this->bunifuTextBox1->SelectionLength = 0;
			this->bunifuTextBox1->SelectionStart = 0;
			this->bunifuTextBox1->ShortcutsEnabled = true;
			this->bunifuTextBox1->Size = System::Drawing::Size(236, 44);
			this->bunifuTextBox1->Style = Bunifu::UI::WinForms::BunifuTextbox::BunifuTextBox::_Style::Bunifu;
			this->bunifuTextBox1->TabIndex = 8;
			this->bunifuTextBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->bunifuTextBox1->TextMarginLeft = 5;
			this->bunifuTextBox1->TextPlaceholder = L"";
			this->bunifuTextBox1->UseSystemPasswordChar = false;
			// 
			// bunifuTextBox2
			// 
			this->bunifuTextBox2->AcceptsReturn = false;
			this->bunifuTextBox2->AcceptsTab = false;
			this->bunifuTextBox2->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::None;
			this->bunifuTextBox2->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::None;
			this->bunifuTextBox2->BackColor = System::Drawing::Color::Transparent;
			this->bunifuTextBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextBox2.BackgroundImage")));
			this->bunifuTextBox2->BorderColorActive = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(102)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(145)));
			this->bunifuTextBox2->BorderColorDisabled = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(161)), static_cast<System::Int32>(static_cast<System::Byte>(161)));
			this->bunifuTextBox2->BorderColorHover = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(157)));
			this->bunifuTextBox2->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->bunifuTextBox2->BorderRadius = 1;
			this->bunifuTextBox2->BorderThickness = 2;
			this->bunifuTextBox2->CharacterCasing = System::Windows::Forms::CharacterCasing::Normal;
			this->bunifuTextBox2->DefaultFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuTextBox2->DefaultText = L"";
			this->bunifuTextBox2->FillColor = System::Drawing::Color::White;
			this->bunifuTextBox2->HideSelection = true;
			this->bunifuTextBox2->IconLeft = nullptr;
			this->bunifuTextBox2->IconLeftCursor = System::Windows::Forms::Cursors::Default;
			this->bunifuTextBox2->IconPadding = 10;
			this->bunifuTextBox2->IconRight = nullptr;
			this->bunifuTextBox2->IconRightCursor = System::Windows::Forms::Cursors::Default;
			this->bunifuTextBox2->Location = System::Drawing::Point(64, 326);
			this->bunifuTextBox2->MaxLength = 32767;
			this->bunifuTextBox2->MinimumSize = System::Drawing::Size(100, 35);
			this->bunifuTextBox2->Modified = false;
			this->bunifuTextBox2->Name = L"bunifuTextBox2";
			this->bunifuTextBox2->PasswordChar = '\0';
			this->bunifuTextBox2->ReadOnly = false;
			this->bunifuTextBox2->SelectedText = L"";
			this->bunifuTextBox2->SelectionLength = 0;
			this->bunifuTextBox2->SelectionStart = 0;
			this->bunifuTextBox2->ShortcutsEnabled = true;
			this->bunifuTextBox2->Size = System::Drawing::Size(236, 44);
			this->bunifuTextBox2->Style = Bunifu::UI::WinForms::BunifuTextbox::BunifuTextBox::_Style::Bunifu;
			this->bunifuTextBox2->TabIndex = 9;
			this->bunifuTextBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->bunifuTextBox2->TextMarginLeft = 5;
			this->bunifuTextBox2->TextPlaceholder = L"";
			this->bunifuTextBox2->UseSystemPasswordChar = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(227, 462);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(43, 45);
			this->button2->TabIndex = 10;
			this->button2->UseVisualStyleBackColor = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(378, 62);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(403, 383);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(834, 562);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->bunifuTextBox2);
			this->Controls->Add(this->bunifuTextBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->bunifuCheckbox1);
			this->Controls->Add(this->bunifuButton1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
