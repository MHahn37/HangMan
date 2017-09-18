#pragma once
#include "GameParameters.h"
#include "..\Dictionary\Dictionary.h"
#include "HangmanSoundPlayer.h"
#include "InputPrompt.h"
#include <string>
#include <iostream>
#include <array>
#include <vector>


namespace HangmanPP {

	namespace Game {

		using namespace std;
		using namespace System;
		using namespace System::ComponentModel;
		using namespace System::Collections;
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		using namespace System::Threading;

		/// <summary>
		/// Summary for GameScreen
		/// </summary>
		public ref class GameScreen : public System::Windows::Forms::Form
		{

		private: GameParameters^ pGameParameters;
		private: int HangManCount = 0;
		private: int CorrectGuessCount = 0;
		private: int SecretWordLength = 0;
		private: System::Windows::Forms::PictureBox^  pbFinishMainMenu;
		private: System::Windows::Forms::PictureBox^  pbFinishPlayAgain;
		private: System::Windows::Forms::PictureBox^  pbYouWin;
		private: System::Windows::Forms::PictureBox^  pbYouLose;
		private: System::Windows::Forms::PictureBox^  pbTitle;
		private: System::Windows::Forms::PictureBox^  pbHint;
		private: String^ testWord;
		private: String^ hint;
		private: System::Windows::Forms::PictureBox^  pbSentence;
		private: int StoryWordCount = 0;

		public:

			GameScreen(void) {
				InitializeComponent();
			}

			GameScreen(GameParameters^ GameParams) {
				InitializeComponent();
				pGameParameters = GameParams;
				testWord = GameParams->secretWords[0]->getWord();
				SecretWordLength = testWord->Length;
				pGameParameters->secretWords[0]->setHint(GameParams->wordDifficulty);
				hint = pGameParameters->secretWords[0]->getFullHint();
			}

		protected:
			/// <summary>
			/// Clean up any resources being used.
			/// </summary>
			~GameScreen()
			{
				if (components)
				{
					delete components;
				}
			}

		private: System::Windows::Forms::PictureBox^  HangmanFigure;
		private: System::Windows::Forms::PictureBox^  pbB;
		private: System::Windows::Forms::PictureBox^  pbN;
		private: System::Windows::Forms::PictureBox^  pbX;
		private: System::Windows::Forms::PictureBox^  pbC;
		private: System::Windows::Forms::PictureBox^  pbV;
		private: System::Windows::Forms::PictureBox^  pbK;
		private: System::Windows::Forms::PictureBox^  pbM;
		private: System::Windows::Forms::PictureBox^  pbZ;
		private: System::Windows::Forms::PictureBox^  pbL;
		private: System::Windows::Forms::PictureBox^  pbT;
		private: System::Windows::Forms::PictureBox^  pbY;
		private: System::Windows::Forms::PictureBox^  pbU;
		private: System::Windows::Forms::PictureBox^  pbI;
		private: System::Windows::Forms::PictureBox^  pbO;
		private: System::Windows::Forms::PictureBox^  pbP;
		private: System::Windows::Forms::PictureBox^  pbR;
		private: System::Windows::Forms::PictureBox^  pbE;
		private: System::Windows::Forms::PictureBox^  pbW;
		private: System::Windows::Forms::PictureBox^  pbG;
		private: System::Windows::Forms::PictureBox^  pbF;
		private: System::Windows::Forms::PictureBox^  pbD;
		private: System::Windows::Forms::PictureBox^  pbA;
		private: System::Windows::Forms::PictureBox^  pbS;
		private: System::Windows::Forms::PictureBox^  pbH;
		private: System::Windows::Forms::PictureBox^  pbJ;
		private: System::Windows::Forms::PictureBox^  pbQ;
		private: System::Windows::Forms::PictureBox^  pbDash3;
		private: System::Windows::Forms::PictureBox^  pbDash2;
		private: System::Windows::Forms::PictureBox^  pbDash1;
		private: System::Windows::Forms::PictureBox^  pbDash4;
		private: System::Windows::Forms::PictureBox^  pbMute;
		private: System::Windows::Forms::PictureBox^  pbMainMenu;

		private: System::Windows::Forms::Panel^  BigPanel;
		private: System::Windows::Forms::PictureBox^  pbDash5;
		private: System::Windows::Forms::PictureBox^  pbDash6;
		private: System::Windows::Forms::PictureBox^  pbDash7;
		private: System::Windows::Forms::PictureBox^  pbDash8;
		private: System::Windows::Forms::Panel^  KeyboardPanel;
		private: System::Windows::Forms::Panel^  DashPanel;
		private: System::Windows::Forms::Panel^  SecretWordPanel;

		private:
			/// <summary>
			/// Required designer variable.
			/// </summary>
			System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
			/// <summary>
			/// Required method for Designer support - do not modify
			/// the contents of this method with the code editor.
			/// </summary>
			void InitializeComponent(void)
			{
				this->HangmanFigure = (gcnew System::Windows::Forms::PictureBox());
				this->pbB = (gcnew System::Windows::Forms::PictureBox());
				this->pbN = (gcnew System::Windows::Forms::PictureBox());
				this->pbX = (gcnew System::Windows::Forms::PictureBox());
				this->pbC = (gcnew System::Windows::Forms::PictureBox());
				this->pbV = (gcnew System::Windows::Forms::PictureBox());
				this->pbK = (gcnew System::Windows::Forms::PictureBox());
				this->pbM = (gcnew System::Windows::Forms::PictureBox());
				this->pbZ = (gcnew System::Windows::Forms::PictureBox());
				this->pbL = (gcnew System::Windows::Forms::PictureBox());
				this->pbT = (gcnew System::Windows::Forms::PictureBox());
				this->pbY = (gcnew System::Windows::Forms::PictureBox());
				this->pbU = (gcnew System::Windows::Forms::PictureBox());
				this->pbI = (gcnew System::Windows::Forms::PictureBox());
				this->pbO = (gcnew System::Windows::Forms::PictureBox());
				this->pbP = (gcnew System::Windows::Forms::PictureBox());
				this->pbR = (gcnew System::Windows::Forms::PictureBox());
				this->pbE = (gcnew System::Windows::Forms::PictureBox());
				this->pbW = (gcnew System::Windows::Forms::PictureBox());
				this->pbG = (gcnew System::Windows::Forms::PictureBox());
				this->pbF = (gcnew System::Windows::Forms::PictureBox());
				this->pbD = (gcnew System::Windows::Forms::PictureBox());
				this->pbA = (gcnew System::Windows::Forms::PictureBox());
				this->pbS = (gcnew System::Windows::Forms::PictureBox());
				this->pbH = (gcnew System::Windows::Forms::PictureBox());
				this->pbJ = (gcnew System::Windows::Forms::PictureBox());
				this->pbQ = (gcnew System::Windows::Forms::PictureBox());
				this->pbDash4 = (gcnew System::Windows::Forms::PictureBox());
				this->pbDash3 = (gcnew System::Windows::Forms::PictureBox());
				this->pbDash2 = (gcnew System::Windows::Forms::PictureBox());
				this->pbDash1 = (gcnew System::Windows::Forms::PictureBox());
				this->pbMute = (gcnew System::Windows::Forms::PictureBox());
				this->pbMainMenu = (gcnew System::Windows::Forms::PictureBox());
				this->BigPanel = (gcnew System::Windows::Forms::Panel());
				this->pbSentence = (gcnew System::Windows::Forms::PictureBox());
				this->pbFinishMainMenu = (gcnew System::Windows::Forms::PictureBox());
				this->pbFinishPlayAgain = (gcnew System::Windows::Forms::PictureBox());
				this->SecretWordPanel = (gcnew System::Windows::Forms::Panel());
				this->KeyboardPanel = (gcnew System::Windows::Forms::Panel());
				this->DashPanel = (gcnew System::Windows::Forms::Panel());
				this->pbDash8 = (gcnew System::Windows::Forms::PictureBox());
				this->pbDash5 = (gcnew System::Windows::Forms::PictureBox());
				this->pbDash6 = (gcnew System::Windows::Forms::PictureBox());
				this->pbDash7 = (gcnew System::Windows::Forms::PictureBox());
				this->pbYouWin = (gcnew System::Windows::Forms::PictureBox());
				this->pbYouLose = (gcnew System::Windows::Forms::PictureBox());
				this->pbTitle = (gcnew System::Windows::Forms::PictureBox());
				this->pbHint = (gcnew System::Windows::Forms::PictureBox());
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HangmanFigure))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbB))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbN))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbX))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbC))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbV))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbK))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbM))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbZ))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbL))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbT))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbY))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbU))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbI))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbO))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbP))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbR))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbE))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbW))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbG))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbF))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbD))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbA))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbS))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbH))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbJ))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbQ))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbDash4))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbDash3))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbDash2))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbDash1))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbMute))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbMainMenu))->BeginInit();
				this->BigPanel->SuspendLayout();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbSentence))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbFinishMainMenu))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbFinishPlayAgain))->BeginInit();
				this->KeyboardPanel->SuspendLayout();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbDash8))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbDash5))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbDash6))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbDash7))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbYouWin))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbYouLose))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbTitle))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbHint))->BeginInit();
				this->SuspendLayout();
				// 
				// HangmanFigure
				// 
				this->HangmanFigure->BackColor = System::Drawing::Color::Transparent;
				this->HangmanFigure->Location = System::Drawing::Point(38, 18);
				this->HangmanFigure->Name = L"HangmanFigure";
				this->HangmanFigure->Size = System::Drawing::Size(146, 238);
				this->HangmanFigure->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->HangmanFigure->TabIndex = 0;
				this->HangmanFigure->TabStop = false;
				// 
				// pbB
				// 
				this->pbB->Cursor = System::Windows::Forms::Cursors::Hand;
				this->pbB->Location = System::Drawing::Point(278, 99);
				this->pbB->Margin = System::Windows::Forms::Padding(2);
				this->pbB->Name = L"pbB";
				this->pbB->Size = System::Drawing::Size(38, 41);
				this->pbB->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pbB->TabIndex = 56;
				this->pbB->TabStop = false;
				this->pbB->Click += gcnew System::EventHandler(this, &GameScreen::pbB_Click);
				// 
				// pbN
				// 
				this->pbN->Cursor = System::Windows::Forms::Cursors::Hand;
				this->pbN->Location = System::Drawing::Point(320, 99);
				this->pbN->Margin = System::Windows::Forms::Padding(2);
				this->pbN->Name = L"pbN";
				this->pbN->Size = System::Drawing::Size(38, 41);
				this->pbN->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pbN->TabIndex = 55;
				this->pbN->TabStop = false;
				this->pbN->Click += gcnew System::EventHandler(this, &GameScreen::pbN_Click);
				// 
				// pbX
				// 
				this->pbX->Cursor = System::Windows::Forms::Cursors::Hand;
				this->pbX->Location = System::Drawing::Point(152, 99);
				this->pbX->Margin = System::Windows::Forms::Padding(2);
				this->pbX->Name = L"pbX";
				this->pbX->Size = System::Drawing::Size(38, 41);
				this->pbX->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pbX->TabIndex = 54;
				this->pbX->TabStop = false;
				this->pbX->Click += gcnew System::EventHandler(this, &GameScreen::pbX_Click);
				// 
				// pbC
				// 
				this->pbC->Cursor = System::Windows::Forms::Cursors::Hand;
				this->pbC->Location = System::Drawing::Point(194, 99);
				this->pbC->Margin = System::Windows::Forms::Padding(2);
				this->pbC->Name = L"pbC";
				this->pbC->Size = System::Drawing::Size(38, 41);
				this->pbC->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pbC->TabIndex = 53;
				this->pbC->TabStop = false;
				this->pbC->Click += gcnew System::EventHandler(this, &GameScreen::pbC_Click);
				// 
				// pbV
				// 
				this->pbV->Cursor = System::Windows::Forms::Cursors::Hand;
				this->pbV->Location = System::Drawing::Point(236, 99);
				this->pbV->Margin = System::Windows::Forms::Padding(2);
				this->pbV->Name = L"pbV";
				this->pbV->Size = System::Drawing::Size(38, 41);
				this->pbV->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pbV->TabIndex = 52;
				this->pbV->TabStop = false;
				this->pbV->Click += gcnew System::EventHandler(this, &GameScreen::pbV_Click);
				// 
				// pbK
				// 
				this->pbK->Cursor = System::Windows::Forms::Cursors::Hand;
				this->pbK->Location = System::Drawing::Point(364, 54);
				this->pbK->Margin = System::Windows::Forms::Padding(2);
				this->pbK->Name = L"pbK";
				this->pbK->Size = System::Drawing::Size(38, 41);
				this->pbK->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pbK->TabIndex = 51;
				this->pbK->TabStop = false;
				this->pbK->Click += gcnew System::EventHandler(this, &GameScreen::pbK_Click);
				// 
				// pbM
				// 
				this->pbM->Cursor = System::Windows::Forms::Cursors::Hand;
				this->pbM->Location = System::Drawing::Point(364, 99);
				this->pbM->Margin = System::Windows::Forms::Padding(2);
				this->pbM->Name = L"pbM";
				this->pbM->Size = System::Drawing::Size(38, 41);
				this->pbM->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pbM->TabIndex = 50;
				this->pbM->TabStop = false;
				this->pbM->Click += gcnew System::EventHandler(this, &GameScreen::pbM_Click);
				// 
				// pbZ
				// 
				this->pbZ->Cursor = System::Windows::Forms::Cursors::Hand;
				this->pbZ->Location = System::Drawing::Point(110, 99);
				this->pbZ->Margin = System::Windows::Forms::Padding(2);
				this->pbZ->Name = L"pbZ";
				this->pbZ->Size = System::Drawing::Size(38, 41);
				this->pbZ->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pbZ->TabIndex = 49;
				this->pbZ->TabStop = false;
				this->pbZ->Click += gcnew System::EventHandler(this, &GameScreen::pbZ_Click);
				// 
				// pbL
				// 
				this->pbL->Cursor = System::Windows::Forms::Cursors::Hand;
				this->pbL->Location = System::Drawing::Point(410, 54);
				this->pbL->Margin = System::Windows::Forms::Padding(2);
				this->pbL->Name = L"pbL";
				this->pbL->Size = System::Drawing::Size(38, 41);
				this->pbL->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pbL->TabIndex = 48;
				this->pbL->TabStop = false;
				this->pbL->Click += gcnew System::EventHandler(this, &GameScreen::pbL_Click);
				// 
				// pbT
				// 
				this->pbT->Cursor = System::Windows::Forms::Cursors::Hand;
				this->pbT->Location = System::Drawing::Point(214, 8);
				this->pbT->Margin = System::Windows::Forms::Padding(2);
				this->pbT->Name = L"pbT";
				this->pbT->Size = System::Drawing::Size(38, 41);
				this->pbT->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pbT->TabIndex = 47;
				this->pbT->TabStop = false;
				this->pbT->Click += gcnew System::EventHandler(this, &GameScreen::pbT_Click);
				// 
				// pbY
				// 
				this->pbY->Cursor = System::Windows::Forms::Cursors::Hand;
				this->pbY->Location = System::Drawing::Point(256, 8);
				this->pbY->Margin = System::Windows::Forms::Padding(2);
				this->pbY->Name = L"pbY";
				this->pbY->Size = System::Drawing::Size(38, 41);
				this->pbY->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pbY->TabIndex = 46;
				this->pbY->TabStop = false;
				this->pbY->Click += gcnew System::EventHandler(this, &GameScreen::pbY_Click);
				// 
				// pbU
				// 
				this->pbU->Cursor = System::Windows::Forms::Cursors::Hand;
				this->pbU->Location = System::Drawing::Point(298, 8);
				this->pbU->Margin = System::Windows::Forms::Padding(2);
				this->pbU->Name = L"pbU";
				this->pbU->Size = System::Drawing::Size(38, 41);
				this->pbU->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pbU->TabIndex = 45;
				this->pbU->TabStop = false;
				this->pbU->Click += gcnew System::EventHandler(this, &GameScreen::pbU_Click);
				// 
				// pbI
				// 
				this->pbI->Cursor = System::Windows::Forms::Cursors::Hand;
				this->pbI->Location = System::Drawing::Point(340, 8);
				this->pbI->Margin = System::Windows::Forms::Padding(2);
				this->pbI->Name = L"pbI";
				this->pbI->Size = System::Drawing::Size(38, 41);
				this->pbI->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pbI->TabIndex = 44;
				this->pbI->TabStop = false;
				this->pbI->Click += gcnew System::EventHandler(this, &GameScreen::pbI_Click);
				// 
				// pbO
				// 
				this->pbO->Cursor = System::Windows::Forms::Cursors::Hand;
				this->pbO->Location = System::Drawing::Point(382, 8);
				this->pbO->Margin = System::Windows::Forms::Padding(2);
				this->pbO->Name = L"pbO";
				this->pbO->Size = System::Drawing::Size(38, 41);
				this->pbO->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pbO->TabIndex = 43;
				this->pbO->TabStop = false;
				this->pbO->Click += gcnew System::EventHandler(this, &GameScreen::pbO_Click);
				// 
				// pbP
				// 
				this->pbP->Cursor = System::Windows::Forms::Cursors::Hand;
				this->pbP->Location = System::Drawing::Point(424, 8);
				this->pbP->Margin = System::Windows::Forms::Padding(2);
				this->pbP->Name = L"pbP";
				this->pbP->Size = System::Drawing::Size(38, 41);
				this->pbP->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pbP->TabIndex = 42;
				this->pbP->TabStop = false;
				this->pbP->Click += gcnew System::EventHandler(this, &GameScreen::pbP_Click);
				// 
				// pbR
				// 
				this->pbR->Cursor = System::Windows::Forms::Cursors::Hand;
				this->pbR->Location = System::Drawing::Point(172, 8);
				this->pbR->Margin = System::Windows::Forms::Padding(2);
				this->pbR->Name = L"pbR";
				this->pbR->Size = System::Drawing::Size(38, 41);
				this->pbR->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pbR->TabIndex = 41;
				this->pbR->TabStop = false;
				this->pbR->Click += gcnew System::EventHandler(this, &GameScreen::pbR_Click);
				// 
				// pbE
				// 
				this->pbE->Cursor = System::Windows::Forms::Cursors::Hand;
				this->pbE->Location = System::Drawing::Point(130, 8);
				this->pbE->Margin = System::Windows::Forms::Padding(2);
				this->pbE->Name = L"pbE";
				this->pbE->Size = System::Drawing::Size(38, 41);
				this->pbE->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pbE->TabIndex = 40;
				this->pbE->TabStop = false;
				this->pbE->Click += gcnew System::EventHandler(this, &GameScreen::pbE_Click);
				// 
				// pbW
				// 
				this->pbW->Cursor = System::Windows::Forms::Cursors::Hand;
				this->pbW->Location = System::Drawing::Point(88, 8);
				this->pbW->Margin = System::Windows::Forms::Padding(2);
				this->pbW->Name = L"pbW";
				this->pbW->Size = System::Drawing::Size(38, 41);
				this->pbW->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pbW->TabIndex = 39;
				this->pbW->TabStop = false;
				this->pbW->Click += gcnew System::EventHandler(this, &GameScreen::pbW_Click);
				// 
				// pbG
				// 
				this->pbG->Cursor = System::Windows::Forms::Cursors::Hand;
				this->pbG->Location = System::Drawing::Point(236, 54);
				this->pbG->Margin = System::Windows::Forms::Padding(2);
				this->pbG->Name = L"pbG";
				this->pbG->Size = System::Drawing::Size(38, 41);
				this->pbG->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pbG->TabIndex = 38;
				this->pbG->TabStop = false;
				this->pbG->Click += gcnew System::EventHandler(this, &GameScreen::pbG_Click);
				// 
				// pbF
				// 
				this->pbF->Cursor = System::Windows::Forms::Cursors::Hand;
				this->pbF->Location = System::Drawing::Point(194, 54);
				this->pbF->Margin = System::Windows::Forms::Padding(2);
				this->pbF->Name = L"pbF";
				this->pbF->Size = System::Drawing::Size(38, 41);
				this->pbF->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pbF->TabIndex = 37;
				this->pbF->TabStop = false;
				this->pbF->Click += gcnew System::EventHandler(this, &GameScreen::pbF_Click);
				// 
				// pbD
				// 
				this->pbD->Cursor = System::Windows::Forms::Cursors::Hand;
				this->pbD->Location = System::Drawing::Point(152, 54);
				this->pbD->Margin = System::Windows::Forms::Padding(2);
				this->pbD->Name = L"pbD";
				this->pbD->Size = System::Drawing::Size(38, 41);
				this->pbD->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pbD->TabIndex = 36;
				this->pbD->TabStop = false;
				this->pbD->Click += gcnew System::EventHandler(this, &GameScreen::pbD_Click);
				// 
				// pbA
				// 
				this->pbA->Cursor = System::Windows::Forms::Cursors::Hand;
				this->pbA->Location = System::Drawing::Point(68, 54);
				this->pbA->Margin = System::Windows::Forms::Padding(2);
				this->pbA->Name = L"pbA";
				this->pbA->Size = System::Drawing::Size(38, 41);
				this->pbA->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pbA->TabIndex = 35;
				this->pbA->TabStop = false;
				this->pbA->Click += gcnew System::EventHandler(this, &GameScreen::pbA_Click);
				// 
				// pbS
				// 
				this->pbS->Cursor = System::Windows::Forms::Cursors::Hand;
				this->pbS->Location = System::Drawing::Point(110, 54);
				this->pbS->Margin = System::Windows::Forms::Padding(2);
				this->pbS->Name = L"pbS";
				this->pbS->Size = System::Drawing::Size(38, 41);
				this->pbS->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pbS->TabIndex = 34;
				this->pbS->TabStop = false;
				this->pbS->Click += gcnew System::EventHandler(this, &GameScreen::pbS_Click);
				// 
				// pbH
				// 
				this->pbH->Cursor = System::Windows::Forms::Cursors::Hand;
				this->pbH->Location = System::Drawing::Point(278, 54);
				this->pbH->Margin = System::Windows::Forms::Padding(2);
				this->pbH->Name = L"pbH";
				this->pbH->Size = System::Drawing::Size(38, 41);
				this->pbH->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pbH->TabIndex = 33;
				this->pbH->TabStop = false;
				this->pbH->Click += gcnew System::EventHandler(this, &GameScreen::pbH_Click);
				// 
				// pbJ
				// 
				this->pbJ->Cursor = System::Windows::Forms::Cursors::Hand;
				this->pbJ->Location = System::Drawing::Point(320, 54);
				this->pbJ->Margin = System::Windows::Forms::Padding(2);
				this->pbJ->Name = L"pbJ";
				this->pbJ->Size = System::Drawing::Size(38, 41);
				this->pbJ->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pbJ->TabIndex = 32;
				this->pbJ->TabStop = false;
				this->pbJ->Click += gcnew System::EventHandler(this, &GameScreen::pbJ_Click);
				// 
				// pbQ
				// 
				this->pbQ->Cursor = System::Windows::Forms::Cursors::Hand;
				this->pbQ->Location = System::Drawing::Point(46, 8);
				this->pbQ->Margin = System::Windows::Forms::Padding(2);
				this->pbQ->Name = L"pbQ";
				this->pbQ->Size = System::Drawing::Size(38, 41);
				this->pbQ->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pbQ->TabIndex = 31;
				this->pbQ->TabStop = false;
				this->pbQ->Click += gcnew System::EventHandler(this, &GameScreen::pbQ_Click);
				// 
				// pbDash4
				// 
				this->pbDash4->Location = System::Drawing::Point(234, 6);
				this->pbDash4->Name = L"pbDash4";
				this->pbDash4->Size = System::Drawing::Size(70, 30);
				this->pbDash4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pbDash4->TabIndex = 3;
				this->pbDash4->TabStop = false;
				// 
				// pbDash3
				// 
				this->pbDash3->Location = System::Drawing::Point(158, 6);
				this->pbDash3->Name = L"pbDash3";
				this->pbDash3->Size = System::Drawing::Size(70, 30);
				this->pbDash3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pbDash3->TabIndex = 2;
				this->pbDash3->TabStop = false;
				// 
				// pbDash2
				// 
				this->pbDash2->Location = System::Drawing::Point(82, 6);
				this->pbDash2->Name = L"pbDash2";
				this->pbDash2->Size = System::Drawing::Size(70, 30);
				this->pbDash2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pbDash2->TabIndex = 1;
				this->pbDash2->TabStop = false;
				// 
				// pbDash1
				// 
				this->pbDash1->Location = System::Drawing::Point(6, 6);
				this->pbDash1->Name = L"pbDash1";
				this->pbDash1->Size = System::Drawing::Size(70, 30);
				this->pbDash1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pbDash1->TabIndex = 0;
				this->pbDash1->TabStop = false;
				// 
				// pbMute
				// 
				this->pbMute->BackColor = System::Drawing::Color::Transparent;
				this->pbMute->Cursor = System::Windows::Forms::Cursors::Hand;
				this->pbMute->Location = System::Drawing::Point(27, 26);
				this->pbMute->Margin = System::Windows::Forms::Padding(2);
				this->pbMute->Name = L"pbMute";
				this->pbMute->Size = System::Drawing::Size(75, 81);
				this->pbMute->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pbMute->TabIndex = 4;
				this->pbMute->TabStop = false;
				this->pbMute->Click += gcnew System::EventHandler(this, &GameScreen::pbMute_Click);
				// 
				// pbMainMenu
				// 
				this->pbMainMenu->BackColor = System::Drawing::Color::Transparent;
				this->pbMainMenu->Cursor = System::Windows::Forms::Cursors::Hand;
				this->pbMainMenu->Location = System::Drawing::Point(742, 26);
				this->pbMainMenu->Margin = System::Windows::Forms::Padding(2);
				this->pbMainMenu->Name = L"pbMainMenu";
				this->pbMainMenu->Size = System::Drawing::Size(75, 81);
				this->pbMainMenu->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pbMainMenu->TabIndex = 5;
				this->pbMainMenu->TabStop = false;
				this->pbMainMenu->Click += gcnew System::EventHandler(this, &GameScreen::pbMainMenu_Click);
				// 
				// BigPanel
				// 
				this->BigPanel->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
				this->BigPanel->BackColor = System::Drawing::Color::Transparent;
				this->BigPanel->Controls->Add(this->pbSentence);
				this->BigPanel->Controls->Add(this->pbFinishMainMenu);
				this->BigPanel->Controls->Add(this->pbFinishPlayAgain);
				this->BigPanel->Controls->Add(this->SecretWordPanel);
				this->BigPanel->Controls->Add(this->HangmanFigure);
				this->BigPanel->Controls->Add(this->KeyboardPanel);
				this->BigPanel->Controls->Add(this->DashPanel);
				this->BigPanel->Location = System::Drawing::Point(89, 141);
				this->BigPanel->Margin = System::Windows::Forms::Padding(2);
				this->BigPanel->Name = L"BigPanel";
				this->BigPanel->Size = System::Drawing::Size(799, 391);
				this->BigPanel->TabIndex = 7;
				// 
				// pbSentence
				// 
				this->pbSentence->BackColor = System::Drawing::Color::Transparent;
				this->pbSentence->Location = System::Drawing::Point(720, 18);
				this->pbSentence->Margin = System::Windows::Forms::Padding(2);
				this->pbSentence->Name = L"pbSentence";
				this->pbSentence->Size = System::Drawing::Size(75, 81);
				this->pbSentence->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pbSentence->TabIndex = 12;
				this->pbSentence->TabStop = false;
				// 
				// pbFinishMainMenu
				// 
				this->pbFinishMainMenu->BackColor = System::Drawing::Color::Transparent;
				this->pbFinishMainMenu->Cursor = System::Windows::Forms::Cursors::Hand;
				this->pbFinishMainMenu->Location = System::Drawing::Point(375, 191);
				this->pbFinishMainMenu->Margin = System::Windows::Forms::Padding(2);
				this->pbFinishMainMenu->Name = L"pbFinishMainMenu";
				this->pbFinishMainMenu->Size = System::Drawing::Size(75, 41);
				this->pbFinishMainMenu->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pbFinishMainMenu->TabIndex = 65;
				this->pbFinishMainMenu->TabStop = false;
				this->pbFinishMainMenu->VisibleChanged += gcnew System::EventHandler(this, &GameScreen::pbFinishMainMenu_VisibleChanged);
				this->pbFinishMainMenu->Click += gcnew System::EventHandler(this, &GameScreen::pbFinishMainMenu_Click);
				// 
				// pbFinishPlayAgain
				// 
				this->pbFinishPlayAgain->BackColor = System::Drawing::Color::Transparent;
				this->pbFinishPlayAgain->Cursor = System::Windows::Forms::Cursors::Hand;
				this->pbFinishPlayAgain->Location = System::Drawing::Point(260, 191);
				this->pbFinishPlayAgain->Margin = System::Windows::Forms::Padding(2);
				this->pbFinishPlayAgain->Name = L"pbFinishPlayAgain";
				this->pbFinishPlayAgain->Size = System::Drawing::Size(75, 41);
				this->pbFinishPlayAgain->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pbFinishPlayAgain->TabIndex = 64;
				this->pbFinishPlayAgain->TabStop = false;
				this->pbFinishPlayAgain->Click += gcnew System::EventHandler(this, &GameScreen::pbFinishPlayAgain_Click);
				// 
				// SecretWordPanel
				// 
				this->SecretWordPanel->Location = System::Drawing::Point(256, 71);
				this->SecretWordPanel->Margin = System::Windows::Forms::Padding(2);
				this->SecretWordPanel->Name = L"SecretWordPanel";
				this->SecretWordPanel->Size = System::Drawing::Size(460, 35);
				this->SecretWordPanel->TabIndex = 63;
				// 
				// KeyboardPanel
				// 
				this->KeyboardPanel->Controls->Add(this->pbK);
				this->KeyboardPanel->Controls->Add(this->pbR);
				this->KeyboardPanel->Controls->Add(this->pbP);
				this->KeyboardPanel->Controls->Add(this->pbE);
				this->KeyboardPanel->Controls->Add(this->pbO);
				this->KeyboardPanel->Controls->Add(this->pbW);
				this->KeyboardPanel->Controls->Add(this->pbI);
				this->KeyboardPanel->Controls->Add(this->pbG);
				this->KeyboardPanel->Controls->Add(this->pbU);
				this->KeyboardPanel->Controls->Add(this->pbB);
				this->KeyboardPanel->Controls->Add(this->pbF);
				this->KeyboardPanel->Controls->Add(this->pbN);
				this->KeyboardPanel->Controls->Add(this->pbY);
				this->KeyboardPanel->Controls->Add(this->pbD);
				this->KeyboardPanel->Controls->Add(this->pbX);
				this->KeyboardPanel->Controls->Add(this->pbT);
				this->KeyboardPanel->Controls->Add(this->pbC);
				this->KeyboardPanel->Controls->Add(this->pbA);
				this->KeyboardPanel->Controls->Add(this->pbM);
				this->KeyboardPanel->Controls->Add(this->pbL);
				this->KeyboardPanel->Controls->Add(this->pbV);
				this->KeyboardPanel->Controls->Add(this->pbS);
				this->KeyboardPanel->Controls->Add(this->pbQ);
				this->KeyboardPanel->Controls->Add(this->pbZ);
				this->KeyboardPanel->Controls->Add(this->pbH);
				this->KeyboardPanel->Controls->Add(this->pbJ);
				this->KeyboardPanel->Location = System::Drawing::Point(188, 236);
				this->KeyboardPanel->Margin = System::Windows::Forms::Padding(2);
				this->KeyboardPanel->Name = L"KeyboardPanel";
				this->KeyboardPanel->Size = System::Drawing::Size(513, 152);
				this->KeyboardPanel->TabIndex = 61;
				// 
				// DashPanel
				// 
				this->DashPanel->Location = System::Drawing::Point(256, 147);
				this->DashPanel->Margin = System::Windows::Forms::Padding(2);
				this->DashPanel->Name = L"DashPanel";
				this->DashPanel->Padding = System::Windows::Forms::Padding(0, 8, 0, 0);
				this->DashPanel->Size = System::Drawing::Size(460, 34);
				this->DashPanel->TabIndex = 62;
				// 
				// pbDash8
				// 
				this->pbDash8->Location = System::Drawing::Point(538, 6);
				this->pbDash8->Name = L"pbDash8";
				this->pbDash8->Size = System::Drawing::Size(70, 30);
				this->pbDash8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pbDash8->TabIndex = 60;
				this->pbDash8->TabStop = false;
				// 
				// pbDash5
				// 
				this->pbDash5->Location = System::Drawing::Point(310, 6);
				this->pbDash5->Name = L"pbDash5";
				this->pbDash5->Size = System::Drawing::Size(70, 30);
				this->pbDash5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pbDash5->TabIndex = 57;
				this->pbDash5->TabStop = false;
				// 
				// pbDash6
				// 
				this->pbDash6->Location = System::Drawing::Point(386, 6);
				this->pbDash6->Name = L"pbDash6";
				this->pbDash6->Size = System::Drawing::Size(70, 30);
				this->pbDash6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pbDash6->TabIndex = 58;
				this->pbDash6->TabStop = false;
				// 
				// pbDash7
				// 
				this->pbDash7->Location = System::Drawing::Point(462, 6);
				this->pbDash7->Name = L"pbDash7";
				this->pbDash7->Size = System::Drawing::Size(70, 30);
				this->pbDash7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pbDash7->TabIndex = 59;
				this->pbDash7->TabStop = false;
				// 
				// pbYouWin
				// 
				this->pbYouWin->BackColor = System::Drawing::Color::Transparent;
				this->pbYouWin->Location = System::Drawing::Point(278, 69);
				this->pbYouWin->Margin = System::Windows::Forms::Padding(2);
				this->pbYouWin->Name = L"pbYouWin";
				this->pbYouWin->Size = System::Drawing::Size(420, 130);
				this->pbYouWin->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pbYouWin->TabIndex = 8;
				this->pbYouWin->TabStop = false;
				// 
				// pbYouLose
				// 
				this->pbYouLose->BackColor = System::Drawing::Color::Transparent;
				this->pbYouLose->Location = System::Drawing::Point(375, 69);
				this->pbYouLose->Margin = System::Windows::Forms::Padding(2);
				this->pbYouLose->Name = L"pbYouLose";
				this->pbYouLose->Size = System::Drawing::Size(420, 130);
				this->pbYouLose->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pbYouLose->TabIndex = 9;
				this->pbYouLose->TabStop = false;
				// 
				// pbTitle
				// 
				this->pbTitle->BackColor = System::Drawing::Color::Transparent;
				this->pbTitle->Location = System::Drawing::Point(189, 49);
				this->pbTitle->Margin = System::Windows::Forms::Padding(2);
				this->pbTitle->Name = L"pbTitle";
				this->pbTitle->Size = System::Drawing::Size(75, 41);
				this->pbTitle->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pbTitle->TabIndex = 10;
				this->pbTitle->TabStop = false;
				// 
				// pbHint
				// 
				this->pbHint->BackColor = System::Drawing::Color::Transparent;
				this->pbHint->Cursor = System::Windows::Forms::Cursors::Hand;
				this->pbHint->Location = System::Drawing::Point(110, 26);
				this->pbHint->Margin = System::Windows::Forms::Padding(2);
				this->pbHint->Name = L"pbHint";
				this->pbHint->Size = System::Drawing::Size(75, 81);
				this->pbHint->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pbHint->TabIndex = 11;
				this->pbHint->TabStop = false;
				this->pbHint->Click += gcnew System::EventHandler(this, &GameScreen::pbHint_Click);
				// 
				// GameScreen
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
				this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->ClientSize = System::Drawing::Size(1027, 604);
				this->Controls->Add(this->pbHint);
				this->Controls->Add(this->pbTitle);
				this->Controls->Add(this->pbYouLose);
				this->Controls->Add(this->pbYouWin);
				this->Controls->Add(this->BigPanel);
				this->Controls->Add(this->pbMainMenu);
				this->Controls->Add(this->pbMute);
				this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
				this->KeyPreview = true;
				this->Name = L"GameScreen";
				this->ShowIcon = false;
				this->ShowInTaskbar = false;
				this->Text = L"Hangman++";
				this->Load += gcnew System::EventHandler(this, &GameScreen::GameScreen_Load);
				this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &GameScreen::GameScreen_KeyDown);
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HangmanFigure))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbB))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbN))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbX))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbC))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbV))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbK))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbM))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbZ))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbL))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbT))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbY))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbU))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbI))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbO))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbP))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbR))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbE))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbW))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbG))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbF))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbD))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbA))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbS))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbH))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbJ))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbQ))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbDash4))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbDash3))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbDash2))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbDash1))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbMute))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbMainMenu))->EndInit();
				this->BigPanel->ResumeLayout(false);
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbSentence))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbFinishMainMenu))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbFinishPlayAgain))->EndInit();
				this->KeyboardPanel->ResumeLayout(false);
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbDash8))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbDash5))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbDash6))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbDash7))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbYouWin))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbYouLose))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbTitle))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbHint))->EndInit();
				this->ResumeLayout(false);

			}
#pragma endregion

		private: void launchNextGameScreen() {
			GameScreen^ gs = gcnew GameScreen(pGameParameters);
			gs->Owner = this->Owner;
			gs->Show();
			this->Close();
		}
		private: delegate void UIDelegate();
		private: void storyModeMoveOn() {
			UIDelegate^ gameScreenDelegate = gcnew UIDelegate(this, &GameScreen::launchNextGameScreen);
			Thread::Sleep(1000); // Time to wait in milliseconds before launching the next GameScreen.
			this->Invoke(gameScreenDelegate);
		}
		private: System::Void GameScreen_Load(System::Object^  sender, System::EventArgs^  e) {

			// NOTE: theme path is set in constructor.
			HangmanSoundPlayer::StopPlayLooping();
			if (pGameParameters->gameSoundEnabled)
			{
				pbMute->Image = Image::FromFile(pGameParameters->themePath + "volume.png");
			}
			else
			{
				pbMute->Image = Image::FromFile(pGameParameters->themePath + "mute.png");
			}
			this->DesktopBounds = Screen::PrimaryScreen->Bounds;
			this->BackgroundImage = Image::FromFile(pGameParameters->themePath + "texture.png");
			HangmanFigure->Image = Image::FromFile(pGameParameters->themePath + "hangman\\0.png");
			pbTitle->Image = Image::FromFile(pGameParameters->themePath + "title.png");
			if (pGameParameters->gameMode == GameMode::TraditionalSinglePlayer)
			{
				pbHint->Image = Image::FromFile(pGameParameters->themePath + "\\..\\hint.png");
			}
			pbMainMenu->Image = Image::FromFile(pGameParameters->themePath + "home.png");
			pbFinishMainMenu->Image = Image::FromFile(pGameParameters->themePath + "mainMenu.png");
			pbFinishPlayAgain->Image = Image::FromFile(pGameParameters->themePath + "playAgain.png");
			pbDash1->Image = Image::FromFile(pGameParameters->themePath + "dash.png");
			pbDash2->Image = Image::FromFile(pGameParameters->themePath + "dash.png");
			pbDash3->Image = Image::FromFile(pGameParameters->themePath + "dash.png");
			pbDash4->Image = Image::FromFile(pGameParameters->themePath + "dash.png");
			pbDash5->Image = Image::FromFile(pGameParameters->themePath + "dash.png");
			pbDash6->Image = Image::FromFile(pGameParameters->themePath + "dash.png");
			pbDash7->Image = Image::FromFile(pGameParameters->themePath + "dash.png");
			pbDash8->Image = Image::FromFile(pGameParameters->themePath + "dash.png");
			pbA->Image = Image::FromFile(pGameParameters->themePath + "alphabet\\A.png");
			pbB->Image = Image::FromFile(pGameParameters->themePath + "alphabet\\B.png");
			pbC->Image = Image::FromFile(pGameParameters->themePath + "alphabet\\C.png");
			pbD->Image = Image::FromFile(pGameParameters->themePath + "alphabet\\D.png");
			pbE->Image = Image::FromFile(pGameParameters->themePath + "alphabet\\E.png");
			pbF->Image = Image::FromFile(pGameParameters->themePath + "alphabet\\F.png");
			pbG->Image = Image::FromFile(pGameParameters->themePath + "alphabet\\G.png");
			pbH->Image = Image::FromFile(pGameParameters->themePath + "alphabet\\H.png");
			pbI->Image = Image::FromFile(pGameParameters->themePath + "alphabet\\I.png");
			pbJ->Image = Image::FromFile(pGameParameters->themePath + "alphabet\\J.png");
			pbK->Image = Image::FromFile(pGameParameters->themePath + "alphabet\\K.png");
			pbL->Image = Image::FromFile(pGameParameters->themePath + "alphabet\\L.png");
			pbM->Image = Image::FromFile(pGameParameters->themePath + "alphabet\\M.png");
			pbN->Image = Image::FromFile(pGameParameters->themePath + "alphabet\\N.png");
			pbO->Image = Image::FromFile(pGameParameters->themePath + "alphabet\\O.png");
			pbP->Image = Image::FromFile(pGameParameters->themePath + "alphabet\\P.png");
			pbQ->Image = Image::FromFile(pGameParameters->themePath + "alphabet\\Q.png");
			pbR->Image = Image::FromFile(pGameParameters->themePath + "alphabet\\R.png");
			pbS->Image = Image::FromFile(pGameParameters->themePath + "alphabet\\S.png");
			pbT->Image = Image::FromFile(pGameParameters->themePath + "alphabet\\T.png");
			pbU->Image = Image::FromFile(pGameParameters->themePath + "alphabet\\U.png");
			pbV->Image = Image::FromFile(pGameParameters->themePath + "alphabet\\V.png");
			pbW->Image = Image::FromFile(pGameParameters->themePath + "alphabet\\W.png");
			pbX->Image = Image::FromFile(pGameParameters->themePath + "alphabet\\X.png");
			pbY->Image = Image::FromFile(pGameParameters->themePath + "alphabet\\Y.png");
			pbZ->Image = Image::FromFile(pGameParameters->themePath + "alphabet\\Z.png");

			pbSentence->Location = Point((this->Size.Width / 2) - (this->Size.Width / 5), (this->Size.Height / 20));
			pbSentence->Size = Drawing::Size(this->Size.Width / 3, this->Size.Height / 8);
			if (testWord == "simmer") {
				pbSentence->Image = Image::FromFile(pGameParameters->themePath + "stories/story1/" + "sentence1.png");
			}
			else if (testWord == "crumble") {
				pbSentence->Image = Image::FromFile(pGameParameters->themePath + "stories/story1/" + "sentence2.png");
			}
			else if (testWord == "tender") {
				pbSentence->Image = Image::FromFile(pGameParameters->themePath + "stories/story1/" + "sentence3.png");
			}
			else if (testWord == "ceased") {
				pbSentence->Image = Image::FromFile(pGameParameters->themePath + "stories/story2/" + "sentence1.png");
			}
			else if (testWord == "stiff") {
				pbSentence->Image = Image::FromFile(pGameParameters->themePath + "stories/story2/" + "sentence2.png");
			}
			else if (testWord == "invisible") {
				pbSentence->Image = Image::FromFile(pGameParameters->themePath + "stories/story2/" + "sentence3.png");
			}
			else if (testWord == "waddle") {
				pbSentence->Image = Image::FromFile(pGameParameters->themePath + "stories/story3/" + "sentence1.png");
			}
			else if (testWord == "blubber") {
				pbSentence->Image = Image::FromFile(pGameParameters->themePath + "stories/story3/" + "sentence2.png");
			}
			else if (testWord == "Emperor") {
				pbSentence->Image = Image::FromFile(pGameParameters->themePath + "stories/story3/" + "sentence3.png");
			}
			else if (testWord == "education") {
				pbSentence->Image = Image::FromFile(pGameParameters->themePath + "stories/story4/" + "sentence1.png");
			}
			else if (testWord == "caviar") {
				pbSentence->Image = Image::FromFile(pGameParameters->themePath + "stories/story4/" + "sentence2.png");
			}
			else if (testWord == "smiles") {
				pbSentence->Image = Image::FromFile(pGameParameters->themePath + "stories/story4/" + "sentence3.png");
			}
			else if (testWord == "toolchain") {
				pbSentence->Image = Image::FromFile(pGameParameters->themePath + "stories/story5/" + "sentence1.png");
			}
			else if (testWord == "stickers") {
				pbSentence->Image = Image::FromFile(pGameParameters->themePath + "stories/story5/" + "sentence2.png");
			}
			else if (testWord == "starbucks") {
				pbSentence->Image = Image::FromFile(pGameParameters->themePath + "stories/story5/" + "sentence3.png");
			}
			else if (testWord == "welcoming") {
				pbSentence->Image = Image::FromFile(pGameParameters->themePath + "stories/story6/" + "sentence1.png");
			}
			else if (testWord == "china") {
				pbSentence->Image = Image::FromFile(pGameParameters->themePath + "stories/story6/" + "sentence2.png");
			}
			else if (testWord == "population") {
				pbSentence->Image = Image::FromFile(pGameParameters->themePath + "stories/story6/" + "sentence3.png");
			}

			pbTitle->Size = Drawing::Size(this->Size.Width / 3, this->Size.Height / 6);
			pbTitle->Location = Point((this->Size.Width / 2) - (pbTitle->Size.Width / 2), (this->Size.Height / 20));

			BigPanel->Size = Drawing::Size(this->Size.Width, this->Size.Height / 1.2);
			BigPanel->Location = Point((this->Size.Width / 2) - (BigPanel->Size.Width / 2), (this->Size.Height / 2) - (BigPanel->Size.Height / 3));

			pbFinishPlayAgain->Size = Drawing::Size(BigPanel->Size.Width / 3, BigPanel->Size.Height / 3);
			pbFinishMainMenu->Size = Drawing::Size(BigPanel->Size.Width / 3, BigPanel->Size.Height / 3);

			pbFinishPlayAgain->Location = Point(0 + this->Size.Width / 12, BigPanel->Size.Height / 2);
			pbFinishMainMenu->Location = Point(this->Size.Width / 2 + this->Size.Width / 12, BigPanel->Size.Height / 2);

			pbFinishMainMenu->Visible = false;
			pbFinishPlayAgain->Visible = false;

			//pbYouLose->Size = Drawing::Size(this->Size.Width / 4, this->Size.Height / 4);
			pbYouLose->Location = Point(this->Size.Width / 2 - pbYouLose->Size.Width / 2, this->Size.Height / 5);

			//pbYouWin->Size = Drawing::Size(this->Size.Width / 4, this->Size.Height / 4);
			pbYouWin->Location = Point(this->Size.Width / 2 - pbYouLose->Size.Width / 2, this->Size.Height / 5);

			//NOTE: Uncomment this when the images are added to the themes folder
			pbYouWin->Image = Image::FromFile(pGameParameters->themePath + "You win.png");
			pbYouLose->Image = Image::FromFile(pGameParameters->themePath + "You lose.png");

			pbYouWin->Visible = false;
			pbYouLose->Visible = false;

			KeyboardPanel->Size = Drawing::Size(BigPanel->Size.Width / 2, BigPanel->Size.Height / 3);
			KeyboardPanel->Location = Point((BigPanel->Size.Width / 2 - KeyboardPanel->Size.Width / 2), (BigPanel->Size.Height / 2.10));

			DashPanel->Size = Drawing::Size(BigPanel->Size.Width / 1.375, pbDash1->Size.Height + 20);
			DashPanel->Location = Point(BigPanel->Size.Width / 2 - BigPanel->Size.Width / 4, BigPanel->Size.Height / 3 + BigPanel->Size.Height / 20);

			SecretWordPanel->Size = Drawing::Size(BigPanel->Size.Width / 1.375, KeyboardPanel->Size.Height / 3);
			SecretWordPanel->Location = Point(BigPanel->Size.Width / 2 - BigPanel->Size.Width / 4, BigPanel->Size.Height / 4);

			HangmanFigure->Size = Drawing::Size(BigPanel->Size.Width / 6, BigPanel->Size.Height / 2);
			HangmanFigure->Location = Point(BigPanel->Size.Width / 8 - BigPanel->Size.Width / 16, BigPanel->Size.Height / 16);

			pbQ->Size = Drawing::Size(KeyboardPanel->Size.Width / 10, KeyboardPanel->Size.Height / 3);
			pbQ->Location = Point(0, 0);

			pbW->Size = Drawing::Size(KeyboardPanel->Size.Width / 10, KeyboardPanel->Size.Height / 3);
			pbW->Location = Point(pbQ->Location.X + pbQ->Size.Width, 0);

			pbE->Size = Drawing::Size(KeyboardPanel->Size.Width / 10, KeyboardPanel->Size.Height / 3);
			pbE->Location = Point(pbW->Location.X + pbW->Size.Width, 0);

			pbR->Size = Drawing::Size(KeyboardPanel->Size.Width / 10, KeyboardPanel->Size.Height / 3);
			pbR->Location = Point(pbE->Location.X + pbE->Size.Width, 0);

			pbT->Size = Drawing::Size(KeyboardPanel->Size.Width / 10, KeyboardPanel->Size.Height / 3);
			pbT->Location = Point(pbR->Location.X + pbE->Size.Width, 0);

			pbY->Size = Drawing::Size(KeyboardPanel->Size.Width / 10, KeyboardPanel->Size.Height / 3);
			pbY->Location = Point(pbT->Location.X + pbE->Size.Width, 0);

			pbU->Size = Drawing::Size(KeyboardPanel->Size.Width / 10, KeyboardPanel->Size.Height / 3);
			pbU->Location = Point(pbY->Location.X + pbE->Size.Width, 0);

			pbI->Size = Drawing::Size(KeyboardPanel->Size.Width / 10, KeyboardPanel->Size.Height / 3);
			pbI->Location = Point(pbU->Location.X + pbE->Size.Width, 0);

			pbO->Size = Drawing::Size(KeyboardPanel->Size.Width / 10, KeyboardPanel->Size.Height / 3);
			pbO->Location = Point(pbI->Location.X + pbE->Size.Width, 0);

			pbP->Size = Drawing::Size(KeyboardPanel->Size.Width / 10, KeyboardPanel->Size.Height / 3);
			pbP->Location = Point(pbO->Location.X + pbE->Size.Width, 0);

			pbA->Size = Drawing::Size(KeyboardPanel->Size.Width / 10, KeyboardPanel->Size.Height / 3);
			pbA->Location = Point(pbQ->Location.X + pbQ->Size.Width / 2, pbQ->Location.Y + pbQ->Size.Height);

			pbS->Size = Drawing::Size(KeyboardPanel->Size.Width / 10, KeyboardPanel->Size.Height / 3);
			pbS->Location = Point(pbA->Location.X + pbQ->Size.Width, pbQ->Location.Y + pbQ->Size.Height);

			pbD->Size = Drawing::Size(KeyboardPanel->Size.Width / 10, KeyboardPanel->Size.Height / 3);
			pbD->Location = Point(pbS->Location.X + pbQ->Size.Width, pbQ->Location.Y + pbQ->Size.Height);

			pbF->Size = Drawing::Size(KeyboardPanel->Size.Width / 10, KeyboardPanel->Size.Height / 3);
			pbF->Location = Point(pbD->Location.X + pbQ->Size.Width, pbQ->Location.Y + pbQ->Size.Height);

			pbG->Size = Drawing::Size(KeyboardPanel->Size.Width / 10, KeyboardPanel->Size.Height / 3);
			pbG->Location = Point(pbF->Location.X + pbQ->Size.Width, pbQ->Location.Y + pbQ->Size.Height);

			pbH->Size = Drawing::Size(KeyboardPanel->Size.Width / 10, KeyboardPanel->Size.Height / 3);
			pbH->Location = Point(pbG->Location.X + pbQ->Size.Width, pbQ->Location.Y + pbQ->Size.Height);

			pbJ->Size = Drawing::Size(KeyboardPanel->Size.Width / 10, KeyboardPanel->Size.Height / 3);
			pbJ->Location = Point(pbH->Location.X + pbQ->Size.Width, pbQ->Location.Y + pbQ->Size.Height);

			pbK->Size = Drawing::Size(KeyboardPanel->Size.Width / 10, KeyboardPanel->Size.Height / 3);
			pbK->Location = Point(pbJ->Location.X + pbQ->Size.Width, pbQ->Location.Y + pbQ->Size.Height);

			pbL->Size = Drawing::Size(KeyboardPanel->Size.Width / 10, KeyboardPanel->Size.Height / 3);
			pbL->Location = Point(pbK->Location.X + pbQ->Size.Width, pbQ->Location.Y + pbQ->Size.Height);

			pbZ->Size = Drawing::Size(KeyboardPanel->Size.Width / 10, KeyboardPanel->Size.Height / 3);
			pbZ->Location = Point(pbS->Location.X, pbS->Location.Y + pbS->Size.Height);

			pbX->Size = Drawing::Size(KeyboardPanel->Size.Width / 10, KeyboardPanel->Size.Height / 3);
			pbX->Location = Point(pbZ->Location.X + pbQ->Size.Width, pbS->Location.Y + pbS->Size.Height);

			pbC->Size = Drawing::Size(KeyboardPanel->Size.Width / 10, KeyboardPanel->Size.Height / 3);
			pbC->Location = Point(pbX->Location.X + pbQ->Size.Width, pbS->Location.Y + pbS->Size.Height);

			pbV->Size = Drawing::Size(KeyboardPanel->Size.Width / 10, KeyboardPanel->Size.Height / 3);
			pbV->Location = Point(pbC->Location.X + pbQ->Size.Width, pbS->Location.Y + pbS->Size.Height);

			pbB->Size = Drawing::Size(KeyboardPanel->Size.Width / 10, KeyboardPanel->Size.Height / 3);
			pbB->Location = Point(pbV->Location.X + pbQ->Size.Width, pbS->Location.Y + pbS->Size.Height);

			pbN->Size = Drawing::Size(KeyboardPanel->Size.Width / 10, KeyboardPanel->Size.Height / 3);
			pbN->Location = Point(pbB->Location.X + pbQ->Size.Width, pbS->Location.Y + pbS->Size.Height);

			pbM->Size = Drawing::Size(KeyboardPanel->Size.Width / 10, KeyboardPanel->Size.Height / 3);
			pbM->Location = Point(pbN->Location.X + pbQ->Size.Width, pbS->Location.Y + pbS->Size.Height);

			pbMainMenu->Top = 20;
			pbMainMenu->Left = (this->Size.Width) - (pbMainMenu->Size.Width + 20);
			pbMute->Top = 20;
			pbMute->Left = 20;
			pbHint->Top = 20;
			pbHint->Left = pbMute->Size.Width + 30;

			// place the dashes under where the hidden word will be displayed.
			for (int i = 0; i < SecretWordLength; i++) {

				System::Windows::Forms::PictureBox^  pbDash = gcnew System::Windows::Forms::PictureBox();
				pbDash->Image = Image::FromFile(pGameParameters->themePath + "dash.png");
				pbDash->Location = System::Drawing::Point(0 + (this->Size.Height / 12) * i, 6);
				pbDash->Name = L"pbDash";
				pbDash->Size = System::Drawing::Size(this->Size.Height / 12, this->Size.Height / 40);
				pbDash->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				pbDash->TabIndex = 0;
				pbDash->TabStop = false;
				DashPanel->Controls->Add(pbDash);
			}

			// Place the word above the dashes, make it not visibile.
			for (int i = 0; i < SecretWordLength; i++) {
				String^ letter = System::Convert::ToString(testWord);
				String^ let = letter->Substring(i, 1);
				System::Windows::Forms::PictureBox^  pbLetter = gcnew System::Windows::Forms::PictureBox();
				pbLetter->Image = Image::FromFile(pGameParameters->themePath + "alphabet\\" + let + ".png");
				pbLetter->Location = System::Drawing::Point(0 + (this->Size.Height / 12) * i, 6);
				pbLetter->Name = "pbLetter" + let;
				pbLetter->Size = System::Drawing::Size(this->Size.Height / 12, this->Size.Height / 12);
				pbLetter->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				pbLetter->TabIndex = 0;
				pbLetter->TabStop = false;
				pbLetter->Visible = false;
				SecretWordPanel->Controls->Add(pbLetter);
			}

			// For Reference:
			//cli::array<Control^>^ temp = SecretWordPanel->Controls->Find("pbLetter" + let, false);
			//temp[2]->Visible = true;

		}
		private: System::Void pbQ_Click(System::Object^  sender, System::EventArgs^  e) {
			pbQ->Visible = false;
			cli::array<Control^>^ allQs = SecretWordPanel->Controls->Find("pbLetterQ", false);
			for each(Control^ q in allQs) {
				q->Visible = true;
				CorrectGuessCount++;
				if (pGameParameters->gameSoundEnabled)
				{
					if (pGameParameters->themePath->Equals(Application::StartupPath + "\\..\\themes\\drake\\"))
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeT.wav");
					}
					else
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\write.wav");
					}
				}
			}
			if (allQs->Length == 0 && HangManCount < 6) {
				HangManCount++;
				if (pGameParameters->gameSoundEnabled)
				{
					if (pGameParameters->themePath->Equals(Application::StartupPath + "\\..\\themes\\drake\\"))
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeF.wav");
					}
					else
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\write.wav");
					}
				}
				HangmanFigure->Image = Image::FromFile(pGameParameters->themePath + "hangman\\" + HangManCount + ".png");
				if (HangManCount == 6) {
					if (pGameParameters->gameSoundEnabled)
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeFull.wav");
					}
					if (pGameParameters->gameMode == GameMode::StoryMode) {
						pGameParameters->secretWords->RemoveAt(0);
						if (pGameParameters->secretWords->Count == 0) {
							for each(Control^ let in SecretWordPanel->Controls) {
								let->Visible = true;
							}
							pbFinishMainMenu->Visible = true;
						}
						else {
							for each(Control^ let in SecretWordPanel->Controls) {
								let->Visible = true;
							}
							Thread^ moveOnThread = gcnew Thread(gcnew ThreadStart(this, &GameScreen::storyModeMoveOn));
							moveOnThread->Start();

						}
					}
					else {
						pbFinishMainMenu->Visible = true;
						pbFinishPlayAgain->Visible = true;
						pbYouLose->Visible = true;
						// make all letters visible
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
					}
				}
			}
			else if (CorrectGuessCount == SecretWordLength) {
				if (pGameParameters->gameMode == GameMode::StoryMode) {
					pGameParameters->secretWords->RemoveAt(0);
					if (pGameParameters->secretWords->Count == 0) {
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
						pbFinishMainMenu->Visible = true;
					}
					else {
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
						Thread^ moveOnThread = gcnew Thread(gcnew ThreadStart(this, &GameScreen::storyModeMoveOn));
						moveOnThread->Start();
					}
				}
				else {
					pbFinishMainMenu->Visible = true;
					pbFinishPlayAgain->Visible = true;
					pbYouWin->Visible = true;
				}
			}
		}
		private: System::Void pbA_Click(System::Object^  sender, System::EventArgs^  e) {
			pbA->Visible = false;
			cli::array<Control^>^ allAs = SecretWordPanel->Controls->Find("pbLetterA", false);
			for each(Control^ a in allAs) {
				a->Visible = true;
				CorrectGuessCount++;
				if (pGameParameters->gameSoundEnabled)
				{
					if (pGameParameters->themePath->Equals(Application::StartupPath + "\\..\\themes\\drake\\"))
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeT.wav");
					}
					else
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\write.wav");
					}
				}
			}
			if (allAs->Length == 0 && HangManCount < 6) {
				HangManCount++;
				if (pGameParameters->gameSoundEnabled)
				{
					if (pGameParameters->themePath->Equals(Application::StartupPath + "\\..\\themes\\drake\\"))
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeF.wav");
					}
					else
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\write.wav");
					}
				}
				HangmanFigure->Image = Image::FromFile(pGameParameters->themePath + "hangman\\" + HangManCount + ".png");
				if (HangManCount == 6) {
					if (pGameParameters->gameSoundEnabled)
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeFull.wav");
					}
					if (pGameParameters->gameMode == GameMode::StoryMode) {
						pGameParameters->secretWords->RemoveAt(0);
						if (pGameParameters->secretWords->Count == 0) {
							for each(Control^ let in SecretWordPanel->Controls) {
								let->Visible = true;
							}
							pbFinishMainMenu->Visible = true;
						}
						else {
							for each(Control^ let in SecretWordPanel->Controls) {
								let->Visible = true;
							}
							Thread^ moveOnThread = gcnew Thread(gcnew ThreadStart(this, &GameScreen::storyModeMoveOn));
							moveOnThread->Start();
						}
					}
					else {
						pbFinishMainMenu->Visible = true;
						pbFinishPlayAgain->Visible = true;
						pbYouLose->Visible = true;
						// make all letters visible
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
					}
				}
			}
			else if (CorrectGuessCount == SecretWordLength) {
				if (pGameParameters->gameMode == GameMode::StoryMode) {
					pGameParameters->secretWords->RemoveAt(0);
					if (pGameParameters->secretWords->Count == 0) {
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
						pbFinishMainMenu->Visible = true;

					}
					else {
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
						Thread^ moveOnThread = gcnew Thread(gcnew ThreadStart(this, &GameScreen::storyModeMoveOn));
						moveOnThread->Start();
					}
				}
				else {
					pbFinishMainMenu->Visible = true;
					pbFinishPlayAgain->Visible = true;
					pbYouWin->Visible = true;
				}
			}
		}
		private: System::Void pbZ_Click(System::Object^  sender, System::EventArgs^  e) {
			pbZ->Visible = false;
			cli::array<Control^>^ allZs = SecretWordPanel->Controls->Find("pbLetterZ", false);
			for each(Control^ z in allZs) {
				z->Visible = true;
				CorrectGuessCount++;
				if (pGameParameters->gameSoundEnabled)
				{
					if (pGameParameters->themePath->Equals(Application::StartupPath + "\\..\\themes\\drake\\"))
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeT.wav");
					}
					else
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\write.wav");
					}
				}
			}
			if (allZs->Length == 0 && HangManCount < 6) {
				HangManCount++;
				if (pGameParameters->gameSoundEnabled)
				{
					if (pGameParameters->themePath->Equals(Application::StartupPath + "\\..\\themes\\drake\\"))
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeF.wav");
					}
					else
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\write.wav");
					}
				}
				HangmanFigure->Image = Image::FromFile(pGameParameters->themePath + "hangman\\" + HangManCount + ".png");
				if (HangManCount == 6) {
					if (pGameParameters->gameSoundEnabled)
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeFull.wav");
					}
					if (pGameParameters->gameMode == GameMode::StoryMode) {
						pGameParameters->secretWords->RemoveAt(0);
						if (pGameParameters->secretWords->Count == 0) {
							for each(Control^ let in SecretWordPanel->Controls) {
								let->Visible = true;
							}
							pbFinishMainMenu->Visible = true;
						}
						else {
							for each(Control^ let in SecretWordPanel->Controls) {
								let->Visible = true;
							}
							Thread^ moveOnThread = gcnew Thread(gcnew ThreadStart(this, &GameScreen::storyModeMoveOn));
							moveOnThread->Start();
						}
					}
					else {
						pbFinishMainMenu->Visible = true;
						pbFinishPlayAgain->Visible = true;
						pbYouLose->Visible = true;
						// make all letters visible
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
					}
				}
			}
			else if (CorrectGuessCount == SecretWordLength) {
				if (pGameParameters->gameMode == GameMode::StoryMode) {
					pGameParameters->secretWords->RemoveAt(0);
					if (pGameParameters->secretWords->Count == 0) {
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
						pbFinishMainMenu->Visible = true;
					}
					else {
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
						Thread^ moveOnThread = gcnew Thread(gcnew ThreadStart(this, &GameScreen::storyModeMoveOn));
						moveOnThread->Start();
					}
				}
				else {
					pbFinishMainMenu->Visible = true;
					pbFinishPlayAgain->Visible = true;
					pbYouWin->Visible = true;
				}
			}

		}
		private: System::Void pbW_Click(System::Object^  sender, System::EventArgs^  e) {
			pbW->Visible = false;
			cli::array<Control^>^ allWs = SecretWordPanel->Controls->Find("pbLetterW", false);
			for each(Control^ w in allWs) {
				w->Visible = true;
				CorrectGuessCount++;
				if (pGameParameters->gameSoundEnabled)
				{
					if (pGameParameters->themePath->Equals(Application::StartupPath + "\\..\\themes\\drake\\"))
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeT.wav");
					}
					else
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\write.wav");
					}
				}
			}
			if (allWs->Length == 0 && HangManCount < 6) {
				HangManCount++;
				if (pGameParameters->gameSoundEnabled)
				{
					if (pGameParameters->themePath->Equals(Application::StartupPath + "\\..\\themes\\drake\\"))
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeF.wav");
					}
					else
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\write.wav");
					}
				}
				HangmanFigure->Image = Image::FromFile(pGameParameters->themePath + "hangman\\" + HangManCount + ".png");
				if (HangManCount == 6) {
					if (pGameParameters->gameSoundEnabled)
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeFull.wav");
					}
					if (pGameParameters->gameMode == GameMode::StoryMode) {
						pGameParameters->secretWords->RemoveAt(0);
						if (pGameParameters->secretWords->Count == 0) {
							for each(Control^ let in SecretWordPanel->Controls) {
								let->Visible = true;
							}
							pbFinishMainMenu->Visible = true;
						}
						else {
							for each(Control^ let in SecretWordPanel->Controls) {
								let->Visible = true;
							}
							Thread^ moveOnThread = gcnew Thread(gcnew ThreadStart(this, &GameScreen::storyModeMoveOn));
							moveOnThread->Start();
						}
					}
					else {
						pbFinishMainMenu->Visible = true;
						pbFinishPlayAgain->Visible = true;
						pbYouLose->Visible = true;
						// make all letters visible
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
					}
				}
			}
			else if (CorrectGuessCount == SecretWordLength) {
				if (pGameParameters->gameMode == GameMode::StoryMode) {
					pGameParameters->secretWords->RemoveAt(0);
					if (pGameParameters->secretWords->Count == 0) {
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
						pbFinishMainMenu->Visible = true;
					}
					else {
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
						Thread^ moveOnThread = gcnew Thread(gcnew ThreadStart(this, &GameScreen::storyModeMoveOn));
						moveOnThread->Start();
					}
				}
				else {
					pbFinishMainMenu->Visible = true;
					pbFinishPlayAgain->Visible = true;
					pbYouWin->Visible = true;
				}
			}

		}
		private: System::Void pbS_Click(System::Object^  sender, System::EventArgs^  e) {
			pbS->Visible = false;
			cli::array<Control^>^ allSs = SecretWordPanel->Controls->Find("pbLetterS", false);
			for each(Control^ s in allSs) {
				s->Visible = true;
				CorrectGuessCount++;
				if (pGameParameters->gameSoundEnabled)
				{
					if (pGameParameters->themePath->Equals(Application::StartupPath + "\\..\\themes\\drake\\"))
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeT.wav");
					}
					else
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\write.wav");
					}
				}
			}
			if (allSs->Length == 0 && HangManCount < 6) {
				HangManCount++;
				if (pGameParameters->gameSoundEnabled)
				{
					if (pGameParameters->themePath->Equals(Application::StartupPath + "\\..\\themes\\drake\\"))
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeF.wav");
					}
					else
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\write.wav");
					}
				}
				HangmanFigure->Image = Image::FromFile(pGameParameters->themePath + "hangman\\" + HangManCount + ".png");
				if (HangManCount == 6) {
					if (pGameParameters->gameSoundEnabled)
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeFull.wav");
					}
					if (pGameParameters->gameMode == GameMode::StoryMode) {
						pGameParameters->secretWords->RemoveAt(0);
						if (pGameParameters->secretWords->Count == 0) {
							//new line
							for each(Control^ let in SecretWordPanel->Controls) {
								let->Visible = true;
							}

							pbFinishMainMenu->Visible = true;
						}
						else {
							for each(Control^ let in SecretWordPanel->Controls) {
								let->Visible = true;
							}
							Thread^ moveOnThread = gcnew Thread(gcnew ThreadStart(this, &GameScreen::storyModeMoveOn));
							moveOnThread->Start();
						}
					}
					else {
						pbFinishMainMenu->Visible = true;
						pbFinishPlayAgain->Visible = true;
						pbYouLose->Visible = true;
						// make all letters visible
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
					}
				}
			}
			else if (CorrectGuessCount == SecretWordLength) {
				if (pGameParameters->gameMode == GameMode::StoryMode) {
					pGameParameters->secretWords->RemoveAt(0);
					if (pGameParameters->secretWords->Count == 0) {
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
						pbFinishMainMenu->Visible = true;
					}
					else {
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
						Thread^ moveOnThread = gcnew Thread(gcnew ThreadStart(this, &GameScreen::storyModeMoveOn));
						moveOnThread->Start();
					}
				}
				else {
					pbFinishMainMenu->Visible = true;
					pbFinishPlayAgain->Visible = true;
					pbYouWin->Visible = true;
				}
			}
		}
		private: System::Void pbX_Click(System::Object^  sender, System::EventArgs^  e) {
			pbX->Visible = false;
			cli::array<Control^>^ allXs = SecretWordPanel->Controls->Find("pbLetterX", false);
			for each(Control^ x in allXs) {
				x->Visible = true;
				CorrectGuessCount++;
				if (pGameParameters->gameSoundEnabled)
				{
					if (pGameParameters->themePath->Equals(Application::StartupPath + "\\..\\themes\\drake\\"))
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeT.wav");
					}
					else
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\write.wav");
					}
				}
			}
			if (allXs->Length == 0 && HangManCount < 6) {
				HangManCount++;
				if (pGameParameters->gameSoundEnabled)
				{
					if (pGameParameters->themePath->Equals(Application::StartupPath + "\\..\\themes\\drake\\"))
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeF.wav");
					}
					else
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\write.wav");
					}
				}
				HangmanFigure->Image = Image::FromFile(pGameParameters->themePath + "hangman\\" + HangManCount + ".png");
				if (HangManCount == 6) {
					if (pGameParameters->gameSoundEnabled)
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeFull.wav");
					}
					if (pGameParameters->gameMode == GameMode::StoryMode) {
						pGameParameters->secretWords->RemoveAt(0);
						if (pGameParameters->secretWords->Count == 0) {
							for each(Control^ let in SecretWordPanel->Controls) {
								let->Visible = true;
							}
							pbFinishMainMenu->Visible = true;
						}
						else {
							//I added
							for each(Control^ let in SecretWordPanel->Controls) {
								let->Visible = true;
							}
							Thread^ moveOnThread = gcnew Thread(gcnew ThreadStart(this, &GameScreen::storyModeMoveOn));
							moveOnThread->Start();
						}
					}
					else {
						pbFinishMainMenu->Visible = true;
						pbFinishPlayAgain->Visible = true;
						pbYouLose->Visible = true;
						// make all letters visible
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
					}
				}
			}
			else if (CorrectGuessCount == SecretWordLength) {
				if (pGameParameters->gameMode == GameMode::StoryMode) {
					pGameParameters->secretWords->RemoveAt(0);
					if (pGameParameters->secretWords->Count == 0) {
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
						pbFinishMainMenu->Visible = true;
					}
					else {
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
						Thread^ moveOnThread = gcnew Thread(gcnew ThreadStart(this, &GameScreen::storyModeMoveOn));
						moveOnThread->Start();
					}
				}
				else {
					pbFinishMainMenu->Visible = true;
					pbFinishPlayAgain->Visible = true;
					pbYouWin->Visible = true;
				}
			}

		}
		private: System::Void pbE_Click(System::Object^  sender, System::EventArgs^  e) {
			pbE->Visible = false;
			cli::array<Control^>^ allEs = SecretWordPanel->Controls->Find("pbLetterE", false);
			for each(Control^ e in allEs) {
				e->Visible = true;
				CorrectGuessCount++;
				if (pGameParameters->gameSoundEnabled)
				{
					if (pGameParameters->themePath->Equals(Application::StartupPath + "\\..\\themes\\drake\\"))
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeT.wav");
					}
					else
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\write.wav");
					}
				}
			}
			if (allEs->Length == 0 && HangManCount < 6) {
				HangManCount++;
				if (pGameParameters->gameSoundEnabled)
				{
					if (pGameParameters->themePath->Equals(Application::StartupPath + "\\..\\themes\\drake\\"))
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeF.wav");
					}
					else
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\write.wav");
					}
				}
				HangmanFigure->Image = Image::FromFile(pGameParameters->themePath + "hangman\\" + HangManCount + ".png");
				if (HangManCount == 6) {
					if (pGameParameters->gameSoundEnabled)
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeFull.wav");
					}
					if (pGameParameters->gameMode == GameMode::StoryMode) {
						pGameParameters->secretWords->RemoveAt(0);
						if (pGameParameters->secretWords->Count == 0) {
							for each(Control^ let in SecretWordPanel->Controls) {
								let->Visible = true;
							}
							pbFinishMainMenu->Visible = true;
						}
						else {
							for each(Control^ let in SecretWordPanel->Controls) {
								let->Visible = true;
							}
							Thread^ moveOnThread = gcnew Thread(gcnew ThreadStart(this, &GameScreen::storyModeMoveOn));
							moveOnThread->Start();
						}
					}
					else {
						pbFinishMainMenu->Visible = true;
						pbFinishPlayAgain->Visible = true;
						pbYouLose->Visible = true;
						// make all letters visible
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
					}
				}
			}
			else if (CorrectGuessCount == SecretWordLength) {
				if (pGameParameters->gameMode == GameMode::StoryMode) {
					pGameParameters->secretWords->RemoveAt(0);
					if (pGameParameters->secretWords->Count == 0) {
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
						pbFinishMainMenu->Visible = true;
					}
					else {
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
						Thread^ moveOnThread = gcnew Thread(gcnew ThreadStart(this, &GameScreen::storyModeMoveOn));
						moveOnThread->Start();
					}
				}
				else {
					pbFinishMainMenu->Visible = true;
					pbFinishPlayAgain->Visible = true;
					pbYouWin->Visible = true;
				}
			}

		}
		private: System::Void pbD_Click(System::Object^  sender, System::EventArgs^  e) {
			pbD->Visible = false;
			cli::array<Control^>^ allDs = SecretWordPanel->Controls->Find("pbLetterD", false);
			for each(Control^ d in allDs) {
				d->Visible = true;
				CorrectGuessCount++;
				if (pGameParameters->gameSoundEnabled)
				{
					if (pGameParameters->themePath->Equals(Application::StartupPath + "\\..\\themes\\drake\\"))
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeT.wav");
					}
					else
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\write.wav");
					}
				}
			}
			if (allDs->Length == 0 && HangManCount < 6) {
				HangManCount++;
				if (pGameParameters->gameSoundEnabled)
				{
					if (pGameParameters->themePath->Equals(Application::StartupPath + "\\..\\themes\\drake\\"))
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeF.wav");
					}
					else
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\write.wav");
					}
				}
				HangmanFigure->Image = Image::FromFile(pGameParameters->themePath + "hangman\\" + HangManCount + ".png");
				if (HangManCount == 6) {
					if (pGameParameters->gameSoundEnabled)
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeFull.wav");
					}
					if (pGameParameters->gameMode == GameMode::StoryMode) {
						pGameParameters->secretWords->RemoveAt(0);
						if (pGameParameters->secretWords->Count == 0) {
							for each(Control^ let in SecretWordPanel->Controls) {
								let->Visible = true;
							}
							pbFinishMainMenu->Visible = true;
						}
						else {
							for each(Control^ let in SecretWordPanel->Controls) {
								let->Visible = true;
							}
							Thread^ moveOnThread = gcnew Thread(gcnew ThreadStart(this, &GameScreen::storyModeMoveOn));
							moveOnThread->Start();
						}
					}
					else {
						pbFinishMainMenu->Visible = true;
						pbFinishPlayAgain->Visible = true;
						pbYouLose->Visible = true;
						// make all letters visible
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
					}
				}
			}
			else if (CorrectGuessCount == SecretWordLength) {
				if (pGameParameters->gameMode == GameMode::StoryMode) {
					pGameParameters->secretWords->RemoveAt(0);
					if (pGameParameters->secretWords->Count == 0) {
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
						pbFinishMainMenu->Visible = true;
					}
					else {
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
						Thread^ moveOnThread = gcnew Thread(gcnew ThreadStart(this, &GameScreen::storyModeMoveOn));
						moveOnThread->Start();
					}
				}
				else {
					pbFinishMainMenu->Visible = true;
					pbFinishPlayAgain->Visible = true;
					pbYouWin->Visible = true;
				}
			}

		}
		private: System::Void pbC_Click(System::Object^  sender, System::EventArgs^  e) {
			pbC->Visible = false;
			cli::array<Control^>^ allCs = SecretWordPanel->Controls->Find("pbLetterC", false);
			for each(Control^ c in allCs) {
				c->Visible = true;
				CorrectGuessCount++;
				if (pGameParameters->gameSoundEnabled)
				{
					if (pGameParameters->themePath->Equals(Application::StartupPath + "\\..\\themes\\drake\\"))
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeT.wav");
					}
					else
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\write.wav");
					}
				}
			}
			if (allCs->Length == 0 && HangManCount < 6) {
				HangManCount++;
				if (pGameParameters->gameSoundEnabled)
				{
					if (pGameParameters->themePath->Equals(Application::StartupPath + "\\..\\themes\\drake\\"))
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeF.wav");
					}
					else
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\write.wav");
					}
				}
				HangmanFigure->Image = Image::FromFile(pGameParameters->themePath + "hangman\\" + HangManCount + ".png");
				if (HangManCount == 6) {
					if (pGameParameters->gameSoundEnabled)
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeFull.wav");
					}
					if (pGameParameters->gameMode == GameMode::StoryMode) {
						pGameParameters->secretWords->RemoveAt(0);
						if (pGameParameters->secretWords->Count == 0) {
							for each(Control^ let in SecretWordPanel->Controls) {
								let->Visible = true;
							}
							pbFinishMainMenu->Visible = true;
						}
						else {

							for each(Control^ let in SecretWordPanel->Controls) {
								let->Visible = true;
							}
							Thread^ moveOnThread = gcnew Thread(gcnew ThreadStart(this, &GameScreen::storyModeMoveOn));
							moveOnThread->Start();;
						}
					}
					else {
						pbFinishMainMenu->Visible = true;
						pbFinishPlayAgain->Visible = true;
						pbYouLose->Visible = true;
						// make all letters visible
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
					}
				}
			}
			else if (CorrectGuessCount == SecretWordLength) {
				if (pGameParameters->gameMode == GameMode::StoryMode) {
					pGameParameters->secretWords->RemoveAt(0);
					if (pGameParameters->secretWords->Count == 0) {
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
						pbFinishMainMenu->Visible = true;
					}
					else {
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
						Thread^ moveOnThread = gcnew Thread(gcnew ThreadStart(this, &GameScreen::storyModeMoveOn));
						moveOnThread->Start();
					}
				}
				else {
					pbFinishMainMenu->Visible = true;
					pbFinishPlayAgain->Visible = true;
					pbYouWin->Visible = true;
				}
			}

		}
		private: System::Void pbR_Click(System::Object^  sender, System::EventArgs^  e) {
			pbR->Visible = false;
			cli::array<Control^>^ allRs = SecretWordPanel->Controls->Find("pbLetterR", false);
			for each(Control^ r in allRs) {
				r->Visible = true;
				CorrectGuessCount++;
				if (pGameParameters->gameSoundEnabled)
				{
					if (pGameParameters->themePath->Equals(Application::StartupPath + "\\..\\themes\\drake\\"))
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeT.wav");
					}
					else
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\write.wav");
					}
				}
			}
			if (allRs->Length == 0 && HangManCount < 6) {
				HangManCount++;
				if (pGameParameters->gameSoundEnabled)
				{
					if (pGameParameters->themePath->Equals(Application::StartupPath + "\\..\\themes\\drake\\"))
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeF.wav");
					}
					else
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\write.wav");
					}
				}
				HangmanFigure->Image = Image::FromFile(pGameParameters->themePath + "hangman\\" + HangManCount + ".png");
				if (HangManCount == 6) {
					if (pGameParameters->gameSoundEnabled)
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeFull.wav");
					}
					if (pGameParameters->gameMode == GameMode::StoryMode) {
						pGameParameters->secretWords->RemoveAt(0);
						if (pGameParameters->secretWords->Count == 0) {
							for each(Control^ let in SecretWordPanel->Controls) {
								let->Visible = true;
							}
							pbFinishMainMenu->Visible = true;
						}
						else {
							//I added
							for each(Control^ let in SecretWordPanel->Controls) {
								let->Visible = true;
							}
							Thread^ moveOnThread = gcnew Thread(gcnew ThreadStart(this, &GameScreen::storyModeMoveOn));
							moveOnThread->Start();
							/*
							for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
							}
							Threading::Thread::Sleep(1000);
							GameScreen^ gs = gcnew GameScreen(pGameParameters);
							gs->Owner = this->Owner;
							gs->Show();
							this->Close();
							*/

						}
					}
					else {
						pbFinishMainMenu->Visible = true;
						pbFinishPlayAgain->Visible = true;
						pbYouLose->Visible = true;
						// make all letters visible
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
					}
				}
			}
			else if (CorrectGuessCount == SecretWordLength) {
				if (pGameParameters->gameMode == GameMode::StoryMode) {
					pGameParameters->secretWords->RemoveAt(0);
					if (pGameParameters->secretWords->Count == 0) {
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
						pbFinishMainMenu->Visible = true;
					}
					else {
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
						Thread^ moveOnThread = gcnew Thread(gcnew ThreadStart(this, &GameScreen::storyModeMoveOn));
						moveOnThread->Start();
						/*
						for each(Control^ let in SecretWordPanel->Controls) {
						let->Visible = true;
						}
						Threading::Thread::Sleep(1000);
						GameScreen^ gs = gcnew GameScreen(pGameParameters);
						gs->Owner = this->Owner;
						gs->Show();
						this->Close();
						*/

					}
				}
				else {
					pbFinishMainMenu->Visible = true;
					pbFinishPlayAgain->Visible = true;
					pbYouWin->Visible = true;
				}
			}

		}
		private: System::Void pbF_Click(System::Object^  sender, System::EventArgs^  e) {
			pbF->Visible = false;
			cli::array<Control^>^ allFs = SecretWordPanel->Controls->Find("pbLetterF", false);
			for each(Control^ f in allFs) {
				f->Visible = true;
				CorrectGuessCount++;
				if (pGameParameters->gameSoundEnabled)
				{
					if (pGameParameters->themePath->Equals(Application::StartupPath + "\\..\\themes\\drake\\"))
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeT.wav");
					}
					else
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\write.wav");
					}
				}
			}
			if (allFs->Length == 0 && HangManCount < 6) {
				HangManCount++;
				if (pGameParameters->gameSoundEnabled)
				{
					if (pGameParameters->themePath->Equals(Application::StartupPath + "\\..\\themes\\drake\\"))
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeF.wav");
					}
					else
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\write.wav");
					}
				}
				HangmanFigure->Image = Image::FromFile(pGameParameters->themePath + "hangman\\" + HangManCount + ".png");
				if (HangManCount == 6) {
					if (pGameParameters->gameSoundEnabled)
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeFull.wav");
					}
					if (pGameParameters->gameMode == GameMode::StoryMode) {
						pGameParameters->secretWords->RemoveAt(0);
						if (pGameParameters->secretWords->Count == 0) {
							for each(Control^ let in SecretWordPanel->Controls) {
								let->Visible = true;
							}
							pbFinishMainMenu->Visible = true;
						}
						else {
							for each(Control^ let in SecretWordPanel->Controls) {
								let->Visible = true;
							}
							Thread^ moveOnThread = gcnew Thread(gcnew ThreadStart(this, &GameScreen::storyModeMoveOn));
							moveOnThread->Start();
						}
					}
					else {
						pbFinishMainMenu->Visible = true;
						pbFinishPlayAgain->Visible = true;
						pbYouLose->Visible = true;
						// make all letters visible
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
					}
				}
			}
			else if (CorrectGuessCount == SecretWordLength) {
				if (pGameParameters->gameMode == GameMode::StoryMode) {
					pGameParameters->secretWords->RemoveAt(0);
					if (pGameParameters->secretWords->Count == 0) {
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
						pbFinishMainMenu->Visible = true;
					}
					else {
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
						Thread^ moveOnThread = gcnew Thread(gcnew ThreadStart(this, &GameScreen::storyModeMoveOn));
						moveOnThread->Start();
					}
				}
				else {
					pbFinishMainMenu->Visible = true;
					pbFinishPlayAgain->Visible = true;
					pbYouWin->Visible = true;
				}
			}

		}
		private: System::Void pbT_Click(System::Object^  sender, System::EventArgs^  e) {
			pbT->Visible = false;
			cli::array<Control^>^ allTs = SecretWordPanel->Controls->Find("pbLetterT", false);
			for each(Control^ t in allTs) {
				t->Visible = true;
				CorrectGuessCount++;
				if (pGameParameters->gameSoundEnabled)
				{
					if (pGameParameters->themePath->Equals(Application::StartupPath + "\\..\\themes\\drake\\"))
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeT.wav");
					}
					else
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\write.wav");
					}
				}
			}
			if (allTs->Length == 0 && HangManCount < 6) {
				HangManCount++;
				if (pGameParameters->gameSoundEnabled)
				{
					if (pGameParameters->themePath->Equals(Application::StartupPath + "\\..\\themes\\drake\\"))
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeF.wav");
					}
					else
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\write.wav");
					}
				}
				HangmanFigure->Image = Image::FromFile(pGameParameters->themePath + "hangman\\" + HangManCount + ".png");
				if (HangManCount == 6) {
					if (pGameParameters->gameSoundEnabled)
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeFull.wav");
					}
					if (pGameParameters->gameMode == GameMode::StoryMode) {
						pGameParameters->secretWords->RemoveAt(0);
						if (pGameParameters->secretWords->Count == 0) {
							for each(Control^ let in SecretWordPanel->Controls) {
								let->Visible = true;
							}
							pbFinishMainMenu->Visible = true;
						}
						else {
							for each(Control^ let in SecretWordPanel->Controls) {
								let->Visible = true;
							}
							Thread^ moveOnThread = gcnew Thread(gcnew ThreadStart(this, &GameScreen::storyModeMoveOn));
							moveOnThread->Start();
						}
					}
					else {
						pbFinishMainMenu->Visible = true;
						pbFinishPlayAgain->Visible = true;
						pbYouLose->Visible = true;
						// make all letters visible
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
					}
				}
			}
			else if (CorrectGuessCount == SecretWordLength) {
				if (pGameParameters->gameMode == GameMode::StoryMode) {
					pGameParameters->secretWords->RemoveAt(0);
					if (pGameParameters->secretWords->Count == 0) {
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
						pbFinishMainMenu->Visible = true;
					}
					else {
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
						Thread^ moveOnThread = gcnew Thread(gcnew ThreadStart(this, &GameScreen::storyModeMoveOn));
						moveOnThread->Start();
					}
				}
				else {
					pbFinishMainMenu->Visible = true;
					pbFinishPlayAgain->Visible = true;
					pbYouWin->Visible = true;
				}
			}

		}
		private: System::Void pbG_Click(System::Object^  sender, System::EventArgs^  e) {
			pbG->Visible = false;
			cli::array<Control^>^ allGs = SecretWordPanel->Controls->Find("pbLetterG", false);
			for each(Control^ g in allGs) {
				g->Visible = true;
				CorrectGuessCount++;
				if (pGameParameters->gameSoundEnabled)
				{
					if (pGameParameters->themePath->Equals(Application::StartupPath + "\\..\\themes\\drake\\"))
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeT.wav");
					}
					else
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\write.wav");
					}
				}
			}
			if (allGs->Length == 0 && HangManCount < 6) {
				HangManCount++;
				if (pGameParameters->gameSoundEnabled)
				{
					if (pGameParameters->themePath->Equals(Application::StartupPath + "\\..\\themes\\drake\\"))
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeF.wav");
					}
					else
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\write.wav");
					}
				}
				HangmanFigure->Image = Image::FromFile(pGameParameters->themePath + "hangman\\" + HangManCount + ".png");
				if (HangManCount == 6) {
					if (pGameParameters->gameSoundEnabled)
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeFull.wav");
					}
					if (pGameParameters->gameMode == GameMode::StoryMode) {
						pGameParameters->secretWords->RemoveAt(0);
						if (pGameParameters->secretWords->Count == 0) {
							for each(Control^ let in SecretWordPanel->Controls) {
								let->Visible = true;
							}
							pbFinishMainMenu->Visible = true;
						}
						else {
							for each(Control^ let in SecretWordPanel->Controls) {
								let->Visible = true;
							}
							Thread^ moveOnThread = gcnew Thread(gcnew ThreadStart(this, &GameScreen::storyModeMoveOn));
							moveOnThread->Start();
						}
					}
					else {
						pbFinishMainMenu->Visible = true;
						pbFinishPlayAgain->Visible = true;
						pbYouLose->Visible = true;
						// make all letters visible
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
					}
				}
			}
			else if (CorrectGuessCount == SecretWordLength) {
				if (pGameParameters->gameMode == GameMode::StoryMode) {
					pGameParameters->secretWords->RemoveAt(0);
					if (pGameParameters->secretWords->Count == 0) {
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
						pbFinishMainMenu->Visible = true;
					}
					else {
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
						Thread^ moveOnThread = gcnew Thread(gcnew ThreadStart(this, &GameScreen::storyModeMoveOn));
						moveOnThread->Start();
					}
				}
				else {
					pbFinishMainMenu->Visible = true;
					pbFinishPlayAgain->Visible = true;
					pbYouWin->Visible = true;
				}
			}

		}
		private: System::Void pbV_Click(System::Object^  sender, System::EventArgs^  e) {
			pbV->Visible = false;
			cli::array<Control^>^ allVs = SecretWordPanel->Controls->Find("pbLetterV", false);
			for each(Control^ v in allVs) {
				v->Visible = true;
				CorrectGuessCount++;
				if (pGameParameters->gameSoundEnabled)
				{
					if (pGameParameters->themePath->Equals(Application::StartupPath + "\\..\\themes\\drake\\"))
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeT.wav");
					}
					else
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\write.wav");
					}
				}
			}
			if (allVs->Length == 0 && HangManCount < 6) {
				HangManCount++;
				if (pGameParameters->gameSoundEnabled)
				{
					if (pGameParameters->themePath->Equals(Application::StartupPath + "\\..\\themes\\drake\\"))
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeF.wav");
					}
					else
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\write.wav");
					}
				}
				HangmanFigure->Image = Image::FromFile(pGameParameters->themePath + "hangman\\" + HangManCount + ".png");
				if (HangManCount == 6) {
					if (pGameParameters->gameSoundEnabled)
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeFull.wav");
					}
					if (pGameParameters->gameMode == GameMode::StoryMode) {
						pGameParameters->secretWords->RemoveAt(0);
						if (pGameParameters->secretWords->Count == 0) {
							for each(Control^ let in SecretWordPanel->Controls) {
								let->Visible = true;
							}
							pbFinishMainMenu->Visible = true;
						}
						else {
							for each(Control^ let in SecretWordPanel->Controls) {
								let->Visible = true;
							}
							Thread^ moveOnThread = gcnew Thread(gcnew ThreadStart(this, &GameScreen::storyModeMoveOn));
							moveOnThread->Start();
						}
					}
					else {
						pbFinishMainMenu->Visible = true;
						pbFinishPlayAgain->Visible = true;
						pbYouLose->Visible = true;
						// make all letters visible
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
					}
				}
			}
			else if (CorrectGuessCount == SecretWordLength) {
				if (pGameParameters->gameMode == GameMode::StoryMode) {
					pGameParameters->secretWords->RemoveAt(0);
					if (pGameParameters->secretWords->Count == 0) {
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
						pbFinishMainMenu->Visible = true;
					}
					else {
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
						Thread^ moveOnThread = gcnew Thread(gcnew ThreadStart(this, &GameScreen::storyModeMoveOn));
						moveOnThread->Start();
					}
				}
				else {
					pbFinishMainMenu->Visible = true;
					pbFinishPlayAgain->Visible = true;
					pbYouWin->Visible = true;
				}
			}

		}
		private: System::Void pbY_Click(System::Object^  sender, System::EventArgs^  e) {
			pbY->Visible = false;
			cli::array<Control^>^ allYs = SecretWordPanel->Controls->Find("pbLetterY", false);
			for each(Control^ y in allYs) {
				y->Visible = true;
				CorrectGuessCount++;
				if (pGameParameters->gameSoundEnabled)
				{
					if (pGameParameters->themePath->Equals(Application::StartupPath + "\\..\\themes\\drake\\"))
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeT.wav");
					}
					else
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\write.wav");
					}
				}
			}
			if (allYs->Length == 0 && HangManCount < 6) {
				HangManCount++;
				if (pGameParameters->gameSoundEnabled)
				{
					if (pGameParameters->themePath->Equals(Application::StartupPath + "\\..\\themes\\drake\\"))
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeF.wav");
					}
					else
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\write.wav");
					}
				}
				HangmanFigure->Image = Image::FromFile(pGameParameters->themePath + "hangman\\" + HangManCount + ".png");
				if (HangManCount == 6) {
					if (pGameParameters->gameSoundEnabled)
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeFull.wav");
					}
					if (pGameParameters->gameMode == GameMode::StoryMode) {
						pGameParameters->secretWords->RemoveAt(0);
						if (pGameParameters->secretWords->Count == 0) {
							for each(Control^ let in SecretWordPanel->Controls) {
								let->Visible = true;
							}
							pbFinishMainMenu->Visible = true;
						}
						else {
							for each(Control^ let in SecretWordPanel->Controls) {
								let->Visible = true;
							}
							Thread^ moveOnThread = gcnew Thread(gcnew ThreadStart(this, &GameScreen::storyModeMoveOn));
							moveOnThread->Start();
						}
					}
					else {
						pbFinishMainMenu->Visible = true;
						pbFinishPlayAgain->Visible = true;
						pbYouLose->Visible = true;
						// make all letters visible
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
					}
				}
			}
			else if (CorrectGuessCount == SecretWordLength) {
				if (pGameParameters->gameMode == GameMode::StoryMode) {
					pGameParameters->secretWords->RemoveAt(0);
					if (pGameParameters->secretWords->Count == 0) {
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
						pbFinishMainMenu->Visible = true;
					}
					else {
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
						Thread^ moveOnThread = gcnew Thread(gcnew ThreadStart(this, &GameScreen::storyModeMoveOn));
						moveOnThread->Start();
					}
				}
				else {
					pbFinishMainMenu->Visible = true;
					pbFinishPlayAgain->Visible = true;
					pbYouWin->Visible = true;
				}
			}

		}
		private: System::Void pbH_Click(System::Object^  sender, System::EventArgs^  e) {
			pbH->Visible = false;
			cli::array<Control^>^ allHs = SecretWordPanel->Controls->Find("pbLetterH", false);
			for each(Control^ h in allHs) {
				h->Visible = true;
				CorrectGuessCount++;
				if (pGameParameters->gameSoundEnabled)
				{
					if (pGameParameters->themePath->Equals(Application::StartupPath + "\\..\\themes\\drake\\"))
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeT.wav");
					}
					else
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\write.wav");
					}
				}
			}
			if (allHs->Length == 0 && HangManCount < 6) {
				HangManCount++;
				if (pGameParameters->gameSoundEnabled)
				{
					if (pGameParameters->themePath->Equals(Application::StartupPath + "\\..\\themes\\drake\\"))
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeF.wav");
					}
					else
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\write.wav");
					}
				}
				HangmanFigure->Image = Image::FromFile(pGameParameters->themePath + "hangman\\" + HangManCount + ".png");
				if (HangManCount == 6) {
					if (pGameParameters->gameSoundEnabled)
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeFull.wav");
					}
					if (pGameParameters->gameMode == GameMode::StoryMode) {
						pGameParameters->secretWords->RemoveAt(0);
						if (pGameParameters->secretWords->Count == 0) {
							for each(Control^ let in SecretWordPanel->Controls) {
								let->Visible = true;
							}
							pbFinishMainMenu->Visible = true;
						}
						else {
							for each(Control^ let in SecretWordPanel->Controls) {
								let->Visible = true;
							}
							Thread^ moveOnThread = gcnew Thread(gcnew ThreadStart(this, &GameScreen::storyModeMoveOn));
							moveOnThread->Start();
						}
					}
					else {
						pbFinishMainMenu->Visible = true;
						pbFinishPlayAgain->Visible = true;
						pbYouLose->Visible = true;
						// make all letters visible
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
					}
				}
			}
			else if (CorrectGuessCount == SecretWordLength) {
				if (pGameParameters->gameMode == GameMode::StoryMode) {
					pGameParameters->secretWords->RemoveAt(0);
					if (pGameParameters->secretWords->Count == 0) {
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
						pbFinishMainMenu->Visible = true;
					}
					else {
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
						Thread^ moveOnThread = gcnew Thread(gcnew ThreadStart(this, &GameScreen::storyModeMoveOn));
						moveOnThread->Start();
					}
				}
				else {
					pbFinishMainMenu->Visible = true;
					pbFinishPlayAgain->Visible = true;
					pbYouWin->Visible = true;
				}
			}

		}
		private: System::Void pbB_Click(System::Object^  sender, System::EventArgs^  e) {
			pbB->Visible = false;
			cli::array<Control^>^ allBs = SecretWordPanel->Controls->Find("pbLetterB", false);
			for each(Control^ b in allBs) {
				b->Visible = true;
				CorrectGuessCount++;
				if (pGameParameters->gameSoundEnabled)
				{
					if (pGameParameters->themePath->Equals(Application::StartupPath + "\\..\\themes\\drake\\"))
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeT.wav");
					}
					else
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\write.wav");
					}
				}
			}
			if (allBs->Length == 0 && HangManCount < 6) {
				HangManCount++;
				if (pGameParameters->gameSoundEnabled)
				{
					if (pGameParameters->themePath->Equals(Application::StartupPath + "\\..\\themes\\drake\\"))
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeF.wav");
					}
					else
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\write.wav");
					}
				}
				HangmanFigure->Image = Image::FromFile(pGameParameters->themePath + "hangman\\" + HangManCount + ".png");
				if (HangManCount == 6) {
					if (pGameParameters->gameSoundEnabled)
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeFull.wav");
					}
					if (pGameParameters->gameMode == GameMode::StoryMode) {
						pGameParameters->secretWords->RemoveAt(0);
						if (pGameParameters->secretWords->Count == 0) {
							for each(Control^ let in SecretWordPanel->Controls) {
								let->Visible = true;
							}
							pbFinishMainMenu->Visible = true;
						}
						else {
							for each(Control^ let in SecretWordPanel->Controls) {
								let->Visible = true;
							}
							Thread^ moveOnThread = gcnew Thread(gcnew ThreadStart(this, &GameScreen::storyModeMoveOn));
							moveOnThread->Start();
						}
					}
					else {
						pbFinishMainMenu->Visible = true;
						pbFinishPlayAgain->Visible = true;
						pbYouLose->Visible = true;
						// make all letters visible
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
					}
				}
			}
			else if (CorrectGuessCount == SecretWordLength) {
				if (pGameParameters->gameMode == GameMode::StoryMode) {
					pGameParameters->secretWords->RemoveAt(0);
					if (pGameParameters->secretWords->Count == 0) {
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
						pbFinishMainMenu->Visible = true;
					}
					else {
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
						Thread^ moveOnThread = gcnew Thread(gcnew ThreadStart(this, &GameScreen::storyModeMoveOn));
						moveOnThread->Start();
					}
				}
				else {
					pbFinishMainMenu->Visible = true;
					pbFinishPlayAgain->Visible = true;
					pbYouWin->Visible = true;
				}
			}

		}
		private: System::Void pbU_Click(System::Object^  sender, System::EventArgs^  e) {
			pbU->Visible = false;
			cli::array<Control^>^ allUs = SecretWordPanel->Controls->Find("pbLetterU", false);
			for each(Control^ u in allUs) {
				u->Visible = true;
				CorrectGuessCount++;
				if (pGameParameters->gameSoundEnabled)
				{
					if (pGameParameters->themePath->Equals(Application::StartupPath + "\\..\\themes\\drake\\"))
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeT.wav");
					}
					else
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\write.wav");
					}
				}
			}
			if (allUs->Length == 0 && HangManCount < 6) {
				HangManCount++;
				if (pGameParameters->gameSoundEnabled)
				{
					if (pGameParameters->themePath->Equals(Application::StartupPath + "\\..\\themes\\drake\\"))
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeF.wav");
					}
					else
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\write.wav");
					}
				}
				HangmanFigure->Image = Image::FromFile(pGameParameters->themePath + "hangman\\" + HangManCount + ".png");
				if (HangManCount == 6) {
					if (pGameParameters->gameSoundEnabled)
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeFull.wav");
					}
					if (pGameParameters->gameMode == GameMode::StoryMode) {
						pGameParameters->secretWords->RemoveAt(0);
						if (pGameParameters->secretWords->Count == 0) {
							for each(Control^ let in SecretWordPanel->Controls) {
								let->Visible = true;
							}
							pbFinishMainMenu->Visible = true;
						}
						else {
							for each(Control^ let in SecretWordPanel->Controls) {
								let->Visible = true;
							}
							Thread^ moveOnThread = gcnew Thread(gcnew ThreadStart(this, &GameScreen::storyModeMoveOn));
							moveOnThread->Start();
						}
					}
					else {
						pbFinishMainMenu->Visible = true;
						pbFinishPlayAgain->Visible = true;
						pbYouLose->Visible = true;
						// make all letters visible
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
					}
				}
			}
			else if (CorrectGuessCount == SecretWordLength) {
				if (pGameParameters->gameMode == GameMode::StoryMode) {
					pGameParameters->secretWords->RemoveAt(0);
					if (pGameParameters->secretWords->Count == 0) {
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
						pbFinishMainMenu->Visible = true;
					}
					else {
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
						Thread^ moveOnThread = gcnew Thread(gcnew ThreadStart(this, &GameScreen::storyModeMoveOn));
						moveOnThread->Start();
					}
				}
				else {
					pbFinishMainMenu->Visible = true;
					pbFinishPlayAgain->Visible = true;
					pbYouWin->Visible = true;
				}
			}

		}
		private: System::Void pbJ_Click(System::Object^  sender, System::EventArgs^  e) {
			pbJ->Visible = false;
			cli::array<Control^>^ allJs = SecretWordPanel->Controls->Find("pbLetterJ", false);
			for each(Control^ j in allJs) {
				j->Visible = true;
				CorrectGuessCount++;
				if (pGameParameters->gameSoundEnabled)
				{
					if (pGameParameters->themePath->Equals(Application::StartupPath + "\\..\\themes\\drake\\"))
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeT.wav");
					}
					else
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\write.wav");
					}
				}
			}
			if (allJs->Length == 0 && HangManCount < 6) {
				HangManCount++;
				if (pGameParameters->gameSoundEnabled)
				{
					if (pGameParameters->themePath->Equals(Application::StartupPath + "\\..\\themes\\drake\\"))
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeF.wav");
					}
					else
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\write.wav");
					}
				}
				HangmanFigure->Image = Image::FromFile(pGameParameters->themePath + "hangman\\" + HangManCount + ".png");
				if (HangManCount == 6) {
					if (pGameParameters->gameSoundEnabled)
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeFull.wav");
					}
					if (pGameParameters->gameMode == GameMode::StoryMode) {
						pGameParameters->secretWords->RemoveAt(0);
						if (pGameParameters->secretWords->Count == 0) {
							for each(Control^ let in SecretWordPanel->Controls) {
								let->Visible = true;
							}
							pbFinishMainMenu->Visible = true;
						}
						else {
							for each(Control^ let in SecretWordPanel->Controls) {
								let->Visible = true;
							}
							Thread^ moveOnThread = gcnew Thread(gcnew ThreadStart(this, &GameScreen::storyModeMoveOn));
							moveOnThread->Start();
						}
					}
					else {
						pbFinishMainMenu->Visible = true;
						pbFinishPlayAgain->Visible = true;
						pbYouLose->Visible = true;
						// make all letters visible
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
					}
				}
			}
			else if (CorrectGuessCount == SecretWordLength) {
				if (pGameParameters->gameMode == GameMode::StoryMode) {
					pGameParameters->secretWords->RemoveAt(0);
					if (pGameParameters->secretWords->Count == 0) {
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
						pbFinishMainMenu->Visible = true;
					}
					else {
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
						Thread^ moveOnThread = gcnew Thread(gcnew ThreadStart(this, &GameScreen::storyModeMoveOn));
						moveOnThread->Start();
					}
				}
				else {
					pbFinishMainMenu->Visible = true;
					pbFinishPlayAgain->Visible = true;
					pbYouWin->Visible = true;
				}
			}

		}
		private: System::Void pbN_Click(System::Object^  sender, System::EventArgs^  e) {
			pbN->Visible = false;
			cli::array<Control^>^ allNs = SecretWordPanel->Controls->Find("pbLetterN", false);
			for each(Control^ n in allNs) {
				n->Visible = true;
				CorrectGuessCount++;
				if (pGameParameters->gameSoundEnabled)
				{
					if (pGameParameters->themePath->Equals(Application::StartupPath + "\\..\\themes\\drake\\"))
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeT.wav");
					}
					else
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\write.wav");
					}
				}
			}
			if (allNs->Length == 0 && HangManCount < 6) {
				HangManCount++;
				if (pGameParameters->gameSoundEnabled)
				{
					if (pGameParameters->themePath->Equals(Application::StartupPath + "\\..\\themes\\drake\\"))
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeF.wav");
					}
					else
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\write.wav");
					}
				}
				HangmanFigure->Image = Image::FromFile(pGameParameters->themePath + "hangman\\" + HangManCount + ".png");
				if (HangManCount == 6) {
					if (pGameParameters->gameSoundEnabled)
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeFull.wav");
					}
					if (pGameParameters->gameMode == GameMode::StoryMode) {
						pGameParameters->secretWords->RemoveAt(0);
						if (pGameParameters->secretWords->Count == 0) {
							for each(Control^ let in SecretWordPanel->Controls) {
								let->Visible = true;
							}
							pbFinishMainMenu->Visible = true;
						}
						else {
							for each(Control^ let in SecretWordPanel->Controls) {
								let->Visible = true;
							}
							Thread^ moveOnThread = gcnew Thread(gcnew ThreadStart(this, &GameScreen::storyModeMoveOn));
							moveOnThread->Start();
						}
					}
					else {
						pbFinishMainMenu->Visible = true;
						pbFinishPlayAgain->Visible = true;
						pbYouLose->Visible = true;
						// make all letters visible
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
					}
				}
			}
			else if (CorrectGuessCount == SecretWordLength) {
				if (pGameParameters->gameMode == GameMode::StoryMode) {
					pGameParameters->secretWords->RemoveAt(0);
					if (pGameParameters->secretWords->Count == 0) {
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
						pbFinishMainMenu->Visible = true;
					}
					else {
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
						Thread^ moveOnThread = gcnew Thread(gcnew ThreadStart(this, &GameScreen::storyModeMoveOn));
						moveOnThread->Start();
					}
				}
				else {
					pbFinishMainMenu->Visible = true;
					pbFinishPlayAgain->Visible = true;
					pbYouWin->Visible = true;
				}
			}

		}
		private: System::Void pbI_Click(System::Object^  sender, System::EventArgs^  e) {
			pbI->Visible = false;
			cli::array<Control^>^ allIs = SecretWordPanel->Controls->Find("pbLetterI", false);
			for each(Control^ i in allIs) {
				i->Visible = true;
				CorrectGuessCount++;
				if (pGameParameters->gameSoundEnabled)
				{
					if (pGameParameters->themePath->Equals(Application::StartupPath + "\\..\\themes\\drake\\"))
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeT.wav");
					}
					else
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\write.wav");
					}
				}
			}
			if (allIs->Length == 0 && HangManCount < 6) {
				HangManCount++;
				if (pGameParameters->gameSoundEnabled)
				{
					if (pGameParameters->themePath->Equals(Application::StartupPath + "\\..\\themes\\drake\\"))
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeF.wav");
					}
					else
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\write.wav");
					}
				}
				HangmanFigure->Image = Image::FromFile(pGameParameters->themePath + "hangman\\" + HangManCount + ".png");
				if (HangManCount == 6) {
					if (pGameParameters->gameSoundEnabled)
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeFull.wav");
					}
					if (pGameParameters->gameMode == GameMode::StoryMode) {
						pGameParameters->secretWords->RemoveAt(0);
						if (pGameParameters->secretWords->Count == 0) {
							for each(Control^ let in SecretWordPanel->Controls) {
								let->Visible = true;
							}
							pbFinishMainMenu->Visible = true;
						}
						else {
							for each(Control^ let in SecretWordPanel->Controls) {
								let->Visible = true;
							}
							Thread^ moveOnThread = gcnew Thread(gcnew ThreadStart(this, &GameScreen::storyModeMoveOn));
							moveOnThread->Start();
						}
					}
					else {
						pbFinishMainMenu->Visible = true;
						pbFinishPlayAgain->Visible = true;
						pbYouLose->Visible = true;
						// make all letters visible
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
					}
				}
			}
			else if (CorrectGuessCount == SecretWordLength) {
				if (pGameParameters->gameMode == GameMode::StoryMode) {
					pGameParameters->secretWords->RemoveAt(0);
					if (pGameParameters->secretWords->Count == 0) {
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
						pbFinishMainMenu->Visible = true;
					}
					else {
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
						Thread^ moveOnThread = gcnew Thread(gcnew ThreadStart(this, &GameScreen::storyModeMoveOn));
						moveOnThread->Start();
					}
				}
				else {
					pbFinishMainMenu->Visible = true;
					pbFinishPlayAgain->Visible = true;
					pbYouWin->Visible = true;
				}
			}

		}
		private: System::Void pbK_Click(System::Object^  sender, System::EventArgs^  e) {
			pbK->Visible = false;
			cli::array<Control^>^ allKs = SecretWordPanel->Controls->Find("pbLetterK", false);
			for each(Control^ k in allKs) {
				k->Visible = true;
				CorrectGuessCount++;
				if (pGameParameters->gameSoundEnabled)
				{
					if (pGameParameters->themePath->Equals(Application::StartupPath + "\\..\\themes\\drake\\"))
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeT.wav");
					}
					else
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\write.wav");
					}
				}
			}
			if (allKs->Length == 0 && HangManCount < 6) {
				HangManCount++;
				if (pGameParameters->gameSoundEnabled)
				{
					if (pGameParameters->themePath->Equals(Application::StartupPath + "\\..\\themes\\drake\\"))
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeF.wav");
					}
					else
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\write.wav");
					}
				}
				HangmanFigure->Image = Image::FromFile(pGameParameters->themePath + "hangman\\" + HangManCount + ".png");
				if (HangManCount == 6) {
					if (pGameParameters->gameSoundEnabled)
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeFull.wav");
					}
					if (pGameParameters->gameMode == GameMode::StoryMode) {
						pGameParameters->secretWords->RemoveAt(0);
						if (pGameParameters->secretWords->Count == 0) {
							for each(Control^ let in SecretWordPanel->Controls) {
								let->Visible = true;
							}
							pbFinishMainMenu->Visible = true;
						}
						else {
							for each(Control^ let in SecretWordPanel->Controls) {
								let->Visible = true;
							}
							Thread^ moveOnThread = gcnew Thread(gcnew ThreadStart(this, &GameScreen::storyModeMoveOn));
							moveOnThread->Start();
						}
					}
					else {
						pbFinishMainMenu->Visible = true;
						pbFinishPlayAgain->Visible = true;
						pbYouLose->Visible = true;
						// make all letters visible
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
					}
				}
			}
			else if (CorrectGuessCount == SecretWordLength) {
				if (pGameParameters->gameMode == GameMode::StoryMode) {
					pGameParameters->secretWords->RemoveAt(0);
					if (pGameParameters->secretWords->Count == 0) {
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
						pbFinishMainMenu->Visible = true;
					}
					else {
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
						Thread^ moveOnThread = gcnew Thread(gcnew ThreadStart(this, &GameScreen::storyModeMoveOn));
						moveOnThread->Start();
					}
				}
				else {
					pbFinishMainMenu->Visible = true;
					pbFinishPlayAgain->Visible = true;
					pbYouWin->Visible = true;
				}
			}

		}
		private: System::Void pbM_Click(System::Object^  sender, System::EventArgs^  e) {
			pbM->Visible = false;
			cli::array<Control^>^ allMs = SecretWordPanel->Controls->Find("pbLetterM", false);
			for each(Control^ m in allMs) {
				m->Visible = true;
				CorrectGuessCount++;
				if (pGameParameters->gameSoundEnabled)
				{
					if (pGameParameters->themePath->Equals(Application::StartupPath + "\\..\\themes\\drake\\"))
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeT.wav");
					}
					else
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\write.wav");
					}
				}
			}
			if (allMs->Length == 0 && HangManCount < 6) {
				HangManCount++;
				if (pGameParameters->gameSoundEnabled)
				{
					if (pGameParameters->themePath->Equals(Application::StartupPath + "\\..\\themes\\drake\\"))
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeF.wav");
					}
					else
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\write.wav");
					}
				}
				HangmanFigure->Image = Image::FromFile(pGameParameters->themePath + "hangman\\" + HangManCount + ".png");
				if (HangManCount == 6) {
					if (pGameParameters->gameSoundEnabled)
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeFull.wav");
					}
					if (pGameParameters->gameMode == GameMode::StoryMode) {
						pGameParameters->secretWords->RemoveAt(0);
						if (pGameParameters->secretWords->Count == 0) {
							for each(Control^ let in SecretWordPanel->Controls) {
								let->Visible = true;
							}
							pbFinishMainMenu->Visible = true;
						}
						else {
							for each(Control^ let in SecretWordPanel->Controls) {
								let->Visible = true;
							}
							Thread^ moveOnThread = gcnew Thread(gcnew ThreadStart(this, &GameScreen::storyModeMoveOn));
							moveOnThread->Start();
						}
					}
					else {
						pbFinishMainMenu->Visible = true;
						pbFinishPlayAgain->Visible = true;
						pbYouLose->Visible = true;
						// make all letters visible
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
					}
				}
			}
			else if (CorrectGuessCount == SecretWordLength) {
				if (pGameParameters->gameMode == GameMode::StoryMode) {
					pGameParameters->secretWords->RemoveAt(0);
					if (pGameParameters->secretWords->Count == 0) {
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
						pbFinishMainMenu->Visible = true;
					}
					else {
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
						Thread^ moveOnThread = gcnew Thread(gcnew ThreadStart(this, &GameScreen::storyModeMoveOn));
						moveOnThread->Start();
					}
				}
				else {
					pbFinishMainMenu->Visible = true;
					pbFinishPlayAgain->Visible = true;
					pbYouWin->Visible = true;
				}
			}

		}
		private: System::Void pbO_Click(System::Object^  sender, System::EventArgs^  e) {
			pbO->Visible = false;
			cli::array<Control^>^ allOs = SecretWordPanel->Controls->Find("pbLetterO", false);
			for each(Control^ o in allOs) {
				o->Visible = true;
				CorrectGuessCount++;
				if (pGameParameters->gameSoundEnabled)
				{
					if (pGameParameters->themePath->Equals(Application::StartupPath + "\\..\\themes\\drake\\"))
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeT.wav");
					}
					else
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\write.wav");
					}
				}
			}
			if (allOs->Length == 0 && HangManCount < 6) {
				HangManCount++;
				if (pGameParameters->gameSoundEnabled)
				{
					if (pGameParameters->themePath->Equals(Application::StartupPath + "\\..\\themes\\drake\\"))
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeF.wav");
					}
					else
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\write.wav");
					}
				}
				HangmanFigure->Image = Image::FromFile(pGameParameters->themePath + "hangman\\" + HangManCount + ".png");
				if (HangManCount == 6) {
					if (pGameParameters->gameSoundEnabled)
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeFull.wav");
					}
					if (pGameParameters->gameMode == GameMode::StoryMode) {
						pGameParameters->secretWords->RemoveAt(0);
						if (pGameParameters->secretWords->Count == 0) {
							for each(Control^ let in SecretWordPanel->Controls) {
								let->Visible = true;
							}
							pbFinishMainMenu->Visible = true;
						}
						else {
							for each(Control^ let in SecretWordPanel->Controls) {
								let->Visible = true;
							}
							Thread^ moveOnThread = gcnew Thread(gcnew ThreadStart(this, &GameScreen::storyModeMoveOn));
							moveOnThread->Start();
						}
					}
					else {
						pbFinishMainMenu->Visible = true;
						pbFinishPlayAgain->Visible = true;
						pbYouLose->Visible = true;
						// make all letters visible
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
					}
				}
			}
			else if (CorrectGuessCount == SecretWordLength) {
				if (pGameParameters->gameMode == GameMode::StoryMode) {
					pGameParameters->secretWords->RemoveAt(0);
					if (pGameParameters->secretWords->Count == 0) {
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
						pbFinishMainMenu->Visible = true;
					}
					else {
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
						Thread^ moveOnThread = gcnew Thread(gcnew ThreadStart(this, &GameScreen::storyModeMoveOn));
						moveOnThread->Start();
					}
				}
				else {
					pbFinishMainMenu->Visible = true;
					pbFinishPlayAgain->Visible = true;
					pbYouWin->Visible = true;
				}
			}

		}
		private: System::Void pbL_Click(System::Object^  sender, System::EventArgs^  e) {
			pbL->Visible = false;
			cli::array<Control^>^ allLs = SecretWordPanel->Controls->Find("pbLetterL", false);
			for each(Control^ l in allLs) {
				l->Visible = true;
				CorrectGuessCount++;
				if (pGameParameters->gameSoundEnabled)
				{
					if (pGameParameters->themePath->Equals(Application::StartupPath + "\\..\\themes\\drake\\"))
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeT.wav");
					}
					else
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\write.wav");
					}
				}
			}
			if (allLs->Length == 0 && HangManCount < 6) {
				HangManCount++;
				if (pGameParameters->gameSoundEnabled)
				{
					if (pGameParameters->themePath->Equals(Application::StartupPath + "\\..\\themes\\drake\\"))
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeF.wav");
					}
					else
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\write.wav");
					}
				}
				HangmanFigure->Image = Image::FromFile(pGameParameters->themePath + "hangman\\" + HangManCount + ".png");
				if (HangManCount == 6) {
					if (pGameParameters->gameSoundEnabled)
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeFull.wav");
					}
					if (pGameParameters->gameMode == GameMode::StoryMode) {
						pGameParameters->secretWords->RemoveAt(0);
						if (pGameParameters->secretWords->Count == 0) {
							for each(Control^ let in SecretWordPanel->Controls) {
								let->Visible = true;
							}
							pbFinishMainMenu->Visible = true;
						}
						else {
							for each(Control^ let in SecretWordPanel->Controls) {
								let->Visible = true;
							}
							Thread^ moveOnThread = gcnew Thread(gcnew ThreadStart(this, &GameScreen::storyModeMoveOn));
							moveOnThread->Start();
						}
					}
					else {
						pbFinishMainMenu->Visible = true;
						pbFinishPlayAgain->Visible = true;
						pbYouLose->Visible = true;
						// make all letters visible
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
					}
				}
			}
			else if (CorrectGuessCount == SecretWordLength) {
				if (pGameParameters->gameMode == GameMode::StoryMode) {
					pGameParameters->secretWords->RemoveAt(0);
					if (pGameParameters->secretWords->Count == 0) {
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
						pbFinishMainMenu->Visible = true;
					}
					else {
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
						Thread^ moveOnThread = gcnew Thread(gcnew ThreadStart(this, &GameScreen::storyModeMoveOn));
						moveOnThread->Start();
					}
				}
				else {
					pbFinishMainMenu->Visible = true;
					pbFinishPlayAgain->Visible = true;
					pbYouWin->Visible = true;
				}
			}

		}
		private: System::Void pbP_Click(System::Object^  sender, System::EventArgs^  e) {
			pbP->Visible = false;
			cli::array<Control^>^ allPs = SecretWordPanel->Controls->Find("pbLetterP", false);
			for each(Control^ p in allPs) {
				p->Visible = true;
				CorrectGuessCount++;
				if (pGameParameters->gameSoundEnabled)
				{
					if (pGameParameters->themePath->Equals(Application::StartupPath + "\\..\\themes\\drake\\"))
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeT.wav");
					}
					else
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\write.wav");
					}
				}
			}
			if (allPs->Length == 0 && HangManCount < 6) {
				HangManCount++;
				if (pGameParameters->gameSoundEnabled)
				{
					if (pGameParameters->themePath->Equals(Application::StartupPath + "\\..\\themes\\drake\\"))
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeF.wav");
					}
					else
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\write.wav");
					}
				}
				HangmanFigure->Image = Image::FromFile(pGameParameters->themePath + "hangman\\" + HangManCount + ".png");
				if (HangManCount == 6) {
					if (pGameParameters->gameSoundEnabled)
					{
						HangmanSoundPlayer::PlayOnce(pGameParameters->themePath + "\\sfx\\writeFull.wav");
					}
					if (pGameParameters->gameMode == GameMode::StoryMode) {
						pGameParameters->secretWords->RemoveAt(0);
						if (pGameParameters->secretWords->Count == 0) {
							for each(Control^ let in SecretWordPanel->Controls) {
								let->Visible = true;
							}
							pbFinishMainMenu->Visible = true;
						}
						else {
							for each(Control^ let in SecretWordPanel->Controls) {
								let->Visible = true;
							}
							Thread^ moveOnThread = gcnew Thread(gcnew ThreadStart(this, &GameScreen::storyModeMoveOn));
							moveOnThread->Start();
						}
					}
					else {
						pbFinishMainMenu->Visible = true;
						pbFinishPlayAgain->Visible = true;
						pbYouLose->Visible = true;
						// make all letters visible
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
					}
				}
			}
			else if (CorrectGuessCount == SecretWordLength) {
				if (pGameParameters->gameMode == GameMode::StoryMode) {
					pGameParameters->secretWords->RemoveAt(0);
					if (pGameParameters->secretWords->Count == 0) {
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
						pbFinishMainMenu->Visible = true;
					}
					else {
						for each(Control^ let in SecretWordPanel->Controls) {
							let->Visible = true;
						}
						Thread^ moveOnThread = gcnew Thread(gcnew ThreadStart(this, &GameScreen::storyModeMoveOn));
						moveOnThread->Start();
					}
				}
				else {
					pbFinishMainMenu->Visible = true;
					pbFinishPlayAgain->Visible = true;
					pbYouWin->Visible = true;
				}
			}

		}

		private: System::Void pbFinishMainMenu_Click(System::Object^  sender, System::EventArgs^  e) {
			this->Owner->Show();
			this->Close();
		}

		private: System::Void pbFinishPlayAgain_Click(System::Object^  sender, System::EventArgs^  e) {
			try {
				pGameParameters->secretWords->Clear();
				if (pGameParameters->gameMode == GameMode::TraditionalSinglePlayer)
				{
					pGameParameters->secretWords->Add((gcnew Dictionary::DictionaryAPI())->generateWord(pGameParameters->wordDifficulty));
					GameScreen^ gs = gcnew GameScreen(pGameParameters);
					gs->Owner = this->Owner;
					gs->Show();
					this->Close();
				}
				else if (pGameParameters->gameMode == GameMode::LocalMultiPlayer)
				{
					InputPrompt^ ip = gcnew InputPrompt("Enter Word", "Enter a secret word for your peer to play", true);
					if (ip->getUserInput() != "")
					{
						Dictionary::DictionaryAPI dapi;
						Dictionary::Word^ word = gcnew Dictionary::Word(ip->getUserInput());
						if (dapi.isWordPlayable(word, pGameParameters->wordDifficulty))
						{
							pGameParameters->secretWords->Add(word);
							GameScreen^ gs = gcnew GameScreen(pGameParameters);
							gs->Owner = this->Owner;
							gs->Show();
							this->Close();
						}
						else
						{
							MessageBox::Show("The word you entered is not playable! Please try again.", "Word not playable", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
						}
					}
				}
			}
			catch (Dictionary::DictionaryAPI::DictionaryAPIConnectionException^ e)
			{
				MessageBox::Show(e->what(), "Dictionary Failure", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			catch (Dictionary::FileException^ e)
			{
				MessageBox::Show(e->what(), "Dictionary Failure", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		private: System::Void pbMainMenu_Click(System::Object^  sender, System::EventArgs^  e) {
			this->Owner->Show();
			this->Close();
		}
		private: System::Void pbMute_Click(System::Object^  sender, System::EventArgs^  e) {
			if (pGameParameters->gameSoundEnabled)
			{
				HangmanSoundPlayer::StopPlayLooping();
				pbMute->Image = Image::FromFile(pGameParameters->themePath + "mute.png");
				pGameParameters->gameSoundEnabled = false;
			}
			else
			{
				pbMute->Image = Image::FromFile(pGameParameters->themePath + "volume.png");
				pGameParameters->gameSoundEnabled = true;
			}
		}
		private: System::Void pbHint_Click(System::Object^  sender, System::EventArgs^  e) {
			MessageBox::Show(hint, "Hangman++ Hint", MessageBoxButtons::OK);
		}
		private: System::Void GameScreen_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			if (!pbFinishMainMenu->Visible)
			{
				switch (e->KeyCode) {
				case Keys::A:
					pbA_Click(nullptr, nullptr);
					break;
				case Keys::B:
					pbB_Click(nullptr, nullptr);
					break;
				case Keys::C:
					pbC_Click(nullptr, nullptr);
					break;
				case Keys::D:
					pbD_Click(nullptr, nullptr);
					break;
				case Keys::E:
					pbE_Click(nullptr, nullptr);
					break;
				case Keys::F:
					pbF_Click(nullptr, nullptr);
					break;
				case Keys::G:
					pbG_Click(nullptr, nullptr);
					break;
				case Keys::H:
					pbH_Click(nullptr, nullptr);
					break;
				case Keys::I:
					pbI_Click(nullptr, nullptr);
					break;
				case Keys::J:
					pbJ_Click(nullptr, nullptr);
					break;
				case Keys::K:
					pbK_Click(nullptr, nullptr);
					break;
				case Keys::L:
					pbL_Click(nullptr, nullptr);
					break;
				case Keys::M:
					pbM_Click(nullptr, nullptr);
					break;
				case Keys::N:
					pbN_Click(nullptr, nullptr);
					break;
				case Keys::O:
					pbO_Click(nullptr, nullptr);
					break;
				case Keys::P:
					pbP_Click(nullptr, nullptr);
					break;
				case Keys::Q:
					pbQ_Click(nullptr, nullptr);
					break;
				case Keys::R:
					pbR_Click(nullptr, nullptr);
					break;
				case Keys::S:
					pbS_Click(nullptr, nullptr);
					break;
				case Keys::T:
					pbT_Click(nullptr, nullptr);
					break;
				case Keys::U:
					pbU_Click(nullptr, nullptr);
					break;
				case Keys::V:
					pbV_Click(nullptr, nullptr);
					break;
				case Keys::W:
					pbW_Click(nullptr, nullptr);
					break;
				case Keys::X:
					pbX_Click(nullptr, nullptr);
					break;
				case Keys::Y:
					pbY_Click(nullptr, nullptr);
					break;
				case Keys::Z:
					pbZ_Click(nullptr, nullptr);
				}
			}
		}
		private: System::Void pbFinishMainMenu_VisibleChanged(System::Object^  sender, System::EventArgs^  e) {
			KeyboardPanel->Enabled = !pbFinishMainMenu->Visible;
		}
		};
	}
}