// cw_33.cpp : main project file.

#include "stdafx.h"
#include "ReservationWindow.h"

using namespace cw_33;

[STAThread]
int main(array<System::String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew ReservationWindow());
	return 0;
}