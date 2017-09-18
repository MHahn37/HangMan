#pragma once
#include "GameParameters.h"
#include "GameScreen.h"
#include "..\Dictionary\Dictionary.h"
namespace HangmanPP {

	namespace Game {
		using namespace System;
		using namespace System::ComponentModel;
		using namespace System::Collections;
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		/// <summary>
		/// Summary for StoryMode
		/// </summary>
		public ref class StoryMode : public System::Windows::Forms::Form
		{
		private: GameParameters^ gparams;
		public:
			StoryMode(void)
			{
				InitializeComponent();
				//
				//TODO: Add the constructor code here
				//
			}
			StoryMode(GameParameters^ gp) {
				gparams = gp;
				InitializeComponent();
			}

		protected:
			/// <summary>
			/// Clean up any resources being used.
			/// </summary>
			~StoryMode()
			{
				if (components)
				{
					delete components;
				}
			}

		private: System::Windows::Forms::PictureBox^  Story1;
		private: System::Windows::Forms::PictureBox^  Story2;
		private: System::Windows::Forms::PictureBox^  Story3;
		private: System::Windows::Forms::PictureBox^  Story4;
		private: System::Windows::Forms::PictureBox^  Story5;
		private: System::Windows::Forms::PictureBox^  Story6;
		private: System::Windows::Forms::PictureBox^  instruct;
		private: System::Windows::Forms::PictureBox^  pbSound;
		private: System::Windows::Forms::PictureBox^  pbMainMenu;



		protected:



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
				System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(StoryMode::typeid));
				this->Story1 = (gcnew System::Windows::Forms::PictureBox());
				this->Story2 = (gcnew System::Windows::Forms::PictureBox());
				this->Story3 = (gcnew System::Windows::Forms::PictureBox());
				this->Story4 = (gcnew System::Windows::Forms::PictureBox());
				this->Story5 = (gcnew System::Windows::Forms::PictureBox());
				this->Story6 = (gcnew System::Windows::Forms::PictureBox());
				this->instruct = (gcnew System::Windows::Forms::PictureBox());
				this->pbSound = (gcnew System::Windows::Forms::PictureBox());
				this->pbMainMenu = (gcnew System::Windows::Forms::PictureBox());
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbSound))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbMainMenu))->BeginInit();
				this->SuspendLayout();
				// 
				// Story1
				// 
				this->Story1->BackColor = System::Drawing::Color::Transparent;
				this->Story1->Cursor = System::Windows::Forms::Cursors::Hand;
				this->Story1->Location = System::Drawing::Point(0, 0);
				this->Story1->Name = L"Story1";
				this->Story1->Size = System::Drawing::Size(225, 125);
				this->Story1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->Story1->TabIndex = 0;
				this->Story1->Click += gcnew System::EventHandler(this, &StoryMode::Story1_Click);
				// 
				// Story2
				// 
				this->Story2->BackColor = System::Drawing::Color::Transparent;
				this->Story2->Cursor = System::Windows::Forms::Cursors::Hand;
				this->Story2->Location = System::Drawing::Point(575, 300);
				this->Story2->Name = L"Story2";
				this->Story2->Size = System::Drawing::Size(225, 125);
				this->Story2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->Story2->TabIndex = 1;
				this->Story2->Click += gcnew System::EventHandler(this, &StoryMode::Story2_Click);
				// 
				// Story3
				// 
				this->Story3->BackColor = System::Drawing::Color::Transparent;
				this->Story3->Cursor = System::Windows::Forms::Cursors::Hand;
				this->Story3->Location = System::Drawing::Point(950, 300);
				this->Story3->Name = L"Story3";
				this->Story3->Size = System::Drawing::Size(225, 125);
				this->Story3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->Story3->TabIndex = 2;
				this->Story3->Text = L"Story 3";
				this->Story3->Click += gcnew System::EventHandler(this, &StoryMode::Story3_Click);
				// 
				// Story4
				// 
				this->Story4->BackColor = System::Drawing::Color::Transparent;
				this->Story4->Cursor = System::Windows::Forms::Cursors::Hand;
				this->Story4->Location = System::Drawing::Point(200, 525);
				this->Story4->Name = L"Story4";
				this->Story4->Size = System::Drawing::Size(225, 125);
				this->Story4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->Story4->TabIndex = 3;
				this->Story4->Click += gcnew System::EventHandler(this, &StoryMode::Story4_Click);
				// 
				// Story5
				// 
				this->Story5->BackColor = System::Drawing::Color::Transparent;
				this->Story5->Cursor = System::Windows::Forms::Cursors::Hand;
				this->Story5->Location = System::Drawing::Point(575, 525);
				this->Story5->Name = L"Story5";
				this->Story5->Size = System::Drawing::Size(225, 125);
				this->Story5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->Story5->TabIndex = 4;
				this->Story5->Click += gcnew System::EventHandler(this, &StoryMode::Story5_Click);
				// 
				// Story6
				// 
				this->Story6->BackColor = System::Drawing::Color::Transparent;
				this->Story6->Cursor = System::Windows::Forms::Cursors::Hand;
				this->Story6->Location = System::Drawing::Point(950, 525);
				this->Story6->Name = L"Story6";
				this->Story6->Size = System::Drawing::Size(225, 125);
				this->Story6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->Story6->TabIndex = 5;
				this->Story6->Click += gcnew System::EventHandler(this, &StoryMode::Story6_Click);
				// 
				// instruct
				// 
				this->instruct->AutoSize = true;
				this->instruct->BackColor = System::Drawing::Color::Transparent;
				this->instruct->Location = System::Drawing::Point(2, 0);
				this->instruct->Name = L"instruct";
				this->instruct->Size = System::Drawing::Size(571, 103);
				this->instruct->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->instruct->TabIndex = 6;
				// 
				// pbSound
				// 
				this->pbSound->BackColor = System::Drawing::Color::Transparent;
				this->pbSound->Cursor = System::Windows::Forms::Cursors::Hand;
				this->pbSound->Location = System::Drawing::Point(25, 182);
				this->pbSound->Name = L"pbSound";
				this->pbSound->Size = System::Drawing::Size(50, 48);
				this->pbSound->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pbSound->TabIndex = 7;
				this->pbSound->TabStop = false;
				this->pbSound->Click += gcnew System::EventHandler(this, &StoryMode::pbSound_Click);
				// 
				// pbMainMenu
				// 
				this->pbMainMenu->BackColor = System::Drawing::Color::Transparent;
				this->pbMainMenu->Cursor = System::Windows::Forms::Cursors::Hand;
				this->pbMainMenu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbMainMenu.Image")));
				this->pbMainMenu->Location = System::Drawing::Point(593, 17);
				this->pbMainMenu->Name = L"pbMainMenu";
				this->pbMainMenu->Size = System::Drawing::Size(54, 50);
				this->pbMainMenu->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pbMainMenu->TabIndex = 8;
				this->pbMainMenu->TabStop = false;
				this->pbMainMenu->Click += gcnew System::EventHandler(this, &StoryMode::pbMainMenu_Click);
				// 
				// StoryMode
				// 
				this->BackColor = System::Drawing::SystemColors::AppWorkspace;
				this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
				this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->ClientSize = System::Drawing::Size(749, 397);
				this->Controls->Add(this->pbMainMenu);
				this->Controls->Add(this->pbSound);
				this->Controls->Add(this->instruct);
				this->Controls->Add(this->Story6);
				this->Controls->Add(this->Story5);
				this->Controls->Add(this->Story4);
				this->Controls->Add(this->Story3);
				this->Controls->Add(this->Story2);
				this->Controls->Add(this->Story1);
				this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
				this->Name = L"StoryMode";
				this->Load += gcnew System::EventHandler(this, &StoryMode::StoryMode_Load);
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbSound))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbMainMenu))->EndInit();
				this->ResumeLayout(false);
				this->PerformLayout();

			}
#pragma endregion
		private: System::Void pbSound_Click(System::Object^  sender, System::EventArgs^  e) {
			if (gparams->gameSoundEnabled)
			{
				HangmanSoundPlayer::StopPlayLooping();
				pbSound->Image = Image::FromFile(gparams->themePath + "mute.png");
				gparams->gameSoundEnabled = false;
			}
			else
			{
				if (gparams->themePath->Equals(Application::StartupPath + "\\..\\themes\\drake\\"))
				{
					HangmanSoundPlayer::PlayLooping(gparams->themePath + "\\sfx\\music.wav");
				}
				else
				{
					HangmanSoundPlayer::PlayLooping("music.wav");
				}
				pbSound->Image = Image::FromFile(gparams->themePath + "volume.png");
				gparams->gameSoundEnabled = true;
			}
		}
		private: System::Void Story1_Click(System::Object^ sender, System::EventArgs^ e) {
			String^ word1 = "simmer";
			String^ word2 = "crumble";
			String^ word3 = "tender";

			String^ sentence1 = "Add 4 1 / 2 cups water and bay leaves to a large skillet.Add fish; cover and _ for 10 minutes.";
			String^ sentence2 = "Cook bacon in an oven until crisp. _ the bacon, and set it aside.";
			String^ sentence3 = "Add potato, onion, and carrot to pan; bring to a boil until potatoes are _, then stir in the fish.";


			gparams->secretWords->Add(gcnew Word(word1));
			gparams->secretWords->Add(gcnew Word(word2));
			gparams->secretWords->Add(gcnew Word(word3));
			gparams->gameMode = GameMode::StoryMode;
			GameScreen^ gs = gcnew GameScreen(gparams);
			gs->Owner = this->Owner;
			gs->Show();
			this->Hide();



		}

		private: System::Void Story2_Click(System::Object^ sender, System::EventArgs^ e) {
			String^ word1 = "ceased";
			String^ word2 = "stiff";
			String^ word3 = "invisible";

			String^ sentence1 = "It's not pining, it's passed on. This parrot is no more. It has _ to be. ";
			String^ sentence2 = "It's expired and gone to meet its maker. This is a late parrot. It's a _. ";
			String^ sentence3 = "Bereft of life, it rests in peace. If you hadn't nailed it to the perch, it would be pushing up daisies. It's rung down the curtain and joined the choir _. This is an ex-parrot.";

			gparams->secretWords->Add(gcnew Word(word1));
			gparams->secretWords->Add(gcnew Word(word2));
			gparams->secretWords->Add(gcnew Word(word3));
			gparams->gameMode = GameMode::StoryMode;
			GameScreen^ gs = gcnew GameScreen(gparams);
			gs->Owner = this->Owner;
			gs->Show();
			this->Hide();
		}
		private: System::Void Story3_Click(System::Object^sender, System::EventArgs^ e) {
			String^ word1 = "waddle";
			String^ word2 = "blubber";
			String^ word3 = "Emperor";

			String^ sentence1 = "Penguins are birds with a funny _. I once met a penguin in real life.";
			String^ sentence2 = "Penguins have a layer of _ under their skin called. One time a penguin followed me around for 2 hours.";
			String^ sentence3 = "_ penguins are only found in Antarctica.";

			gparams->secretWords->Add(gcnew Word(word1));
			gparams->secretWords->Add(gcnew Word(word2));
			gparams->secretWords->Add(gcnew Word(word3));
			gparams->gameMode = GameMode::StoryMode;
			GameScreen^ gs = gcnew GameScreen(gparams);
			gs->Owner = this->Owner;
			gs->Show();
			this->Hide();
		}

		private: System::Void Story4_Click(System::Object^ sender, System::EventArgs^ e) {
			String^ word1 = "education";
			String^ word2 = "caviar";
			String^ word3 = "smiles";
			String^ sentence1 = "We don't need no _”. This is just a metaphor, right?";
			String^ sentence2 = "New car, _, four star daydream”.Being rich sounds delicious.";
			String^ sentence3 = "_ you'll give and tears you'll cry”.Wow, isn’t this band great ? ";

			gparams->secretWords->Add(gcnew Word(word1));
			gparams->secretWords->Add(gcnew Word(word2));
			gparams->secretWords->Add(gcnew Word(word3));
			gparams->gameMode = GameMode::StoryMode;

			GameScreen^ gs = gcnew GameScreen(gparams);
			gs->Owner = this->Owner;
			gs->Show();
			this->Hide();
		}

		private: System::Void Story5_Click(System::Object^ sender, System::EventArgs^ e) {
			String^ word1 = "toolchain";
			String^ word2 = "stickers";
			String^ word3 = "starbucks";
			String^ sentence1 = "I'm having trouble installing the _.";
			String^ sentence2 = "Maybe it's because I put too many _ on my laptop.";
			String^ sentence3 = "Whatever, ill just head to _ and get a venti half-sweet non-fat caramel macchiato.";

			gparams->secretWords->Add(gcnew Word(word1));
			gparams->secretWords->Add(gcnew Word(word2));
			gparams->secretWords->Add(gcnew Word(word3));
			gparams->gameMode = GameMode::StoryMode;

			GameScreen^ gs = gcnew GameScreen(gparams);
			gs->Owner = this->Owner;
			gs->Show();
			this->Hide();
		}

		private: System::Void Story6_Click(System::Object^ sender, System::EventArgs^ e) {
			String^ word1 = "welcoming";
			String^ word2 = "china";
			String^ word3 = "population";
			String^ sentence1 = "The Toronto Zoo has made history by _ two twin baby pandas, the first ever born on Canadian soil.";
			String^ sentence2 = "The mother panda came to Canada in 2013, all the way from _.";
			String^ sentence3 = "The baby pandas are critical in helping maintain the panda _, as they are considered to be an endangered species.";

			gparams->secretWords->Add(gcnew Word(word1));
			gparams->secretWords->Add(gcnew Word(word2));
			gparams->secretWords->Add(gcnew Word(word3));
			gparams->gameMode = GameMode::StoryMode;
			GameScreen^ gs = gcnew GameScreen(gparams);
			gs->Owner = this->Owner;
			gs->Show();
			this->Hide();
		}


		private: System::Void StoryMode_Load(System::Object^  sender, System::EventArgs^  e) {
			this->DesktopBounds = Screen::PrimaryScreen->Bounds;
			if (gparams->gameSoundEnabled)
			{
				pbSound->Image = Image::FromFile(gparams->themePath + "volume.png");
			}
			else
			{
				pbSound->Image = Image::FromFile(gparams->themePath + "mute.png");
			}
			pbSound->Location = Point(this->Size.Width / 30, this->Size.Height / 20);
			instruct->Location = Point(((this->Size.Width / 4) + (this->Size.Width / 20)), this->Size.Height / 20);
			instruct->Image = Image::FromFile(gparams->themePath + "chooseAStory.png");
			pbMainMenu->Image = Image::FromFile(gparams->themePath + "home.png");
			this->BackgroundImage = Image::FromFile(gparams->themePath + "texture.png");
			pbMainMenu->Location = Point((this->Size.Width - (this->Size.Width / 10)), this->Size.Height / 20);
			Story1->Image = Image::FromFile(gparams->themePath + "Stories/" + "Story1.png");
			Story2->Image = Image::FromFile(gparams->themePath + "Stories/" + "Story2.png");
			Story3->Image = Image::FromFile(gparams->themePath + "Stories/" + "Story3.png");
			Story4->Image = Image::FromFile(gparams->themePath + "Stories/" + "Story4.png");
			Story5->Image = Image::FromFile(gparams->themePath + "Stories/" + "Story5.png");
			Story6->Image = Image::FromFile(gparams->themePath + "Stories/" + "Story6.png");
			Story1->Location = Point((this->Size.Width / 6), this->Size.Height / 3);
			Story2->Location = Point((this->Size.Width / 3) + (this->Size.Width / 12), this->Size.Height / 3);
			Story3->Location = Point((this->Size.Width / 3) + (this->Size.Width / 3), this->Size.Height / 3);
			Story4->Location = Point((this->Size.Width / 6), (this->Size.Height / 3) + (this->Size.Height / 3));
			Story5->Location = Point((this->Size.Width / 3) + (this->Size.Width / 12), (this->Size.Height / 3) + (this->Size.Height / 3));
			Story6->Location = Point((this->Size.Width / 3) + (this->Size.Width / 3), (this->Size.Height / 3) + (this->Size.Height / 3));
		}

		private: System::Void pbMainMenu_Click(System::Object^  sender, System::EventArgs^  e) {
			this->Owner->Show();
			this->Close();
		}
		};
	}
}
