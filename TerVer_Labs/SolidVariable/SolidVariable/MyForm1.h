#pragma once
#include "PossibilityMeeting.h"

PossibilityMeeting myGirl;

namespace SolidVariable {

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

  protected:
  private: System::Windows::Forms::TabControl^  tabControl1;
  private: System::Windows::Forms::TabPage^  tabPage1;
  private: System::Windows::Forms::Label^  label1;
  private: System::Windows::Forms::TextBox^  textBox1;
  private: System::Windows::Forms::DataGridView^  dataGridView1;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
  private: System::Windows::Forms::Label^  label2;
  private: System::Windows::Forms::DataGridView^  dataGridView2;
  private: System::Windows::Forms::CheckBox^  checkBox1;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column10;

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
      this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
      this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
      this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
      this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
      this->textBox1 = (gcnew System::Windows::Forms::TextBox());
      this->label1 = (gcnew System::Windows::Forms::Label());
      this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
      this->label2 = (gcnew System::Windows::Forms::Label());
      this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
      this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
      this->tabControl1->SuspendLayout();
      this->tabPage1->SuspendLayout();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
      this->SuspendLayout();
      // 
      // tabControl1
      // 
      this->tabControl1->Controls->Add(this->tabPage1);
      this->tabControl1->Location = System::Drawing::Point(0, 0);
      this->tabControl1->Name = L"tabControl1";
      this->tabControl1->SelectedIndex = 0;
      this->tabControl1->Size = System::Drawing::Size(924, 330);
      this->tabControl1->TabIndex = 0;
      // 
      // tabPage1
      // 
      this->tabPage1->Controls->Add(this->checkBox1);
      this->tabPage1->Controls->Add(this->label2);
      this->tabPage1->Controls->Add(this->dataGridView2);
      this->tabPage1->Controls->Add(this->dataGridView1);
      this->tabPage1->Controls->Add(this->textBox1);
      this->tabPage1->Controls->Add(this->label1);
      this->tabPage1->Location = System::Drawing::Point(4, 22);
      this->tabPage1->Name = L"tabPage1";
      this->tabPage1->Padding = System::Windows::Forms::Padding(3);
      this->tabPage1->Size = System::Drawing::Size(916, 304);
      this->tabPage1->TabIndex = 0;
      this->tabPage1->Text = L"Tryst";
      this->tabPage1->UseVisualStyleBackColor = true;
      // 
      // dataGridView1
      // 
      this->dataGridView1->AllowUserToAddRows = false;
      this->dataGridView1->AllowUserToDeleteRows = false;
      this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
      this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
      this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Column1 });
      this->dataGridView1->Location = System::Drawing::Point(4, 46);
      this->dataGridView1->Name = L"dataGridView1";
      this->dataGridView1->Size = System::Drawing::Size(140, 173);
      this->dataGridView1->TabIndex = 2;
      // 
      // Column1
      // 
      this->Column1->HeaderText = L"Average_latency";
      this->Column1->MaxInputLength = 20;
      this->Column1->MinimumWidth = 10;
      this->Column1->Name = L"Column1";
      // 
      // textBox1
      // 
      this->textBox1->Location = System::Drawing::Point(4, 20);
      this->textBox1->Name = L"textBox1";
      this->textBox1->Size = System::Drawing::Size(119, 20);
      this->textBox1->TabIndex = 1;
      this->textBox1->Text = L"15";
      this->textBox1->TextAlignChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextAlignChanged);
      this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
      // 
      // label1
      // 
      this->label1->AutoSize = true;
      this->label1->Location = System::Drawing::Point(8, 3);
      this->label1->Name = L"label1";
      this->label1->Size = System::Drawing::Size(75, 13);
      this->label1->TabIndex = 0;
      this->label1->Text = L"Number boys: ";
      // 
      // dataGridView2
      // 
      this->dataGridView2->AllowUserToAddRows = false;
      this->dataGridView2->AllowUserToDeleteRows = false;
      this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
      this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
      this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Column10 });
      this->dataGridView2->Location = System::Drawing::Point(215, 20);
      this->dataGridView2->Name = L"dataGridView2";
      this->dataGridView2->ReadOnly = true;
      this->dataGridView2->Size = System::Drawing::Size(676, 199);
      this->dataGridView2->TabIndex = 3;
      // 
      // label2
      // 
      this->label2->AutoSize = true;
      this->label2->Location = System::Drawing::Point(215, 3);
      this->label2->Name = L"label2";
      this->label2->Size = System::Drawing::Size(62, 13);
      this->label2->TabIndex = 4;
      this->label2->Text = L"Information:";
      // 
      // Column10
      // 
      this->Column10->HeaderText = L"Chance";
      this->Column10->Name = L"Column10";
      this->Column10->ReadOnly = true;
      // 
      // checkBox1
      // 
      this->checkBox1->AutoSize = true;
      this->checkBox1->Location = System::Drawing::Point(129, 23);
      this->checkBox1->Name = L"checkBox1";
      this->checkBox1->Size = System::Drawing::Size(15, 14);
      this->checkBox1->TabIndex = 5;
      this->checkBox1->UseVisualStyleBackColor = true;
      this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
      // 
      // MyForm
      // 
      this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
      this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
      this->ClientSize = System::Drawing::Size(923, 327);
      this->Controls->Add(this->tabControl1);
      this->Name = L"MyForm";
      this->Text = L"Tryst with the first boyfriend";
      this->Load += gcnew System::EventHandler(this, &MyForm::MyForm1_Load);
      this->tabControl1->ResumeLayout(false);
      this->tabPage1->ResumeLayout(false);
      this->tabPage1->PerformLayout();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
      this->ResumeLayout(false);

    }

#pragma endregion
  private: System::Void MyForm1_Load(System::Object^  sender, System::EventArgs^  e)
  {
    this->dataGridView1->Visible = false;
    this->dataGridView2->Visible = false;
  }

  private: System::Void textBox1_TextAlignChanged(System::Object^  sender, System::EventArgs^  e)
  {
    ;
  }

  private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
  {
    char number = (char)e->KeyChar;
    if (!Char::IsDigit(number) && number != 8 && number != 44 && number != 46)
    {
      e->Handled = true;
    }
  }

  private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
  {
    this->dataGridView1->RowCount = myGirl.getN();
    this->dataGridView1->Visible = true;
  }
};
}