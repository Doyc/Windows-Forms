#pragma once

namespace WindowsFormApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm4
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	public:
		MyForm4(void)
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
		~MyForm4()
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
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton5;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::RadioButton^  radioButton6;
	private: System::Windows::Forms::RadioButton^  radioButton7;
	private: System::Windows::Forms::RadioButton^  radioButton8;
	private: System::Windows::Forms::RadioButton^  radioButton9;
	private: System::Windows::Forms::RadioButton^  radioButton10;

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
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(374, 111);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"GO!";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(24, 111);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(6, 37);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(56, 17);
			this->radioButton1->TabIndex = 2;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"pascal";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(6, 61);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(82, 17);
			this->radioButton2->TabIndex = 3;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"megapascal";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(6, 85);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(80, 17);
			this->radioButton3->TabIndex = 4;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"atmosphere";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(6, 109);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(40, 17);
			this->radioButton4->TabIndex = 5;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"bar";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(6, 133);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(60, 17);
			this->radioButton5->TabIndex = 6;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"newton";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->radioButton5);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton4);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Location = System::Drawing::Point(139, 29);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(111, 187);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"CONVERT THIS";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton6);
			this->groupBox2->Controls->Add(this->radioButton7);
			this->groupBox2->Controls->Add(this->radioButton8);
			this->groupBox2->Controls->Add(this->radioButton9);
			this->groupBox2->Controls->Add(this->radioButton10);
			this->groupBox2->Location = System::Drawing::Point(256, 29);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(111, 187);
			this->groupBox2->TabIndex = 8;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"INTO THIS";
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(6, 37);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(56, 17);
			this->radioButton6->TabIndex = 2;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"pascal";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Location = System::Drawing::Point(6, 133);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(60, 17);
			this->radioButton7->TabIndex = 6;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"newton";
			this->radioButton7->UseVisualStyleBackColor = true;
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Location = System::Drawing::Point(6, 61);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(82, 17);
			this->radioButton8->TabIndex = 3;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"megapascal";
			this->radioButton8->UseVisualStyleBackColor = true;
			// 
			// radioButton9
			// 
			this->radioButton9->AutoSize = true;
			this->radioButton9->Location = System::Drawing::Point(6, 109);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(40, 17);
			this->radioButton9->TabIndex = 5;
			this->radioButton9->TabStop = true;
			this->radioButton9->Text = L"bar";
			this->radioButton9->UseVisualStyleBackColor = true;
			// 
			// radioButton10
			// 
			this->radioButton10->AutoSize = true;
			this->radioButton10->Location = System::Drawing::Point(6, 85);
			this->radioButton10->Name = L"radioButton10";
			this->radioButton10->Size = System::Drawing::Size(80, 17);
			this->radioButton10->TabIndex = 4;
			this->radioButton10->TabStop = true;
			this->radioButton10->Text = L"atmosphere";
			this->radioButton10->UseVisualStyleBackColor = true;
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(461, 231);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm4";
			this->Text = L"Pressure";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
