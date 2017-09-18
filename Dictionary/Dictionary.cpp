#include "Dictionary.h"
#include <fstream>
#include <ctime>
#include <string>
#include <vector>

using namespace std;
using namespace System;
using namespace System::Collections::Generic;
using namespace System::Net;
using namespace HangmanPP::Dictionary;

namespace HangmanPP {
	namespace Dictionary {

		DictionaryAPI::DictionaryAPI() { }

		Word^ DictionaryAPI::generateWord(WordDifficulty wd)
		{
			try {
				Word^ randomWord = gcnew Word();
				randomWord->setHint(wd);
				while (!isWordPlayable(randomWord, wd)) {
					randomWord = gcnew Word();
					randomWord->setHint(wd);
				}
				return randomWord;
			}
			catch (DictionaryAPIConnectionException^ e1) {
				throw e1;
			}
			catch (FileException^ e2) {
				throw e2;
			}
		}

		bool DictionaryAPI::isWordPlayable(Word^ word, WordDifficulty wd)
		{
			String^ webRequestURL = "";
			switch (wd) {
			case WordDifficulty::Easy:
				webRequestURL = ElementaryDictURL + word->getWord() + "?key=" + ElementaryDictAPIKey;
				break;
			case WordDifficulty::Medium:
				webRequestURL = IntermediateDictURL + word->getWord() + "?key=" + IntermediateDictAPIKey;
				break;
			case WordDifficulty::Hard:
				webRequestURL = CollegiateDictURL + word->getWord() + "?key=" + CollegiateDictAPIKey;
				break;
			}
			IO::Stream^ webRequestStream;
			try {
				webRequestStream = (gcnew HttpWebRequest())->Create(webRequestURL)->GetResponse()->GetResponseStream();
			}
			catch (WebException^ e) {
				throw gcnew DictionaryAPIConnectionException("Communication with the Merriam-Webster Dictionary web API failed!");
			}
			vector<char> charVector;
			int byte = webRequestStream->ReadByte();
			while (byte != -1) {
				charVector.push_back(byte);
				byte = webRequestStream->ReadByte();
			}
			std::string stdString(charVector.begin(), charVector.end());
			String^ webRequestText = gcnew String(stdString.c_str());
			return webRequestText->Contains(word->getWord()->ToLower());
		}

		DictionaryAPI::DictionaryAPIConnectionException::DictionaryAPIConnectionException(String^ ExceptionMessage) : message(ExceptionMessage) { }
		String^ DictionaryAPI::DictionaryAPIConnectionException::what() { return message; }

		FileException::FileException(String^ ExceptionMessage) : message(ExceptionMessage) { }
		String^ FileException::what() { return message; }

		Word::Word() {
			srand(static_cast<unsigned int>(time(NULL))); //update the random algorithm seed

			ifstream infile("Dictionary\\words_and_clues.txt"); //open the file

			vector<string> item;
			if (!(infile.fail())) //if opening the file succeeded
			{
				//initialize some variables and arrays that will be used to store sections of the text file into seperate arrays
				lineCount = 0;
				string line;

				size_t tabOne;
				size_t tabTwo;
				size_t tabThree;

				while (getline(infile, line)) //read the file line by line
				{
					item.push_back(line);

					tabOne = line.find('*');
					words->Add(gcnew String(line.substr(0, tabOne).c_str())); //sentence

					line = line.substr(tabOne + 1);

					tabTwo = line.find('@');
					sentences->Add(gcnew String(line.substr(0, tabTwo).c_str()));

					line = line.substr(tabTwo + 1);

					tabThree = line.find('%');
					relatedWords->Add(gcnew String(line.substr(0, tabThree).c_str()));

					line = line.substr(tabThree + 1);

					definitions->Add(gcnew String(line.substr(0).c_str()));

					lineCount++;
				}

				infile.close();
			}
			else //if the file failed to open
			{
				throw gcnew FileException("Local word store file cannot be read!");
			}

			int index = rand() % lineCount;

			currentWord = words[index];
			currentSentence = sentences[index];
			currentRelatedWords = relatedWords[index];
			currentDefinition = definitions[index];
		}

		Word::Word(String^ word) : currentWord(word) { }

		void Word::setHint(WordDifficulty wd)
		{
			if (wd == WordDifficulty::Easy)
				this->fullHint = "DEFINITION: " + getDefinition() + "\nSENTENCE: " + getSentence();
			else if (wd == WordDifficulty::Medium)
				this->fullHint = "SENTENCE: " + getSentence();
			if (wd == WordDifficulty::Hard)
				this->fullHint = "No hints available in hard mode!";
		}

		String^ Word::getWord() { return this->currentWord; }
		String^ Word::getSentence() { return this->currentSentence; }
		String^ Word::getRelatedWords() { return this->currentRelatedWords; }
		String^ Word::getDefinition() { return this->currentDefinition; }
		String^ Word::getFullHint() { return this->fullHint; }
	}
}
