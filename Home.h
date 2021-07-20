#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Client {

	/// <summary>
	/// Summary for Home
	/// </summary>
	public ref class Home : public System::Windows::Forms::UserControl
	{
	public:
		Home(void)
		{
			InitializeComponent();

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Home()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: Guna::UI::WinForms::GunaGroupBox^ Genre_GB;
	private: Guna::UI::WinForms::GunaGroupBox^ gunaGroupBox3;
	private: Guna::UI::WinForms::GunaGroupBox^ gunaGroupBox4;
	private: Guna::UI::WinForms::GunaGroupBox^ gunaGroupBox5;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: Guna::UI::WinForms::GunaPictureBox^ gunaPictureBox7;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: Guna::UI::WinForms::GunaPictureBox^ gunaPictureBox6;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: Guna::UI::WinForms::GunaPictureBox^ gunaPictureBox5;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: Guna::UI::WinForms::GunaPictureBox^ gunaPictureBox4;



	private: Guna::UI::WinForms::GunaCirclePictureBox^ HomePicBox3;
	private: Guna::UI::WinForms::GunaCirclePictureBox^ HomePicBox2;
	private: Guna::UI::WinForms::GunaPictureBox^ HomePicBox1;

	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::Timer^ timer3;
	private: System::Windows::Forms::GroupBox^ TOPPANEL;



	private: System::ComponentModel::IContainer^ components;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Home::typeid));
			this->Genre_GB = (gcnew Guna::UI::WinForms::GunaGroupBox());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->gunaPictureBox7 = (gcnew Guna::UI::WinForms::GunaPictureBox());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->gunaPictureBox6 = (gcnew Guna::UI::WinForms::GunaPictureBox());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->gunaPictureBox5 = (gcnew Guna::UI::WinForms::GunaPictureBox());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->gunaPictureBox4 = (gcnew Guna::UI::WinForms::GunaPictureBox());
			this->gunaGroupBox3 = (gcnew Guna::UI::WinForms::GunaGroupBox());
			this->gunaGroupBox4 = (gcnew Guna::UI::WinForms::GunaGroupBox());
			this->gunaGroupBox5 = (gcnew Guna::UI::WinForms::GunaGroupBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->HomePicBox3 = (gcnew Guna::UI::WinForms::GunaCirclePictureBox());
			this->HomePicBox2 = (gcnew Guna::UI::WinForms::GunaCirclePictureBox());
			this->HomePicBox1 = (gcnew Guna::UI::WinForms::GunaPictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->TOPPANEL = (gcnew System::Windows::Forms::GroupBox());
			this->Genre_GB->SuspendLayout();
			this->tableLayoutPanel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox7))->BeginInit();
			this->tableLayoutPanel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox6))->BeginInit();
			this->tableLayoutPanel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox5))->BeginInit();
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HomePicBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HomePicBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HomePicBox1))->BeginInit();
			this->TOPPANEL->SuspendLayout();
			this->SuspendLayout();
			// 
			// Genre_GB
			// 
			this->Genre_GB->AutoScroll = true;
			this->Genre_GB->BackColor = System::Drawing::Color::Transparent;
			this->Genre_GB->BaseColor = System::Drawing::Color::White;
			this->Genre_GB->BorderColor = System::Drawing::Color::DarkGray;
			this->Genre_GB->Controls->Add(this->tableLayoutPanel4);
			this->Genre_GB->Controls->Add(this->tableLayoutPanel3);
			this->Genre_GB->Controls->Add(this->tableLayoutPanel2);
			this->Genre_GB->Controls->Add(this->tableLayoutPanel1);
			this->Genre_GB->LineColor = System::Drawing::Color::Transparent;
			this->Genre_GB->Location = System::Drawing::Point(65, 350);
			this->Genre_GB->Name = L"Genre_GB";
			this->Genre_GB->Size = System::Drawing::Size(1012, 167);
			this->Genre_GB->TabIndex = 1;
			this->Genre_GB->Text = L" بر اساس ژانر";
			this->Genre_GB->TextLocation = System::Drawing::Point(830, 8);
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->ColumnCount = 1;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel4->Controls->Add(this->textBox4, 0, 1);
			this->tableLayoutPanel4->Controls->Add(this->gunaPictureBox7, 0, 0);
			this->tableLayoutPanel4->Location = System::Drawing::Point(148, 18);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 2;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 32)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(144, 132);
			this->tableLayoutPanel4->TabIndex = 7;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(3, 103);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(138, 22);
			this->textBox4->TabIndex = 0;
			// 
			// gunaPictureBox7
			// 
			this->gunaPictureBox7->BaseColor = System::Drawing::Color::White;
			this->gunaPictureBox7->Location = System::Drawing::Point(3, 3);
			this->gunaPictureBox7->Name = L"gunaPictureBox7";
			this->gunaPictureBox7->Size = System::Drawing::Size(138, 94);
			this->gunaPictureBox7->TabIndex = 1;
			this->gunaPictureBox7->TabStop = false;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 1;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel3->Controls->Add(this->textBox3, 0, 1);
			this->tableLayoutPanel3->Controls->Add(this->gunaPictureBox6, 0, 0);
			this->tableLayoutPanel3->Location = System::Drawing::Point(313, 18);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 2;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 32)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(144, 132);
			this->tableLayoutPanel3->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(3, 103);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(138, 22);
			this->textBox3->TabIndex = 0;
			// 
			// gunaPictureBox6
			// 
			this->gunaPictureBox6->BaseColor = System::Drawing::Color::White;
			this->gunaPictureBox6->Location = System::Drawing::Point(3, 3);
			this->gunaPictureBox6->Name = L"gunaPictureBox6";
			this->gunaPictureBox6->Size = System::Drawing::Size(138, 94);
			this->gunaPictureBox6->TabIndex = 1;
			this->gunaPictureBox6->TabStop = false;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->Controls->Add(this->textBox2, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->gunaPictureBox5, 0, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(485, 18);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 2;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 32)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(144, 132);
			this->tableLayoutPanel2->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(3, 103);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(138, 22);
			this->textBox2->TabIndex = 0;
			// 
			// gunaPictureBox5
			// 
			this->gunaPictureBox5->BaseColor = System::Drawing::Color::White;
			this->gunaPictureBox5->Location = System::Drawing::Point(3, 3);
			this->gunaPictureBox5->Name = L"gunaPictureBox5";
			this->gunaPictureBox5->Size = System::Drawing::Size(138, 94);
			this->gunaPictureBox5->TabIndex = 1;
			this->gunaPictureBox5->TabStop = false;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->textBox1, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->gunaPictureBox4, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(647, 18);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 32)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(144, 132);
			this->tableLayoutPanel1->TabIndex = 4;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(3, 103);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(138, 22);
			this->textBox1->TabIndex = 0;
			// 
			// gunaPictureBox4
			// 
			this->gunaPictureBox4->BaseColor = System::Drawing::Color::White;
			this->gunaPictureBox4->Location = System::Drawing::Point(3, 3);
			this->gunaPictureBox4->Name = L"gunaPictureBox4";
			this->gunaPictureBox4->Size = System::Drawing::Size(138, 94);
			this->gunaPictureBox4->TabIndex = 1;
			this->gunaPictureBox4->TabStop = false;
			// 
			// gunaGroupBox3
			// 
			this->gunaGroupBox3->BackColor = System::Drawing::Color::Transparent;
			this->gunaGroupBox3->BaseColor = System::Drawing::Color::White;
			this->gunaGroupBox3->BorderColor = System::Drawing::Color::Gainsboro;
			this->gunaGroupBox3->LineColor = System::Drawing::Color::Transparent;
			this->gunaGroupBox3->Location = System::Drawing::Point(68, 523);
			this->gunaGroupBox3->Name = L"gunaGroupBox3";
			this->gunaGroupBox3->Size = System::Drawing::Size(1009, 120);
			this->gunaGroupBox3->TabIndex = 2;
			this->gunaGroupBox3->Text = L"جدیدترین";
			this->gunaGroupBox3->TextLocation = System::Drawing::Point(850, 8);
			// 
			// gunaGroupBox4
			// 
			this->gunaGroupBox4->BackColor = System::Drawing::Color::Transparent;
			this->gunaGroupBox4->BaseColor = System::Drawing::Color::White;
			this->gunaGroupBox4->BorderColor = System::Drawing::Color::Gainsboro;
			this->gunaGroupBox4->LineColor = System::Drawing::Color::Transparent;
			this->gunaGroupBox4->Location = System::Drawing::Point(68, 649);
			this->gunaGroupBox4->Name = L"gunaGroupBox4";
			this->gunaGroupBox4->Size = System::Drawing::Size(1009, 117);
			this->gunaGroupBox4->TabIndex = 3;
			this->gunaGroupBox4->Text = L"نشر روز";
			this->gunaGroupBox4->TextLocation = System::Drawing::Point(850, 8);
			// 
			// gunaGroupBox5
			// 
			this->gunaGroupBox5->BackColor = System::Drawing::Color::Transparent;
			this->gunaGroupBox5->BaseColor = System::Drawing::Color::White;
			this->gunaGroupBox5->BorderColor = System::Drawing::Color::Gainsboro;
			this->gunaGroupBox5->LineColor = System::Drawing::Color::Transparent;
			this->gunaGroupBox5->Location = System::Drawing::Point(65, 772);
			this->gunaGroupBox5->Name = L"gunaGroupBox5";
			this->gunaGroupBox5->Size = System::Drawing::Size(1012, 137);
			this->gunaGroupBox5->TabIndex = 4;
			this->gunaGroupBox5->Text = L"بیوگرافی";
			this->gunaGroupBox5->TextLocation = System::Drawing::Point(850, 8);
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(62, 915);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(914, 100);
			this->panel1->TabIndex = 0;
			// 
			// HomePicBox3
			// 
			this->HomePicBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->HomePicBox3->BaseColor = System::Drawing::Color::White;
			this->HomePicBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"HomePicBox3.Image")));
			this->HomePicBox3->Location = System::Drawing::Point(675, 30);
			this->HomePicBox3->Name = L"HomePicBox3";
			this->HomePicBox3->Size = System::Drawing::Size(214, 186);
			this->HomePicBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->HomePicBox3->TabIndex = 6;
			this->HomePicBox3->TabStop = false;
			this->HomePicBox3->UseTransfarantBackground = false;
			// 
			// HomePicBox2
			// 
			this->HomePicBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->HomePicBox2->BaseColor = System::Drawing::Color::White;
			this->HomePicBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"HomePicBox2.Image")));
			this->HomePicBox2->Location = System::Drawing::Point(381, 30);
			this->HomePicBox2->Name = L"HomePicBox2";
			this->HomePicBox2->Size = System::Drawing::Size(231, 186);
			this->HomePicBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->HomePicBox2->TabIndex = 5;
			this->HomePicBox2->TabStop = false;
			this->HomePicBox2->UseTransfarantBackground = false;
			// 
			// HomePicBox1
			// 
			this->HomePicBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->HomePicBox1->BaseColor = System::Drawing::Color::White;
			this->HomePicBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"HomePicBox1.Image")));
			this->HomePicBox1->Location = System::Drawing::Point(108, 30);
			this->HomePicBox1->Name = L"HomePicBox1";
			this->HomePicBox1->Size = System::Drawing::Size(213, 186);
			this->HomePicBox1->TabIndex = 4;
			this->HomePicBox1->TabStop = false;
			// 
			// timer1
			// 
			this->timer1->Interval = 3000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Home::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Interval = 3040;
			this->timer2->Tick += gcnew System::EventHandler(this, &Home::timer2_Tick);
			// 
			// timer3
			// 
			this->timer3->Interval = 3100;
			this->timer3->Tick += gcnew System::EventHandler(this, &Home::timer3_Tick);
			// 
			// TOPPANEL
			// 
			this->TOPPANEL->AutoSize = true;
			this->TOPPANEL->Controls->Add(this->HomePicBox3);
			this->TOPPANEL->Controls->Add(this->HomePicBox1);
			this->TOPPANEL->Controls->Add(this->HomePicBox2);
			this->TOPPANEL->Dock = System::Windows::Forms::DockStyle::Top;
			this->TOPPANEL->Location = System::Drawing::Point(0, 0);
			this->TOPPANEL->Name = L"TOPPANEL";
			this->TOPPANEL->Size = System::Drawing::Size(1080, 237);
			this->TOPPANEL->TabIndex = 2;
			this->TOPPANEL->TabStop = false;
			// 
			// Home
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->Controls->Add(this->gunaGroupBox5);
			this->Controls->Add(this->TOPPANEL);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->gunaGroupBox4);
			this->Controls->Add(this->gunaGroupBox3);
			this->Controls->Add(this->Genre_GB);
			this->Enabled = false;
			this->Name = L"Home";
			this->Size = System::Drawing::Size(1080, 768);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::Home_MouseMove);
			this->Genre_GB->ResumeLayout(false);
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox7))->EndInit();
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox6))->EndInit();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox5))->EndInit();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HomePicBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HomePicBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HomePicBox1))->EndInit();
			this->TOPPANEL->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



	private: System::Void maskedTextBox2_MaskInputRejected(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e) {
	}

		   //
		   //BE CAREFUL :
		   // 		 TRYING TO CHANGE THE FORMAT OF PICTURE BOX'S MUST FOLLOW TGIS RULE FOR NAMING
		   // 		 OTHERWISE IT CAUSE PROBLEMS
		   // 		 =>HomePicBox1 ... HomePicBox2 etc .
		   // 		 Follow it to prevent facing Errors
		   //

		   bool IS_PB1_ENABLED = true;
		   bool IS_PB2_ENABLED;
		   bool IS_PB3_ENABLED;

	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		timer1->Stop();

		if (IS_PB1_ENABLED == true)
		{
			HomePicBox1->Show();
			HomePicBox2->Hide();
			HomePicBox3->Hide();
			TOPPANEL->Refresh();
		}

		IS_PB1_ENABLED = false;
		IS_PB2_ENABLED = true;
		IS_PB3_ENABLED = false;

		timer2->Start();
	}
	private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {

		timer2->Stop();
		if (IS_PB2_ENABLED == true)
		{
			HomePicBox1->Hide();
			HomePicBox2->Show();
			HomePicBox3->Hide();
			TOPPANEL->Refresh();
		}

		IS_PB1_ENABLED = false;
		IS_PB2_ENABLED = false;
		IS_PB3_ENABLED = true;

		timer3->Start();
	}
	private: System::Void timer3_Tick(System::Object^ sender, System::EventArgs^ e) {

		timer3->Stop();
		if (IS_PB3_ENABLED == true)
		{

			HomePicBox1->Hide();
			HomePicBox2->Hide();
			HomePicBox3->Show();
			TOPPANEL->Refresh();

		}

		IS_PB1_ENABLED = true;
		IS_PB3_ENABLED = false;
		IS_PB2_ENABLED = false;
		timer1->Start();


	}
		   bool First_move = false;
	private: System::Void Home_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		First_move = true;
		if (First_move == true) {
			timer1->Start();
			First_move = false;
		}
		else {

			return;
		}
	}

	};
}
