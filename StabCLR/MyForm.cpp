#include "MyForm.h"
#include "FormExplorer.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	StabCLR::MyForm form;
	Application::Run(% form);
}