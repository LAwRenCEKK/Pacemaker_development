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
	/// Summary for Form5
	/// </summary>
	public ref class Form5 : public System::Windows::Forms::Form
	{
	public:
		Form5(void)
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
		~Form5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::Button^  button2;
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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(497, 426);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 29);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Return";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form5::button1_Click);
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(12, 12);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Area;
			series1->Legend = L"Legend1";
			series1->Name = L"Pulse";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(560, 299);
			this->chart1->TabIndex = 1;
			this->chart1->Text = L"chart1";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(421, 379);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(151, 41);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Load Updated Data";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form5::button2_Click);
			// 
			// Form5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(584, 467);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->button1);
			this->Name = L"Form5";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Egram & Reports";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		StreamReader^ sr = gcnew StreamReader("C:/Users/Andres/Desktop/egramx.txt");
		StreamReader^ sr1 = gcnew StreamReader("C:/Users/Andres/Desktop/egramy.txt");
		//this->chart1->Series["Pulse"]->Points->AddXY(0, 0);
		//this->chart1->Series["Pulse"]->Points->AddXY(1, 0);
		//this->chart1->Series["Pulse"]->Points->AddXY(2, 0.5);
		//this->chart1->Series["Pulse"]->Points->AddXY(3, 0);
		//this->chart1->Series["Pulse"]->Points->AddXY(4, 0);
		//this->chart1->Series["Pulse"]->Points->AddXY(5, 2);
		//this->chart1->Series["Pulse"]->Points->AddXY(6, 0);
		//this->chart1->Series["Pulse"]->Points->AddXY(7, -1);
		//this->chart1->Series["Pulse"]->Points->AddXY(8, 0);
		//this->chart1->Series["Pulse"]->Points->AddXY(9, 0);
		this->chart1->Series["Pulse"]->Points->AddXY(sr->ReadLine(), sr1->ReadLine());
		this->chart1->Series["Pulse"]->Points->AddXY(sr->ReadLine(), sr1->ReadLine());
		this->chart1->Series["Pulse"]->Points->AddXY(sr->ReadLine(), sr1->ReadLine());
		this->chart1->Series["Pulse"]->Points->AddXY(sr->ReadLine(), sr1->ReadLine());
		this->chart1->Series["Pulse"]->Points->AddXY(sr->ReadLine(), sr1->ReadLine());
		this->chart1->Series["Pulse"]->Points->AddXY(sr->ReadLine(), sr1->ReadLine());
		this->chart1->Series["Pulse"]->Points->AddXY(sr->ReadLine(), sr1->ReadLine());
		this->chart1->Series["Pulse"]->Points->AddXY(sr->ReadLine(), sr1->ReadLine());
		this->chart1->Series["Pulse"]->Points->AddXY(sr->ReadLine(), sr1->ReadLine());
		this->chart1->Series["Pulse"]->Points->AddXY(sr->ReadLine(), sr1->ReadLine());
		this->chart1->Series["Pulse"]->Points->AddXY(sr->ReadLine(), sr1->ReadLine());
		this->chart1->Series["Pulse"]->Points->AddXY(sr->ReadLine(), sr1->ReadLine());
		this->chart1->Series["Pulse"]->Points->AddXY(sr->ReadLine(), sr1->ReadLine());
		this->chart1->Series["Pulse"]->Points->AddXY(sr->ReadLine(), sr1->ReadLine());
		this->chart1->Series["Pulse"]->Points->AddXY(sr->ReadLine(), sr1->ReadLine());
		this->chart1->Series["Pulse"]->Points->AddXY(sr->ReadLine(), sr1->ReadLine());
		this->chart1->Series["Pulse"]->Points->AddXY(sr->ReadLine(), sr1->ReadLine());
		this->chart1->Series["Pulse"]->Points->AddXY(sr->ReadLine(), sr1->ReadLine());
		this->chart1->Series["Pulse"]->Points->AddXY(sr->ReadLine(), sr1->ReadLine());
		this->chart1->Series["Pulse"]->Points->AddXY(sr->ReadLine(), sr1->ReadLine());
		//this->chart1->Series["Pulse"]->Points->AddY(sr->ReadLine());
		//this->chart1->Series["Pulse"]->Points->AddY(sr->ReadLine());
		//this->chart1->Series["Pulse"]->Points->AddY(sr->ReadLine());
		//this->chart1->Series["Pulse"]->Points->AddY(sr->ReadLine());
		//this->chart1->Series["Pulse"]->Points->AddY(sr->ReadLine());
		//this->chart1->Series["Pulse"]->Points->AddY(sr->ReadLine());
		//this->chart1->Series["Pulse"]->Points->AddY(sr->ReadLine());
	}
};
}
