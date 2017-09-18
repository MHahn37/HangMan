#include "HangmanSoundPlayer.h"

namespace HangmanPP {

	namespace Game {

		using namespace System;
		using namespace System::Threading;

		void HangmanSoundPlayer::PlaySync(Object^ soundFile) { // Will run on a its own thread
			String^ soundFilename = (String^)soundFile;
			soundPlayer->SoundLocation = soundFilename;
			soundPlayer->LoadTimeout = 60000;
			soundPlayer->Load();
			soundPlaying = true;
			soundPlayer->PlaySync();
			soundPlaying = false;
		}

		void HangmanSoundPlayer::PlayOnce(String^ soundFile) {
			StopPlayLooping();
			Thread^ playSyncThread = gcnew Thread(gcnew ParameterizedThreadStart(PlaySync));
			playSyncThread->Start(soundFile);
		}

		void HangmanSoundPlayer::PlayLooping(String^ soundFile) {
			StopPlayLooping();
			soundPlayer->SoundLocation = soundFile;
			soundPlayer->LoadTimeout = 60000;
			soundPlayer->Load();
			soundPlayer->PlayLooping();
			soundPlaying = true;
		}

		void HangmanSoundPlayer::StopPlayLooping() {
			soundPlayer->Stop();
			soundPlaying = false;
		}

		bool HangmanSoundPlayer::isSoundPlaying() {
			return soundPlaying;
		}

	}

}