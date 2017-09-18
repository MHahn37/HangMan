#pragma once

namespace HangmanPP {

	namespace Game {

		using namespace System;
		using namespace System::Media;

		public ref class HangmanSoundPlayer {
		public:
			static void PlayOnce(String^ soundFile);
			static void PlayLooping(String^ soundFile);
			static void StopPlayLooping();
			static bool isSoundPlaying();

		private:
			static SoundPlayer^ soundPlayer = gcnew SoundPlayer();
			static bool soundPlaying = false;
			static void PlaySync(Object^ soundFile); // Will run on a its own thread
		};

	}

}