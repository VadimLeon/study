#pragma once
#include <iostream>
#include <string.h>
#include <sstream>
#include <string>
#include <cstdlib>
#include <conio.h>
#include <stdlib.h>
#include <cmath>

//#include <TCanvas>
//[SerializableAttribute]
//[TypeConverterAttribute((ColorConverter^::typeid))]
//public value struct Color;

namespace Test_OOP 
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// ������ ��� myWheel
	/// </summary>
	public ref class myWheel : public System::Windows::Forms::Form
	{
	public:
		myWheel(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~myWheel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;



	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button4;



	protected: 

	private:
		System::Drawing::Graphics ^g;
		int x;
		System::String ^St;


		/// <summary>
		/// ��������� ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ������������ ����� ��� ��������� ������������ - �� ���������
		/// ���������� ������� ������ ��� ������ ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(686, 393);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(234, 72);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Poschitat";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &myWheel::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Millimeter, 
				static_cast<System::Byte>(204), true));
			this->textBox1->ForeColor = System::Drawing::Color::Gold;
			this->textBox1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox1->Location = System::Drawing::Point(12, 396);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(309, 70);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &myWheel::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::Window;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Millimeter, 
				static_cast<System::Byte>(204), true));
			this->textBox2->ForeColor = System::Drawing::Color::Chartreuse;
			this->textBox2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox2->Location = System::Drawing::Point(342, 395);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBox2->Size = System::Drawing::Size(309, 70);
			this->textBox2->TabIndex = 2;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &myWheel::textBox2_TextChanged);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Info;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(611, 23);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(309, 72);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Krug";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &myWheel::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::Info;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(611, 101);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(309, 72);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Kvadrat";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &myWheel::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 359);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(147, 26);
			this->label1->TabIndex = 8;
			this->label1->Text = L"   Vvedi chislo";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(337, 359);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(149, 26);
			this->label2->TabIndex = 9;
			this->label2->Text = L"   Chislo * 2  =";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button4->Location = System::Drawing::Point(686, 362);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(234, 23);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Otchistit ekran";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &myWheel::button4_Click);
			// 
			// myWheel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(948, 479);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"myWheel";
			this->Text = L"myWheel";
			this->Load += gcnew System::EventHandler(this, &myWheel::myWheel_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 g = this->CreateGraphics();
				 g->Clear(this->BackColor);//�������� ��� ����������� ��������� � ����������� � ������ "this->BackColor"
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 InitializeComponent();
				 g = this->CreateGraphics();//CreateGraphics() ����� ������ Graphics ��� �������� ����������
				 g->Clear(this->BackColor);//�������� ��� ����������� ��������� � ����������� � ������ "this->BackColor"
				 System::Drawing::Pen^ skyPen = gcnew Pen( Brushes::Black);
				 System::Drawing::Brush^ bras = gcnew SolidBrush(Color::FloralWhite);
				 skyPen->Width = 8.0F;
				 skyPen->LineJoin = System::Drawing::Drawing2D::LineJoin::Bevel;
				 g->DrawEllipse(skyPen, 200, 50, 200, 200);
				 g->FillEllipse(bras, 200, 50, 200, 200);
				 delete skyPen;

			 }
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 InitializeComponent();
				 g = this->CreateGraphics();
				 g->Clear(this->BackColor);//�������� ��� ����������� ��������� � ����������� � ������ "this->BackColor"
				 Pen^ pen = gcnew Pen(Brushes::Red);
				 Brush^ bras = gcnew SolidBrush(Color::Beige);
				 pen->Width = 8.0F;
				 pen->LineJoin = System::Drawing::Drawing2D::LineJoin::Round;
				 g->DrawRectangle(pen,200.0f, 50.0f, 200.0f, 200.0f);
				 g->FillRectangle(bras, 200, 50, 200, 200);
				 delete pen;
			 }
	private: System::Void myWheel_Load(System::Object^  sender, System::EventArgs^  e){}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 x = System::Convert::ToInt32(textBox1->Text) * 2;
				 St =  System::Convert::ToString(x);
				 textBox2->Text = St;
			 }
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e){}
	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e){}
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e){}
	private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e){}
	private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e){}
	};
}