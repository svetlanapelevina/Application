#pragma once
#include "Meal.h"
#include <string>
#include "Source.h"
#include <msclr\marshal_cppstd.h>
#include <sstream>

namespace Cafee {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для ChangeAndDelete
	/// </summary>
	public ref class ChangeAndDelete : public System::Windows::Forms::Form
	{
	public:
		ChangeAndDelete(void)
		{
			InitializeComponent();
			
			listViewChangeDelete->Items->Clear();
			int i = 0;
			for (Meal* meal : *Source::AllMeals)
			{
				listViewChangeDelete->Items->Add(i.ToString());
				string S = meal->toString();
				istringstream ss(S);
				string str;
				int k = 0;
				while (ss >> str)
					if (k++ != 0) listViewChangeDelete->Items[i]->SubItems->Add(gcnew System::String(str.c_str(), 0, str.length()));
				i++;
			}
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~ChangeAndDelete()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^ listViewChangeDelete;
	protected:



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ buttonChange;
	private: System::Windows::Forms::Button^ buttonDelete;
	private: System::Windows::Forms::Button^ buttonBack;
	private: System::Windows::Forms::ColumnHeader^ N;
	private: System::Windows::Forms::ColumnHeader^ Name;
	private: System::Windows::Forms::ColumnHeader^ Cost;
	private: System::Windows::Forms::ColumnHeader^ Info;
	private: System::Windows::Forms::ComboBox^ comboBoxField;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBoxNew;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ Refresh;
	protected:


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->listViewChangeDelete = (gcnew System::Windows::Forms::ListView());
			this->N = (gcnew System::Windows::Forms::ColumnHeader());
			this->Name = (gcnew System::Windows::Forms::ColumnHeader());
			this->Cost = (gcnew System::Windows::Forms::ColumnHeader());
			this->Info = (gcnew System::Windows::Forms::ColumnHeader());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->buttonChange = (gcnew System::Windows::Forms::Button());
			this->buttonDelete = (gcnew System::Windows::Forms::Button());
			this->buttonBack = (gcnew System::Windows::Forms::Button());
			this->comboBoxField = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxNew = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Refresh = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listViewChangeDelete
			// 
			this->listViewChangeDelete->Alignment = System::Windows::Forms::ListViewAlignment::Default;
			this->listViewChangeDelete->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->N, this->Name,
					this->Cost, this->Info
			});
			this->listViewChangeDelete->HideSelection = false;
			this->listViewChangeDelete->LabelEdit = true;
			this->listViewChangeDelete->Location = System::Drawing::Point(29, 29);
			this->listViewChangeDelete->Name = L"listViewChangeDelete";
			this->listViewChangeDelete->Size = System::Drawing::Size(525, 437);
			this->listViewChangeDelete->TabIndex = 0;
			this->listViewChangeDelete->UseCompatibleStateImageBehavior = false;
			this->listViewChangeDelete->View = System::Windows::Forms::View::Details;
			this->listViewChangeDelete->SelectedIndexChanged += gcnew System::EventHandler(this, &ChangeAndDelete::listViewChangeDelete_SelectedIndexChanged);
			// 
			// N
			// 
			this->N->Text = L"N";
			this->N->Width = 27;
			// 
			// Name
			// 
			this->Name->Text = L"Название";
			this->Name->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Name->Width = 200;
			// 
			// Cost
			// 
			this->Cost->Text = L"Стоимость";
			this->Cost->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Cost->Width = 82;
			// 
			// Info
			// 
			this->Info->Text = L"Дополнительная информация";
			this->Info->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Info->Width = 400;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.25F));
			this->label2->Location = System::Drawing::Point(599, 87);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(197, 19);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Введите номер элемента:";
			this->label2->Click += gcnew System::EventHandler(this, &ChangeAndDelete::label2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(603, 109);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(189, 22);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &ChangeAndDelete::textBox1_TextChanged);
			// 
			// buttonChange
			// 
			this->buttonChange->Location = System::Drawing::Point(655, 324);
			this->buttonChange->Name = L"buttonChange";
			this->buttonChange->Size = System::Drawing::Size(98, 28);
			this->buttonChange->TabIndex = 5;
			this->buttonChange->Text = L"Изменить";
			this->buttonChange->UseVisualStyleBackColor = true;
			this->buttonChange->Click += gcnew System::EventHandler(this, &ChangeAndDelete::buttonChange_Click);
			// 
			// buttonDelete
			// 
			this->buttonDelete->Location = System::Drawing::Point(655, 380);
			this->buttonDelete->Name = L"buttonDelete";
			this->buttonDelete->Size = System::Drawing::Size(98, 30);
			this->buttonDelete->TabIndex = 6;
			this->buttonDelete->Text = L"Удалить";
			this->buttonDelete->UseVisualStyleBackColor = true;
			this->buttonDelete->Click += gcnew System::EventHandler(this, &ChangeAndDelete::buttonDelete_Click);
			// 
			// buttonBack
			// 
			this->buttonBack->Location = System::Drawing::Point(29, 491);
			this->buttonBack->Name = L"buttonBack";
			this->buttonBack->Size = System::Drawing::Size(96, 31);
			this->buttonBack->TabIndex = 7;
			this->buttonBack->Text = L"Назад";
			this->buttonBack->UseVisualStyleBackColor = true;
			this->buttonBack->Click += gcnew System::EventHandler(this, &ChangeAndDelete::buttonBack_Click);
			// 
			// comboBoxField
			// 
			this->comboBoxField->FormattingEnabled = true;
			this->comboBoxField->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Название", L"Стоимость" });
			this->comboBoxField->Location = System::Drawing::Point(607, 212);
			this->comboBoxField->Name = L"comboBoxField";
			this->comboBoxField->Size = System::Drawing::Size(189, 24);
			this->comboBoxField->TabIndex = 8;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.25F));
			this->label1->Location = System::Drawing::Point(605, 256);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(194, 19);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Введите новое значение:";
			this->label1->Click += gcnew System::EventHandler(this, &ChangeAndDelete::label1_Click_1);
			// 
			// textBoxNew
			// 
			this->textBoxNew->Location = System::Drawing::Point(607, 278);
			this->textBoxNew->Name = L"textBoxNew";
			this->textBoxNew->Size = System::Drawing::Size(189, 22);
			this->textBoxNew->TabIndex = 10;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.25F));
			this->label3->Location = System::Drawing::Point(639, 190);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(126, 19);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Выберите поле:";
			// 
			// Refresh
			// 
			this->Refresh->Location = System::Drawing::Point(430, 491);
			this->Refresh->Name = L"Refresh";
			this->Refresh->Size = System::Drawing::Size(102, 31);
			this->Refresh->TabIndex = 12;
			this->Refresh->Text = L"Обновить";
			this->Refresh->UseVisualStyleBackColor = true;
			this->Refresh->Click += gcnew System::EventHandler(this, &ChangeAndDelete::Refresh_Click);
			// 
			// ChangeAndDelete
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(840, 548);
			this->Controls->Add(this->Refresh);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBoxNew);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBoxField);
			this->Controls->Add(this->buttonBack);
			this->Controls->Add(this->buttonDelete);
			this->Controls->Add(this->buttonChange);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->listViewChangeDelete);
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ChangeAndDelete";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void listViewChangeDelete_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void buttonBack_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void buttonDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text->CompareTo("") == 0) MessageBox::Show("Введите номер!", "Ошибка",MessageBoxButtons::OK,MessageBoxIcon::Error);
	else {
		int number = Convert::ToInt32(textBox1->Text);
		if (number >= Source::AllMeals->size()) MessageBox::Show("Неверый номер!", "Ошибка",MessageBoxButtons::OK, MessageBoxIcon::Error);
		else
		{
			Source::deleteElement(number);
			MessageBox::Show("Изменения сохранены", "Успешно",
				MessageBoxButtons::OK,
				MessageBoxIcon::Information);
		}
	}
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void buttonChange_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text->CompareTo("") == 0) MessageBox::Show("Введите номер!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	else {
		int number = Convert::ToInt32(textBox1->Text);
		if (number >= Source::AllMeals->size()) MessageBox::Show("Неверый номер!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		else
		{
			string newww = msclr::interop::marshal_as<std::string>(textBoxNew->Text);
			switch (comboBoxField->SelectedIndex)
			{
			case 0:
				Source::changeName(number, newww); break;
			case 1:
				Source::changeCost(number, newww); break;
			}
			MessageBox::Show("Изменения сохранены", "Успешно",
				MessageBoxButtons::OK,
				MessageBoxIcon::Information);
		}
	}
}
private: System::Void Refresh_Click(System::Object^ sender, System::EventArgs^ e) {
	listViewChangeDelete->Items->Clear();
	int i = 0;
	for (Meal* meal : *Source::AllMeals)
	{
		listViewChangeDelete->Items->Add(i.ToString());
		string S = meal->toString();
		istringstream ss(S);
		string str;
		int k = 0;
		while (ss >> str)
			if (k++ != 0) listViewChangeDelete->Items[i]->SubItems->Add(gcnew System::String(str.c_str(), 0, str.length()));
		i++;
	}
}
};
}
