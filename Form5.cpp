#include "Form5.h"
#include "Form1.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main4(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	GUIPacemaker::Form5 f1;
	Application::Run(%f1);
}

