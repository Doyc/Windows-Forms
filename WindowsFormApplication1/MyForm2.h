#pragma once

namespace WindowsFormApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton5;
	private: System::Windows::Forms::RadioButton^  radioButton6;
	private: System::Windows::Forms::RadioButton^  radioButton7;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::RadioButton^  radioButton8;
	private: System::Windows::Forms::RadioButton^  radioButton9;
	private: System::Windows::Forms::RadioButton^  radioButton10;
	private: System::Windows::Forms::RadioButton^  radioButton11;
	private: System::Windows::Forms::RadioButton^  radioButton12;
	private: System::Windows::Forms::RadioButton^  radioButton13;
	private: System::Windows::Forms::RadioButton^  radioButton14;
	private: System::Windows::Forms::Button^  button1;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton11 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton12 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton13 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton14 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 95);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(6, 19);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(48, 17);
			this->radioButton1->TabIndex = 1;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"gram";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(6, 43);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(72, 17);
			this->radioButton2->TabIndex = 2;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"decagram";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(6, 67);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(64, 17);
			this->radioButton3->TabIndex = 3;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"kilogram";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(6, 91);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(55, 17);
			this->radioButton4->TabIndex = 4;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"pound";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(6, 111);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(55, 17);
			this->radioButton5->TabIndex = 5;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"ounce";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(6, 135);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(49, 17);
			this->radioButton6->TabIndex = 6;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"carat";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Location = System::Drawing::Point(6, 159);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(40, 17);
			this->radioButton7->TabIndex = 7;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"ton";
			this->radioButton7->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->radioButton7);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton6);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton5);
			this->groupBox1->Controls->Add(this->radioButton4);
			this->groupBox1->Location = System::Drawing::Point(135, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(115, 189);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"CONVERT THIS";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton8);
			this->groupBox2->Controls->Add(this->radioButton9);
			this->groupBox2->Controls->Add(this->radioButton10);
			this->groupBox2->Controls->Add(this->radioButton11);
			this->groupBox2->Controls->Add(this->radioButton12);
			this->groupBox2->Controls->Add(this->radioButton13);
			this->groupBox2->Controls->Add(this->radioButton14);
			this->groupBox2->Location = System::Drawing::Point(284, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(115, 189);
			this->groupBox2->TabIndex = 9;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"INTO THIS";
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Location = System::Drawing::Point(6, 19);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(48, 17);
			this->radioButton8->TabIndex = 1;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"gram";
			this->radioButton8->UseVisualStyleBackColor = true;
			// 
			// radioButton9
			// 
			this->radioButton9->AutoSize = true;
			this->radioButton9->Location = System::Drawing::Point(6, 159);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(40, 17);
			this->radioButton9->TabIndex = 7;
			this->radioButton9->TabStop = true;
			this->radioButton9->Text = L"ton";
			this->radioButton9->UseVisualStyleBackColor = true;
			// 
			// radioButton10
			// 
			this->radioButton10->AutoSize = true;
			this->radioButton10->Location = System::Drawing::Point(6, 43);
			this->radioButton10->Name = L"radioButton10";
			this->radioButton10->Size = System::Drawing::Size(72, 17);
			this->radioButton10->TabIndex = 2;
			this->radioButton10->TabStop = true;
			this->radioButton10->Text = L"decagram";
			this->radioButton10->UseVisualStyleBackColor = true;
			// 
			// radioButton11
			// 
			this->radioButton11->AutoSize = true;
			this->radioButton11->Location = System::Drawing::Point(6, 135);
			this->radioButton11->Name = L"radioButton11";
			this->radioButton11->Size = System::Drawing::Size(49, 17);
			this->radioButton11->TabIndex = 6;
			this->radioButton11->TabStop = true;
			this->radioButton11->Text = L"carat";
			this->radioButton11->UseVisualStyleBackColor = true;
			// 
			// radioButton12
			// 
			this->radioButton12->AutoSize = true;
			this->radioButton12->Location = System::Drawing::Point(6, 67);
			this->radioButton12->Name = L"radioButton12";
			this->radioButton12->Size = System::Drawing::Size(64, 17);
			this->radioButton12->TabIndex = 3;
			this->radioButton12->TabStop = true;
			this->radioButton12->Text = L"kilogram";
			this->radioButton12->UseVisualStyleBackColor = true;
			// 
			// radioButton13
			// 
			this->radioButton13->AutoSize = true;
			this->radioButton13->Location = System::Drawing::Point(6, 111);
			this->radioButton13->Name = L"radioButton13";
			this->radioButton13->Size = System::Drawing::Size(55, 17);
			this->radioButton13->TabIndex = 5;
			this->radioButton13->TabStop = true;
			this->radioButton13->Text = L"ounce";
			this->radioButton13->UseVisualStyleBackColor = true;
			// 
			// radioButton14
			// 
			this->radioButton14->AutoSize = true;
			this->radioButton14->Location = System::Drawing::Point(6, 91);
			this->radioButton14->Name = L"radioButton14";
			this->radioButton14->Size = System::Drawing::Size(55, 17);
			this->radioButton14->TabIndex = 4;
			this->radioButton14->TabStop = true;
			this->radioButton14->Text = L"pound";
			this->radioButton14->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(414, 97);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 10;
			this->button1->Text = L"GO!";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(501, 213);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm2";
			this->Text = L"Weight";
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
