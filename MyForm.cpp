#include "Dashboard.h"


using namespace System;
using namespace System::Windows::Forms;
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	StudentDataPortalSystem::Dashboard form;
	Application::Run(% form);
}