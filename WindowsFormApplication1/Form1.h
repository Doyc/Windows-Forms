#pragma once

#include "MyForm.h"
#include "MyForm1.h"
#include "MyForm2.h"
#include "MyForm3.h"
#include "MyForm4.h"
#include "MyForm5.h"

namespace WindowsFormApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button6;
	protected:
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;

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
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(267, 78);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(99, 43);
			this->button6->TabIndex = 11;
			this->button6->Text = L"Speed";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(137, 78);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(99, 43);
			this->button5->TabIndex = 10;
			this->button5->Text = L"Pressure";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(13, 78);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(99, 43);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Temperature";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(267, 16);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(99, 43);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Weight";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(137, 16);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(99, 43);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Lenght";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(13, 16);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 43);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Time";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(122, 226);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(127, 17);
			this->label1->TabIndex = 12;
			this->label1->Text = L"CONVERTED IT IS:";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->ClientSize = System::Drawing::Size(379, 341);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Perpetua", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->Name = L"Form1";
			this->Text = L"Unit Converter";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		MyForm^ time = gcnew MyForm;
		time->ShowDialog();

	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		MyForm1^ lenght = gcnew MyForm1;
		lenght->ShowDialog();

	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		MyForm2^ weight = gcnew MyForm2;
		weight->ShowDialog();

	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		MyForm3^ temperature = gcnew MyForm3;
		temperature->ShowDialog();

	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		MyForm4^ pressure = gcnew MyForm4;
		pressure->ShowDialog();

	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		MyForm5^ speed = gcnew MyForm5;
		speed->ShowDialog();

	}

};
}

