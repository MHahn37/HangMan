#pragma once
#include "..\Dictionary\Dictionary.h"

namespace HangmanPP {

	namespace Game {

		using namespace System;
		using namespace System::Collections::Generic;
		using namespace Dictionary;

		public enum class GameMode {
			TraditionalSinglePlayer,
			SpeedMode,
			StoryMode,
			LocalMultiPlayer,
			OnlineMultiPlayer
		};

		public ref class GameParameters {
		public:
			GameParameters();
			List<Word^>^ secretWords;
			GameMode gameMode;
			Dictionary::WordDifficulty wordDifficulty;
			int timeLimitInSeconds;
			String^ themePath;
			bool gameSoundEnabled;
		};
	}
}