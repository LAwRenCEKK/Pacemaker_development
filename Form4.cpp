#include "Form4.h"
#include "Form1.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main3(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	GUIPacemaker::Form4 f1;
	Application::Run(%f1);
}
