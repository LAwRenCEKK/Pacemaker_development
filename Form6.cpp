#include "Form6.h"
#include "Form4.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main5(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	GUIPacemaker::Form6 f1;
	Application::Run(%f1);
}


