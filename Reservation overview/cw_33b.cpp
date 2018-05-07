// cw_33b.cpp : main project file.

#include "stdafx.h"
#include "ReservationCheck.h"

using namespace cw_33b;

int main(array<System::String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	
	Application::Run(gcnew ReservationCheck());
    return 0;
}
