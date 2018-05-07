#pragma once

namespace cw_33b {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ReservationCheck
	/// </summary>
	public ref class ReservationCheck : public System::Windows::Forms::Form
	{
	public:
		ReservationCheck(void)
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
		~ReservationCheck()
		{
			if (components)
			{
				delete components;
			}
		}


	// --------------------------------------

	private:
		ref struct SSala {
			int id;
			String ^numer;
			int pojemnosc;
			bool rzutnik;
			bool komputerowa;
			bool wyswietlana;
		};

		ref class KSale {
		public:
			int lSal;
			array<SSala^> ^lista;
		};

		KSale ^sale;

		ref struct SGrupa {
			int id;
			String ^kierunek;
			int semestr;
			String^ grupa;
			int l_studentow;
			bool wyswietlana;
		};

		ref class KGrupy {
		public:
			int lGrup;
			array<SGrupa^> ^lista;
		};

		KGrupy ^grupy;

		// --------------------------------------


	protected:
	private: System::Windows::Forms::Label^  label_semestr;
	private: System::Windows::Forms::Label^  label_group;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label_date;
	private: System::Windows::Forms::GroupBox^  groupBox_group;
	private: System::Windows::Forms::ComboBox^  comboBox_group;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown_semester;



	private: System::Windows::Forms::GroupBox^  groupBox_class;
	private: System::Windows::Forms::ComboBox^  comboBox_class;

	private: System::Windows::Forms::GroupBox^  groupBox_term;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker;

	private: System::Windows::Forms::Button^  button_show;
	private: System::Windows::Forms::GroupBox^  groupBox_reservations;
	private: System::Windows::Forms::TextBox^  textBox;

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
			this->label_semestr = (gcnew System::Windows::Forms::Label());
			this->label_group = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label_date = (gcnew System::Windows::Forms::Label());
			this->groupBox_group = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox_group = (gcnew System::Windows::Forms::ComboBox());
			this->numericUpDown_semester = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBox_class = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox_class = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox_term = (gcnew System::Windows::Forms::GroupBox());
			this->dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->button_show = (gcnew System::Windows::Forms::Button());
			this->groupBox_reservations = (gcnew System::Windows::Forms::GroupBox());
			this->textBox = (gcnew System::Windows::Forms::TextBox());
			this->groupBox_group->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_semester))->BeginInit();
			this->groupBox_class->SuspendLayout();
			this->groupBox_term->SuspendLayout();
			this->groupBox_reservations->SuspendLayout();
			this->SuspendLayout();
			// 
			// label_semestr
			// 
			this->label_semestr->AutoSize = true;
			this->label_semestr->Location = System::Drawing::Point(68, 21);
			this->label_semestr->Name = L"label_semestr";
			this->label_semestr->Size = System::Drawing::Size(48, 13);
			this->label_semestr->TabIndex = 0;
			this->label_semestr->Text = L"Semestr:";
			this->label_semestr->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label_group
			// 
			this->label_group->AutoSize = true;
			this->label_group->Location = System::Drawing::Point(18, 48);
			this->label_group->Name = L"label_group";
			this->label_group->Size = System::Drawing::Size(98, 13);
			this->label_group->TabIndex = 1;
			this->label_group->Text = L"Kierunek i nr grupy:";
			this->label_group->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(74, 22);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(39, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Nr sali:";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label_date
			// 
			this->label_date->AutoSize = true;
			this->label_date->Location = System::Drawing::Point(83, 24);
			this->label_date->Name = L"label_date";
			this->label_date->Size = System::Drawing::Size(33, 13);
			this->label_date->TabIndex = 3;
			this->label_date->Text = L"Data:";
			this->label_date->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// groupBox_group
			// 
			this->groupBox_group->Controls->Add(this->comboBox_group);
			this->groupBox_group->Controls->Add(this->numericUpDown_semester);
			this->groupBox_group->Controls->Add(this->label_semestr);
			this->groupBox_group->Controls->Add(this->label_group);
			this->groupBox_group->Location = System::Drawing::Point(12, 12);
			this->groupBox_group->Name = L"groupBox_group";
			this->groupBox_group->Size = System::Drawing::Size(253, 76);
			this->groupBox_group->TabIndex = 4;
			this->groupBox_group->TabStop = false;
			this->groupBox_group->Text = L"Grupa";
			// 
			// comboBox_group
			// 
			this->comboBox_group->FormattingEnabled = true;
			this->comboBox_group->Location = System::Drawing::Point(121, 45);
			this->comboBox_group->Name = L"comboBox_group";
			this->comboBox_group->Size = System::Drawing::Size(126, 21);
			this->comboBox_group->TabIndex = 5;
			// 
			// numericUpDown_semester
			// 
			this->numericUpDown_semester->Location = System::Drawing::Point(121, 19);
			this->numericUpDown_semester->Name = L"numericUpDown_semester";
			this->numericUpDown_semester->Size = System::Drawing::Size(126, 20);
			this->numericUpDown_semester->TabIndex = 0;
			this->numericUpDown_semester->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->numericUpDown_semester->ValueChanged += gcnew System::EventHandler(this, &ReservationCheck::numericUpDown_semester_ValueChanged);
			// 
			// groupBox_class
			// 
			this->groupBox_class->Controls->Add(this->comboBox_class);
			this->groupBox_class->Controls->Add(this->label3);
			this->groupBox_class->Location = System::Drawing::Point(14, 94);
			this->groupBox_class->Name = L"groupBox_class";
			this->groupBox_class->Size = System::Drawing::Size(251, 50);
			this->groupBox_class->TabIndex = 0;
			this->groupBox_class->TabStop = false;
			this->groupBox_class->Text = L"Sala";
			// 
			// comboBox_class
			// 
			this->comboBox_class->FormattingEnabled = true;
			this->comboBox_class->Location = System::Drawing::Point(119, 19);
			this->comboBox_class->Name = L"comboBox_class";
			this->comboBox_class->Size = System::Drawing::Size(126, 21);
			this->comboBox_class->TabIndex = 0;
			// 
			// groupBox_term
			// 
			this->groupBox_term->Controls->Add(this->dateTimePicker);
			this->groupBox_term->Controls->Add(this->label_date);
			this->groupBox_term->Location = System::Drawing::Point(12, 150);
			this->groupBox_term->Name = L"groupBox_term";
			this->groupBox_term->Size = System::Drawing::Size(253, 52);
			this->groupBox_term->TabIndex = 0;
			this->groupBox_term->TabStop = false;
			this->groupBox_term->Text = L"Termin";
			// 
			// dateTimePicker
			// 
			this->dateTimePicker->Location = System::Drawing::Point(121, 18);
			this->dateTimePicker->Name = L"dateTimePicker";
			this->dateTimePicker->Size = System::Drawing::Size(126, 20);
			this->dateTimePicker->TabIndex = 5;
			// 
			// button_show
			// 
			this->button_show->Location = System::Drawing::Point(133, 223);
			this->button_show->Name = L"button_show";
			this->button_show->Size = System::Drawing::Size(126, 49);
			this->button_show->TabIndex = 3;
			this->button_show->Text = L"Pokaż rezerwacje";
			this->button_show->UseVisualStyleBackColor = true;
			this->button_show->Click += gcnew System::EventHandler(this, &ReservationCheck::button_show_Click);
			// 
			// groupBox_reservations
			// 
			this->groupBox_reservations->Controls->Add(this->textBox);
			this->groupBox_reservations->Location = System::Drawing::Point(282, 12);
			this->groupBox_reservations->Name = L"groupBox_reservations";
			this->groupBox_reservations->Size = System::Drawing::Size(311, 266);
			this->groupBox_reservations->TabIndex = 5;
			this->groupBox_reservations->TabStop = false;
			this->groupBox_reservations->Text = L"Aktualne rezerwacje";
			// 
			// textBox
			// 
			this->textBox->Location = System::Drawing::Point(6, 21);
			this->textBox->Multiline = true;
			this->textBox->Name = L"textBox";
			this->textBox->Size = System::Drawing::Size(299, 239);
			this->textBox->TabIndex = 6;
			// 
			// ReservationCheck
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(609, 286);
			this->Controls->Add(this->groupBox_reservations);
			this->Controls->Add(this->button_show);
			this->Controls->Add(this->groupBox_class);
			this->Controls->Add(this->groupBox_term);
			this->Controls->Add(this->groupBox_group);
			this->Name = L"ReservationCheck";
			this->Text = L"ReservationCheck";
			this->Load += gcnew System::EventHandler(this, &ReservationCheck::ReservationCheck_Load);
			this->groupBox_group->ResumeLayout(false);
			this->groupBox_group->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_semester))->EndInit();
			this->groupBox_class->ResumeLayout(false);
			this->groupBox_class->PerformLayout();
			this->groupBox_term->ResumeLayout(false);
			this->groupBox_term->PerformLayout();
			this->groupBox_reservations->ResumeLayout(false);
			this->groupBox_reservations->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion



	private: System::Void ReservationCheck_Load(System::Object^  sender, System::EventArgs^  e) {

		// CONNECTION CONFIGURATION

		System::Data::SqlClient::SqlConnection^ polaczenie;
		polaczenie = gcnew System::Data::SqlClient::SqlConnection("Data Source=LKM1;Database=Test;User Id=StudentDB;Password=sqlpass;");
		try {
			polaczenie->Open();
		}
		catch (System::Data::SqlClient::SqlException ^wyjatek) {
			MessageBox::Show(wyjatek->Message->ToString(), "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			Application::Exit();
		}

		if (polaczenie->State == System::Data::ConnectionState::Open) {

			System::Data::SqlClient::SqlCommand^ komenda = gcnew System::Data::SqlClient::SqlCommand();
			komenda->Connection = polaczenie;

			// CONFIGURING numericUpDown_semester 
			komenda->CommandText = "SELECT MAX(semestr) FROM RezSal.dbo.TGrupy";
			System::Data::SqlClient::SqlDataReader^ czytacz = komenda->ExecuteReader();
			czytacz->Read();
			numericUpDown_semester->Maximum = czytacz->GetInt16(0);
			czytacz->Close();

			// READING SALE FROM DB
			komenda->CommandText = "SELECT COUNT(*) FROM RezSal.dbo.TSale";
			czytacz = komenda->ExecuteReader();

			// preparing KSale class
			czytacz->Read();
			sale = gcnew KSale;
			sale->lSal = czytacz->GetInt32(0);
			sale->lista = gcnew array<SSala^>(sale->lSal);
			czytacz->Close();

			// transscrpiting Sale data from DB
			komenda->CommandText = "SELECT * FROM RezSal.dbo.TSale ORDER BY nr";
			czytacz = komenda->ExecuteReader();
			int i = 0;
			while (czytacz->Read()) {
				sale->lista[i] = gcnew SSala;
				sale->lista[i]->id = czytacz->GetInt32(0);
				sale->lista[i]->numer = czytacz->GetSqlString(1).ToString()->TrimEnd();
				sale->lista[i]->pojemnosc = czytacz->GetInt16(2);
				sale->lista[i]->rzutnik = czytacz->GetBoolean(3);
				sale->lista[i]->komputerowa = czytacz->GetBoolean(4);
				i++;
			}
			czytacz->Close();

			// displaying all sale (no filters)
			for (i = 0; i < (sale->lSal); i++) {
				comboBox_class->Items->Add(sale->lista[i]->numer);
				sale->lista[i]->wyswietlana = true;
			}



			// READING GRUPY FROM DB
			komenda->CommandText = "SELECT COUNT(*) FROM RezSal.dbo.TGrupy";
			czytacz = komenda->ExecuteReader();

			// preparing KSale class
			czytacz->Read();
			grupy = gcnew KGrupy;
			grupy->lGrup = czytacz->GetInt32(0);
			grupy->lista = gcnew array<SGrupa^>(grupy->lGrup);
			czytacz->Close();

			// transscrpiting Sale data from DB
			komenda->CommandText = "SELECT * FROM RezSal.dbo.TGrupy ORDER BY semestr";
			czytacz = komenda->ExecuteReader();
			i = 0;
			while (czytacz->Read()) {
				grupy->lista[i] = gcnew SGrupa;
				grupy->lista[i]->id = czytacz->GetInt32(0);
				grupy->lista[i]->kierunek = czytacz->GetSqlString(1).ToString()->TrimEnd();
				grupy->lista[i]->semestr = czytacz->GetInt16(2);
				grupy->lista[i]->grupa = czytacz->GetSqlString(3).ToString()->TrimEnd();
				grupy->lista[i]->l_studentow = czytacz->GetInt16(4);
				i++;
			}
			czytacz->Close();

			// displaying grupy (filetring: semester for "1" at the beginning)
			numericUpDown_semester->Value = 1;
			for (i = 0; i < (grupy->lGrup); i++) {
				if (grupy->lista[i]->semestr == Convert::ToInt32(numericUpDown_semester->Value)) {
					comboBox_group->Items->Add(grupy->lista[i]->grupa);
					grupy->lista[i]->wyswietlana = true;
				}
				else {
					grupy->lista[i]->wyswietlana = false;
				}
			}


			// CLOSING CONNECTION
			polaczenie->Close();
		}

	}


	// FUNCTION FILTERING GROUPS
	private: void filtrujGrupy(void) {

		comboBox_group->Text = "";
		comboBox_group->Items->Clear();

		for (int i = 0; i < (grupy->lGrup); i++) {
			if (grupy->lista[i]->semestr == Convert::ToInt32(numericUpDown_semester->Value)) {
				comboBox_group->Items->Add(grupy->lista[i]->grupa);
				grupy->lista[i]->wyswietlana = true;
			}
			else {
				grupy->lista[i]->wyswietlana = false;
			}
		}

	}

	private: System::Void numericUpDown_semester_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		filtrujGrupy();
	}



	private: System::Void button_show_Click(System::Object^  sender, System::EventArgs^  e) {


		// OPENING SQL CONNECTION
		System::Data::SqlClient::SqlConnection^ polaczenie;
		polaczenie = gcnew System::Data::SqlClient::SqlConnection("Data Source=LKM1;Database=Test;User Id=StudentDB;Password=sqlpass;");

		try {
			polaczenie->Open();
		}
		catch (System::Data::SqlClient::SqlException ^wyjatek) {
			MessageBox::Show(wyjatek->Message->ToString(), "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			Application::Exit();
		}


		// SENDING REQUEST
		if (polaczenie->State == System::Data::ConnectionState::Open) {

			System::Data::SqlClient::SqlCommand^ komenda = gcnew System::Data::SqlClient::SqlCommand();
			komenda->Connection = polaczenie;

			// https://www.w3schools.com/sql/sql_join.asp
			// http://stackoverflow.com/questions/16060958/how-to-get-only-the-datemm-dd-yyyy-by-using-the-getdate
			// https://msdn.microsoft.com/pl-pl/library/ms182418(v=sql.110).aspx


			// CASE 1: ONLY DATE SELECTED
			if ((comboBox_group->Text == "") && (comboBox_class->Text == "")) {
				komenda->CommandText = "SELECT TRezerwacje.termin_od, TRezerwacje.termin_do, TRezerwacje.rezerwujacy, TSale.nr, Tgrupy.semestr, Tgrupy.grupa ";
				komenda->CommandText += "FROM RezSal.dbo.TRezerwacje ";
				komenda->CommandText += "JOIN RezSal.dbo.TSale ON ID_sali=TSale.ID JOIN RezSal.dbo.TGrupy ON ID_grupy=TGrupy.ID ";
				komenda->CommandText += "WHERE CONVERT(DATE,termin_od,120) = '";
				komenda->CommandText += dateTimePicker->Value.ToShortDateString();
				komenda->CommandText += "'";
			}


			// CASE 2: ONLY DATE AND GROUP SELECTED
			else if (comboBox_class->Text == "") {
				komenda->CommandText = "SELECT TRezerwacje.termin_od, TRezerwacje.termin_do, TRezerwacje.rezerwujacy, TSale.nr, Tgrupy.semestr, Tgrupy.grupa ";
				komenda->CommandText += "FROM RezSal.dbo.TRezerwacje ";
				komenda->CommandText += "JOIN RezSal.dbo.TSale ON ID_sali=TSale.ID JOIN RezSal.dbo.TGrupy ON ID_grupy=TGrupy.ID ";
				komenda->CommandText += "WHERE CONVERT(DATE,termin_od,120) = '";
				komenda->CommandText += dateTimePicker->Value.ToShortDateString();
				komenda->CommandText += "' AND TGrupy.grupa = '";
				komenda->CommandText += comboBox_group->Text;
				komenda->CommandText += "'";
			}


			// CASE 3: ONLY DATE AND CLASSROOM SELECTED
			else if (comboBox_group->Text == "") {
				komenda->CommandText = "SELECT TRezerwacje.termin_od, TRezerwacje.termin_do, TRezerwacje.rezerwujacy, TSale.nr, Tgrupy.semestr, Tgrupy.grupa ";
				komenda->CommandText += "FROM RezSal.dbo.TRezerwacje ";
				komenda->CommandText += "JOIN RezSal.dbo.TSale ON ID_sali=TSale.ID JOIN RezSal.dbo.TGrupy ON ID_grupy=TGrupy.ID ";
				komenda->CommandText += "WHERE CONVERT(DATE,termin_od,120) = '";
				komenda->CommandText += dateTimePicker->Value.ToShortDateString();
				komenda->CommandText += "' AND TSale.nr = '";
				komenda->CommandText += comboBox_class->Text;
				komenda->CommandText += "'";
			}


			// CASE 4: DATE, GROUP AND CLASSROOM SELECTED
			else {
				komenda->CommandText = "SELECT TRezerwacje.termin_od, TRezerwacje.termin_do, TRezerwacje.rezerwujacy, TSale.nr, Tgrupy.semestr, Tgrupy.grupa ";
				komenda->CommandText += "FROM RezSal.dbo.TRezerwacje ";
				komenda->CommandText += "JOIN RezSal.dbo.TSale ON ID_sali=TSale.ID JOIN RezSal.dbo.TGrupy ON ID_grupy=TGrupy.ID ";
				komenda->CommandText += "WHERE CONVERT(DATE,termin_od,120) = '";
				komenda->CommandText += dateTimePicker->Value.ToShortDateString();
				komenda->CommandText += "' AND TGrupy.grupa = '";
				komenda->CommandText += comboBox_group->Text;
				komenda->CommandText += "' AND TSale.nr = '";
				komenda->CommandText += comboBox_class->Text;
				komenda->CommandText += "'";
			}

			System::Data::SqlClient::SqlDataReader^ czytacz = komenda->ExecuteReader();

			while (czytacz->Read()) {
				textBox->AppendText("Od: ");
				textBox->AppendText(czytacz->GetSqlDateTime(0).ToString()->TrimEnd());
				textBox->AppendText("\r\n Do: ");
				textBox->AppendText(czytacz->GetSqlDateTime(1).ToString()->TrimEnd());
				textBox->AppendText("\r\n Rezerwujący: ");
				textBox->AppendText(czytacz->GetSqlDateTime(2).ToString()->TrimEnd());
				textBox->AppendText("\r\n Sala: ");
				textBox->AppendText(czytacz->GetSqlString(3).ToString()->TrimEnd());
				textBox->AppendText("\r\n Semestr: ");
				textBox->AppendText(czytacz->GetSqlInt16(4).ToString()->TrimEnd());
				textBox->AppendText("\r\n Grupa: ");
				textBox->AppendText(czytacz->GetSqlString(5).ToString()->TrimEnd());
				textBox->AppendText("\r\n\r\n");
			}


			numericUpDown_semester->Value = 1;
			comboBox_group->Text = "";
			comboBox_class->Text = "";
			dateTimePicker->Value = DateTime::Now;

			czytacz->Read();
			int conflicts = czytacz->GetInt32(0);
			czytacz->Close();

		}

	}


};
}
