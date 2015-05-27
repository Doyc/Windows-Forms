#pragma once

namespace WindowsFormApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		MyForm3(void)
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
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton5;
	private: System::Windows::Forms::RadioButton^  radioButton6;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(482, 70);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"GO!";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(23, 70);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(6, 36);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(57, 17);
			this->radioButton1->TabIndex = 2;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"celsius";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(6, 60);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(72, 17);
			this->radioButton2->TabIndex = 3;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"fahrenheit";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(6, 84);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(53, 17);
			this->radioButton3->TabIndex = 4;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"kelvin";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Location = System::Drawing::Point(148, 16);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(142, 125);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"CONVERT THIS";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton4);
			this->groupBox2->Controls->Add(this->radioButton5);
			this->groupBox2->Controls->Add(this->radioButton6);
			this->groupBox2->Location = System::Drawing::Point(314, 16);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(142, 125);
			this->groupBox2->TabIndex = 6;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"INTO THIS";
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(6, 36);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(57, 17);
			this->radioButton4->TabIndex = 2;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"celsius";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(6, 84);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(53, 17);
			this->radioButton5->TabIndex = 4;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"kelvin";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(6, 60);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(72, 17);
			this->radioButton6->TabIndex = 3;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"fahrenheit";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(588, 156);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm3";
			this->Text = L"Temperature";
			this->Load += gcnew System::EventHandler(this, &MyForm3::MyForm3_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void MyForm3_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
