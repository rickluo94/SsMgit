#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
//[STAThreadAttribute]
[STAThread]
int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew screenshotlink::MyForm());
	return 0;
}