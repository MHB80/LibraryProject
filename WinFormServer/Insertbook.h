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
		Panel^ mainpanel;
		Insertbook(Panel^c)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
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

	protected:





	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;


	private: System::Windows::Forms::Label^ BOOKPRICE;
	private: System::Windows::Forms::Label^ BOOKNAME;
	private: System::Windows::Forms::Label^ WRITER;
	private: System::Windows::Forms::Label^ GENRES;


	private: System::Windows::Forms::Label^ BOOKINFORMATION;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;


	protected:



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
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->BOOKPRICE = (gcnew System::Windows::Forms::Label());
			this->BOOKNAME = (gcnew System::Windows::Forms::Label());
			this->WRITER = (gcnew System::Windows::Forms::Label());
			this->GENRES = (gcnew System::Windows::Forms::Label());
			this->BOOKINFORMATION = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->panel2->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->tableLayoutPanel2);
			this->panel2->Location = System::Drawing::Point(380, 2);
			this->panel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(456, 279);
			this->panel2->TabIndex = 3;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				65.39278F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				34.60722F)));
			this->tableLayoutPanel2->Controls->Add(this->BOOKPRICE, 1, 2);
			this->tableLayoutPanel2->Controls->Add(this->BOOKNAME, 1, 1);
			this->tableLayoutPanel2->Controls->Add(this->WRITER, 1, 3);
			this->tableLayoutPanel2->Controls->Add(this->GENRES, 1, 4);
			this->tableLayoutPanel2->Controls->Add(this->BOOKINFORMATION, 1, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 2);
			this->tableLayoutPanel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 5;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25.13089F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 24.60733F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 84)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 25)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(453, 282);
			this->tableLayoutPanel2->TabIndex = 1;
			// 
			// BOOKPRICE
			// 
			this->BOOKPRICE->AutoSize = true;
			this->BOOKPRICE->Dock = System::Windows::Forms::DockStyle::Right;
			this->BOOKPRICE->Font = (gcnew System::Drawing::Font(L"B Nazanin", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->BOOKPRICE->Location = System::Drawing::Point(385, 97);
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
			this->BOOKNAME->Location = System::Drawing::Point(398, 49);
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
			this->WRITER->Location = System::Drawing::Point(399, 146);
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
			this->GENRES->Location = System::Drawing::Point(410, 195);
			this->GENRES->Name = L"GENRES";
			this->GENRES->Size = System::Drawing::Size(40, 87);
			this->GENRES->TabIndex = 5;
			this->GENRES->Text = L"ژانر ها";
			// 
			// BOOKINFORMATION
			// 
			this->BOOKINFORMATION->AutoSize = true;
			this->BOOKINFORMATION->Dock = System::Windows::Forms::DockStyle::Right;
			this->BOOKINFORMATION->Font = (gcnew System::Drawing::Font(L"B Nazanin", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->BOOKINFORMATION->Location = System::Drawing::Point(398, 0);
			this->BOOKINFORMATION->Name = L"BOOKINFORMATION";
			this->BOOKINFORMATION->Size = System::Drawing::Size(52, 49);
			this->BOOKINFORMATION->TabIndex = 11;
			this->BOOKINFORMATION->Text = L"نام کتاب";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->BackColor = System::Drawing::Color::White;
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				41.97829F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				58.02171F)));
			this->tableLayoutPanel1->Controls->Add(this->panel2, 1, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(211, 122);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 3;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 53.05755F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.76978F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.99281F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(900, 537);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// Insertbook
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->Controls->Add(this->tableLayoutPanel1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Insertbook";
			this->Size = System::Drawing::Size(1200, 768);
			this->Load += gcnew System::EventHandler(this, &Insertbook::Insertbook_Load);
			this->panel2->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	
	


private: System::Void EXITCONTROLBOX_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void FILESELECT_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void Insertbook_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
