#include "Game\HomeScreen.h"

using namespace System::Windows::Forms;

int Main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew HangmanPP::Game::HomeScreen());
	return 0;
}