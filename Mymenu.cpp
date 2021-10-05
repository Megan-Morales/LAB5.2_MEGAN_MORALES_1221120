#include "Mymenu.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args)
{
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);
	LAB52MEGANMORALES1221120::Mymenu mainForm;
	Application::Run(% mainForm);
	return 0;
}

