#pragma once
//#include <cstdlib>
#include <iostream> 
#include <ctime>  
#include <chrono> 
#include <random>

namespace GuessingGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Guessing_Game
	/// </summary>
	public ref class Guessing_Game : public System::Windows::Forms::Form
	{
	public:
		Guessing_Game(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Guessing_Game()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ wlc;
	private: System::Windows::Forms::Label^ description;
	protected:

	protected:

	private: System::Windows::Forms::Button^ strt;
	private: System::Windows::Forms::Label^ guess;
	private: System::Windows::Forms::TextBox^ inputbox;
	private: System::Windows::Forms::Label^ highorlow;
	private: System::Windows::Forms::Button^ chk;
	private: System::Windows::Forms::Label^ attempts;
	private: System::Windows::Forms::Label^ attemptout;
	private: System::Windows::Forms::Label^ gtn;
	private: System::Windows::Forms::Label^ description2;





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
			this->wlc = (gcnew System::Windows::Forms::Label());
			this->description = (gcnew System::Windows::Forms::Label());
			this->strt = (gcnew System::Windows::Forms::Button());
			this->guess = (gcnew System::Windows::Forms::Label());
			this->inputbox = (gcnew System::Windows::Forms::TextBox());
			this->highorlow = (gcnew System::Windows::Forms::Label());
			this->chk = (gcnew System::Windows::Forms::Button());
			this->attempts = (gcnew System::Windows::Forms::Label());
			this->attemptout = (gcnew System::Windows::Forms::Label());
			this->gtn = (gcnew System::Windows::Forms::Label());
			this->description2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// wlc
			// 
			this->wlc->AutoSize = true;
			this->wlc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->wlc->Location = System::Drawing::Point(278, 9);
			this->wlc->Name = L"wlc";
			this->wlc->Size = System::Drawing::Size(145, 33);
			this->wlc->TabIndex = 0;
			this->wlc->Text = L"Welcome!";
			// 
			// description
			// 
			this->description->AutoSize = true;
			this->description->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->description->Location = System::Drawing::Point(104, 72);
			this->description->Name = L"description";
			this->description->Size = System::Drawing::Size(495, 68);
			this->description->TabIndex = 1;
			this->description->Text = L"Hey there! \r\nThis is a guessing game, where you have to guess the number generate"
				L"d by \r\nthe computer, try to guess the right number in as less attempts as possib"
				L"le. \r\nGood Luck! Press Start to play!";
			// 
			// strt
			// 
			this->strt->BackColor = System::Drawing::Color::PaleTurquoise;
			this->strt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->strt->Location = System::Drawing::Point(233, 207);
			this->strt->Name = L"strt";
			this->strt->Size = System::Drawing::Size(229, 80);
			this->strt->TabIndex = 2;
			this->strt->Text = L"Start";
			this->strt->UseVisualStyleBackColor = false;
			this->strt->Click += gcnew System::EventHandler(this, &Guessing_Game::strt_Click);
			// 
			// guess
			// 
			this->guess->AutoSize = true;
			this->guess->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->guess->Location = System::Drawing::Point(80, 150);
			this->guess->Name = L"guess";
			this->guess->Size = System::Drawing::Size(147, 20);
			this->guess->TabIndex = 3;
			this->guess->Text = L"Enter Your Guess:";
			this->guess->Visible = false;
			// 
			// inputbox
			// 
			this->inputbox->AcceptsReturn = true;
			this->inputbox->AcceptsTab = true;
			this->inputbox->Location = System::Drawing::Point(233, 150);
			this->inputbox->Name = L"inputbox";
			this->inputbox->Size = System::Drawing::Size(100, 20);
			this->inputbox->TabIndex = 4;
			this->inputbox->Tag = L"";
			this->inputbox->Visible = false;
			// 
			// highorlow
			// 
			this->highorlow->AutoSize = true;
			this->highorlow->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->highorlow->Location = System::Drawing::Point(475, 148);
			this->highorlow->Name = L"highorlow";
			this->highorlow->Size = System::Drawing::Size(0, 20);
			this->highorlow->TabIndex = 5;
			this->highorlow->Visible = false;
			// 
			// chk
			// 
			this->chk->Location = System::Drawing::Point(339, 150);
			this->chk->Name = L"chk";
			this->chk->Size = System::Drawing::Size(75, 23);
			this->chk->TabIndex = 6;
			this->chk->Text = L"Check";
			this->chk->UseVisualStyleBackColor = true;
			this->chk->Visible = false;
			this->chk->Click += gcnew System::EventHandler(this, &Guessing_Game::chk_Click);
			// 
			// attempts
			// 
			this->attempts->AutoSize = true;
			this->attempts->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->attempts->Location = System::Drawing::Point(514, 267);
			this->attempts->Name = L"attempts";
			this->attempts->Size = System::Drawing::Size(81, 20);
			this->attempts->TabIndex = 7;
			this->attempts->Text = L"Attempts:";
			this->attempts->Visible = false;
			// 
			// attemptout
			// 
			this->attemptout->AutoSize = true;
			this->attemptout->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->attemptout->Location = System::Drawing::Point(601, 267);
			this->attemptout->Name = L"attemptout";
			this->attemptout->Size = System::Drawing::Size(18, 20);
			this->attemptout->TabIndex = 8;
			this->attemptout->Text = L"0";
			this->attemptout->Visible = false;
			// 
			// gtn
			// 
			this->gtn->AutoSize = true;
			this->gtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gtn->Location = System::Drawing::Point(212, 9);
			this->gtn->Name = L"gtn";
			this->gtn->Size = System::Drawing::Size(278, 33);
			this->gtn->TabIndex = 9;
			this->gtn->Text = L"Guess The Number!";
			this->gtn->Visible = false;
			// 
			// description2
			// 
			this->description2->AutoSize = true;
			this->description2->BackColor = System::Drawing::SystemColors::Control;
			this->description2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->description2->Location = System::Drawing::Point(170, 72);
			this->description2->Name = L"description2";
			this->description2->Size = System::Drawing::Size(372, 17);
			this->description2->TabIndex = 10;
			this->description2->Text = L"Start guessing the number. The number is between 1-100\r\n";
			this->description2->Visible = false;
			// 
			// Guessing_Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(704, 339);
			this->Controls->Add(this->description2);
			this->Controls->Add(this->gtn);
			this->Controls->Add(this->attemptout);
			this->Controls->Add(this->attempts);
			this->Controls->Add(this->chk);
			this->Controls->Add(this->highorlow);
			this->Controls->Add(this->inputbox);
			this->Controls->Add(this->guess);
			this->Controls->Add(this->strt);
			this->Controls->Add(this->description);
			this->Controls->Add(this->wlc);
			this->Name = L"Guessing_Game";
			this->Text = L"Guessing_Game";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
		int ran(int min,int max) {
			srand(time(0));
			return (rand() % max-min + 1) + min;
		}
		int count = 0;
		int lb = 2, ub = 99;
		int num = ran(lb, ub);
		int last;

	private: System::Void strt_Click(System::Object^ sender, System::EventArgs^ e) {
		last = 681612;
		wlc->Visible = false;
		description->Visible = false;
		strt->Visible = false;
		attemptout->Text = System::Convert::ToString(count);
		gtn->Visible = true;
		description2->Visible = true;
		guess->Visible = true;
		inputbox->Visible = true;
		chk->Visible = true;
		highorlow->Visible = true;
		attempts->Visible = true;
		attemptout->Visible = true;

	}
	private: System::Void chk_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			System::Convert::ToString(inputbox->Text);
		}
		catch (const std::invalid_argument& e) {
			MessageBox::Show("Enter a valid number", "Validation", MessageBoxButtons::OK, MessageBoxIcon::Error);
			
		}

		if (this->inputbox->Text->Trim() == ""){
			MessageBox::Show("Enter a number", "Validation", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			if (last == System::Convert::ToInt16(inputbox->Text)) {
				MessageBox::Show("Enter a different number", "Validation", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			}
			else {
				last = System::Convert::ToInt16(inputbox->Text);
				count++;
				attemptout->Text = System::Convert::ToString(count);
				if (System::Convert::ToInt16(inputbox->Text) == num) {
					MessageBox::Show("Congrats! You Win!\n You took " + count + " Attempts", "Validation", MessageBoxButtons::OK, MessageBoxIcon::Information);
					restartgame();
				}
				else if (System::Convert::ToInt16(inputbox->Text) > num) {
					if (System::Convert::ToInt16(inputbox->Text) > num + 20) {
						highorlow->ForeColor = System::Drawing::Color::Red;
						highorlow->Text = "Too High";
					}
					else {
						highorlow->ForeColor = System::Drawing::Color::IndianRed;
						highorlow->Text = "High";
					}

				}
				else {
					if (System::Convert::ToInt16(inputbox->Text) < num - 20) {
						highorlow->ForeColor = System::Drawing::Color::DodgerBlue;
						highorlow->Text = "Too Low";
					}
					else {
						highorlow->ForeColor = System::Drawing::Color::CornflowerBlue;
						highorlow->Text = "Low";
					}
				}
			}
		}
	}
		   void restartgame() {
			   description->Visible = true;
			   description2->Visible = false;
			   strt->Visible = true;
			   guess->Visible = false;
			   wlc->Visible = true;
			   gtn->Visible = false;
			   attempts->Visible = false;
			   attemptout->Visible = false;
			   chk->Visible = false;
			   inputbox->Visible = false;
			   inputbox->Text = "";
			   highorlow->Text = "";
			   num=ran(lb,ub);
	}
};
}
