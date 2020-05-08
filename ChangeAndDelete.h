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
	/// ������ ��� ChangeAndDelete
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
		/// ���������� ��� ������������ �������.
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
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
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
			this->listViewChangeDelete->Location = System::Drawing::Point(22, 24);
			this->listViewChangeDelete->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->listViewChangeDelete->Name = L"listViewChangeDelete";
			this->listViewChangeDelete->Size = System::Drawing::Size(395, 356);
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
			this->Name->Text = L"��������";
			this->Name->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Name->Width = 200;
			// 
			// Cost
			// 
			this->Cost->Text = L"���������";
			this->Cost->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Cost->Width = 82;
			// 
			// Info
			// 
			this->Info->Text = L"�������������� ����������";
			this->Info->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Info->Width = 400;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.25F));
			this->label2->Location = System::Drawing::Point(449, 71);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(160, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"������� ����� ��������:";
			this->label2->Click += gcnew System::EventHandler(this, &ChangeAndDelete::label2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(452, 89);
			this->textBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(143, 20);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &ChangeAndDelete::textBox1_TextChanged);
			// 
			// buttonChange
			// 
			this->buttonChange->Location = System::Drawing::Point(491, 263);
			this->buttonChange->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->buttonChange->Name = L"buttonChange";
			this->buttonChange->Size = System::Drawing::Size(74, 23);
			this->buttonChange->TabIndex = 5;
			this->buttonChange->Text = L"��������";
			this->buttonChange->UseVisualStyleBackColor = true;
			this->buttonChange->Click += gcnew System::EventHandler(this, &ChangeAndDelete::buttonChange_Click);
			// 
			// buttonDelete
			// 
			this->buttonDelete->Location = System::Drawing::Point(491, 309);
			this->buttonDelete->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->buttonDelete->Name = L"buttonDelete";
			this->buttonDelete->Size = System::Drawing::Size(74, 24);
			this->buttonDelete->TabIndex = 6;
			this->buttonDelete->Text = L"�������";
			this->buttonDelete->UseVisualStyleBackColor = true;
			this->buttonDelete->Click += gcnew System::EventHandler(this, &ChangeAndDelete::buttonDelete_Click);
			// 
			// buttonBack
			// 
			this->buttonBack->Location = System::Drawing::Point(22, 399);
			this->buttonBack->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->buttonBack->Name = L"buttonBack";
			this->buttonBack->Size = System::Drawing::Size(72, 25);
			this->buttonBack->TabIndex = 7;
			this->buttonBack->Text = L"�����";
			this->buttonBack->UseVisualStyleBackColor = true;
			this->buttonBack->Click += gcnew System::EventHandler(this, &ChangeAndDelete::buttonBack_Click);
			// 
			// comboBoxField
			// 
			this->comboBoxField->FormattingEnabled = true;
			this->comboBoxField->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"��������", L"���������" });
			this->comboBoxField->Location = System::Drawing::Point(455, 172);
			this->comboBoxField->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBoxField->Name = L"comboBoxField";
			this->comboBoxField->Size = System::Drawing::Size(143, 21);
			this->comboBoxField->TabIndex = 8;
			this->comboBoxField->SelectedIndexChanged += gcnew System::EventHandler(this, &ChangeAndDelete::comboBoxField_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.25F));
			this->label1->Location = System::Drawing::Point(454, 208);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(159, 16);
			this->label1->TabIndex = 9;
			this->label1->Text = L"������� ����� ��������:";
			this->label1->Click += gcnew System::EventHandler(this, &ChangeAndDelete::label1_Click_1);
			// 
			// textBoxNew
			// 
			this->textBoxNew->Location = System::Drawing::Point(455, 226);
			this->textBoxNew->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBoxNew->Name = L"textBoxNew";
			this->textBoxNew->Size = System::Drawing::Size(143, 20);
			this->textBoxNew->TabIndex = 10;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.25F));
			this->label3->Location = System::Drawing::Point(479, 154);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(102, 16);
			this->label3->TabIndex = 11;
			this->label3->Text = L"�������� ����:";
			// 
			// Refresh
			// 
			this->Refresh->Location = System::Drawing::Point(322, 399);
			this->Refresh->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Refresh->Name = L"Refresh";
			this->Refresh->Size = System::Drawing::Size(76, 25);
			this->Refresh->TabIndex = 12;
			this->Refresh->Text = L"��������";
			this->Refresh->UseVisualStyleBackColor = true;
			this->Refresh->Click += gcnew System::EventHandler(this, &ChangeAndDelete::Refresh_Click);
			// 
			// ChangeAndDelete
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(630, 445);
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
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
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
	if (textBox1->Text->CompareTo("") == 0) MessageBox::Show("������� �����!", "������",MessageBoxButtons::OK,MessageBoxIcon::Error);
	else {
		int number = Convert::ToInt32(textBox1->Text);
		if (number >= Source::AllMeals->size()) MessageBox::Show("������� �����!", "������",MessageBoxButtons::OK, MessageBoxIcon::Error);
		else
		{
			Source::deleteElement(number);
			MessageBox::Show("��������� ���������", "�������",
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
	if (textBox1->Text->CompareTo("") == 0) MessageBox::Show("������� �����!", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
	else {
		int number = Convert::ToInt32(textBox1->Text);
		if (number >= Source::AllMeals->size()) MessageBox::Show("������� �����!", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		else
		{
			if (textBoxNew->Text->CompareTo("") == 0)
			{
				MessageBox::Show("������� ����� ��������!", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			string newww = msclr::interop::marshal_as<std::string>(textBoxNew->Text);
			switch (comboBoxField->SelectedIndex)
			{
			case 0:
				Source::changeName(number, newww); 
				MessageBox::Show("��������� ���������", "�������", MessageBoxButtons::OK, MessageBoxIcon::Information);
				break;
			case 1:
				Source::changeCost(number, newww); 
				MessageBox::Show("��������� ���������", "�������", MessageBoxButtons::OK, MessageBoxIcon::Information);
				break;
			default:
				MessageBox::Show("������� ����!", "",MessageBoxButtons::OK,MessageBoxIcon::Error);
			}
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
private: System::Void comboBoxField_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
