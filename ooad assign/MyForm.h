#pragma once
#include <string>
#include <msclr\marshal_cppstd.h>
#include "computation.h"
#include <string>
namespace ooad_assign {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;
	using namespace System::Data::SqlClient;
	using namespace System::Text;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			panel1->Hide();
			panel2->Hide();

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
	private: System::Windows::Forms::TextBox^  email;
	private: System::Windows::Forms::TextBox^  password;
	private: System::Windows::Forms::Label^  elabel;
	private: System::Windows::Forms::Label^  plabel;
	private: System::Windows::Forms::Button^  login;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::ComboBox^  options;
	private: System::Windows::Forms::Button^  search;
	private: System::Windows::Forms::RichTextBox^  details;
	private: System::Windows::Forms::TextBox^  detail;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::RichTextBox^  userdetails;

	private: System::Windows::Forms::Label^  id;
	private: System::Windows::Forms::TextBox^  iddata;
	private: System::Windows::Forms::Label^  item;
	private: System::Windows::Forms::Label^  user;
	private: System::Windows::Forms::Button^  search2;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::TextBox^  iddata2;
	private: System::Windows::Forms::Button^  issue;


	private: System::Windows::Forms::TextBox^  title;

	private: System::Windows::Forms::ComboBox^  options2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  it;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::TextBox^  iddata3;
	private: System::Windows::Forms::Button^  issue2;
	private: System::Windows::Forms::TextBox^  title2;
	private: System::Windows::Forms::ComboBox^  options3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  rt;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  iddata4;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  pay;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  name;
	private: System::Windows::Forms::TextBox^  address;
	private: System::Windows::Forms::TextBox^  contact;
	private: System::Windows::Forms::Button^  addd;



	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::TextBox^  iddata5;
	private: System::Windows::Forms::Button^  search3;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  edit;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  contact2;
	private: System::Windows::Forms::TextBox^  address2;
	private: System::Windows::Forms::TextBox^  name2;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Panel^  panel8;
	private: System::Windows::Forms::ComboBox^  options4;

	private: System::Windows::Forms::Label^  author;
	private: System::Windows::Forms::Button^  additem;


	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TextBox^  a1;

	private: System::Windows::Forms::TextBox^  s1;

	private: System::Windows::Forms::TextBox^  t1;

	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  pages;
private: System::Windows::Forms::TextBox^  p1;
private: System::Windows::Forms::Panel^  panel9;
private: System::Windows::Forms::Panel^  panel10;
private: System::Windows::Forms::Label^  pages2;

private: System::Windows::Forms::TextBox^  p2;

private: System::Windows::Forms::ComboBox^  comboBox1;
private: System::Windows::Forms::Label^  author2;

private: System::Windows::Forms::Button^  edit2;

private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::TextBox^  a2;

private: System::Windows::Forms::TextBox^  s2;

private: System::Windows::Forms::TextBox^  t2;

private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::TextBox^  textBox5;
private: System::Windows::Forms::Button^  srch;
private: System::Windows::Forms::Panel^  panel11;
private: System::Windows::Forms::TextBox^  textBox1;
private: System::Windows::Forms::Button^  del;
private: System::Windows::Forms::ComboBox^  options5;


private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::Panel^  panel12;
private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::Button^  hold;
private: System::Windows::Forms::TextBox^  itemid;
private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::TextBox^  userid;
private: System::Windows::Forms::ComboBox^  state;




	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->email = (gcnew System::Windows::Forms::TextBox());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->elabel = (gcnew System::Windows::Forms::Label());
			this->plabel = (gcnew System::Windows::Forms::Label());
			this->login = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->item = (gcnew System::Windows::Forms::Label());
			this->detail = (gcnew System::Windows::Forms::TextBox());
			this->options = (gcnew System::Windows::Forms::ComboBox());
			this->search = (gcnew System::Windows::Forms::Button());
			this->details = (gcnew System::Windows::Forms::RichTextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->user = (gcnew System::Windows::Forms::Label());
			this->search2 = (gcnew System::Windows::Forms::Button());
			this->userdetails = (gcnew System::Windows::Forms::RichTextBox());
			this->id = (gcnew System::Windows::Forms::Label());
			this->iddata = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->iddata2 = (gcnew System::Windows::Forms::TextBox());
			this->issue = (gcnew System::Windows::Forms::Button());
			this->title = (gcnew System::Windows::Forms::TextBox());
			this->options2 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->it = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->iddata3 = (gcnew System::Windows::Forms::TextBox());
			this->issue2 = (gcnew System::Windows::Forms::Button());
			this->title2 = (gcnew System::Windows::Forms::TextBox());
			this->options3 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->rt = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->iddata4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pay = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->name = (gcnew System::Windows::Forms::TextBox());
			this->address = (gcnew System::Windows::Forms::TextBox());
			this->contact = (gcnew System::Windows::Forms::TextBox());
			this->addd = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->iddata5 = (gcnew System::Windows::Forms::TextBox());
			this->search3 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->edit = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->contact2 = (gcnew System::Windows::Forms::TextBox());
			this->address2 = (gcnew System::Windows::Forms::TextBox());
			this->name2 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->pages = (gcnew System::Windows::Forms::Label());
			this->p1 = (gcnew System::Windows::Forms::TextBox());
			this->options4 = (gcnew System::Windows::Forms::ComboBox());
			this->author = (gcnew System::Windows::Forms::Label());
			this->additem = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->a1 = (gcnew System::Windows::Forms::TextBox());
			this->s1 = (gcnew System::Windows::Forms::TextBox());
			this->t1 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->srch = (gcnew System::Windows::Forms::Button());
			this->pages2 = (gcnew System::Windows::Forms::Label());
			this->p2 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->author2 = (gcnew System::Windows::Forms::Label());
			this->edit2 = (gcnew System::Windows::Forms::Button());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->a2 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->s2 = (gcnew System::Windows::Forms::TextBox());
			this->t2 = (gcnew System::Windows::Forms::TextBox());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->del = (gcnew System::Windows::Forms::Button());
			this->options5 = (gcnew System::Windows::Forms::ComboBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->userid = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->hold = (gcnew System::Windows::Forms::Button());
			this->itemid = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->state = (gcnew System::Windows::Forms::ComboBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel11->SuspendLayout();
			this->panel12->SuspendLayout();
			this->SuspendLayout();
			// 
			// email
			// 
			this->email->Location = System::Drawing::Point(96, 26);
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(134, 20);
			this->email->TabIndex = 0;
			// 
			// password
			// 
			this->password->Location = System::Drawing::Point(96, 72);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(134, 20);
			this->password->TabIndex = 1;
			// 
			// elabel
			// 
			this->elabel->AutoSize = true;
			this->elabel->Location = System::Drawing::Point(51, 29);
			this->elabel->Name = L"elabel";
			this->elabel->Size = System::Drawing::Size(39, 13);
			this->elabel->TabIndex = 2;
			this->elabel->Text = L"EMAIL";
			// 
			// plabel
			// 
			this->plabel->AutoSize = true;
			this->plabel->Location = System::Drawing::Point(20, 76);
			this->plabel->Name = L"plabel";
			this->plabel->Size = System::Drawing::Size(70, 13);
			this->plabel->TabIndex = 3;
			this->plabel->Text = L"PASSWORD";
			this->plabel->Click += gcnew System::EventHandler(this, &MyForm::plabel_Click);
			// 
			// login
			// 
			this->login->BackColor = System::Drawing::Color::LavenderBlush;
			this->login->ForeColor = System::Drawing::Color::Maroon;
			this->login->Location = System::Drawing::Point(123, 119);
			this->login->Name = L"login";
			this->login->Size = System::Drawing::Size(75, 23);
			this->login->TabIndex = 4;
			this->login->Text = L"LOGIN";
			this->login->UseVisualStyleBackColor = false;
			this->login->Click += gcnew System::EventHandler(this, &MyForm::login_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::BlueViolet;
			this->panel1->Controls->Add(this->item);
			this->panel1->Controls->Add(this->detail);
			this->panel1->Controls->Add(this->options);
			this->panel1->Controls->Add(this->search);
			this->panel1->Controls->Add(this->details);
			this->panel1->Location = System::Drawing::Point(834, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(192, 245);
			this->panel1->TabIndex = 5;
			// 
			// item
			// 
			this->item->AutoSize = true;
			this->item->BackColor = System::Drawing::SystemColors::Desktop;
			this->item->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->item->Location = System::Drawing::Point(31, 26);
			this->item->Name = L"item";
			this->item->Size = System::Drawing::Size(98, 13);
			this->item->TabIndex = 4;
			this->item->Text = L"SEARCH AN ITEM";
			// 
			// detail
			// 
			this->detail->BackColor = System::Drawing::SystemColors::Info;
			this->detail->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->detail->Location = System::Drawing::Point(23, 74);
			this->detail->Name = L"detail";
			this->detail->Size = System::Drawing::Size(100, 13);
			this->detail->TabIndex = 3;
			this->detail->TextChanged += gcnew System::EventHandler(this, &MyForm::detail_TextChanged);
			// 
			// options
			// 
			this->options->BackColor = System::Drawing::SystemColors::Info;
			this->options->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->options->FormattingEnabled = true;
			this->options->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"By Title", L"By Subject", L"By Author" });
			this->options->Location = System::Drawing::Point(14, 44);
			this->options->Name = L"options";
			this->options->Size = System::Drawing::Size(121, 21);
			this->options->TabIndex = 1;
			this->options->Text = L"By Title";
			this->options->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::options_SelectedIndexChanged);
			// 
			// search
			// 
			this->search->Location = System::Drawing::Point(35, 100);
			this->search->Name = L"search";
			this->search->Size = System::Drawing::Size(75, 23);
			this->search->TabIndex = 0;
			this->search->Text = L"SEARCH";
			this->search->UseVisualStyleBackColor = true;
			this->search->Click += gcnew System::EventHandler(this, &MyForm::search_Click);
			// 
			// details
			// 
			this->details->BackColor = System::Drawing::SystemColors::Info;
			this->details->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->details->Location = System::Drawing::Point(14, 145);
			this->details->Name = L"details";
			this->details->ReadOnly = true;
			this->details->Size = System::Drawing::Size(160, 80);
			this->details->TabIndex = 2;
			this->details->Text = L"";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::BlueViolet;
			this->panel2->Controls->Add(this->user);
			this->panel2->Controls->Add(this->search2);
			this->panel2->Controls->Add(this->userdetails);
			this->panel2->Controls->Add(this->id);
			this->panel2->Controls->Add(this->iddata);
			this->panel2->Location = System::Drawing::Point(835, 258);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(198, 231);
			this->panel2->TabIndex = 6;
			// 
			// user
			// 
			this->user->AutoSize = true;
			this->user->BackColor = System::Drawing::SystemColors::Desktop;
			this->user->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->user->Location = System::Drawing::Point(51, 20);
			this->user->Name = L"user";
			this->user->Size = System::Drawing::Size(94, 13);
			this->user->TabIndex = 5;
			this->user->Text = L"SEARCH A USER";
			// 
			// search2
			// 
			this->search2->Location = System::Drawing::Point(54, 87);
			this->search2->Name = L"search2";
			this->search2->Size = System::Drawing::Size(75, 23);
			this->search2->TabIndex = 3;
			this->search2->Text = L"SEARCH";
			this->search2->UseVisualStyleBackColor = true;
			this->search2->Click += gcnew System::EventHandler(this, &MyForm::search2_Click);
			// 
			// userdetails
			// 
			this->userdetails->BackColor = System::Drawing::SystemColors::Window;
			this->userdetails->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->userdetails->Location = System::Drawing::Point(13, 126);
			this->userdetails->Name = L"userdetails";
			this->userdetails->ReadOnly = true;
			this->userdetails->Size = System::Drawing::Size(167, 95);
			this->userdetails->TabIndex = 2;
			this->userdetails->Text = L"";
			// 
			// id
			// 
			this->id->AutoSize = true;
			this->id->Location = System::Drawing::Point(59, 38);
			this->id->Name = L"id";
			this->id->Size = System::Drawing::Size(61, 13);
			this->id->TabIndex = 1;
			this->id->Text = L"INSERT ID";
			// 
			// iddata
			// 
			this->iddata->BackColor = System::Drawing::SystemColors::Info;
			this->iddata->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->iddata->Location = System::Drawing::Point(62, 61);
			this->iddata->Name = L"iddata";
			this->iddata->Size = System::Drawing::Size(58, 13);
			this->iddata->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Coral;
			this->panel3->Controls->Add(this->iddata2);
			this->panel3->Controls->Add(this->issue);
			this->panel3->Controls->Add(this->title);
			this->panel3->Controls->Add(this->options2);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Controls->Add(this->it);
			this->panel3->Location = System::Drawing::Point(659, 258);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(163, 231);
			this->panel3->TabIndex = 7;
			// 
			// iddata2
			// 
			this->iddata2->BackColor = System::Drawing::SystemColors::Info;
			this->iddata2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->iddata2->Location = System::Drawing::Point(33, 62);
			this->iddata2->Name = L"iddata2";
			this->iddata2->Size = System::Drawing::Size(58, 13);
			this->iddata2->TabIndex = 11;
			// 
			// issue
			// 
			this->issue->Location = System::Drawing::Point(33, 142);
			this->issue->Name = L"issue";
			this->issue->Size = System::Drawing::Size(75, 23);
			this->issue->TabIndex = 10;
			this->issue->Text = L"ISSUE";
			this->issue->UseVisualStyleBackColor = true;
			this->issue->Click += gcnew System::EventHandler(this, &MyForm::issue_Click);
			// 
			// title
			// 
			this->title->BackColor = System::Drawing::SystemColors::Info;
			this->title->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->title->Location = System::Drawing::Point(20, 116);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(100, 13);
			this->title->TabIndex = 9;
			this->title->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// options2
			// 
			this->options2->BackColor = System::Drawing::SystemColors::Info;
			this->options2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->options2->FormattingEnabled = true;
			this->options2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"BOOK", L"DVD" });
			this->options2->Location = System::Drawing::Point(8, 88);
			this->options2->Name = L"options2";
			this->options2->Size = System::Drawing::Size(121, 21);
			this->options2->TabIndex = 8;
			this->options2->Text = L"BOOK";
			this->options2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::options2_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(34, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"INSERT ID";
			// 
			// it
			// 
			this->it->AutoSize = true;
			this->it->BackColor = System::Drawing::SystemColors::Desktop;
			this->it->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->it->Location = System::Drawing::Point(33, 14);
			this->it->Name = L"it";
			this->it->Size = System::Drawing::Size(68, 13);
			this->it->TabIndex = 5;
			this->it->Text = L"ISSUE ITEM";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Coral;
			this->panel4->Controls->Add(this->iddata3);
			this->panel4->Controls->Add(this->issue2);
			this->panel4->Controls->Add(this->title2);
			this->panel4->Controls->Add(this->options3);
			this->panel4->Controls->Add(this->label2);
			this->panel4->Controls->Add(this->rt);
			this->panel4->Location = System::Drawing::Point(663, 12);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(159, 225);
			this->panel4->TabIndex = 8;
			// 
			// iddata3
			// 
			this->iddata3->BackColor = System::Drawing::SystemColors::Info;
			this->iddata3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->iddata3->Location = System::Drawing::Point(33, 62);
			this->iddata3->Name = L"iddata3";
			this->iddata3->Size = System::Drawing::Size(58, 13);
			this->iddata3->TabIndex = 11;
			// 
			// issue2
			// 
			this->issue2->Location = System::Drawing::Point(33, 142);
			this->issue2->Name = L"issue2";
			this->issue2->Size = System::Drawing::Size(75, 23);
			this->issue2->TabIndex = 10;
			this->issue2->Text = L"RETURN";
			this->issue2->UseVisualStyleBackColor = true;
			this->issue2->Click += gcnew System::EventHandler(this, &MyForm::issue2_Click);
			// 
			// title2
			// 
			this->title2->BackColor = System::Drawing::SystemColors::Info;
			this->title2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->title2->Location = System::Drawing::Point(20, 116);
			this->title2->Name = L"title2";
			this->title2->Size = System::Drawing::Size(100, 13);
			this->title2->TabIndex = 9;
			this->title2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// options3
			// 
			this->options3->BackColor = System::Drawing::SystemColors::Info;
			this->options3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->options3->FormattingEnabled = true;
			this->options3->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"BOOK", L"DVD" });
			this->options3->Location = System::Drawing::Point(25, 88);
			this->options3->Name = L"options3";
			this->options3->Size = System::Drawing::Size(83, 21);
			this->options3->TabIndex = 8;
			this->options3->Text = L"BOOK";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(34, 39);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"INSERT ID";
			// 
			// rt
			// 
			this->rt->AutoSize = true;
			this->rt->BackColor = System::Drawing::SystemColors::Desktop;
			this->rt->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->rt->Location = System::Drawing::Point(33, 14);
			this->rt->Name = L"rt";
			this->rt->Size = System::Drawing::Size(82, 13);
			this->rt->TabIndex = 5;
			this->rt->Text = L"RETURN ITEM";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::Desktop;
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(17, 19);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"PAY FINE";
			// 
			// iddata4
			// 
			this->iddata4->BackColor = System::Drawing::SystemColors::Info;
			this->iddata4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->iddata4->Location = System::Drawing::Point(16, 74);
			this->iddata4->Name = L"iddata4";
			this->iddata4->Size = System::Drawing::Size(58, 13);
			this->iddata4->TabIndex = 13;
			this->iddata4->TextChanged += gcnew System::EventHandler(this, &MyForm::iddata4_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(17, 51);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"INSERT ID";
			// 
			// pay
			// 
			this->pay->Location = System::Drawing::Point(16, 100);
			this->pay->Name = L"pay";
			this->pay->Size = System::Drawing::Size(62, 23);
			this->pay->TabIndex = 14;
			this->pay->Text = L"PAY";
			this->pay->UseVisualStyleBackColor = true;
			this->pay->Click += gcnew System::EventHandler(this, &MyForm::pay_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::Desktop;
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(58, 11);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(98, 13);
			this->label5->TabIndex = 15;
			this->label5->Text = L"ADD BORROWER";
			// 
			// name
			// 
			this->name->Location = System::Drawing::Point(75, 31);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(100, 20);
			this->name->TabIndex = 16;
			// 
			// address
			// 
			this->address->Location = System::Drawing::Point(75, 57);
			this->address->Name = L"address";
			this->address->Size = System::Drawing::Size(100, 20);
			this->address->TabIndex = 17;
			// 
			// contact
			// 
			this->contact->Location = System::Drawing::Point(75, 83);
			this->contact->Name = L"contact";
			this->contact->Size = System::Drawing::Size(100, 20);
			this->contact->TabIndex = 18;
			// 
			// addd
			// 
			this->addd->Location = System::Drawing::Point(66, 113);
			this->addd->Name = L"addd";
			this->addd->Size = System::Drawing::Size(75, 23);
			this->addd->TabIndex = 19;
			this->addd->Text = L"ADD";
			this->addd->UseVisualStyleBackColor = true;
			this->addd->Click += gcnew System::EventHandler(this, &MyForm::addd_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::Desktop;
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(31, 34);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(38, 13);
			this->label6->TabIndex = 16;
			this->label6->Text = L"NAME";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::Desktop;
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(10, 61);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(59, 13);
			this->label7->TabIndex = 17;
			this->label7->Text = L"ADDRESS";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::Desktop;
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label8->Location = System::Drawing::Point(17, 86);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(44, 13);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Contact";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::ControlText;
			this->panel5->Controls->Add(this->label8);
			this->panel5->Controls->Add(this->addd);
			this->panel5->Controls->Add(this->label7);
			this->panel5->Controls->Add(this->label6);
			this->panel5->Controls->Add(this->contact);
			this->panel5->Controls->Add(this->address);
			this->panel5->Controls->Add(this->name);
			this->panel5->Controls->Add(this->label5);
			this->panel5->Location = System::Drawing::Point(472, 258);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(183, 231);
			this->panel5->TabIndex = 20;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::SystemColors::Highlight;
			this->panel6->Controls->Add(this->pay);
			this->panel6->Controls->Add(this->label3);
			this->panel6->Controls->Add(this->label4);
			this->panel6->Controls->Add(this->iddata4);
			this->panel6->Location = System::Drawing::Point(12, 269);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(111, 231);
			this->panel6->TabIndex = 21;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::SystemColors::ControlText;
			this->panel7->Controls->Add(this->iddata5);
			this->panel7->Controls->Add(this->search3);
			this->panel7->Controls->Add(this->label9);
			this->panel7->Controls->Add(this->edit);
			this->panel7->Controls->Add(this->label10);
			this->panel7->Controls->Add(this->label11);
			this->panel7->Controls->Add(this->contact2);
			this->panel7->Controls->Add(this->address2);
			this->panel7->Controls->Add(this->name2);
			this->panel7->Controls->Add(this->label12);
			this->panel7->Location = System::Drawing::Point(472, 12);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(183, 225);
			this->panel7->TabIndex = 22;
			// 
			// iddata5
			// 
			this->iddata5->BackColor = System::Drawing::SystemColors::Info;
			this->iddata5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->iddata5->Location = System::Drawing::Point(75, 47);
			this->iddata5->Name = L"iddata5";
			this->iddata5->Size = System::Drawing::Size(58, 13);
			this->iddata5->TabIndex = 21;
			// 
			// search3
			// 
			this->search3->Location = System::Drawing::Point(70, 66);
			this->search3->Name = L"search3";
			this->search3->Size = System::Drawing::Size(75, 23);
			this->search3->TabIndex = 20;
			this->search3->Text = L"SEARCH";
			this->search3->UseVisualStyleBackColor = true;
			this->search3->Click += gcnew System::EventHandler(this, &MyForm::search3_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::Desktop;
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label9->Location = System::Drawing::Point(12, 150);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(44, 13);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Contact";
			// 
			// edit
			// 
			this->edit->Location = System::Drawing::Point(61, 177);
			this->edit->Name = L"edit";
			this->edit->Size = System::Drawing::Size(75, 23);
			this->edit->TabIndex = 19;
			this->edit->Text = L"EDIT";
			this->edit->UseVisualStyleBackColor = true;
			this->edit->Click += gcnew System::EventHandler(this, &MyForm::edit_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::SystemColors::Desktop;
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label10->Location = System::Drawing::Point(5, 125);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(59, 13);
			this->label10->TabIndex = 17;
			this->label10->Text = L"ADDRESS";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::SystemColors::Desktop;
			this->label11->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label11->Location = System::Drawing::Point(26, 98);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(38, 13);
			this->label11->TabIndex = 16;
			this->label11->Text = L"NAME";
			// 
			// contact2
			// 
			this->contact2->Location = System::Drawing::Point(70, 147);
			this->contact2->Name = L"contact2";
			this->contact2->Size = System::Drawing::Size(100, 20);
			this->contact2->TabIndex = 18;
			// 
			// address2
			// 
			this->address2->Location = System::Drawing::Point(70, 121);
			this->address2->Name = L"address2";
			this->address2->Size = System::Drawing::Size(100, 20);
			this->address2->TabIndex = 17;
			// 
			// name2
			// 
			this->name2->Location = System::Drawing::Point(70, 95);
			this->name2->Name = L"name2";
			this->name2->Size = System::Drawing::Size(100, 20);
			this->name2->TabIndex = 16;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::SystemColors::Desktop;
			this->label12->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label12->Location = System::Drawing::Point(56, 17);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(100, 13);
			this->label12->TabIndex = 15;
			this->label12->Text = L"EDIT BORROWER";
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::SystemColors::HotTrack;
			this->panel8->Controls->Add(this->state);
			this->panel8->Controls->Add(this->pages);
			this->panel8->Controls->Add(this->p1);
			this->panel8->Controls->Add(this->options4);
			this->panel8->Controls->Add(this->author);
			this->panel8->Controls->Add(this->additem);
			this->panel8->Controls->Add(this->label14);
			this->panel8->Controls->Add(this->label15);
			this->panel8->Controls->Add(this->a1);
			this->panel8->Controls->Add(this->s1);
			this->panel8->Controls->Add(this->t1);
			this->panel8->Controls->Add(this->label16);
			this->panel8->Location = System::Drawing::Point(283, 10);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(183, 247);
			this->panel8->TabIndex = 23;
			// 
			// pages
			// 
			this->pages->AutoSize = true;
			this->pages->BackColor = System::Drawing::SystemColors::Desktop;
			this->pages->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->pages->Location = System::Drawing::Point(11, 154);
			this->pages->Name = L"pages";
			this->pages->Size = System::Drawing::Size(43, 13);
			this->pages->TabIndex = 21;
			this->pages->Text = L"PAGES";
			// 
			// p1
			// 
			this->p1->Location = System::Drawing::Point(71, 147);
			this->p1->Name = L"p1";
			this->p1->Size = System::Drawing::Size(100, 20);
			this->p1->TabIndex = 22;
			// 
			// options4
			// 
			this->options4->BackColor = System::Drawing::SystemColors::Info;
			this->options4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->options4->FormattingEnabled = true;
			this->options4->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"BOOK", L"DVD" });
			this->options4->Location = System::Drawing::Point(54, 33);
			this->options4->Name = L"options4";
			this->options4->Size = System::Drawing::Size(83, 21);
			this->options4->TabIndex = 20;
			this->options4->Text = L"BOOK";
			this->options4->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// author
			// 
			this->author->AutoSize = true;
			this->author->BackColor = System::Drawing::SystemColors::Desktop;
			this->author->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->author->Location = System::Drawing::Point(11, 122);
			this->author->Name = L"author";
			this->author->Size = System::Drawing::Size(53, 13);
			this->author->TabIndex = 18;
			this->author->Text = L"AUTHOR";
			// 
			// additem
			// 
			this->additem->Location = System::Drawing::Point(60, 219);
			this->additem->Name = L"additem";
			this->additem->Size = System::Drawing::Size(75, 23);
			this->additem->TabIndex = 19;
			this->additem->Text = L"ADD";
			this->additem->UseVisualStyleBackColor = true;
			this->additem->Click += gcnew System::EventHandler(this, &MyForm::additem_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::SystemColors::Desktop;
			this->label14->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label14->Location = System::Drawing::Point(21, 91);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(43, 13);
			this->label14->TabIndex = 17;
			this->label14->Text = L"Subject";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::SystemColors::Desktop;
			this->label15->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label15->Location = System::Drawing::Point(27, 64);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(37, 13);
			this->label15->TabIndex = 16;
			this->label15->Text = L"TITLE";
			this->label15->Click += gcnew System::EventHandler(this, &MyForm::label15_Click);
			// 
			// a1
			// 
			this->a1->Location = System::Drawing::Point(71, 115);
			this->a1->Name = L"a1";
			this->a1->Size = System::Drawing::Size(100, 20);
			this->a1->TabIndex = 18;
			// 
			// s1
			// 
			this->s1->Location = System::Drawing::Point(71, 87);
			this->s1->Name = L"s1";
			this->s1->Size = System::Drawing::Size(100, 20);
			this->s1->TabIndex = 17;
			// 
			// t1
			// 
			this->t1->Location = System::Drawing::Point(71, 61);
			this->t1->Name = L"t1";
			this->t1->Size = System::Drawing::Size(100, 20);
			this->t1->TabIndex = 16;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::SystemColors::Desktop;
			this->label16->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label16->Location = System::Drawing::Point(61, 8);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(59, 13);
			this->label16->TabIndex = 15;
			this->label16->Text = L"ADD ITEM";
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::Crimson;
			this->panel9->Controls->Add(this->login);
			this->panel9->Controls->Add(this->email);
			this->panel9->Controls->Add(this->password);
			this->panel9->Controls->Add(this->elabel);
			this->panel9->Controls->Add(this->plabel);
			this->panel9->Location = System::Drawing::Point(12, 12);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(255, 225);
			this->panel9->TabIndex = 24;
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::SystemColors::HotTrack;
			this->panel10->Controls->Add(this->textBox5);
			this->panel10->Controls->Add(this->srch);
			this->panel10->Controls->Add(this->pages2);
			this->panel10->Controls->Add(this->p2);
			this->panel10->Controls->Add(this->comboBox1);
			this->panel10->Controls->Add(this->author2);
			this->panel10->Controls->Add(this->edit2);
			this->panel10->Controls->Add(this->label18);
			this->panel10->Controls->Add(this->label19);
			this->panel10->Controls->Add(this->a2);
			this->panel10->Controls->Add(this->label20);
			this->panel10->Controls->Add(this->s2);
			this->panel10->Controls->Add(this->t2);
			this->panel10->Location = System::Drawing::Point(283, 258);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(183, 270);
			this->panel10->TabIndex = 25;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::Info;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Location = System::Drawing::Point(60, 71);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(58, 13);
			this->textBox5->TabIndex = 24;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// srch
			// 
			this->srch->Location = System::Drawing::Point(52, 95);
			this->srch->Name = L"srch";
			this->srch->Size = System::Drawing::Size(75, 23);
			this->srch->TabIndex = 23;
			this->srch->Text = L"SEARCH";
			this->srch->UseVisualStyleBackColor = true;
			this->srch->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// pages2
			// 
			this->pages2->AutoSize = true;
			this->pages2->BackColor = System::Drawing::SystemColors::Desktop;
			this->pages2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->pages2->Location = System::Drawing::Point(12, 208);
			this->pages2->Name = L"pages2";
			this->pages2->Size = System::Drawing::Size(43, 13);
			this->pages2->TabIndex = 21;
			this->pages2->Text = L"PAGES";
			// 
			// p2
			// 
			this->p2->Location = System::Drawing::Point(62, 201);
			this->p2->Name = L"p2";
			this->p2->Size = System::Drawing::Size(100, 20);
			this->p2->TabIndex = 22;
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::SystemColors::Info;
			this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"BOOK", L"DVD" });
			this->comboBox1->Location = System::Drawing::Point(52, 41);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(73, 21);
			this->comboBox1->TabIndex = 20;
			this->comboBox1->Text = L"BOOK";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged_1);
			// 
			// author2
			// 
			this->author2->AutoSize = true;
			this->author2->BackColor = System::Drawing::SystemColors::Desktop;
			this->author2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->author2->Location = System::Drawing::Point(2, 184);
			this->author2->Name = L"author2";
			this->author2->Size = System::Drawing::Size(53, 13);
			this->author2->TabIndex = 18;
			this->author2->Text = L"AUTHOR";
			// 
			// edit2
			// 
			this->edit2->Location = System::Drawing::Point(62, 227);
			this->edit2->Name = L"edit2";
			this->edit2->Size = System::Drawing::Size(75, 23);
			this->edit2->TabIndex = 19;
			this->edit2->Text = L"EDIT";
			this->edit2->UseVisualStyleBackColor = true;
			this->edit2->Click += gcnew System::EventHandler(this, &MyForm::edit2_Click);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::SystemColors::Desktop;
			this->label18->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label18->Location = System::Drawing::Point(12, 153);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(43, 13);
			this->label18->TabIndex = 17;
			this->label18->Text = L"Subject";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::SystemColors::Desktop;
			this->label19->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label19->Location = System::Drawing::Point(18, 126);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(37, 13);
			this->label19->TabIndex = 16;
			this->label19->Text = L"TITLE";
			// 
			// a2
			// 
			this->a2->Location = System::Drawing::Point(62, 175);
			this->a2->Name = L"a2";
			this->a2->Size = System::Drawing::Size(100, 20);
			this->a2->TabIndex = 18;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::SystemColors::Desktop;
			this->label20->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label20->Location = System::Drawing::Point(57, 15);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(61, 13);
			this->label20->TabIndex = 15;
			this->label20->Text = L"EDIT ITEM";
			// 
			// s2
			// 
			this->s2->Location = System::Drawing::Point(62, 149);
			this->s2->Name = L"s2";
			this->s2->Size = System::Drawing::Size(100, 20);
			this->s2->TabIndex = 17;
			// 
			// t2
			// 
			this->t2->Location = System::Drawing::Point(62, 123);
			this->t2->Name = L"t2";
			this->t2->Size = System::Drawing::Size(100, 20);
			this->t2->TabIndex = 16;
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::SystemColors::Highlight;
			this->panel11->Controls->Add(this->textBox1);
			this->panel11->Controls->Add(this->del);
			this->panel11->Controls->Add(this->options5);
			this->panel11->Controls->Add(this->label13);
			this->panel11->Location = System::Drawing::Point(135, 269);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(142, 231);
			this->panel11->TabIndex = 26;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Info;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Location = System::Drawing::Point(37, 74);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(58, 13);
			this->textBox1->TabIndex = 26;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// del
			// 
			this->del->Location = System::Drawing::Point(35, 100);
			this->del->Name = L"del";
			this->del->Size = System::Drawing::Size(60, 23);
			this->del->TabIndex = 25;
			this->del->Text = L"DELETE";
			this->del->UseVisualStyleBackColor = true;
			this->del->Click += gcnew System::EventHandler(this, &MyForm::del_Click);
			// 
			// options5
			// 
			this->options5->BackColor = System::Drawing::SystemColors::Info;
			this->options5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->options5->FormattingEnabled = true;
			this->options5->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"BOOK", L"DVD" });
			this->options5->Location = System::Drawing::Point(37, 42);
			this->options5->Name = L"options5";
			this->options5->Size = System::Drawing::Size(58, 21);
			this->options5->TabIndex = 21;
			this->options5->Text = L"BOOK";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::SystemColors::Desktop;
			this->label13->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label13->Location = System::Drawing::Point(32, 18);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(78, 13);
			this->label13->TabIndex = 9;
			this->label13->Text = L"DELETE ITEM";
			// 
			// panel12
			// 
			this->panel12->Controls->Add(this->userid);
			this->panel12->Controls->Add(this->label22);
			this->panel12->Controls->Add(this->hold);
			this->panel12->Controls->Add(this->itemid);
			this->panel12->Controls->Add(this->label21);
			this->panel12->Controls->Add(this->label17);
			this->panel12->Location = System::Drawing::Point(1032, 12);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(141, 225);
			this->panel12->TabIndex = 27;
			this->panel12->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel12_Paint);
			// 
			// userid
			// 
			this->userid->BackColor = System::Drawing::SystemColors::Info;
			this->userid->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->userid->Location = System::Drawing::Point(39, 125);
			this->userid->Name = L"userid";
			this->userid->Size = System::Drawing::Size(58, 13);
			this->userid->TabIndex = 16;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(19, 105);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(94, 13);
			this->label22->TabIndex = 15;
			this->label22->Text = L"INSERT USER ID";
			this->label22->Click += gcnew System::EventHandler(this, &MyForm::label22_Click);
			// 
			// hold
			// 
			this->hold->Location = System::Drawing::Point(39, 154);
			this->hold->Name = L"hold";
			this->hold->Size = System::Drawing::Size(58, 23);
			this->hold->TabIndex = 14;
			this->hold->Text = L"HOLD";
			this->hold->UseVisualStyleBackColor = true;
			this->hold->Click += gcnew System::EventHandler(this, &MyForm::hold_Click);
			// 
			// itemid
			// 
			this->itemid->BackColor = System::Drawing::SystemColors::Info;
			this->itemid->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->itemid->Location = System::Drawing::Point(39, 79);
			this->itemid->Name = L"itemid";
			this->itemid->Size = System::Drawing::Size(58, 13);
			this->itemid->TabIndex = 13;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(22, 52);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(90, 13);
			this->label21->TabIndex = 12;
			this->label21->Text = L"INSERT ITEM ID";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::SystemColors::Desktop;
			this->label17->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label17->Location = System::Drawing::Point(19, 33);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(93, 13);
			this->label17->TabIndex = 5;
			this->label17->Text = L"PLACE ON HOLD";
			// 
			// state
			// 
			this->state->BackColor = System::Drawing::SystemColors::Info;
			this->state->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->state->FormattingEnabled = true;
			this->state->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Available", L"Referenced" });
			this->state->Location = System::Drawing::Point(54, 181);
			this->state->Name = L"state";
			this->state->Size = System::Drawing::Size(83, 21);
			this->state->TabIndex = 23;
			this->state->Text = L"Available";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkCyan;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1185, 512);
			this->Controls->Add(this->panel12);
			this->Controls->Add(this->panel11);
			this->Controls->Add(this->panel10);
			this->Controls->Add(this->panel9);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"LMS";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::closingform);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void login_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ em= email->Text;
	String ^ pas = password->Text;
	string temp = marshal_as<string>(email->Text);
	password->Text = email->Text;
	panel1->Show();
	details->Hide();
	panel2->Show();
	userdetails->Hide();
	}
private: System::Void options_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void search_Click(System::Object^  sender, System::EventArgs^  e) {
	details->Text ="";
	computation c;
	int a=options->SelectedIndex;
	details->Text = details->Text + marshal_as<String^>((c.search(marshal_as<string>(detail->Text),a)));
	details->Show();

}
private: System::Void detail_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void search2_Click(System::Object^  sender, System::EventArgs^  e) {
	userdetails->Text = "";
	string aa= marshal_as<string>(iddata->Text);
	int size = aa.size();
	if (size > 0)
	{
		int i = stoi(aa);
		computation c;
		userdetails->Text = userdetails->Text + marshal_as<String^>(c.retuser(i));
		userdetails->Show();
	}
	else
	{
		String^ message = "Field cannot be empty";
		MessageBox::Show(this, message);
	}
}
private: System::Void issue_Click(System::Object^  sender, System::EventArgs^  e) 
{
	string aa = marshal_as<string>(iddata2->Text);
	int size = aa.size();
	string aa2 = marshal_as<string>(title->Text);
	if (size > 0 && aa2.size()>0)
	{
		int i = stoi(aa);
		computation c;
		int choice = options2->SelectedIndex;
		int res=c.issue(choice,i, aa2);
		if (res == 0)
		{
			String^ message = "User Not Found";
			MessageBox::Show(this, message);
		}
	    else if (res == 1)
		{
			String^ message = "Item Issued";
			MessageBox::Show(this, message);
		}
		else if (res == 2)
		{
			String^ message = "Item Not Found";
			MessageBox::Show(this, message);
		}
		else if (res == 3)
		{
			String^ message = "Item Already Issued";
			MessageBox::Show(this, message);
		}
		else if (res == 4)
		{
			String^ message = "Item ON Hold can't issue";
			MessageBox::Show(this, message);
		}
		else if (res == 6)
		{
			String^ message = "Item is referenced can't issue";
			MessageBox::Show(this, message);
		}
	}
	else
	{
		String^ message = "Field cannot be empty";
		MessageBox::Show(this, message);
	}
}
private: System::Void options2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void issue2_Click(System::Object^  sender, System::EventArgs^  e) 
{
	string aa = marshal_as<string>(iddata3->Text);
	int size = aa.size();
	string aa2 = marshal_as<string>(title2->Text);
	if (size > 0 && aa2.size()>0)
	{
		int i = stoi(aa);
		computation c;
		int choice = options3->SelectedIndex;
		//int res = c.issue(choice, i, aa2);
		int res=c.ret(choice, i, aa2);
		if (res == 0)
		{
			String^ message = "User Not Found";
			MessageBox::Show(this, message);
		}
		else if (res == 1)
		{
			String^ message = "Item Returned";
			MessageBox::Show(this, message);
		}
		else if (res == 2)
		{
			String^ message = "Item Not Found";
			MessageBox::Show(this, message);
		}
		else if (res == 3)
		{
			String^ message = "Item NOT Issued";
			MessageBox::Show(this, message);
		}

	}
	else
	{
		String^ message = "Field cannot be empty";
		MessageBox::Show(this, message);
	}
}
private: System::Void iddata4_TextChanged(System::Object^  sender, System::EventArgs^  e) 
{
	
}
private: System::Void pay_Click(System::Object^  sender, System::EventArgs^  e)
{
	string aa = marshal_as<string>(iddata4->Text);
	if (aa.size() > 0)
	{
		int i = stoi(aa);
		computation c;
		c.payfine(i);
		String^ message = "Fine Paid";
		MessageBox::Show(this, message);
	}
	else
	{
		String^ message = "Field Can't be empty";
		MessageBox::Show(this, message);
	}
}
private: System::Void addd_Click(System::Object^  sender, System::EventArgs^  e) 
{
	string a = marshal_as<string>(name->Text);
	string b = marshal_as<string>(address->Text);
	string c = marshal_as<string>(contact->Text);
	if (a.size() > 0 && b.size() > 0 && c.size() > 0)
	{
		computation cc;
		cc.addborrower(a, b, c);
		String^ message = "User added";
		MessageBox::Show(this, message);
	}
	else
	{
		String^ message = "Field can't be empty";
		MessageBox::Show(this, message);
	}
}
private: System::Void edit_Click(System::Object^  sender, System::EventArgs^  e) 
{
	string n, a, c;
	n = marshal_as<string>(name2->Text);
	a = marshal_as<string>(address2->Text);
	c = marshal_as<string>(contact2->Text);
	if (n.size() > 0 && a.size()>0 && c.size()>0)
	{
		computation cc;
		string aa = marshal_as<string>(iddata5->Text);
		int i = stoi(aa);
		cc.setuserdata(i, n, a, c);
		String^ message = "User details Edited";
		MessageBox::Show(this, message);
	}
	else
	{
		String^ message = "Field can't be empty";
		MessageBox::Show(this, message);
	}
}
private: System::Void search3_Click(System::Object^  sender, System::EventArgs^  e) 
{
	string aa = marshal_as<string>(iddata5->Text);
	int i = stoi(aa);
	string n, a, c;
	computation cc;
	cc.retuserdata(i, n, a, c);
	name2->Text = marshal_as<String^>(n);
	address2->Text = marshal_as<String^>(a);
	contact2->Text = marshal_as<String^>(c);
}
private: System::Void label15_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void additem_Click(System::Object^  sender, System::EventArgs^  e)
{
	int choice = options4->SelectedIndex;
	std::string tate;
	if (this->state->SelectedIndex == 0)
	{
		tate = "a";
	}
	else
	{
		tate = "r";
	}
	if (choice == 0)
	{
		string t = marshal_as<string>(t1->Text);
		string s = marshal_as<string>(s1->Text);
		string a = marshal_as<string>(a1->Text);
		string p = marshal_as<string>(p1->Text);
		if (t.size() > 0 && s.size() > 0 && a.size() > 0 && p.size() > 0)
		{
			int pag = stoi(p);
			
			computation cc;cc.addbook(t, s, a, pag,tate);
			String^ message = "BOOK Added";
			MessageBox::Show(this, message);
		}
		else
		{
			String^ message = "Field can't be empty";
			MessageBox::Show(this, message);
		}
	}
	else
	{
		string t = marshal_as<string>(t1->Text);
		string s = marshal_as<string>(s1->Text);
		string p = marshal_as<string>(p1->Text);
		if (t.size() > 0 && s.size() > 0 && p.size() > 0)
		{
			float pag = stof(p);
			computation cc;
			cc.adddvd(t, s, pag,tate);String^ message = "DVD Added";
			MessageBox::Show(this, message);
		}
		else
		{
			String^ message = "Field can't be empty";
			MessageBox::Show(this, message);
		}
	}
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
{
	if (options4->SelectedIndex == 1)
	{
		pages->Text = "SIZE";
	//	swap(pages->Location,author->Location);
		author->Hide();
		a1->Hide();
	}
	else
	{
		pages->Text = "PAGES";
	//	swap(pages->Location, author->Location);
		author->Show();
		a1->Show();
	}
}
private: System::Void plabel_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	computation cc;
	//cc.load();
}
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
{
	int choice = comboBox1->SelectedIndex;
	if (choice == 0)
	{
		string t, s, a;int p;
		computation cc;
		string search=marshal_as<string>(textBox5->Text);
		cc.retbook(search,t, s, a, p);
		t2->Text = marshal_as<String^>(t);
		a2->Text = marshal_as<String^>(a);
		s2->Text = marshal_as<String^>(s);
		string d = to_string(p);
		p2->Text= marshal_as<String^>(d);

	}
	else
	{
		string t, s;float p;
		computation cc;
		string search = marshal_as<string>(textBox5->Text);
		cc.retdvd(search, t, s, p);
		t2->Text = marshal_as<String^>(t);
		//a2->Text = marshal_as<String^>(a);
		s2->Text = marshal_as<String^>(s);
		string d = to_string(p);
		p2->Text = marshal_as<String^>(d);
	}
}
private: System::Void edit2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox1->SelectedIndex == 0)
	{
		string search,t, a, s,pp;int p;
		t = marshal_as<string>(t2->Text);
		s = marshal_as<string>(s2->Text);
		a = marshal_as<string>(a2->Text);
		pp = marshal_as<string>(p2->Text);
		if (t.size() > 0 && s.size() > 0 && a.size() > 0 && pp.size() > 0)
		{
			search = marshal_as<string>(textBox5->Text);
			p = stoi(pp);
			computation cc;
			cc.setbook(search, t, s, a, p);
			String^ message = "BOOK EDITED";
			MessageBox::Show(this, message);
		}
		else
		{
			String^ message = "Field can't be empty";
			MessageBox::Show(this, message);
		}
	}
	else
	{
		string search, t, s, pp;float p;
		t = marshal_as<string>(t2->Text);
		s = marshal_as<string>(s2->Text);
		//a = marshal_as<string>(a2->Text);
		search = marshal_as<string>(textBox5->Text);
		pp = marshal_as<string>(p2->Text);
		if (t.size() > 0 && s.size() > 0 && pp.size() > 0)
		{
			p = stof(pp);
			computation cc;
			cc.setdvd(search, t, s, p);
			String^ message = "DVD EDITED";
			MessageBox::Show(this, message);
		}
		else
		{
			String^ message = "Field can't be empty";
			MessageBox::Show(this, message);
		}
	}
}
private: System::Void comboBox1_SelectedIndexChanged_1(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox1->SelectedIndex == 1)
	{
		pages2->Text = "SIZE";
		//	swap(pages->Location,author->Location);
		author2->Hide();
		a2->Hide();
	}
	else
	{
		pages2->Text = "PAGES";
		//	swap(pages->Location, author->Location);
		author2->Show();
		a2->Show();
	}
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void del_Click(System::Object^  sender, System::EventArgs^  e) {
	computation cc;
	if (options5->SelectedIndex == 0)
	{
		string t = marshal_as<string>(textBox1->Text);
		int i=cc.delbook(t);
		if (i == 1)
		{
			String^ message = "BOOK DELETED";
			MessageBox::Show(this, message);
		}
		else if (i == 2)
		{
			String^ message = "BOOK NOT FOUND";
			MessageBox::Show(this, message);
		}
		else
		{
			String^ message = "BOOK has Loans can't delete";
			MessageBox::Show(this, message);
		}
	}
	else
	{
		string t = marshal_as<string>(textBox1->Text);
		int i=cc.deldvd(t);
		if (i == 1)
		{
			String^ message = "DVD DELETED";
			MessageBox::Show(this, message);
		}
		else if (i == 2)
		{
			String^ message = "DVD NOT FOUND";
			MessageBox::Show(this, message);
		}
		else
		{
			String^ message = "DVD has Loans can't delete";
			MessageBox::Show(this, message);
		}
	}
}
private: System::Void panel12_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void hold_Click(System::Object^  sender, System::EventArgs^  e) {
	string i, u;
	i = marshal_as<string>(itemid->Text);
	u = marshal_as<string>(userid->Text);
	if (i.size() > 0 && u.size() > 0)
	{
		int itid, uid;
		itid = stoi(i);
		uid = stoi(u);
		computation cc;
		int ans = cc.holdd(itid, uid);
		if (ans == 1)
		{
			String^ message = "Item placed on hold";
			MessageBox::Show(this, message);
		}
		else if (ans == 3)
		{
			String^ message = "User not found";
			MessageBox::Show(this, message);
		}
		else if (ans == 2)
		{
			String^ message = "Item not found";
			MessageBox::Show(this, message);
		}
		else if(ans==0)
		{
			String^ message = "Item not issued. Please issue instead of placing on hold";
			MessageBox::Show(this, message);
		}
		else
		{
			String^ message = "You have already issued this item :p have'nt you ";
			MessageBox::Show(this, message);
		}
	}
	else
	{
		String^ message = "Field can't be empty";
		MessageBox::Show(this, message);
	}


}
private: System::Void label22_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void closingform(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
	computation cc;
	cc.save();
}
};
}




