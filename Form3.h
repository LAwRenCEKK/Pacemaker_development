#pragma once

namespace GUIPacemaker {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;

	/// <summary>
	/// Summary for Form3
	/// </summary>
	public ref class Form3 : public System::Windows::Forms::Form
	{
	public:
		Form3(void)
		{
			InitializeComponent();
			findPorts();

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::IO::Ports::SerialPort^  serialPort1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::Label^  label3;
	private: System::ComponentModel::IContainer^  components;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(592, 268);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(91, 49);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Return";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form3::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(338, 151);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(91, 49);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Initialize Port";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form3::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(335, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"COM Ports";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(336, 83);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Baud Rate";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(33, 193);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(284, 22);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"Received Here";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(33, 263);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(284, 22);
			this->textBox2->TabIndex = 5;
			this->textBox2->Text = L"Enter Here";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(434, 45);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(229, 24);
			this->comboBox1->TabIndex = 6;
			// 
			// serialPort1
			// 
			this->serialPort1->ReadTimeout = 500;
			this->serialPort1->WriteTimeout = 500;
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"9600", L"11520" });
			this->comboBox2->Location = System::Drawing::Point(434, 80);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(229, 24);
			this->comboBox2->TabIndex = 7;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(435, 151);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(91, 49);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Close Port";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form3::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(33, 221);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(88, 36);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Send";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form3::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(33, 151);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(88, 36);
			this->button5->TabIndex = 10;
			this->button5->Text = L"Read";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form3::button5_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(33, 57);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(284, 43);
			this->progressBar1->TabIndex = 11;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(28, 19);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(140, 29);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Port Status";
			// 
			// Form3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(695, 338);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Form3";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Serial COM";
			
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//find available ports
	private: void findPorts(void) {
		array<Object^>^ objectArray = SerialPort::GetPortNames();
		this->comboBox1->Items->AddRange(objectArray);
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
	}
			 //Initialize Button
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	this->textBox1->Text = String::Empty;
	if (this->comboBox1->Text == String::Empty || this->comboBox2->Text == String::Empty)
		this->textBox1->Text = "Please Select Port Settings";
	else {
		try {
			if (!this->serialPort1->IsOpen) {
				this->serialPort1->PortName = this->comboBox1->Text;
				this->serialPort1->BaudRate = Int32::Parse(this->comboBox2->Text);
				this->textBox2->Text = "Enter Message Here";
				this->serialPort1->Open();
				this->progressBar1->Value = 100;
			}
			else
				this->textBox1->Text = "Port isn't openned";
		}
		catch(UnauthorizedAccessException^){
			this->textBox1->Text = "Unauthorized Access";
		}
	}
}
		 //Close Port Button
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	this->serialPort1->Close();
	this->progressBar1->Value = 0;
	//Enable Init Button
	this->button2->Enabled = true;
	//Enable Read Button
	this->button5->Enabled = true;
	
}

		 //Send Button
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	//Add sender name
	String^ name = this->serialPort1->PortName;
	//Grab text and store in send buffer
	String^ message = this->textBox2->Text;
	//Write to serial
	if (this->serialPort1->IsOpen)
		this->serialPort1->WriteLine(message);
	else
		this->textBox1->Text = "Port Not Opened";

}
		 //Read Button
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	//Check if port is ready for reading
	if (this->serialPort1->IsOpen) {
		//Reset Text in result label
		this->textBox1->Text = String::Empty;
		//this reads manually
		try {
			this->textBox1->Text = this->serialPort1->ReadLine();
		}
		catch (TimeoutException^) {
			this->textBox1->Text = "Timeout Exception";
		}
		//Disable Initialize Button
		//the async op is done
		this->button2->Enabled = false;

	}
	else
		//Give error warning
		this->textBox1->Text = "Port Not Opened";
}

};
}

