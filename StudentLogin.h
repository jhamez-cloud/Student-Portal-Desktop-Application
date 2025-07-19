#pragma once
#include "StudentDashboard.h"
#include "Globals.h"

namespace StudentDataPortalSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient; // For SQL Server database connection

	/// <summary>
	/// Summary for StudentLogin
	/// </summary>
	public ref class StudentLogin : public System::Windows::Forms::Form
	{
	public:
		StudentLogin(void)
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
		~StudentLogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ student_id;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ email;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ password;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StudentLogin::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->student_id = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->email = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cascadia Mono SemiBold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(37, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(534, 40);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Student Login Page";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(117, 79);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(360, 3);
			this->label2->TabIndex = 1;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Cascadia Mono SemiBold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 133);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(199, 41);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Student ID";
			//this->label3->Click += gcnew System::EventHandler(this, &StudentLogin::label3_Click);
			// 
			// student_id
			// 
			this->student_id->Font = (gcnew System::Drawing::Font(L"Cascadia Mono SemiBold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->student_id->Location = System::Drawing::Point(259, 133);
			this->student_id->Multiline = true;
			this->student_id->Name = L"student_id";
			this->student_id->Size = System::Drawing::Size(331, 41);
			this->student_id->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(13, 168);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(198, 3);
			this->label4->TabIndex = 4;
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(13, 236);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(198, 3);
			this->label5->TabIndex = 7;
			// 
			// email
			// 
			this->email->Font = (gcnew System::Drawing::Font(L"Cascadia Mono SemiBold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->email->Location = System::Drawing::Point(259, 201);
			this->email->Multiline = true;
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(331, 41);
			this->email->TabIndex = 6;
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Cascadia Mono SemiBold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(12, 201);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(199, 41);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Email";
			// 
			// label7
			// 
			this->label7->Location = System::Drawing::Point(13, 304);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(198, 3);
			this->label7->TabIndex = 10;
			// 
			// password
			// 
			this->password->Font = (gcnew System::Drawing::Font(L"Cascadia Mono SemiBold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password->Location = System::Drawing::Point(259, 269);
			this->password->Multiline = true;
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(331, 41);
			this->password->TabIndex = 9;
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Cascadia Mono SemiBold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(12, 269);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(199, 41);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Password";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(259, 353);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(126, 48);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &StudentLogin::student_login);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(457, 353);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(124, 48);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &StudentLogin::student_login_cancel_btn);
			// 
			// StudentLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(602, 442);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->password);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->email);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->student_id);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name = L"StudentLogin";
			this->Text = L"Student Login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void student_login_cancel_btn(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

private: System::Void student_login(System::Object^ sender, System::EventArgs^ e) {

String^ studentId = student_id->Text;
String^ studentEmail = email->Text;
String^ studentPassword = password->Text;

if (studentId == "" || studentEmail == "" || studentPassword == "") {
	MessageBox::Show("Please fill in all fields.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	return;
}

try {
	String^ connectionString = "Data Source=localhost;Initial Catalog=student_admin_db;Integrated Security=True;Encrypt=True;TrustServerCertificate=True";
	SqlConnection^ sqlConn = gcnew SqlConnection(connectionString);
	sqlConn->Open();

	String^ sqlQuery =
		"SELECT * FROM Students "
		"JOIN Users ON Students.student_id = Users.student_id "
		"WHERE Students.student_id = @StudentId "
		"AND Students.email = @Email "
		"AND Users.password_hash = @studentPassword";

	SqlCommand^ command = gcnew SqlCommand(sqlQuery, sqlConn);

	command->Parameters->AddWithValue("@StudentId", studentId);
	command->Parameters->AddWithValue("@Email", studentEmail);
	command->Parameters->AddWithValue("@studentPassword", studentPassword);

	SqlDataReader^ reader = command->ExecuteReader();


	if (reader->Read()) {
		MessageBox::Show("Login successful!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		StudentDashboard^ studentDashboard = gcnew StudentDashboard();
		Globals::student_ID = studentId; // Store the student ID in the Globals class
		studentDashboard->Show();
	}
	else {
		MessageBox::Show("Invalid credentials.StudentID or Email or Password is incorrect ", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	reader->Close();

}
catch (Exception^ e) {
	MessageBox::Show("An error occurred while connecting to database: " + e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	return;
}


}
};
}
