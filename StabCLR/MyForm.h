#pragma once

namespace StabCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnExplorerOpen;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ lblPath;
	private: System::Windows::Forms::Label^ lblFillPath;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnExplorerOpen = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->lblPath = (gcnew System::Windows::Forms::Label());
			this->lblFillPath = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnExplorerOpen
			// 
			this->btnExplorerOpen->Location = System::Drawing::Point(303, 327);
			this->btnExplorerOpen->Name = L"btnExplorerOpen";
			this->btnExplorerOpen->Size = System::Drawing::Size(24, 23);
			this->btnExplorerOpen->TabIndex = 0;
			this->btnExplorerOpen->Text = L"...";
			this->btnExplorerOpen->UseVisualStyleBackColor = true;
			this->btnExplorerOpen->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(51, 330);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(246, 20);
			this->textBox1->TabIndex = 1;
			// 
			// lblPath
			// 
			this->lblPath->AutoSize = true;
			this->lblPath->Location = System::Drawing::Point(12, 333);
			this->lblPath->Name = L"lblPath";
			this->lblPath->Size = System::Drawing::Size(34, 13);
			this->lblPath->TabIndex = 2;
			this->lblPath->Text = L"ѕуть:";
			this->lblPath->Click += gcnew System::EventHandler(this, &MyForm::lblPath_Click);
			// 
			// lblFillPath
			// 
			this->lblFillPath->AutoSize = true;
			this->lblFillPath->Location = System::Drawing::Point(12, 304);
			this->lblFillPath->Name = L"lblFillPath";
			this->lblFillPath->Size = System::Drawing::Size(249, 13);
			this->lblFillPath->TabIndex = 3;
			this->lblFillPath->Text = L"”кажите расположение исходного видеофайла";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Enabled = false;
			this->radioButton1->Location = System::Drawing::Point(15, 356);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(264, 17);
			this->radioButton1->TabIndex = 4;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"—охранить обработанное видео в той же папке";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Enabled = false;
			this->label1->Location = System::Drawing::Point(12, 415);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"ѕуть:";
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(51, 412);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(246, 20);
			this->textBox2->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(303, 409);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(24, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"...";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Enabled = false;
			this->label2->Location = System::Drawing::Point(12, 387);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(249, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"”кажите расположение исходного видеофайла";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(339, 506);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->lblFillPath);
			this->Controls->Add(this->lblPath);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->btnExplorerOpen);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Name = L"MyForm";
			this->Text = L"Stabilizer";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		StabCLR::MyForm form;
		Application::Run(% form);
	}
	private: System::Void lblPath_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
