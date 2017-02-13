#include "Form2.h"
#include "Form1.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main1(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	GUIPacemaker::Form2 f1;
	Application::Run(%f1);
}
