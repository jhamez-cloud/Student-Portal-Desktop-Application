#pragma once
#include "AdminDashboard.h"

namespace StudentDataPortalSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for AdminLogin
	/// </summary>
	public ref class AdminLogin : public System::Windows::Forms::Form
	{
	public:
		AdminLogin(void)
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
		~AdminLogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ dash_password;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ dash_username;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ dash_id;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminLogin::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dash_password = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dash_username = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dash_id = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(457, 356);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(124, 48);
			this->button2->TabIndex = 25;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &AdminLogin::admin_close_btn);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(259, 356);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(126, 48);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &AdminLogin::admin_login_btn);
			// 
			// label7
			// 
			this->label7->Location = System::Drawing::Point(13, 307);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(198, 3);
			this->label7->TabIndex = 23;
			// 
			// dash_password
			// 
			this->dash_password->Font = (gcnew System::Drawing::Font(L"Cascadia Mono SemiBold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dash_password->Location = System::Drawing::Point(259, 272);
			this->dash_password->Multiline = true;
			this->dash_password->Name = L"dash_password";
			this->dash_password->Size = System::Drawing::Size(331, 41);
			this->dash_password->TabIndex = 22;
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Cascadia Mono SemiBold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(12, 272);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(199, 41);
			this->label8->TabIndex = 21;
			this->label8->Text = L"Password";
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(13, 239);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(198, 3);
			this->label5->TabIndex = 20;
			// 
			// dash_username
			// 
			this->dash_username->Font = (gcnew System::Drawing::Font(L"Cascadia Mono SemiBold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dash_username->Location = System::Drawing::Point(259, 204);
			this->dash_username->Multiline = true;
			this->dash_username->Name = L"dash_username";
			this->dash_username->Size = System::Drawing::Size(331, 41);
			this->dash_username->TabIndex = 19;
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Cascadia Mono SemiBold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(12, 204);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(199, 41);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Username";
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(13, 171);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(198, 3);
			this->label4->TabIndex = 17;
			// 
			// dash_id
			// 
			this->dash_id->Font = (gcnew System::Drawing::Font(L"Cascadia Mono SemiBold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dash_id->Location = System::Drawing::Point(259, 136);
			this->dash_id->Multiline = true;
			this->dash_id->Name = L"dash_id";
			this->dash_id->Size = System::Drawing::Size(331, 41);
			this->dash_id->TabIndex = 16;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Cascadia Mono SemiBold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 136);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(199, 41);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Admin ID";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(117, 82);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(360, 3);
			this->label2->TabIndex = 14;
			this->label2->Text = L"label2";
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cascadia Mono SemiBold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(37, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(534, 40);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Admin Login Page";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// AdminLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(602, 442);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->dash_password);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->dash_username);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dash_id);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"AdminLogin";
			this->Text = L"Admin Login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void admin_close_btn(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void admin_login_btn(System::Object^ sender, System::EventArgs^ e) {
	String^ admin_id = dash_id->Text;
	String^ admin_username = dash_username->Text;
	String^ admin_password = dash_password->Text;

	if (admin_id->Length == 0 || admin_username->Length == 0 || admin_password->Length == 0) {
		MessageBox::Show("Please enter your login credentials to proceed", "Error", MessageBoxButtons::OKCancel, MessageBoxIcon::Error);
		return;
	}


	try{
		String^ connectionString = "Data Source=localhost;Initial Catalog=student_admin_db;Integrated Security=True;Encrypt=True;TrustServerCertificate=True";
		SqlConnection^ sqlConn = gcnew SqlConnection(connectionString);
		sqlConn->Open();

		String^ sqlQuery =
			"SELECT user_id, username, password_hash "
			"FROM Users "
			"WHERE user_id = @userID AND username = @userName AND password_hash = @passwordHash";
		SqlCommand^ command = gcnew SqlCommand(sqlQuery, sqlConn);

		command->Parameters->AddWithValue("@userID", admin_id);
		command->Parameters->AddWithValue("@userName", admin_username);
		command->Parameters->AddWithValue("@passwordHash", admin_password);
		
		SqlDataReader^ reader = command->ExecuteReader();

		if (reader->Read()) {
			MessageBox::Show("Login successful!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			AdminDashboard^ Dashboard = gcnew AdminDashboard();
			Dashboard->Show();
		}
		else {
			MessageBox::Show("Invalid credentials.AdminID or Username or Password is incorrect ", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		reader->Close();
	}
	catch (Exception^ e) {
		MessageBox::Show("Unable to connect to Administrators database: " + e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		this->Close();
	}
}
};
}
