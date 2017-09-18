#include "GameParameters.h"
#include "..\Dictionary\Dictionary.h"

namespace HangmanPP {

	namespace Game {

		using namespace System;
		using namespace System::Windows::Forms;
		using namespace System::Collections::Generic;
		using namespace Dictionary;

		// Class Constructors
		GameParameters::GameParameters()
		{
			secretWords = gcnew List<Word^>();
			gameMode = GameMode::TraditionalSinglePlayer;
			wordDifficulty = WordDifficulty::Easy;
			timeLimitInSeconds = 0;
			themePath = Application::StartupPath + "\\..\\themes\\chalkboard\\";
			gameSoundEnabled = true;
		}
	}
}