	#pragma once
#include"CompleteInformationUserControl.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Client {

	/// <summary>
	/// Summary for Paymentcount
	/// </summary>
	public ref class Paymentcount : public System::Windows::Forms::UserControl
	{
	public:
		Paymentcount(void)
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
		~Paymentcount()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Guna::UI::WinForms::GunaGradient2Panel^ TOTALPRICEPANEL;
	protected:

	protected:
	private: Guna::UI::WinForms::GunaGradient2Panel^ gunaGradient2Panel2;
	private: System::Windows::Forms::Button^ PAYANDDOWNLOADBUTTON;
	private: System::Windows::Forms::Label^ TOTALPRICE;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ NUMBEROFSEELECTEDBOOK;
	private: Guna::UI::WinForms::GunaGradient2Panel^ BOOKSPANEL;


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
			this->TOTALPRICEPANEL = (gcnew Guna::UI::WinForms::GunaGradient2Panel());
			this->gunaGradient2Panel2 = (gcnew Guna::UI::WinForms::GunaGradient2Panel());
			this->PAYANDDOWNLOADBUTTON = (gcnew System::Windows::Forms::Button());
			this->TOTALPRICE = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->NUMBEROFSEELECTEDBOOK = (gcnew System::Windows::Forms::Label());
			this->BOOKSPANEL = (gcnew Guna::UI::WinForms::GunaGradient2Panel());
			this->TOTALPRICEPANEL->SuspendLayout();
			this->gunaGradient2Panel2->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// TOTALPRICEPANEL
			// 
			this->TOTALPRICEPANEL->BackColor = System::Drawing::Color::Transparent;
			this->TOTALPRICEPANEL->Controls->Add(this->gunaGradient2Panel2);
			this->TOTALPRICEPANEL->Dock = System::Windows::Forms::DockStyle::Left;
			this->TOTALPRICEPANEL->GradientColor1 = System::Drawing::Color::White;
			this->TOTALPRICEPANEL->GradientColor2 = System::Drawing::Color::White;
			this->TOTALPRICEPANEL->Location = System::Drawing::Point(0, 0);
			this->TOTALPRICEPANEL->Name = L"TOTALPRICEPANEL";
			this->TOTALPRICEPANEL->Size = System::Drawing::Size(455, 771);
			this->TOTALPRICEPANEL->TabIndex = 0;
			// 
			// gunaGradient2Panel2
			// 
			this->gunaGradient2Panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->gunaGradient2Panel2->AutoScroll = true;
			this->gunaGradient2Panel2->BackColor = System::Drawing::Color::Transparent;
			this->gunaGradient2Panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->gunaGradient2Panel2->Controls->Add(this->PAYANDDOWNLOADBUTTON);
			this->gunaGradient2Panel2->Controls->Add(this->TOTALPRICE);
			this->gunaGradient2Panel2->Controls->Add(this->tableLayoutPanel1);
			this->gunaGradient2Panel2->GradientColor1 = System::Drawing::Color::White;
			this->gunaGradient2Panel2->GradientColor2 = System::Drawing::Color::White;
			this->gunaGradient2Panel2->Location = System::Drawing::Point(13, 106);
			this->gunaGradient2Panel2->Name = L"gunaGradient2Panel2";
			this->gunaGradient2Panel2->Radius = 10;
			this->gunaGradient2Panel2->Size = System::Drawing::Size(427, 355);
			this->gunaGradient2Panel2->TabIndex = 0;
			// 
			// PAYANDDOWNLOADBUTTON
			// 
			this->PAYANDDOWNLOADBUTTON->BackColor = System::Drawing::Color::SpringGreen;
			this->PAYANDDOWNLOADBUTTON->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->PAYANDDOWNLOADBUTTON->Font = (gcnew System::Drawing::Font(L"B Homa", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->PAYANDDOWNLOADBUTTON->Location = System::Drawing::Point(31, 217);
			this->PAYANDDOWNLOADBUTTON->Name = L"PAYANDDOWNLOADBUTTON";
			this->PAYANDDOWNLOADBUTTON->Size = System::Drawing::Size(363, 65);
			this->PAYANDDOWNLOADBUTTON->TabIndex = 2;
			this->PAYANDDOWNLOADBUTTON->Text = L"پرداخت و مشاهده کتاب";
			this->PAYANDDOWNLOADBUTTON->UseVisualStyleBackColor = false;
			this->PAYANDDOWNLOADBUTTON->Click += gcnew System::EventHandler(this, &Paymentcount::PAYANDDOWNLOADBUTTON_Click);
			// 
			// TOTALPRICE
			// 
			this->TOTALPRICE->AutoSize = true;
			this->TOTALPRICE->Font = (gcnew System::Drawing::Font(L"B Homa", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->TOTALPRICE->Location = System::Drawing::Point(39, 17);
			this->TOTALPRICE->Name = L"TOTALPRICE";
			this->TOTALPRICE->Size = System::Drawing::Size(76, 35);
			this->TOTALPRICE->TabIndex = 1;
			this->TOTALPRICE->Text = L"label2";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Outset;
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				40)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				60)));
			this->tableLayoutPanel1->Controls->Add(this->label1, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->NUMBEROFSEELECTEDBOOK, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(224, 17);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(200, 30);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"B Homa", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label1->Location = System::Drawing::Point(84, 2);
			this->label1->Name = L"label1";
			this->label1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label1->Size = System::Drawing::Size(79, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"قیمیت کالاها";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// NUMBEROFSEELECTEDBOOK
			// 
			this->NUMBEROFSEELECTEDBOOK->AutoSize = true;
			this->NUMBEROFSEELECTEDBOOK->Location = System::Drawing::Point(5, 2);
			this->NUMBEROFSEELECTEDBOOK->Name = L"NUMBEROFSEELECTEDBOOK";
			this->NUMBEROFSEELECTEDBOOK->Padding = System::Windows::Forms::Padding(50, 7, 0, 0);
			this->NUMBEROFSEELECTEDBOOK->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->NUMBEROFSEELECTEDBOOK->Size = System::Drawing::Size(66, 24);
			this->NUMBEROFSEELECTEDBOOK->TabIndex = 1;
			this->NUMBEROFSEELECTEDBOOK->Text = L"0";
			this->NUMBEROFSEELECTEDBOOK->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// BOOKSPANEL
			// 
			this->BOOKSPANEL->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->BOOKSPANEL->AutoScroll = true;
			this->BOOKSPANEL->AutoSize = true;
			this->BOOKSPANEL->BackColor = System::Drawing::Color::DimGray;
			this->BOOKSPANEL->GradientColor1 = System::Drawing::Color::Gray;
			this->BOOKSPANEL->GradientColor2 = System::Drawing::Color::White;
			this->BOOKSPANEL->Location = System::Drawing::Point(455, 0);
			this->BOOKSPANEL->Name = L"BOOKSPANEL";
			this->BOOKSPANEL->Size = System::Drawing::Size(646, 768);
			this->BOOKSPANEL->TabIndex = 1;
			// 
			// Paymentcount
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoScroll = true;
			this->AutoSize = true;
			this->Controls->Add(this->BOOKSPANEL);
			this->Controls->Add(this->TOTALPRICEPANEL);
			this->Name = L"Paymentcount";
			this->Size = System::Drawing::Size(1104, 771);
			this->TOTALPRICEPANEL->ResumeLayout(false);
			this->gunaGradient2Panel2->ResumeLayout(false);
			this->gunaGradient2Panel2->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//get size of the current useer control
	private: int GET_PAYMENT_HEIGHT()
	{
		return this->Height;
	}
	private:int GET_PAUMENT_WIDTH()
	{
		return this->Width;
	}
	private:void SET_PAYMENT_HEIGHT(int Height)
	{
		this->Height = Height;
	}
	private: void SET_PAYMENT_WIDTH(int Width)
	{
		this->Width = Width;
	}
		//creatin panel size
		bool Is_Emtpy = false;
		int FromToptoBottom = this->Top;

		//an instance for getting information of the the book registered
		CompleteInformationUserControl^ book = gcnew CompleteInformationUserControl();

	private:
		String^ Id = book->GetId();
		String^ Price = book->GetPrice();
		String^ Quantity = book->GetQuantity();

	private: void Add_Another_book(String ^Id, String^ Price,String^ Quantity)
	{
		Id = this->Id;
		Price = this->Price;
		Quantity = this->Quantity;
		bool man = false;
		//if (/*book->Get_IS_PAY_EMPTY() == true*/ man==true )
		//{
		//	
		//	/*FromToptoBottom += 50;
		//	Panel^ bookpanel = gcnew Panel();
		//	bookpanel->Location = System::Drawing::Point((this->Left + this->Right)/2  ,FromToptoBottom);
		//	bookpanel->Size = System::Drawing::Size(200,100);
		//	bookpanel->BackColor = System::Drawing::Color::CadetBlue;
		//	Controls->Add(bookpanel);*/
		//	

		//}
		//else if (/*book->Get_IS_PAY_EMPTY() == false */man==false )
		//{

			Panel^ ErrorPAnel = gcnew Panel();
			ErrorPAnel->Location = System::Drawing::Point(300,500);
			ErrorPAnel->Size = System::Drawing::Size(400, 300);
			ErrorPAnel->BackColor = System::Drawing::Color::OrangeRed;
			ErrorPAnel->Controls->Add(ErrorPAnel);

		//}

	}
	
	
	
		   //this functions leads us to Artificial payment
	private: System::Void PAYANDDOWNLOADBUTTON_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
