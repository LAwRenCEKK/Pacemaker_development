#include "Form3.h"
#include "Form1.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main2(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	GUIPacemaker::Form3 f1;
	Application::Run(%f1);
}