#include "MainForm.h"
#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms;
using namespace Cafee;

[System::STAThread]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Cafee::MainForm form;
	Application::Run(% form);
	return 0;
}