#pragma once
#include "GameParameters.h"
#include "GameScreen.h"
#include "StoryMode.h"
#include "InputPrompt.h"
#include "..\Dictionary\Dictionary.h"
#include "HangmanSoundPlayer.h"

namespace HangmanPP {

	namespace Game {

		using namespace System;
		using namespace System::ComponentModel;
		using namespace System::Collections;
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		/// <summary>
		/// Summary for HomeScreen
		/// </summary>
		public ref class HomeScreen : public System::Windows::Forms::Form
		{
		public:
			HomeScreen()
			{
				InitializeComponent();
				//
				//TODO: Add the constructor code here
				//
			}
		private: System::Windows::Forms::ComboBox^  cbDifficulty;
		public:

		private: GameParameters^ gp = gcnew GameParameters();

				 void loadTheme()
				 {
					 this->BackgroundImage = Image::FromFile(gp->themePath + "texture.png");
					 if (gp->gameSoundEnabled)
					 {
						 pbSound->Image = Image::FromFile(gp->themePath + "volume.png");
					 }
					 else
					 {
						 pbSound->Image = Image::FromFile(gp->themePath + "mute.png");
					 }
					 pbTitle->BackgroundImage = Image::FromFile(gp->themePath + "title.png");
					 pbExit->BackgroundImage = Image::FromFile(gp->themePath + "\\..\\exit.png");
					 pbSinglePlayer->BackgroundImage = Image::FromFile(gp->themePath + "\\gameModes\\singlePlayer.png");
					 pbTrad->BackgroundImage = Image::FromFile(gp->themePath + "\\gameModes\\traditional.png");
					 pbSpeed->BackgroundImage = Image::FromFile(gp->themePath + "\\gameModes\\speedMode.png");
					 pbStory->BackgroundImage = Image::FromFile(gp->themePath + "\\gameModes\\storyMode.png");
					 pbMultiPlayer->BackgroundImage = Image::FromFile(gp->themePath + "\\gameModes\\multiplayer.png");
					 pbLocal->BackgroundImage = Image::FromFile(gp->themePath + "\\gameModes\\localMultiplayer.png");
					 pbOnline->BackgroundImage = Image::FromFile(gp->themePath + "\\gameModes\\onlineMultiplayer.png");
					 pbTheme1->BackgroundImage = Image::FromFile(gp->themePath + "\\..\\preview1.png");
					 pbTheme2->BackgroundImage = Image::FromFile(gp->themePath + "\\..\\preview2.png");
					 pbTheme3->BackgroundImage = Image::FromFile(gp->themePath + "\\..\\preview3.png");
					 pbTheme4->BackgroundImage = Image::FromFile(gp->themePath + "\\..\\preview4.png");
				 }

		protected:
			/// <summary>
			/// Clean up any resources being used.
			/// </summary>
			~HomeScreen()
			{
				if (components)
				{
					delete components;
				}
			}

		private: System::Windows::Forms::PictureBox^  pbSinglePlayer;
		private: System::Windows::Forms::PictureBox^  pbMultiPlayer;
		private: System::Windows::Forms::PictureBox^  pbSound;
		private: System::Windows::Forms::Panel^  pnlMenu;
		private: System::Windows::Forms::PictureBox^  pbSpeed;
		private: System::Windows::Forms::PictureBox^  pbOnline;
		private: System::Windows::Forms::PictureBox^  pbStory;
		private: System::Windows::Forms::PictureBox^  pbTrad;
		private: System::Windows::Forms::PictureBox^  pbLocal;
		private: System::Windows::Forms::PictureBox^  pbTheme1;
		private: System::Windows::Forms::PictureBox^  pbTheme2;
		private: System::Windows::Forms::PictureBox^  pbTheme3;
		private: System::Windows::Forms::PictureBox^  pbTheme4;
		private: System::Windows::Forms::Panel^  pnlThemes;
		private: System::Windows::Forms::PictureBox^  pbTitle;
		private: System::Windows::Forms::PictureBox^  pbRules;
		private: System::Windows::Forms::PictureBox^  pbExit;

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
				this->pbSinglePlayer = (gcnew System::Windows::Forms::PictureBox());
				this->pbMultiPlayer = (gcnew System::Windows::Forms::PictureBox());
				this->pbSound = (gcnew System::Windows::Forms::PictureBox());
				this->pnlMenu = (gcnew System::Windows::Forms::Panel());
				this->pbLocal = (gcnew System::Windows::Forms::PictureBox());
				this->pbTrad = (gcnew System::Windows::Forms::PictureBox());
				this->pbSpeed = (gcnew System::Windows::Forms::PictureBox());
				this->pbOnline = (gcnew System::Windows::Forms::PictureBox());
				this->pbStory = (gcnew System::Windows::Forms::PictureBox());
				this->pbTheme1 = (gcnew System::Windows::Forms::PictureBox());
				this->pbTheme2 = (gcnew System::Windows::Forms::PictureBox());
				this->pbTheme3 = (gcnew System::Windows::Forms::PictureBox());
				this->pbTheme4 = (gcnew System::Windows::Forms::PictureBox());
				this->pnlThemes = (gcnew System::Windows::Forms::Panel());
				this->pbTitle = (gcnew System::Windows::Forms::PictureBox());
				this->pbRules = (gcnew System::Windows::Forms::PictureBox());
				this->pbExit = (gcnew System::Windows::Forms::PictureBox());
				this->cbDifficulty = (gcnew System::Windows::Forms::ComboBox());
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbSinglePlayer))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbMultiPlayer))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbSound))->BeginInit();
				this->pnlMenu->SuspendLayout();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbLocal))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbTrad))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbSpeed))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbOnline))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbStory))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbTheme1))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbTheme2))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbTheme3))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbTheme4))->BeginInit();
				this->pnlThemes->SuspendLayout();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbTitle))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbRules))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbExit))->BeginInit();
				this->SuspendLayout();
				// 
				// pbSinglePlayer
				// 
				this->pbSinglePlayer->BackColor = System::Drawing::Color::Transparent;
				this->pbSinglePlayer->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pbSinglePlayer->Location = System::Drawing::Point(158, 3);
				this->pbSinglePlayer->Name = L"pbSinglePlayer";
				this->pbSinglePlayer->Size = System::Drawing::Size(450, 100);
				this->pbSinglePlayer->TabIndex = 5;
				this->pbSinglePlayer->TabStop = false;
				// 
				// pbMultiPlayer
				// 
				this->pbMultiPlayer->BackColor = System::Drawing::Color::Transparent;
				this->pbMultiPlayer->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pbMultiPlayer->Location = System::Drawing::Point(158, 321);
				this->pbMultiPlayer->Name = L"pbMultiPlayer";
				this->pbMultiPlayer->Size = System::Drawing::Size(450, 100);
				this->pbMultiPlayer->TabIndex = 6;
				this->pbMultiPlayer->TabStop = false;
				// 
				// pbSound
				// 
				this->pbSound->BackColor = System::Drawing::Color::Transparent;
				this->pbSound->Cursor = System::Windows::Forms::Cursors::Hand;
				this->pbSound->Location = System::Drawing::Point(12, 13);
				this->pbSound->Name = L"pbSound";
				this->pbSound->Size = System::Drawing::Size(70, 70);
				this->pbSound->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pbSound->TabIndex = 9;
				this->pbSound->TabStop = false;
				this->pbSound->Click += gcnew System::EventHandler(this, &HomeScreen::pbSound_Click);
				// 
				// pnlMenu
				// 
				this->pnlMenu->BackColor = System::Drawing::Color::Transparent;
				this->pnlMenu->Controls->Add(this->pbLocal);
				this->pnlMenu->Controls->Add(this->pbTrad);
				this->pnlMenu->Controls->Add(this->pbSpeed);
				this->pnlMenu->Controls->Add(this->pbOnline);
				this->pnlMenu->Controls->Add(this->pbStory);
				this->pnlMenu->Controls->Add(this->pbSinglePlayer);
				this->pnlMenu->Controls->Add(this->pbMultiPlayer);
				this->pnlMenu->Location = System::Drawing::Point(225, 146);
				this->pnlMenu->Name = L"pnlMenu";
				this->pnlMenu->Size = System::Drawing::Size(761, 633);
				this->pnlMenu->TabIndex = 10;
				// 
				// pbLocal
				// 
				this->pbLocal->BackColor = System::Drawing::Color::Transparent;
				this->pbLocal->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pbLocal->Cursor = System::Windows::Forms::Cursors::Hand;
				this->pbLocal->Location = System::Drawing::Point(158, 424);
				this->pbLocal->Name = L"pbLocal";
				this->pbLocal->Size = System::Drawing::Size(450, 100);
				this->pbLocal->TabIndex = 11;
				this->pbLocal->TabStop = false;
				this->pbLocal->Click += gcnew System::EventHandler(this, &HomeScreen::pbLocal_Click);
				// 
				// pbTrad
				// 
				this->pbTrad->BackColor = System::Drawing::Color::Transparent;
				this->pbTrad->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pbTrad->Cursor = System::Windows::Forms::Cursors::Hand;
				this->pbTrad->Location = System::Drawing::Point(161, 62);
				this->pbTrad->Name = L"pbTrad";
				this->pbTrad->Size = System::Drawing::Size(450, 100);
				this->pbTrad->TabIndex = 10;
				this->pbTrad->TabStop = false;
				this->pbTrad->Click += gcnew System::EventHandler(this, &HomeScreen::pbTrad_Click);
				// 
				// pbSpeed
				// 
				this->pbSpeed->BackColor = System::Drawing::Color::Transparent;
				this->pbSpeed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pbSpeed->Cursor = System::Windows::Forms::Cursors::Hand;
				this->pbSpeed->Location = System::Drawing::Point(158, 109);
				this->pbSpeed->Name = L"pbSpeed";
				this->pbSpeed->Size = System::Drawing::Size(450, 100);
				this->pbSpeed->TabIndex = 9;
				this->pbSpeed->TabStop = false;
				// 
				// pbOnline
				// 
				this->pbOnline->BackColor = System::Drawing::Color::Transparent;
				this->pbOnline->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pbOnline->Cursor = System::Windows::Forms::Cursors::Hand;
				this->pbOnline->Location = System::Drawing::Point(158, 530);
				this->pbOnline->Name = L"pbOnline";
				this->pbOnline->Size = System::Drawing::Size(450, 100);
				this->pbOnline->TabIndex = 8;
				this->pbOnline->TabStop = false;
				// 
				// pbStory
				// 
				this->pbStory->BackColor = System::Drawing::Color::Transparent;
				this->pbStory->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pbStory->Cursor = System::Windows::Forms::Cursors::Hand;
				this->pbStory->Location = System::Drawing::Point(158, 215);
				this->pbStory->Name = L"pbStory";
				this->pbStory->Size = System::Drawing::Size(450, 100);
				this->pbStory->TabIndex = 7;
				this->pbStory->TabStop = false;
				this->pbStory->Click += gcnew System::EventHandler(this, &HomeScreen::pbStory_Click);
				// 
				// pbTheme1
				// 
				this->pbTheme1->BackColor = System::Drawing::Color::Transparent;
				this->pbTheme1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
				this->pbTheme1->Cursor = System::Windows::Forms::Cursors::Hand;
				this->pbTheme1->Location = System::Drawing::Point(7, 8);
				this->pbTheme1->Name = L"pbTheme1";
				this->pbTheme1->Size = System::Drawing::Size(229, 165);
				this->pbTheme1->TabIndex = 3;
				this->pbTheme1->TabStop = false;
				this->pbTheme1->Click += gcnew System::EventHandler(this, &HomeScreen::pbTheme1_Click);
				// 
				// pbTheme2
				// 
				this->pbTheme2->BackColor = System::Drawing::Color::Transparent;
				this->pbTheme2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
				this->pbTheme2->Cursor = System::Windows::Forms::Cursors::Hand;
				this->pbTheme2->Location = System::Drawing::Point(256, 8);
				this->pbTheme2->Name = L"pbTheme2";
				this->pbTheme2->Size = System::Drawing::Size(229, 165);
				this->pbTheme2->TabIndex = 4;
				this->pbTheme2->TabStop = false;
				this->pbTheme2->Click += gcnew System::EventHandler(this, &HomeScreen::pbTheme2_Click);
				// 
				// pbTheme3
				// 
				this->pbTheme3->BackColor = System::Drawing::Color::Transparent;
				this->pbTheme3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
				this->pbTheme3->Cursor = System::Windows::Forms::Cursors::Hand;
				this->pbTheme3->Location = System::Drawing::Point(504, 8);
				this->pbTheme3->Name = L"pbTheme3";
				this->pbTheme3->Size = System::Drawing::Size(229, 165);
				this->pbTheme3->TabIndex = 5;
				this->pbTheme3->TabStop = false;
				this->pbTheme3->Click += gcnew System::EventHandler(this, &HomeScreen::pbTheme3_Click);
				// 
				// pbTheme4
				// 
				this->pbTheme4->BackColor = System::Drawing::Color::Transparent;
				this->pbTheme4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
				this->pbTheme4->Cursor = System::Windows::Forms::Cursors::Hand;
				this->pbTheme4->Location = System::Drawing::Point(504, 8);
				this->pbTheme4->Name = L"pbTheme4";
				this->pbTheme4->Size = System::Drawing::Size(229, 165);
				this->pbTheme4->TabIndex = 5;
				this->pbTheme4->TabStop = false;
				this->pbTheme4->Click += gcnew System::EventHandler(this, &HomeScreen::pbTheme4_Click);
				// 
				// pnlThemes
				// 
				this->pnlThemes->AutoScroll = true;
				this->pnlThemes->BackColor = System::Drawing::Color::Transparent;
				this->pnlThemes->Controls->Add(this->pbTheme4);
				this->pnlThemes->Controls->Add(this->pbTheme3);
				this->pnlThemes->Controls->Add(this->pbTheme2);
				this->pnlThemes->Controls->Add(this->pbTheme1);
				this->pnlThemes->Location = System::Drawing::Point(225, 785);
				this->pnlThemes->Name = L"pnlThemes";
				this->pnlThemes->Size = System::Drawing::Size(740, 181);
				this->pnlThemes->TabIndex = 7;
				// 
				// pbTitle
				// 
				this->pbTitle->BackColor = System::Drawing::Color::Transparent;
				this->pbTitle->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
				this->pbTitle->Location = System::Drawing::Point(225, 12);
				this->pbTitle->Name = L"pbTitle";
				this->pbTitle->Size = System::Drawing::Size(761, 128);
				this->pbTitle->TabIndex = 11;
				this->pbTitle->TabStop = false;
				// 
				// pbRules
				// 
				this->pbRules->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pbRules->Cursor = System::Windows::Forms::Cursors::Hand;
				this->pbRules->Location = System::Drawing::Point(1195, 12);
				this->pbRules->Name = L"pbRules";
				this->pbRules->Size = System::Drawing::Size(70, 70);
				this->pbRules->TabIndex = 12;
				this->pbRules->TabStop = false;
				this->pbRules->Click += gcnew System::EventHandler(this, &HomeScreen::pbRules_Click);
				// 
				// pbExit
				// 
				this->pbExit->BackColor = System::Drawing::Color::Transparent;
				this->pbExit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pbExit->Cursor = System::Windows::Forms::Cursors::Hand;
				this->pbExit->Location = System::Drawing::Point(1119, 13);
				this->pbExit->Name = L"pbExit";
				this->pbExit->Size = System::Drawing::Size(70, 70);
				this->pbExit->TabIndex = 13;
				this->pbExit->TabStop = false;
				this->pbExit->Click += gcnew System::EventHandler(this, &HomeScreen::pbExit_Click);
				// 
				// cbDifficulty
				// 
				this->cbDifficulty->FormattingEnabled = true;
				this->cbDifficulty->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Easy Mode", L"Medium Mode", L"Hard Mode" });
				this->cbDifficulty->Location = System::Drawing::Point(1049, 149);
				this->cbDifficulty->Name = L"cbDifficulty";
				this->cbDifficulty->Size = System::Drawing::Size(90, 21);
				this->cbDifficulty->TabIndex = 14;
				this->cbDifficulty->SelectedIndexChanged += gcnew System::EventHandler(this, &HomeScreen::cbDifficulty_SelectedIndexChanged);
				// 
				// HomeScreen
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->ClientSize = System::Drawing::Size(1277, 920);
				this->ControlBox = false;
				this->Controls->Add(this->cbDifficulty);
				this->Controls->Add(this->pbExit);
				this->Controls->Add(this->pbRules);
				this->Controls->Add(this->pbTitle);
				this->Controls->Add(this->pnlThemes);
				this->Controls->Add(this->pnlMenu);
				this->Controls->Add(this->pbSound);
				this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
				this->Name = L"HomeScreen";
				this->Load += gcnew System::EventHandler(this, &HomeScreen::HomeScreen_Load);
				this->VisibleChanged += gcnew System::EventHandler(this, &HomeScreen::HomeScreen_VisibleChanged);
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbSinglePlayer))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbMultiPlayer))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbSound))->EndInit();
				this->pnlMenu->ResumeLayout(false);
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbLocal))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbTrad))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbSpeed))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbOnline))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbStory))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbTheme1))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbTheme2))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbTheme3))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbTheme4))->EndInit();
				this->pnlThemes->ResumeLayout(false);
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbTitle))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbRules))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbExit))->EndInit();
				this->ResumeLayout(false);

			}
#pragma endregion

		private: System::Void HomeScreen_Load(System::Object^  sender, System::EventArgs^  e) {
			this->DesktopBounds = Screen::PrimaryScreen->Bounds;
			gp->themePath = Application::StartupPath + "\\..\\themes\\chalkboard\\";
			HangmanSoundPlayer::PlayLooping("music.wav");
			this->BackgroundImage = Image::FromFile(gp->themePath + "texture.png");
			pbSound->Image = Image::FromFile(gp->themePath + "volume.png");
			pbTitle->BackgroundImage = Image::FromFile(gp->themePath + "title.png");
			pbExit->BackgroundImage = Image::FromFile(gp->themePath + "\\..\\exit.png");
			pbRules->BackgroundImage = Image::FromFile(gp->themePath + "\\..\\rules.png");
			pbSinglePlayer->BackgroundImage = Image::FromFile(gp->themePath + "\\gameModes\\singlePlayer.png");
			pbTrad->BackgroundImage = Image::FromFile(gp->themePath + "\\gameModes\\traditional.png");
			pbSpeed->BackgroundImage = Image::FromFile(gp->themePath + "\\gameModes\\speedMode.png");
			pbStory->BackgroundImage = Image::FromFile(gp->themePath + "\\gameModes\\storyMode.png");
			pbMultiPlayer->BackgroundImage = Image::FromFile(gp->themePath + "\\gameModes\\multiplayer.png");
			pbLocal->BackgroundImage = Image::FromFile(gp->themePath + "\\gameModes\\localMultiplayer.png");
			pbOnline->BackgroundImage = Image::FromFile(gp->themePath + "\\gameModes\\onlineMultiplayer.png");
			pbTheme1->BackgroundImage = Image::FromFile(gp->themePath + "\\..\\preview1.png");
			pbTheme2->BackgroundImage = Image::FromFile(gp->themePath + "\\..\\preview2.png");
			pbTheme3->BackgroundImage = Image::FromFile(gp->themePath + "\\..\\preview3.png");
			pbTheme4->BackgroundImage = Image::FromFile(gp->themePath + "\\..\\preview4.png");
			pbSound->Location = Point(this->Size.Width / 60, this->Size.Height / 30);
			pbRules->Location = Point(this->Size.Width - pbRules->Size.Width - 40, this->Size.Height / 30);
			pbExit->Location = Point(pbRules->Location.X - pbExit->Size.Width - 10, this->Size.Height / 30);
			pbTitle->Location = Point((this->Size.Width / 2) - (pbTitle->Size.Width / 2), this->Size.Height / 16);
			cbDifficulty->Location = Point(pbSound->Location.X + pbSound->Size.Width + 10, this->Size.Height / 30);
			cbDifficulty->SelectedIndex = 0;
			pnlMenu->Size = Drawing::Size(this->Size.Width / 2, this->Size.Height / 1.5);
			pnlMenu->Location = Point((this->Size.Width / 2) - (pnlMenu->Size.Width / 2), pbTitle->Location.Y + pbTitle->Size.Height);
			pbSinglePlayer->Location = Point((pnlMenu->Size.Width / 2) - (pbSinglePlayer->Size.Width / 2), pnlMenu->Size.Height / 16);
			pbTrad->Size = Drawing::Size(pbSinglePlayer->Size.Width / 1.75, pbSinglePlayer->Size.Height / 1.75);
			pbTrad->Location = Point((pnlMenu->Size.Width / 2) - (pbTrad->Size.Width / 2), pbSinglePlayer->Location.Y + pbSinglePlayer->Size.Height + 10);
			pbSpeed->Size = Drawing::Size(pbSinglePlayer->Size.Width / 1.75, pbSinglePlayer->Size.Height / 1.75);
			pbSpeed->Location = Point((pnlMenu->Size.Width / 2) - (pbSpeed->Size.Width / 2), pbTrad->Location.Y + pbSpeed->Size.Height + 5);
			pbStory->Size = Drawing::Size(pbSinglePlayer->Size.Width / 1.75, pbSinglePlayer->Size.Height / 1.75);
			pbStory->Location = Point((pnlMenu->Size.Width / 2) - (pbStory->Size.Width / 2), pbSpeed->Location.Y + pbStory->Size.Height + 5);
			pbMultiPlayer->Location = Point((pnlMenu->Size.Width / 2) - (pbMultiPlayer->Size.Width / 2), pbStory->Location.Y + pbStory->Size.Height + 5);
			pbLocal->Size = Drawing::Size(pbSinglePlayer->Size.Width / 1.75, pbSinglePlayer->Size.Height / 1.75);
			pbLocal->Location = Point((pnlMenu->Size.Width / 2) - (pbLocal->Size.Width / 2), pbMultiPlayer->Location.Y + pbMultiPlayer->Size.Height + 5);
			pbOnline->Size = Drawing::Size(pbSinglePlayer->Size.Width / 1.75, pbSinglePlayer->Size.Height / 1.75);
			pbOnline->Location = Point((pnlMenu->Size.Width / 2) - (pbOnline->Size.Width / 2), pbLocal->Location.Y + pbLocal->Size.Height + 5);
			pnlThemes->Size = Drawing::Size(this->Size.Width - 60, this->Size.Height / 8);
			pnlThemes->Location = Point(30, this->Size.Height - pnlThemes->Size.Height - 35);
			pbTheme1->Size = Drawing::Size(pnlThemes->Size.Width / 6, pnlThemes->Size.Height - 20);
			pbTheme1->Location = Point(10, 10);
			pbTheme2->Size = Drawing::Size(pnlThemes->Size.Width / 6, pnlThemes->Size.Height - 20);
			pbTheme2->Location = Point(pbTheme1->Location.X + pbTheme1->Size.Width + 10, 10);
			pbTheme3->Size = Drawing::Size(pnlThemes->Size.Width / 6, pnlThemes->Size.Height - 20);
			pbTheme3->Location = Point(pbTheme2->Location.X + pbTheme2->Size.Width + 10, 10);
			pbTheme4->Size = Drawing::Size(pnlThemes->Size.Width / 6, pnlThemes->Size.Height - 20);
			pbTheme4->Location = Point(pbTheme3->Location.X + pbTheme3->Size.Width + 10, 10);
		}

		private: System::Void pbTheme1_Click(System::Object^  sender, System::EventArgs^  e) {
			gp->themePath = Application::StartupPath + "\\..\\themes\\chalkboard\\";
			if (gp->gameSoundEnabled)
			{
				HangmanSoundPlayer::PlayLooping("music.wav");
			}
			loadTheme();
		}
		private: System::Void pbTheme2_Click(System::Object^  sender, System::EventArgs^  e) {
			gp->themePath = Application::StartupPath + "\\..\\themes\\whiteboard\\";
			if (gp->gameSoundEnabled)
			{
				HangmanSoundPlayer::PlayLooping("music.wav");
			}
			loadTheme();
		}
		private: System::Void pbTheme3_Click(System::Object^  sender, System::EventArgs^  e) {
			gp->themePath = Application::StartupPath + "\\..\\themes\\linedPaper\\";
			if (gp->gameSoundEnabled)
			{
				HangmanSoundPlayer::PlayLooping("music.wav");
			}
			loadTheme();
		}
		private: System::Void pbTheme4_Click(System::Object^  sender, System::EventArgs^  e) {
			gp->themePath = Application::StartupPath + "\\..\\themes\\drake\\";
			if (gp->gameSoundEnabled)
			{
				HangmanSoundPlayer::PlayLooping(gp->themePath + "sfx\\music.wav");
			}
			loadTheme();
		}
		private: System::Void pbTrad_Click(System::Object^  sender, System::EventArgs^  e) {
			try {
				gp->secretWords->Add((gcnew Dictionary::DictionaryAPI())->generateWord(gp->wordDifficulty));
				gp->gameMode = GameMode::TraditionalSinglePlayer;
				GameScreen^ gs = gcnew GameScreen(gp);
				gs->Owner = this;
				gs->Show();
				this->Hide();
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
		private: System::Void pbExit_Click(System::Object^  sender, System::EventArgs^  e) {
			if (MessageBox::Show("Are you sure you would like to exit Hangman++?", "", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)
			{
				Application::Exit();
			}
		}
		private: System::Void pbSound_Click(System::Object^  sender, System::EventArgs^  e) { //incomplete: don't know how to check whether music is playing or not to turn on/off sound properly
			if (gp->gameSoundEnabled)
			{
				HangmanSoundPlayer::StopPlayLooping();
				pbSound->Image = Image::FromFile(gp->themePath + "mute.png");
				gp->gameSoundEnabled = false;
			}
			else
			{
				if (gp->themePath->Equals(Application::StartupPath + "\\..\\themes\\drake\\"))
				{
					HangmanSoundPlayer::PlayLooping(gp->themePath + "\\sfx\\music.wav");
				}
				else
				{
					HangmanSoundPlayer::PlayLooping("music.wav");
				}
				pbSound->Image = Image::FromFile(gp->themePath + "volume.png");
				gp->gameSoundEnabled = true;
			}

		}
		private: System::Void pbRules_Click(System::Object^  sender, System::EventArgs^  e) {
			MessageBox::Show("How to Play\nGuess the word! Choose a letter with the keyboard or mouse and see if it fills in one of the blanks on the screen. If you guess wrong, a piece of the Hangman will be drawn. If the entire Hangman is drawn, you lose the game. When you play in Easy mode, you are given the definition of the word and an example sentence. In Medium, you are only given an example sentence, and Hard difficulty doesn't supply hints at all.\n\nSpeed Mode\nThink you're fast? The clock will be set to 2 minutes - try to guess as many words as you can. The more you guess correct, the higher your score.\n\nStory Mode\nHangman with a Story! Choose a story and play Hangman for each missing word. Once all the words have been guessed, the story is revealed. Win as many games as you can for a higher score.\n\nLocal Multiplayer\nYou can play Hangman with a friend, or two, or a few. Just have someone suggest a word to the game - then the rest of the group can choose letters together.\n\nOnline Multiplayer\nConnect with a friend online through MySQL. You will both be given the same word, and whoever guesses first wins. You'll be shown their progress in real time.", "Hangman++ Rules", MessageBoxButtons::OK);
		}
		private: System::Void pbStory_Click(System::Object^  sender, System::EventArgs^  e) {
			gp->gameMode = GameMode::StoryMode;
			StoryMode^ ss = gcnew StoryMode(gp);
			ss->Owner = this;
			ss->Show();
			this->Hide();
		}
		private: System::Void HomeScreen_VisibleChanged(System::Object^  sender, System::EventArgs^  e) {
			if (this->Visible)
			{
				gp->secretWords->Clear();
				if (gp->gameSoundEnabled)
				{
					pbSound->Image = Image::FromFile(gp->themePath + "volume.png");
					if (!HangmanSoundPlayer::isSoundPlaying())
					{
						if (gp->themePath->Equals(Application::StartupPath + "\\..\\themes\\drake\\"))
						{
							HangmanSoundPlayer::PlayLooping(gp->themePath + "\\sfx\\music.wav");
						}
						else
						{
							HangmanSoundPlayer::PlayLooping("music.wav");
						}
					}
				}
				if (!gp->gameSoundEnabled)
				{
					pbSound->Image = Image::FromFile(gp->themePath + "mute.png");
				}
			}
		}
		private: System::Void pbLocal_Click(System::Object^  sender, System::EventArgs^  e) {
			InputPrompt^ ip = gcnew InputPrompt("Enter Word", "Enter a secret word for your peer to play", true);
			if (ip->getUserInput() != "")
			{
				try
				{
					Dictionary::DictionaryAPI dapi;
					Dictionary::Word^ word = gcnew Dictionary::Word(ip->getUserInput());
					if (dapi.isWordPlayable(word, gp->wordDifficulty))
					{
						gp->secretWords->Add(word);
						gp->gameMode = GameMode::LocalMultiPlayer;
						GameScreen^ gs = gcnew GameScreen(gp);
						gs->Owner = this;
						gs->Show();
						this->Hide();
					}
					else
					{
						MessageBox::Show("The word you entered is not playable! Please try again.", "Word not playable", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
					}
				}
				catch (Dictionary::DictionaryAPI::DictionaryAPIConnectionException^ e)
				{
					MessageBox::Show(e->what(), "Dictionary Failure", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
		}
		private: System::Void cbDifficulty_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			gp->wordDifficulty = (Dictionary::WordDifficulty)cbDifficulty->SelectedIndex;
		}
		};
	}
}