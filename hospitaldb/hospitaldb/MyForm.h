#pragma once
#include<iostream>
#include"Header.h"
#include <msclr/marshal.h>
#include <msclr/marshal_cppstd.h>
#include"update.h"

namespace hospitaldb {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace IO;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	sindex sin;
	
	
	public ref class MyForm : public System::Windows::Forms::Form
	{
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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ id;
	private: System::Windows::Forms::TextBox^ name;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::TextBox^ dct;
	private: System::Windows::Forms::TextBox^ no;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ address;
	private: System::Windows::Forms::Button^ insert;


	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ display;
	private: System::Windows::Forms::Button^ del;


	private: System::Windows::Forms::Button^ Update;
	private: System::Windows::Forms::TextBox^ upid;




	private: System::Windows::Forms::TextBox^ pi;
	private: System::Windows::Forms::TextBox^ si;


	private: System::Windows::Forms::Button^ spi;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ ssi;
	private: System::Windows::Forms::Button^ sii;



	private: System::Windows::Forms::TextBox^ iin;
	private: System::Windows::Forms::Label^ error;
	private: System::Windows::Forms::Label^ label8;







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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->id = (gcnew System::Windows::Forms::TextBox());
			this->name = (gcnew System::Windows::Forms::TextBox());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->dct = (gcnew System::Windows::Forms::TextBox());
			this->no = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->address = (gcnew System::Windows::Forms::TextBox());
			this->insert = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->display = (gcnew System::Windows::Forms::Button());
			this->del = (gcnew System::Windows::Forms::Button());
			this->Update = (gcnew System::Windows::Forms::Button());
			this->upid = (gcnew System::Windows::Forms::TextBox());
			this->pi = (gcnew System::Windows::Forms::TextBox());
			this->si = (gcnew System::Windows::Forms::TextBox());
			this->spi = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->ssi = (gcnew System::Windows::Forms::Button());
			this->sii = (gcnew System::Windows::Forms::Button());
			this->iin = (gcnew System::Windows::Forms::TextBox());
			this->error = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Patient ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 53);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 19);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Patient Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(331, 89);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 19);
			this->label3->TabIndex = 2;
			this->label3->Text = L"ADDRESS";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 91);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(38, 19);
			this->label4->TabIndex = 3;
			this->label4->Text = L"SEX";
			// 
			// id
			// 
			this->id->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->id->Location = System::Drawing::Point(122, 14);
			this->id->Name = L"id";
			this->id->Size = System::Drawing::Size(190, 26);
			this->id->TabIndex = 9;
			// 
			// name
			// 
			this->name->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name->Location = System::Drawing::Point(122, 50);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(190, 26);
			this->name->TabIndex = 10;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton3->Location = System::Drawing::Point(263, 89);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(62, 23);
			this->radioButton3->TabIndex = 13;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Other";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->Location = System::Drawing::Point(186, 89);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(71, 23);
			this->radioButton2->TabIndex = 12;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Female";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->Location = System::Drawing::Point(122, 89);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(58, 23);
			this->radioButton1->TabIndex = 11;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Male";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// dct
			// 
			this->dct->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dct->Location = System::Drawing::Point(456, 50);
			this->dct->Name = L"dct";
			this->dct->Size = System::Drawing::Size(190, 26);
			this->dct->TabIndex = 19;
			// 
			// no
			// 
			this->no->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->no->Location = System::Drawing::Point(456, 14);
			this->no->Name = L"no";
			this->no->Size = System::Drawing::Size(190, 26);
			this->no->TabIndex = 18;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(331, 53);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(83, 19);
			this->label5->TabIndex = 17;
			this->label5->Text = L"CON_DCT";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(331, 17);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(119, 19);
			this->label6->TabIndex = 16;
			this->label6->Text = L"CONTACT  NO.";
			// 
			// address
			// 
			this->address->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->address->Location = System::Drawing::Point(456, 86);
			this->address->Multiline = true;
			this->address->Name = L"address";
			this->address->Size = System::Drawing::Size(203, 86);
			this->address->TabIndex = 20;
			// 
			// insert
			// 
			this->insert->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->insert->Location = System::Drawing::Point(16, 142);
			this->insert->Name = L"insert";
			this->insert->Size = System::Drawing::Size(100, 30);
			this->insert->TabIndex = 21;
			this->insert->Text = L"Insert";
			this->insert->UseVisualStyleBackColor = true;
			this->insert->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(37, 251);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(746, 108);
			this->listBox1->TabIndex = 22;
			// 
			// display
			// 
			this->display->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->display->Location = System::Drawing::Point(376, 365);
			this->display->Name = L"display";
			this->display->Size = System::Drawing::Size(100, 30);
			this->display->TabIndex = 23;
			this->display->Text = L"Display";
			this->display->UseVisualStyleBackColor = true;
			this->display->Click += gcnew System::EventHandler(this, &MyForm::display_Click);
			// 
			// del
			// 
			this->del->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->del->Location = System::Drawing::Point(122, 142);
			this->del->Name = L"del";
			this->del->Size = System::Drawing::Size(100, 30);
			this->del->TabIndex = 24;
			this->del->Text = L"Delete";
			this->del->UseVisualStyleBackColor = true;
			this->del->Click += gcnew System::EventHandler(this, &MyForm::del_Click);
			// 
			// Update
			// 
			this->Update->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Update->Location = System::Drawing::Point(228, 142);
			this->Update->Name = L"Update";
			this->Update->Size = System::Drawing::Size(100, 30);
			this->Update->TabIndex = 25;
			this->Update->Text = L"Update";
			this->Update->UseVisualStyleBackColor = true;
			this->Update->Click += gcnew System::EventHandler(this, &MyForm::Update_Click);
			// 
			// upid
			// 
			this->upid->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->upid->Location = System::Drawing::Point(332, 145);
			this->upid->Name = L"upid";
			this->upid->Size = System::Drawing::Size(118, 26);
			this->upid->TabIndex = 26;
			// 
			// pi
			// 
			this->pi->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pi->Location = System::Drawing::Point(12, 194);
			this->pi->Name = L"pi";
			this->pi->Size = System::Drawing::Size(118, 26);
			this->pi->TabIndex = 27;
			// 
			// si
			// 
			this->si->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->si->Location = System::Drawing::Point(288, 194);
			this->si->Name = L"si";
			this->si->Size = System::Drawing::Size(118, 26);
			this->si->TabIndex = 28;
			this->si->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// spi
			// 
			this->spi->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->spi->Location = System::Drawing::Point(136, 191);
			this->spi->Name = L"spi";
			this->spi->Size = System::Drawing::Size(140, 30);
			this->spi->TabIndex = 29;
			this->spi->Text = L"Search *pi";
			this->spi->UseVisualStyleBackColor = true;
			this->spi->Click += gcnew System::EventHandler(this, &MyForm::spi_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Red;
			this->label7->Location = System::Drawing::Point(225, 226);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(391, 14);
			this->label7->TabIndex = 30;
			this->label7->Text = L"*1nd search is primary indexing ,2nd is secandary indexing & 3rd is inverted inde"
				L"xing";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// ssi
			// 
			this->ssi->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ssi->Location = System::Drawing::Point(412, 191);
			this->ssi->Name = L"ssi";
			this->ssi->Size = System::Drawing::Size(140, 30);
			this->ssi->TabIndex = 31;
			this->ssi->Text = L"Search *si";
			this->ssi->UseVisualStyleBackColor = true;
			this->ssi->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// sii
			// 
			this->sii->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sii->Location = System::Drawing::Point(682, 191);
			this->sii->Name = L"sii";
			this->sii->Size = System::Drawing::Size(140, 30);
			this->sii->TabIndex = 33;
			this->sii->Text = L"Search *ii";
			this->sii->UseVisualStyleBackColor = true;
			this->sii->Click += gcnew System::EventHandler(this, &MyForm::sii_Click);
			// 
			// iin
			// 
			this->iin->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->iin->Location = System::Drawing::Point(558, 194);
			this->iin->Name = L"iin";
			this->iin->Size = System::Drawing::Size(118, 26);
			this->iin->TabIndex = 32;
			// 
			// error
			// 
			this->error->AutoSize = true;
			this->error->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->error->ForeColor = System::Drawing::Color::Red;
			this->error->Location = System::Drawing::Point(535, 373);
			this->error->Name = L"error";
			this->error->Size = System::Drawing::Size(0, 14);
			this->error->TabIndex = 34;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::Color::Red;
			this->label8->Location = System::Drawing::Point(1, 115);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(449, 13);
			this->label8->TabIndex = 35;
			this->label8->Text = L"*for update enter id textbox next to update button and for delete enter the value"
				L" in pname box ";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(834, 417);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->error);
			this->Controls->Add(this->sii);
			this->Controls->Add(this->iin);
			this->Controls->Add(this->ssi);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->spi);
			this->Controls->Add(this->si);
			this->Controls->Add(this->pi);
			this->Controls->Add(this->upid);
			this->Controls->Add(this->Update);
			this->Controls->Add(this->del);
			this->Controls->Add(this->display);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->insert);
			this->Controls->Add(this->address);
			this->Controls->Add(this->dct);
			this->Controls->Add(this->no);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->name);
			this->Controls->Add(this->id);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if ((id->Text == ""||name->Text == "" || address->Text == "" || dct->Text == "" || no->Text == "" ) && (!(radioButton1->Checked) || !(radioButton2->Checked) || !(radioButton3->Checked))) {
			MessageBox::Show("Enter Value Please.", "Error");
			return;
		}
		msclr::interop::marshal_context con;
		m.pid = con.marshal_as<std::string>(id->Text);
		m.pname = con.marshal_as<std::string>(name->Text);
		if (radioButton1->Checked) {
			m.s = con.marshal_as<std::string>(radioButton1->Text);
		}
		if (radioButton2->Checked) {
			m.s = con.marshal_as<std::string>(radioButton2->Text);
		}
		if (radioButton3->Checked) {
			m.s = con.marshal_as<std::string>(radioButton3->Text);
		}
		m.contact = con.marshal_as<std::string>(no->Text);
		m.add= con.marshal_as<std::string>(address->Text);
		m.dct= con.marshal_as<std::string>(dct->Text);
		m.read();
		if (m.eflag == 1) {
			error->Text = gcnew String(m.error.c_str());
			return;
		}
		
		in.write();
		sin.swrite();
		id->Text = ""; name->Text = ""; address->Text = ""; dct->Text = ""; no->Text = "";
		radioButton1->Checked = false; radioButton2->Checked = false; radioButton3->Checked = false;
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (si->Text == "") {
		MessageBox::Show("Enter Value Please.", "Error");
		return;
	}
	msclr::interop::marshal_context con;
	m.pname = con.marshal_as<std::string>(si->Text);
	int flag = sec_search();
	listBox1->Items->Clear();
	for (int i = 0; i < m.ds; i++) {
		listBox1->Items->Add(gcnew String(m.disp[i].c_str()));
	}
	if (flag == -1)
		error->Text="NO RECORD FOUND..!!!";
	si->Text = "";

}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void display_Click(System::Object^ sender, System::EventArgs^ e) {
	listBox1->Items->Clear();
	m.datadisp();
	for (int i = 0; i < m.ds; i++) {
		listBox1->Items->Add(gcnew String(m.disp[i].c_str()));
	}
}
private: System::Void Update_Click(System::Object^ sender, System::EventArgs^ e) {
	if ((id->Text == "" || name->Text == "" || address->Text == "" || dct->Text == "" || no->Text == "") && (!(radioButton1->Checked) || !(radioButton2->Checked) || !(radioButton3->Checked))) {
		MessageBox::Show("Enter Value Please.", "Error");
		return;
	}	msclr::interop::marshal_context con;
	hospitaldb::update f;
	f.ShowDialog();
	StreamReader^ r = File::OpenText("project.txt");
	m.pid = con.marshal_as< std::string >(r->ReadLine());
	m.modify();
	if (m.eflag == 1) {
		error->Text = gcnew String(m.error.c_str());
		return;
	}
	m.pid = con.marshal_as<std::string>(id->Text);
	m.pname = con.marshal_as<std::string>(name->Text);
	if (radioButton1->Checked) {
		m.s = con.marshal_as<std::string>(radioButton1->Text);
	}
	if (radioButton2->Checked) {
		m.s = con.marshal_as<std::string>(radioButton2->Text);
	}
	if (radioButton3->Checked) {
		m.s = con.marshal_as<std::string>(radioButton3->Text);
	}
	m.contact = con.marshal_as<std::string>(no->Text);
	m.add = con.marshal_as<std::string>(address->Text);
	m.dct = con.marshal_as<std::string>(dct->Text);
	m.read();
	if (m.eflag == 1) {
		error->Text = gcnew String(m.error.c_str());
		return;
	}
	in.write();
	sin.swrite();
	id->Text = ""; name->Text = ""; address->Text = ""; dct->Text = ""; no->Text = ""; upid->Text = "";
	radioButton1->Checked = false; radioButton2->Checked = false; radioButton3->Checked = false;
}
private: System::Void del_Click(System::Object^ sender, System::EventArgs^ e) {
	int flag = 0;
	if (name->Text == "" ) {
		MessageBox::Show("Enter Value Please.", "Error");
		return;
	}
	msclr::interop::marshal_context con;
	m.pname = con.marshal_as<std::string>(name->Text);
	flag = sec_search();
	listBox1->Items->Clear();
	for (int i = 0; i < m.ds; i++) {
		listBox1->Items->Add(gcnew String(m.disp[i].c_str()));
	}
	if (upid->Text == "") {
		return;
	}
	if (flag == -1)
		cout << "NO RECORD FOUND..!!!";
	else
	{
		m.pid = con.marshal_as<std::string>(upid->Text);
		m.modify();
		in.write();
		sin.swrite();
	
	}
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	in.initial();
	sin.sinitial();
}
private: System::Void spi_Click(System::Object^ sender, System::EventArgs^ e) {
	if (pi->Text == "") {
		MessageBox::Show("Enter Value Please.", "Error");
		return;
	}
	msclr::interop::marshal_context con;
	m.pid = con.marshal_as<std::string>(pi->Text);
	char f[10];
	strcpy_s(f,m.pid.c_str());
	int a = search(f);
	if (a == -1)
	{
		cout << "Record not found....!";
	}
	else
	{
		m.indexdisplay(a);
		listBox1->Items->Clear();
		for (int i = 0; i < m.ds; i++) {
			listBox1->Items->Add(gcnew String(m.disp[i].c_str()));
		}
		cout << "\n\n\nSuccessfull search......  :";
	}
	pi->Text = "";
}
	private: System::Void sii_Click(System::Object^ sender, System::EventArgs^ e) {
		if (iin->Text == "") {
			MessageBox::Show("Enter Value Please.", "Error");
			return;
		}
		msclr::interop::marshal_context con;
		m.pname = con.marshal_as<std::string>(iin->Text);
		cout << "\n" << "\t\t\INVERTED LIST\n";
		int flag = secondary();
		if (flag == -1)
			error->Text="N0 RECORD FOUND....!!!!\n";
		listBox1->Items->Clear();
		for (int i = 0; i < m.ds; i++) {
			cout << m.disp[i];
			listBox1->Items->Add(gcnew String(m.disp[i].c_str()));
		}
}
};
}
