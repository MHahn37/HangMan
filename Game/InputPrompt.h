#pragma once

namespace HangmanPP {

	namespace Game {

		using namespace System;
		using namespace System::ComponentModel;
		using namespace System::Collections;
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		/// <summary>
		/// Summary for InputBox
		/// </summary>
		public ref class InputPrompt : public System::Windows::Forms::Form
		{
		public:
			InputPrompt(String^ DialogBoxTitle, String^ PromptMessage, bool IsPasswordField)
			{
				InitializeComponent();
				this->Text = DialogBoxTitle;
				this->PromptLabel->Text = PromptMessage;
				if (IsPasswordField) {
					this->InputTextBox->PasswordChar = '*';
				}
				this->ShowDialog();
			}

			String^ getUserInput() {
				return UserInput;
			}
		protected:
			/// <summary>
			/// Clean up any resources being used.
			/// </summary>
			~InputPrompt()
			{
				if (components)
				{
					delete components;
				}
			}

		private:
			String^ UserInput = "";
			System::Windows::Forms::Label^  PromptLabel;
			System::Windows::Forms::TextBox^  InputTextBox;
			System::Windows::Forms::Button^  OKButton;
			System::Windows::Forms::Button^  CancelButton;
			System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
			/// <summary>
			/// Required method for Designer support - do not modify
			/// the contents of this method with the code editor.
			/// </summary>
			void InitializeComponent(void)
			{
				this->PromptLabel = (gcnew System::Windows::Forms::Label());
				this->InputTextBox = (gcnew System::Windows::Forms::TextBox());
				this->OKButton = (gcnew System::Windows::Forms::Button());
				this->CancelButton = (gcnew System::Windows::Forms::Button());
				this->SuspendLayout();
				// 
				// PromptLabel
				// 
				this->PromptLabel->AutoSize = true;
				this->PromptLabel->Location = System::Drawing::Point(13, 13);
				this->PromptLabel->Name = L"PromptLabel";
				this->PromptLabel->Size = System::Drawing::Size(0, 13);
				this->PromptLabel->TabIndex = 0;
				// 
				// InputTextBox
				// 
				this->InputTextBox->Location = System::Drawing::Point(12, 35);
				this->InputTextBox->Name = L"InputTextBox";
				this->InputTextBox->Size = System::Drawing::Size(260, 20);
				this->InputTextBox->TabIndex = 1;
				// 
				// OKButton
				// 
				this->OKButton->Location = System::Drawing::Point(106, 66);
				this->OKButton->Name = L"OKButton";
				this->OKButton->Size = System::Drawing::Size(35, 23);
				this->OKButton->TabIndex = 2;
				this->OKButton->Text = L"OK";
				this->OKButton->UseVisualStyleBackColor = true;
				this->OKButton->Click += gcnew System::EventHandler(this, &InputPrompt::OKButton_Click);
				// 
				// CancelButton
				// 
				this->CancelButton->Location = System::Drawing::Point(147, 66);
				this->CancelButton->Name = L"CancelButton";
				this->CancelButton->Size = System::Drawing::Size(60, 23);
				this->CancelButton->TabIndex = 3;
				this->CancelButton->Text = L"Cancel";
				this->CancelButton->UseVisualStyleBackColor = true;
				this->CancelButton->Click += gcnew System::EventHandler(this, &InputPrompt::CancelButton_Click);
				// 
				// InputPrompt
				// 
				this->AcceptButton = this->OKButton;
				this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->AutoSize = true;
				this->ClientSize = System::Drawing::Size(284, 102);
				this->Controls->Add(this->CancelButton);
				this->Controls->Add(this->OKButton);
				this->Controls->Add(this->InputTextBox);
				this->Controls->Add(this->PromptLabel);
				this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
				this->MaximizeBox = false;
				this->MinimumSize = System::Drawing::Size(300, 140);
				this->Name = L"InputPrompt";
				this->ShowIcon = false;
				this->ShowInTaskbar = false;
				this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
				this->Resize += gcnew System::EventHandler(this, &InputPrompt::InputBox_Resize);
				this->ResumeLayout(false);
				this->PerformLayout();

			}
#pragma endregion
		private: System::Void InputBox_Resize(System::Object^  sender, System::EventArgs^  e) {
			InputTextBox->Size = Drawing::Size(this->Size.Width - 40, InputTextBox->Size.Height);
			OKButton->Location = Drawing::Point((this->Size.Width / 2) - 60, OKButton->Location.Y);
			CancelButton->Location = Drawing::Point(OKButton->Location.X + 50, CancelButton->Location.Y);
		}
		private: System::Void OKButton_Click(System::Object^  sender, System::EventArgs^  e) {
			UserInput = InputTextBox->Text;
			this->Close();
		}
		private: System::Void CancelButton_Click(System::Object^  sender, System::EventArgs^  e) {
			this->Close();
		}
		};
	}
}