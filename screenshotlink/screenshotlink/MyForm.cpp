#include "MyForm.h"

using namespace System;
[STAThreadAttribute]

int main()
{
	Windows::Forms::Application::Run(gcnew screenshotlink::MyForm());
	return 0;
}