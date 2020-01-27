#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Proga::MyForm form1;
	Application::Run(% form1);

}
