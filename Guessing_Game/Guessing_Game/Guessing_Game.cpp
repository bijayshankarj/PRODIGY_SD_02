#include "Guessing_Game.h"

using namespace System;
using namespace System::Windows::Forms;
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	GuessingGame::Guessing_Game form;
	Application::Run(% form);
}