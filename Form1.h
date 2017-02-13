#pragma once
#include "Form2.h"
#include "Form3.h"
#include "Form6.h"
#include "Form5.h"
namespace GUIPacemaker {

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
			DateTime dateTime = DateTime::Now;
			this->label5->Text = dateTime.ToString();
			
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
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	protected:
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button6;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(33, 235);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(274, 172);
			this->pictureBox2->TabIndex = 23;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(313, 235);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(173, 172);
			this->pictureBox1->TabIndex = 22;
			this->pictureBox1->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(35, 188);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 17);
			this->label5->TabIndex = 21;
			this->label5->Click += gcnew System::EventHandler(this, &Form1::label5_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(35, 115);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 17);
			this->label4->TabIndex = 20;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(28, 149);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 25);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Date";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(28, 79);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 25);
			this->label2->TabIndex = 18;
			this->label2->Text = L"User";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(221, 182);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(112, 28);
			this->button5->TabIndex = 17;
			this->button5->Text = L"User Setup";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(35, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(439, 45);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Alpha Team Pacemaker";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(339, 79);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(112, 28);
			this->button4->TabIndex = 15;
			this->button4->Text = L"Reports";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(339, 130);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(112, 28);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Serial COM";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(221, 79);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 28);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Pace Now";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(221, 130);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 28);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Pacer Modes";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(339, 182);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(112, 28);
			this->button6->TabIndex = 24;
			this->button6->Text = L"Exit";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(533, 441);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Main Menu";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {		
		Form2^ f2 = gcnew Form2();
		this->Visible = false;
		f2->ShowDialog();
		this->Visible = true;
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		Form3^ f3 = gcnew Form3();
		this->Visible = false;
		f3->ShowDialog();
		this->Visible = true;
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Form6^ f6 = gcnew Form6();
		this->Visible = false;
		f6->ShowDialog();
		this->Visible = true;
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		Form5^ f5 = gcnew Form5();
		this->Visible = false;
		f5->ShowDialog();
		this->Visible = true;
	}
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		System::IO::StreamReader^ sr = gcnew StreamReader("C:/Users/Andres/Desktop/username.txt");
		label4->Text = sr->ReadLine();
		sr->Close();
	}
	private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
		DateTime dateTime = DateTime::Now;
		this->label5->Text = dateTime.ToString();
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	//StreamWriter^ sw = gcnew StreamWriter("update.txt");
	StreamWriter^ sw = gcnew StreamWriter("C:/Users/Andres/Desktop/update.txt");

	sw->WriteLine("VVI");
	sw->WriteLine("65");
	sw->WriteLine("1");
	sw->WriteLine("0");
	sw->WriteLine("0");
	sw->WriteLine("0");
	sw->WriteLine("0");
	sw->WriteLine("0");
	sw->WriteLine("5");
	sw->WriteLine("0");
	sw->WriteLine("1");
	sw->WriteLine("0");
	sw->WriteLine("1");
	sw->WriteLine("1");
	sw->WriteLine("0");
	sw->WriteLine("0");
	sw->WriteLine("0");
	sw->WriteLine("1");
	sw->WriteLine("1");
	sw->WriteLine("0");
	sw->WriteLine("0");
	sw->WriteLine("0");
	sw->WriteLine("0");
	sw->WriteLine("0");
	sw->WriteLine("0");
	sw->WriteLine("0");
	MessageBox::Show("Pace now is completed!");
	sw->Close();
	
}
};
}