#pragma once
#include "Globals.h"

namespace StudentDataPortalSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for StudentDashboard
	/// </summary>
	public ref class StudentDashboard : public System::Windows::Forms::Form
	{
	public:
		StudentDashboard(void)
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
		~StudentDashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ welcome;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ dash_username;
	private: System::Windows::Forms::Label^ dash_id;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ dash_level;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ dash_programme;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::DataGridView^ courseGridView;
	private: System::Windows::Forms::Label^ label2;








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StudentDashboard::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->welcome = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dash_username = (gcnew System::Windows::Forms::Label());
			this->dash_id = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->dash_level = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->dash_programme = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->courseGridView = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->courseGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Cascadia Mono SemiBold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(177, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(639, 42);
			this->label1->TabIndex = 0;
			this->label1->Text = L",Welcome to your student dashboard.";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// welcome
			// 
			this->welcome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->welcome->Location = System::Drawing::Point(180, 23);
			this->welcome->Name = L"welcome";
			this->welcome->Size = System::Drawing::Size(159, 42);
			this->welcome->TabIndex = 1;
			this->welcome->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Cascadia Mono SemiBold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(13, 117);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(188, 41);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Name";
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(13, 162);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(188, 3);
			this->label4->TabIndex = 3;
			this->label4->Text = L"label4";
			// 
			// dash_username
			// 
			this->dash_username->Font = (gcnew System::Drawing::Font(L"Cascadia Mono SemiBold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dash_username->Location = System::Drawing::Point(218, 117);
			this->dash_username->Name = L"dash_username";
			this->dash_username->Size = System::Drawing::Size(483, 47);
			this->dash_username->TabIndex = 4;
			// 
			// dash_id
			// 
			this->dash_id->Font = (gcnew System::Drawing::Font(L"Cascadia Mono SemiBold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dash_id->Location = System::Drawing::Point(218, 199);
			this->dash_id->Name = L"dash_id";
			this->dash_id->Size = System::Drawing::Size(483, 47);
			this->dash_id->TabIndex = 7;
			// 
			// label7
			// 
			this->label7->Location = System::Drawing::Point(13, 244);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(188, 3);
			this->label7->TabIndex = 6;
			this->label7->Text = L"label7";
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Cascadia Mono SemiBold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(13, 199);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(188, 41);
			this->label8->TabIndex = 5;
			this->label8->Text = L"Students ID";
			// 
			// dash_level
			// 
			this->dash_level->Font = (gcnew System::Drawing::Font(L"Cascadia Mono SemiBold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dash_level->Location = System::Drawing::Point(218, 281);
			this->dash_level->Name = L"dash_level";
			this->dash_level->Size = System::Drawing::Size(483, 47);
			this->dash_level->TabIndex = 10;
			// 
			// label10
			// 
			this->label10->Location = System::Drawing::Point(13, 326);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(188, 3);
			this->label10->TabIndex = 9;
			this->label10->Text = L"label10";
			// 
			// label11
			// 
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Cascadia Mono SemiBold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(13, 281);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(188, 41);
			this->label11->TabIndex = 8;
			this->label11->Text = L"Level";
			// 
			// dash_programme
			// 
			this->dash_programme->Font = (gcnew System::Drawing::Font(L"Cascadia Mono SemiBold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dash_programme->Location = System::Drawing::Point(218, 368);
			this->dash_programme->Name = L"dash_programme";
			this->dash_programme->Size = System::Drawing::Size(483, 47);
			this->dash_programme->TabIndex = 13;
			// 
			// label13
			// 
			this->label13->Location = System::Drawing::Point(13, 413);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(188, 3);
			this->label13->TabIndex = 12;
			this->label13->Text = L"label13";
			// 
			// label14
			// 
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Cascadia Mono SemiBold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(13, 368);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(188, 41);
			this->label14->TabIndex = 11;
			this->label14->Text = L"Programme";
			// 
			// courseGridView
			// 
			this->courseGridView->AllowUserToOrderColumns = true;
			this->courseGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->courseGridView->Location = System::Drawing::Point(16, 510);
			this->courseGridView->Name = L"courseGridView";
			this->courseGridView->RowHeadersWidth = 51;
			this->courseGridView->RowTemplate->Height = 24;
			this->courseGridView->Size = System::Drawing::Size(685, 273);
			this->courseGridView->TabIndex = 14;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(57, 455);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(564, 35);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Registered Courses";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// StudentDashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(970, 795);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->courseGridView);
			this->Controls->Add(this->dash_programme);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->dash_level);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->dash_id);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->dash_username);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->welcome);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name = L"StudentDashboard";
			this->Text = L"StudentDashboard";
			this->Load += gcnew System::EventHandler(this, &StudentDashboard::Student_page_open);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->courseGridView))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Student_page_open(System::Object^ sender, System::EventArgs^ e) {
		String^ username = dash_username->Text;
		String^ studentId = Globals::student_ID;
		String^ Level = "200";
		String^ programme = dash_programme->Text;

		try {
			String^ connectionString = "Data Source=localhost;Initial Catalog=student_admin_db;Integrated Security=True;Encrypt=True;TrustServerCertificate=True";
			SqlConnection^ sqlConn = gcnew SqlConnection(connectionString);
			sqlConn->Open();

			String^ sqlQuery = "SELECT first_name, last_name, program_id FROM Students WHERE student_id = @studentId";
			SqlCommand^ command = gcnew SqlCommand(sqlQuery, sqlConn);
			command->Parameters->AddWithValue("@StudentId", studentId);

			SqlDataReader^ reader = command->ExecuteReader();

			if (reader->Read()) {
				String^ firstName = reader["first_name"]->ToString();
				String^ lastName = reader["last_name"]->ToString();

				username = firstName + " " + lastName;
				programme = reader["program_id"]->ToString();

				dash_username->Text = username;
				if (programme == "CS") {
					dash_programme-> Text = "Computer Science";
				}
				else if (programme == "IT") {
					dash_programme->Text = "Information Technology";
				}
				else if (programme == "SE") {
					dash_programme->Text = "Software Engineering";
				}
				else if (programme == "CE") {
					dash_programme->Text = "Computer Engineering";
				}

				dash_level->Text = "Level 200";
				dash_id->Text = studentId;
				welcome->Text = username;
			}

			reader->Close();

			String^ courseQuery = "SELECT course_code, course_name, level, credit_hours "
				"FROM Courses WHERE program_id = @ProgramId AND level = @Level";
			SqlCommand^ courseCommand = gcnew SqlCommand(courseQuery, sqlConn);
			courseCommand->Parameters->AddWithValue("@ProgramId", programme);
			courseCommand->Parameters->AddWithValue("@Level",Level);

			SqlDataAdapter^ adapter = gcnew SqlDataAdapter(courseCommand);
			DataTable^ courseTable = gcnew DataTable();
			adapter->Fill(courseTable);

			courseGridView->DataSource = courseTable;

		}
		catch (Exception^ e) {
			MessageBox::Show("Student ID can not be found in school database: " + e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}
};
}
