#pragma once
#include "entities.h"

namespace FINALLYIHOPE {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private: entities PLAYER, ENEMY;
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ AttackB;
	private: System::Windows::Forms::Button^ HealB;
	private: System::Windows::Forms::Button^ EscapeB;

	protected:




	private: System::Windows::Forms::Label^ enemyTXT;
	private: System::Windows::Forms::Label^ playerTXT;



	private: System::Windows::Forms::Label^ enemyHP;


	private: System::Windows::Forms::Label^ playerHP;
	private: System::Windows::Forms::Label^ playerSprite;
	private: System::Windows::Forms::Label^ enemySprite;
	private: System::Windows::Forms::Label^ BattleCrawler;






	private: System::Windows::Forms::Button^ StartB;
	private: System::Windows::Forms::Button^ QuitB;

	private: System::Windows::Forms::Label^ HealUsedText;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->AttackB = (gcnew System::Windows::Forms::Button());
			this->HealB = (gcnew System::Windows::Forms::Button());
			this->EscapeB = (gcnew System::Windows::Forms::Button());
			this->enemyTXT = (gcnew System::Windows::Forms::Label());
			this->playerTXT = (gcnew System::Windows::Forms::Label());
			this->enemyHP = (gcnew System::Windows::Forms::Label());
			this->playerHP = (gcnew System::Windows::Forms::Label());
			this->playerSprite = (gcnew System::Windows::Forms::Label());
			this->enemySprite = (gcnew System::Windows::Forms::Label());
			this->BattleCrawler = (gcnew System::Windows::Forms::Label());
			this->StartB = (gcnew System::Windows::Forms::Button());
			this->QuitB = (gcnew System::Windows::Forms::Button());
			this->HealUsedText = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// AttackB
			// 
			this->AttackB->BackColor = System::Drawing::Color::DarkGray;
			this->AttackB->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->AttackB, L"AttackB");
			this->AttackB->Name = L"AttackB";
			this->AttackB->UseVisualStyleBackColor = false;
			this->AttackB->Click += gcnew System::EventHandler(this, &MyForm::AttackB_Click);
			// 
			// HealB
			// 
			this->HealB->BackColor = System::Drawing::Color::DarkGray;
			this->HealB->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->HealB, L"HealB");
			this->HealB->Name = L"HealB";
			this->HealB->UseVisualStyleBackColor = false;
			this->HealB->Click += gcnew System::EventHandler(this, &MyForm::HealB_Click);
			// 
			// EscapeB
			// 
			this->EscapeB->BackColor = System::Drawing::Color::DarkGray;
			this->EscapeB->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->EscapeB, L"EscapeB");
			this->EscapeB->Name = L"EscapeB";
			this->EscapeB->UseVisualStyleBackColor = false;
			this->EscapeB->Click += gcnew System::EventHandler(this, &MyForm::EscapeB_Click);
			// 
			// enemyTXT
			// 
			resources->ApplyResources(this->enemyTXT, L"enemyTXT");
			this->enemyTXT->BackColor = System::Drawing::Color::DarkGray;
			this->enemyTXT->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->enemyTXT->Name = L"enemyTXT";
			// 
			// playerTXT
			// 
			resources->ApplyResources(this->playerTXT, L"playerTXT");
			this->playerTXT->BackColor = System::Drawing::Color::DarkGray;
			this->playerTXT->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->playerTXT->Name = L"playerTXT";
			// 
			// enemyHP
			// 
			resources->ApplyResources(this->enemyHP, L"enemyHP");
			this->enemyHP->BackColor = System::Drawing::Color::DarkGray;
			this->enemyHP->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->enemyHP->Name = L"enemyHP";
			// 
			// playerHP
			// 
			resources->ApplyResources(this->playerHP, L"playerHP");
			this->playerHP->BackColor = System::Drawing::Color::DarkGray;
			this->playerHP->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->playerHP->Name = L"playerHP";
			// 
			// playerSprite
			// 
			this->playerSprite->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->playerSprite, L"playerSprite");
			this->playerSprite->Name = L"playerSprite";
			// 
			// enemySprite
			// 
			this->enemySprite->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->enemySprite, L"enemySprite");
			this->enemySprite->Name = L"enemySprite";
			// 
			// BattleCrawler
			// 
			resources->ApplyResources(this->BattleCrawler, L"BattleCrawler");
			this->BattleCrawler->BackColor = System::Drawing::Color::Transparent;
			this->BattleCrawler->ForeColor = System::Drawing::SystemColors::Control;
			this->BattleCrawler->Name = L"BattleCrawler";
			// 
			// StartB
			// 
			this->StartB->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->StartB, L"StartB");
			this->StartB->Name = L"StartB";
			this->StartB->UseVisualStyleBackColor = true;
			this->StartB->Click += gcnew System::EventHandler(this, &MyForm::StartB_Click_1);
			// 
			// QuitB
			// 
			resources->ApplyResources(this->QuitB, L"QuitB");
			this->QuitB->Name = L"QuitB";
			this->QuitB->UseVisualStyleBackColor = true;
			this->QuitB->Click += gcnew System::EventHandler(this, &MyForm::QuitB_Click);
			// 
			// HealUsedText
			// 
			this->HealUsedText->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->HealUsedText, L"HealUsedText");
			this->HealUsedText->ForeColor = System::Drawing::Color::Red;
			this->HealUsedText->Name = L"HealUsedText";
			// 
			// MyForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->HealUsedText);
			this->Controls->Add(this->QuitB);
			this->Controls->Add(this->StartB);
			this->Controls->Add(this->BattleCrawler);
			this->Controls->Add(this->enemySprite);
			this->Controls->Add(this->playerSprite);
			this->Controls->Add(this->playerHP);
			this->Controls->Add(this->enemyHP);
			this->Controls->Add(this->playerTXT);
			this->Controls->Add(this->enemyTXT);
			this->Controls->Add(this->EscapeB);
			this->Controls->Add(this->HealB);
			this->Controls->Add(this->AttackB);
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void StartB_Click_1(System::Object^ sender, System::EventArgs^ e) {
		BattleCrawler->Visible = false;
		StartB->Visible = false;
		QuitB->Visible = false;

		playerHP->Visible = true;
		playerTXT->Visible = true;
		playerSprite->Visible = true;

		enemyHP->Visible = true;
		enemyTXT->Visible = true;
		enemySprite->Visible = true;

		AttackB->Visible = true;
		HealB->Visible = true;
		EscapeB->Visible = true;
	}
	private: System::Void QuitB_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void AttackB_Click(System::Object^ sender, System::EventArgs^ e) {
		PLAYER.attack(ENEMY);
	}
	private: System::Void HealB_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void EscapeB_Click(System::Object^ sender, System::EventArgs^ e) {
		BattleCrawler->Visible = true;
		StartB->Visible = true;
		QuitB->Visible = true;

		playerHP->Visible = false;
		playerTXT->Visible = false;
		playerSprite->Visible = false;

		enemyHP->Visible = false;
		enemyTXT->Visible = false;
		enemySprite->Visible = false;

		AttackB->Visible = false;
		HealB->Visible = false;
		EscapeB->Visible = false;
	}
};
};
