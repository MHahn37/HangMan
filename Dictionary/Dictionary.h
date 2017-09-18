#pragma once

namespace HangmanPP {

	namespace Dictionary {

		using namespace System;
		using namespace System::Collections::Generic;

		public enum class WordDifficulty
		{
			Easy,
			Medium,
			Hard
		};

		public ref class Word
		{
		public:
			Word();
			Word(String^ word);
			String^ getWord();
			String^ getSentence();
			String^ getRelatedWords();
			String^ getDefinition();
			String^ getFullHint();
			void setHint(WordDifficulty wd);

		private:
			List<String^>^ words = gcnew List<String^>();
			List<String^>^ sentences = gcnew List<String^>();
			List<String^>^ relatedWords = gcnew List<String^>();
			List<String^>^ definitions = gcnew List<String^>();
			String^ currentWord = "";
			String^ currentSentence = "";
			String^ currentRelatedWords = "";
			String^ currentDefinition = "";
			String^ fullHint = "";
			int lineCount = 0;
		};

		public ref class DictionaryAPI
		{
		public:
			DictionaryAPI();
			Word^ generateWord(WordDifficulty wd);
			bool isWordPlayable(Word^ word, WordDifficulty wd);

			ref class DictionaryAPIConnectionException : ApplicationException
			{
			public:
				DictionaryAPIConnectionException(String^ ExceptionMessage);
				String^ what();

			private:
				String^ message;
			};

		private:
			// Three to five years old level
			String^ ElementaryDictURL = "http://www.dictionaryapi.com/api/v1/references/sd2/xml/";
			String^ ElementaryDictAPIKey = "c068f79e-1053-4926-84e0-1c4dc15b04ea";
			// Six to eight years old level
			String^ IntermediateDictURL = "http://www.dictionaryapi.com/api/v1/references/sd3/xml/";
			String^ IntermediateDictAPIKey = "67139154-a0b4-485c-861b-7a4d8c11a573";
			// College level dictionary API
			String^ CollegiateDictURL = "http://www.dictionaryapi.com/api/v1/references/collegiate/xml/";
			String^ CollegiateDictAPIKey = "c460b743-3e88-4eec-9065-e2053a75131d";
		};

		public ref class FileException : ApplicationException
		{
		public:
			FileException(String^ ExceptionMessage);
			String^ what();

		private:
			String^ message;
		};

	}
}