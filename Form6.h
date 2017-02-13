#pragma once

namespace GUIPacemaker {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for Form6
	/// </summary>
	public ref class Form6 : public System::Windows::Forms::Form
	{
	public:
		Form6(void)
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
		~Form6()
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
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::TextBox^  textBox19;
	private: System::Windows::Forms::TextBox^  textBox20;
	private: System::Windows::Forms::TextBox^  textBox21;
	private: System::Windows::Forms::TextBox^  textBox22;
	private: System::Windows::Forms::TextBox^  textBox23;
	private: System::Windows::Forms::TextBox^  textBox24;
	private: System::Windows::Forms::TextBox^  textBox25;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::ComboBox^  comboBox1;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(384, 704);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(102, 39);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Return";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form6::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(384, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(102, 39);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Create Pace";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form6::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(17, 115);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 25);
			this->label1->TabIndex = 2;
			this->label1->Text = L"LRL";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(17, 140);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"URL";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(17, 165);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 25);
			this->label3->TabIndex = 4;
			this->label3->Text = L"MSR";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(17, 190);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(77, 25);
			this->label4->TabIndex = 5;
			this->label4->Text = L"FAVD";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(17, 215);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(79, 25);
			this->label5->TabIndex = 6;
			this->label5->Text = L"DAVD";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(17, 240);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(90, 25);
			this->label6->TabIndex = 7;
			this->label6->Text = L"SAVDO";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(174, 119);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(174, 143);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(174, 168);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 10;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(174, 193);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 11;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(174, 218);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 12;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(174, 243);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 22);
			this->textBox6->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(17, 265);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(46, 25);
			this->label7->TabIndex = 14;
			this->label7->Text = L"AA";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(17, 290);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(45, 25);
			this->label8->TabIndex = 15;
			this->label8->Text = L"VA";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(17, 315);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(68, 25);
			this->label9->TabIndex = 16;
			this->label9->Text = L"APW";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(17, 340);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(67, 25);
			this->label10->TabIndex = 17;
			this->label10->Text = L"VPW";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(17, 364);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(42, 25);
			this->label11->TabIndex = 18;
			this->label11->Text = L"AS";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(17, 389);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(41, 25);
			this->label12->TabIndex = 19;
			this->label12->Text = L"VS";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(17, 414);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(61, 25);
			this->label13->TabIndex = 20;
			this->label13->Text = L"VRP";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(17, 439);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(62, 25);
			this->label14->TabIndex = 21;
			this->label14->Text = L"ARP";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(17, 464);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(94, 25);
			this->label15->TabIndex = 22;
			this->label15->Text = L"PVARP";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(17, 489);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(111, 25);
			this->label16->TabIndex = 23;
			this->label16->Text = L"PVARPE";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(17, 514);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(62, 25);
			this->label17->TabIndex = 24;
			this->label17->Text = L"HYS";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(17, 539);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(42, 25);
			this->label18->TabIndex = 25;
			this->label18->Text = L"RS";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(17, 564);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(78, 25);
			this->label19->TabIndex = 26;
			this->label19->Text = L"ATRD";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(17, 589);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(97, 25);
			this->label20->TabIndex = 27;
			this->label20->Text = L"ATRFM";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(17, 614);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(91, 25);
			this->label21->TabIndex = 28;
			this->label21->Text = L"ATRFT";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(17, 639);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(44, 25);
			this->label22->TabIndex = 29;
			this->label22->Text = L"AT";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(17, 664);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(44, 25);
			this->label23->TabIndex = 30;
			this->label23->Text = L"RT";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(17, 689);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(44, 25);
			this->label24->TabIndex = 31;
			this->label24->Text = L"RF";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(17, 714);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(61, 25);
			this->label25->TabIndex = 32;
			this->label25->Text = L"RET";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(174, 268);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 22);
			this->textBox7->TabIndex = 33;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(174, 293);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 22);
			this->textBox8->TabIndex = 34;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(174, 318);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 22);
			this->textBox9->TabIndex = 35;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(174, 343);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 22);
			this->textBox10->TabIndex = 36;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(174, 368);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 22);
			this->textBox11->TabIndex = 37;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(174, 392);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(100, 22);
			this->textBox12->TabIndex = 38;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(174, 417);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(100, 22);
			this->textBox13->TabIndex = 39;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(174, 442);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(100, 22);
			this->textBox14->TabIndex = 40;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(174, 467);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(100, 22);
			this->textBox15->TabIndex = 41;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(174, 492);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(100, 22);
			this->textBox16->TabIndex = 42;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(174, 517);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(100, 22);
			this->textBox17->TabIndex = 43;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(174, 543);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(100, 22);
			this->textBox18->TabIndex = 44;
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(174, 568);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(100, 22);
			this->textBox19->TabIndex = 45;
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(174, 592);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(100, 22);
			this->textBox20->TabIndex = 46;
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(174, 618);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(100, 22);
			this->textBox21->TabIndex = 47;
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(174, 643);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(100, 22);
			this->textBox22->TabIndex = 48;
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(174, 668);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(100, 22);
			this->textBox23->TabIndex = 49;
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(174, 692);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(100, 22);
			this->textBox24->TabIndex = 50;
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(174, 718);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(100, 22);
			this->textBox25->TabIndex = 51;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(384, 57);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(102, 39);
			this->button3->TabIndex = 52;
			this->button3->Text = L"Load Default";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form6::button3_Click);
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(17, 90);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(240, 25);
			this->label26->TabIndex = 53;
			this->label26->Text = L"PacemakerParameter : ";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(17, 9);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(258, 25);
			this->label27->TabIndex = 55;
			this->label27->Text = L"Select Pacemaker Mode :";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(18) {
				L"AAT", L"VVT", L"AOO", L"AAI", L"VOO", L"VVI",
					L"VDD", L"DOO", L"DDI", L"DDD", L"AOOR", L"AAIR", L"VOOR", L"VVIR", L"VDDR", L"DOOR", L"DDIR", L"DDDR"
			});
			this->comboBox1->Location = System::Drawing::Point(22, 47);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 54;
			// 
			// Form6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(508, 767);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox25);
			this->Controls->Add(this->textBox24);
			this->Controls->Add(this->textBox23);
			this->Controls->Add(this->textBox22);
			this->Controls->Add(this->textBox21);
			this->Controls->Add(this->textBox20);
			this->Controls->Add(this->textBox19);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Form6";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Pacemaker Mode Parameters";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {		
		StreamWriter^ sw = gcnew StreamWriter("C:/Users/Andres/Desktop/update.txt");
		sw->WriteLine(comboBox1->Text);
		sw->WriteLine(textBox1->Text);
		sw->WriteLine(textBox2->Text);
		sw->WriteLine(textBox3->Text);
		sw->WriteLine(textBox4->Text);
		sw->WriteLine(textBox5->Text);
		sw->WriteLine(textBox6->Text);
		sw->WriteLine(textBox7->Text);
		sw->WriteLine(textBox8->Text);
		sw->WriteLine(textBox9->Text);
		sw->WriteLine(textBox10->Text);
		sw->WriteLine(textBox11->Text);
		sw->WriteLine(textBox12->Text);
		sw->WriteLine(textBox13->Text);
		sw->WriteLine(textBox14->Text);
		sw->WriteLine(textBox15->Text);
		sw->WriteLine(textBox16->Text);
		sw->WriteLine(textBox17->Text);
		sw->WriteLine(textBox18->Text);
		sw->WriteLine(textBox19->Text);
		sw->WriteLine(textBox20->Text);
		sw->WriteLine(textBox21->Text);
		sw->WriteLine(textBox22->Text);
		sw->WriteLine(textBox23->Text);
		sw->WriteLine(textBox24->Text);
		sw->WriteLine(textBox25->Text);
		sw->Close();
		MessageBox::Show("Pace has been completed!");
		this->Hide();
		
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		StreamReader^ sr = gcnew StreamReader("C:/Users/Andres/Desktop/default.txt");
		comboBox1->Text = sr->ReadLine();
		textBox1->Text = sr->ReadLine();
		textBox2->Text = sr->ReadLine();
		textBox3->Text = sr->ReadLine();
		textBox4->Text = sr->ReadLine();
		textBox5->Text = sr->ReadLine();
		textBox6->Text = sr->ReadLine();
		textBox7->Text = sr->ReadLine();
		textBox8->Text = sr->ReadLine();
		textBox9->Text = sr->ReadLine();
		textBox10->Text = sr->ReadLine();
		textBox11->Text = sr->ReadLine();
		textBox12->Text = sr->ReadLine();
		textBox13->Text = sr->ReadLine();
		textBox14->Text = sr->ReadLine();
		textBox15->Text = sr->ReadLine();
		textBox16->Text = sr->ReadLine();
		textBox17->Text = sr->ReadLine();
		textBox18->Text = sr->ReadLine();
		textBox19->Text = sr->ReadLine();
		textBox20->Text = sr->ReadLine();
		textBox21->Text = sr->ReadLine();
		textBox22->Text = sr->ReadLine();
		textBox23->Text = sr->ReadLine();
		textBox24->Text = sr->ReadLine();
		textBox25->Text = sr->ReadLine();
		sr->Close();
	}

};
}
