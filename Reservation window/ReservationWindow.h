#pragma once

namespace cw_33 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ReservationWindow
	/// </summary>
	public ref class ReservationWindow : public System::Windows::Forms::Form
	{
	public:
		ReservationWindow(void)
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
		~ReservationWindow()
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

	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected:
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Button^  button_rezerwuj;
	private: System::Windows::Forms::ComboBox^  comboBox_grupa;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown_semestr;
	private: System::Windows::Forms::ComboBox^  comboBox_sala;
	private: System::Windows::Forms::ComboBox^  comboBox_koniec;
	private: System::Windows::Forms::ComboBox^  comboBox_pocz;
	private: System::Windows::Forms::TextBox^  textBox_nazwisko;
	private: System::Windows::Forms::Button^  button_sprawdz;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::CheckBox^  checkBox_komputerowa;
	private: System::Windows::Forms::CheckBox^  checkBox_rzutnik;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker;


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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox_grupa = (gcnew System::Windows::Forms::ComboBox());
			this->numericUpDown_semestr = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox_komputerowa = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_rzutnik = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox_sala = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button_sprawdz = (gcnew System::Windows::Forms::Button());
			this->comboBox_koniec = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox_pocz = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox_nazwisko = (gcnew System::Windows::Forms::TextBox());
			this->button_rezerwuj = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_semestr))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->comboBox_grupa);
			this->groupBox1->Controls->Add(this->numericUpDown_semestr);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(260, 78);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Grupa";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(98, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Kierunek i nr grupy:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(51, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(48, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Semestr:";
			// 
			// comboBox_grupa
			// 
			this->comboBox_grupa->FormattingEnabled = true;
			this->comboBox_grupa->Location = System::Drawing::Point(101, 45);
			this->comboBox_grupa->Name = L"comboBox_grupa";
			this->comboBox_grupa->Size = System::Drawing::Size(143, 21);
			this->comboBox_grupa->TabIndex = 1;
			// 
			// numericUpDown_semestr
			// 
			this->numericUpDown_semestr->Location = System::Drawing::Point(101, 19);
			this->numericUpDown_semestr->Name = L"numericUpDown_semestr";
			this->numericUpDown_semestr->Size = System::Drawing::Size(143, 20);
			this->numericUpDown_semestr->TabIndex = 1;
			this->numericUpDown_semestr->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown_semestr->ValueChanged += gcnew System::EventHandler(this, &ReservationWindow::numericUpDown_semestr_ValueChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->groupBox5);
			this->groupBox2->Controls->Add(this->comboBox_sala);
			this->groupBox2->Location = System::Drawing::Point(12, 96);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(260, 122);
			this->groupBox2->TabIndex = 0;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Sala";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(60, 22);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(39, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Nr sali:";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->checkBox_komputerowa);
			this->groupBox5->Controls->Add(this->checkBox_rzutnik);
			this->groupBox5->Location = System::Drawing::Point(101, 46);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(143, 62);
			this->groupBox5->TabIndex = 3;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Filtr:";
			// 
			// checkBox_komputerowa
			// 
			this->checkBox_komputerowa->AutoSize = true;
			this->checkBox_komputerowa->Location = System::Drawing::Point(6, 39);
			this->checkBox_komputerowa->Name = L"checkBox_komputerowa";
			this->checkBox_komputerowa->Size = System::Drawing::Size(114, 17);
			this->checkBox_komputerowa->TabIndex = 1;
			this->checkBox_komputerowa->Text = L"Sala komputerowa";
			this->checkBox_komputerowa->UseVisualStyleBackColor = true;
			this->checkBox_komputerowa->CheckedChanged += gcnew System::EventHandler(this, &ReservationWindow::checkBox_komputerowa_CheckedChanged);
			// 
			// checkBox_rzutnik
			// 
			this->checkBox_rzutnik->AutoSize = true;
			this->checkBox_rzutnik->Location = System::Drawing::Point(6, 16);
			this->checkBox_rzutnik->Name = L"checkBox_rzutnik";
			this->checkBox_rzutnik->Size = System::Drawing::Size(105, 17);
			this->checkBox_rzutnik->TabIndex = 0;
			this->checkBox_rzutnik->Text = L"Sala z rzutnikiem";
			this->checkBox_rzutnik->UseVisualStyleBackColor = true;
			this->checkBox_rzutnik->CheckedChanged += gcnew System::EventHandler(this, &ReservationWindow::checkBox_rzutnik_CheckedChanged);
			// 
			// comboBox_sala
			// 
			this->comboBox_sala->FormattingEnabled = true;
			this->comboBox_sala->Location = System::Drawing::Point(101, 19);
			this->comboBox_sala->Name = L"comboBox_sala";
			this->comboBox_sala->Size = System::Drawing::Size(143, 21);
			this->comboBox_sala->TabIndex = 2;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->dateTimePicker);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->button_sprawdz);
			this->groupBox3->Controls->Add(this->comboBox_koniec);
			this->groupBox3->Controls->Add(this->comboBox_pocz);
			this->groupBox3->Location = System::Drawing::Point(12, 224);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(260, 106);
			this->groupBox3->TabIndex = 0;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Termin";
			// 
			// dateTimePicker
			// 
			this->dateTimePicker->Location = System::Drawing::Point(101, 19);
			this->dateTimePicker->Name = L"dateTimePicker";
			this->dateTimePicker->Size = System::Drawing::Size(142, 20);
			this->dateTimePicker->TabIndex = 8;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 76);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(90, 13);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Godzina - koniec:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(-3, 49);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(102, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Godzina - poczatek:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(66, 22);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(33, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Data:";
			// 
			// button_sprawdz
			// 
			this->button_sprawdz->Location = System::Drawing::Point(177, 46);
			this->button_sprawdz->Name = L"button_sprawdz";
			this->button_sprawdz->Size = System::Drawing::Size(67, 48);
			this->button_sprawdz->TabIndex = 3;
			this->button_sprawdz->Text = L"Sprawdz termin";
			this->button_sprawdz->UseVisualStyleBackColor = true;
			this->button_sprawdz->Click += gcnew System::EventHandler(this, &ReservationWindow::button_sprawdz_Click);
			// 
			// comboBox_koniec
			// 
			this->comboBox_koniec->FormattingEnabled = true;
			this->comboBox_koniec->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"8:00", L"9:00", L"10:00", L"11:00", L"12:00",
					L"13:00", L"14:00", L"15:00", L"16:00", L"17:00", L"18:00", L"19:00"
			});
			this->comboBox_koniec->Location = System::Drawing::Point(101, 73);
			this->comboBox_koniec->Name = L"comboBox_koniec";
			this->comboBox_koniec->Size = System::Drawing::Size(70, 21);
			this->comboBox_koniec->TabIndex = 3;
			this->comboBox_koniec->SelectedIndexChanged += gcnew System::EventHandler(this, &ReservationWindow::comboBox_koniec_SelectedIndexChanged);
			// 
			// comboBox_pocz
			// 
			this->comboBox_pocz->FormattingEnabled = true;
			this->comboBox_pocz->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"7:15", L"8:15", L"9:15", L"10:15", L"11:15",
					L"12:15", L"13:15", L"14:15", L"15:15", L"16:15", L"17:15", L"18:15"
			});
			this->comboBox_pocz->Location = System::Drawing::Point(101, 46);
			this->comboBox_pocz->Name = L"comboBox_pocz";
			this->comboBox_pocz->Size = System::Drawing::Size(70, 21);
			this->comboBox_pocz->TabIndex = 2;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label7);
			this->groupBox4->Controls->Add(this->textBox_nazwisko);
			this->groupBox4->Location = System::Drawing::Point(12, 336);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(260, 53);
			this->groupBox4->TabIndex = 0;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Rezerwujacy";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(40, 22);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(56, 13);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Nazwisko:";
			// 
			// textBox_nazwisko
			// 
			this->textBox_nazwisko->Location = System::Drawing::Point(101, 19);
			this->textBox_nazwisko->Name = L"textBox_nazwisko";
			this->textBox_nazwisko->Size = System::Drawing::Size(143, 20);
			this->textBox_nazwisko->TabIndex = 2;
			// 
			// button_rezerwuj
			// 
			this->button_rezerwuj->Location = System::Drawing::Point(137, 395);
			this->button_rezerwuj->Name = L"button_rezerwuj";
			this->button_rezerwuj->Size = System::Drawing::Size(119, 46);
			this->button_rezerwuj->TabIndex = 0;
			this->button_rezerwuj->Text = L"Rezerwuj";
			this->button_rezerwuj->UseVisualStyleBackColor = true;
			this->button_rezerwuj->Click += gcnew System::EventHandler(this, &ReservationWindow::button_rezerwuj_Click);
			// 
			// ReservationWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 450);
			this->Controls->Add(this->button_rezerwuj);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox1);
			this->Name = L"ReservationWindow";
			this->Text = L"Skladanie rezerwacji";
			this->Load += gcnew System::EventHandler(this, &ReservationWindow::ReservationWindow_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_semestr))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void ReservationWindow_Load(System::Object^  sender, System::EventArgs^  e) {

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
			numericUpDown_semestr->Maximum = czytacz->GetInt16(0);
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

			// displaying all sale (filters switched off at the beginning)
			for (i = 0; i < (sale->lSal); i++) {
				comboBox_sala->Items->Add(sale->lista[i]->numer);
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
			numericUpDown_semestr->Value = 1;
			for (i = 0; i < (grupy->lGrup); i++) {
				if (grupy->lista[i]->semestr == Convert::ToInt32(numericUpDown_semestr->Value)) {
					comboBox_grupa->Items->Add(grupy->lista[i]->grupa);
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



	private: void filtrujSale(void) {

		comboBox_sala->Text = "";
		comboBox_sala->Items->Clear();

		// sale z rzutnikiem
		if ((checkBox_rzutnik->Checked == true)&&(checkBox_komputerowa->Checked == false)) {
			for (int i = 0; i < (sale->lSal); i++) {
				if (sale->lista[i]->rzutnik == true) {
					comboBox_sala->Items->Add(sale->lista[i]->numer);
					sale->lista[i]->wyswietlana = true;
				}
				else {
					sale->lista[i]->wyswietlana = false;
				}
			}
		}
		// sale komputerowe
		if ((checkBox_rzutnik->Checked == false) && (checkBox_komputerowa->Checked == true)) {
			for (int i = 0; i < (sale->lSal); i++) {
				if (sale->lista[i]->komputerowa == true) {
					comboBox_sala->Items->Add(sale->lista[i]->numer);
					sale->lista[i]->wyswietlana = true;
				}
				else {
					sale->lista[i]->wyswietlana = false;
				}
			}
		}
		// sale komputerowe z rzutnikiem
		if ((checkBox_rzutnik->Checked == true) && (checkBox_komputerowa->Checked == true)) {
			for (int i = 0; i < (sale->lSal); i++) {
				if ((sale->lista[i]->rzutnik == true) && (sale->lista[i]->komputerowa == true)) {
					comboBox_sala->Items->Add(sale->lista[i]->numer);
					sale->lista[i]->wyswietlana = true;
				}
				else {
					sale->lista[i]->wyswietlana = false;
				}
			}
		}
		// wszystkie sale
		if ((checkBox_rzutnik->Checked == false) && (checkBox_komputerowa->Checked == false)) {
			for (int i = 0; i < (sale->lSal); i++) {
				comboBox_sala->Items->Add(sale->lista[i]->numer);
				sale->lista[i]->wyswietlana = true;
			}
		}

	}

	private: System::Void checkBox_rzutnik_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		filtrujSale();
	}
	private: System::Void checkBox_komputerowa_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		filtrujSale();
	}




	private: void filtrujGrupy(void) {

		comboBox_grupa->Text = "";
		comboBox_grupa->Items->Clear();

		for (int i = 0; i < (grupy->lGrup); i++) {
			if (grupy->lista[i]->semestr == Convert::ToInt32(numericUpDown_semestr->Value)) {
				comboBox_grupa->Items->Add(grupy->lista[i]->grupa);
				grupy->lista[i]->wyswietlana = true;
			}
			else {
				grupy->lista[i]->wyswietlana = false;
			}
		}

	}

	private: System::Void numericUpDown_semestr_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		filtrujGrupy();
	}





	// PREVENTING SITUATION WHEN RESERVATION ENDS BEFORE IT STARTS
	private: System::Void comboBox_koniec_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		if ((comboBox_koniec->SelectedIndex < comboBox_pocz->SelectedIndex) && (comboBox_koniec->SelectedIndex != -1)) {
			MessageBox::Show("Zajecia musza konczyc sie pozniej niz sie zaczynaja", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			comboBox_koniec->SelectedIndex = -1;
		}
	}


	private: System::Void button_sprawdz_Click(System::Object^  sender, System::EventArgs^  e) {

		bool error = false;

		// GETTING 'Sala' ID
		int indeksWyswietlanejSali = 0;
		int i = 0;
		if (comboBox_sala->SelectedIndex >= 0) {
			while (i <= comboBox_sala->SelectedIndex) {
				if (sale->lista[indeksWyswietlanejSali]->wyswietlana = true) {
					i++;
				}
				indeksWyswietlanejSali++;
			}
			indeksWyswietlanejSali--;
		}
		else {
			MessageBox::Show("Nie wybrano numeru sali", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			error = true;
		}

		if ((comboBox_pocz->SelectedIndex == -1) || (comboBox_koniec->SelectedIndex == -1)) {
			MessageBox::Show("Nie wybrano godziny", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			error = true;
		}


		if (!error) {
			// CHECKING IF CONFLICTS EXISTS
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

				// checking if term is free

				System::Data::SqlClient::SqlCommand^ komenda = gcnew System::Data::SqlClient::SqlCommand();
				komenda->Connection = polaczenie;
				komenda->CommandText = "SELECT COUNT(*) FROM RezSal.dbo.TRezerwacje WHERE ID_sali=";
				komenda->CommandText += sale->lista[indeksWyswietlanejSali]->id;
				komenda->CommandText += " AND (NOT ( (termin_od>='";
				komenda->CommandText += dateTimePicker->Value.ToShortDateString();
				komenda->CommandText += " ";
				komenda->CommandText += comboBox_pocz->Text;
				komenda->CommandText += "' AND termin_od>='";
				komenda->CommandText += dateTimePicker->Value.ToShortDateString();
				komenda->CommandText += " ";
				komenda->CommandText += comboBox_koniec->Text;
				komenda->CommandText += "' AND termin_do>='";
				komenda->CommandText += dateTimePicker->Value.ToShortDateString();
				komenda->CommandText += " ";
				komenda->CommandText += comboBox_pocz->Text;
				komenda->CommandText += "' AND termin_do>='";
				komenda->CommandText += dateTimePicker->Value.ToShortDateString();
				komenda->CommandText += " ";
				komenda->CommandText += comboBox_koniec->Text;
				komenda->CommandText += "') OR (termin_od<='";
				komenda->CommandText += dateTimePicker->Value.ToShortDateString();
				komenda->CommandText += " ";
				komenda->CommandText += comboBox_pocz->Text;
				komenda->CommandText += "' AND termin_od<='";
				komenda->CommandText += dateTimePicker->Value.ToShortDateString();
				komenda->CommandText += " ";
				komenda->CommandText += comboBox_koniec->Text;
				komenda->CommandText += "' AND termin_do<='";
				komenda->CommandText += dateTimePicker->Value.ToShortDateString();
				komenda->CommandText += " ";
				komenda->CommandText += comboBox_pocz->Text;
				komenda->CommandText += "' AND termin_do<='";
				komenda->CommandText += dateTimePicker->Value.ToShortDateString();
				komenda->CommandText += " ";
				komenda->CommandText += comboBox_koniec->Text;
				komenda->CommandText += "')))";

				System::Data::SqlClient::SqlDataReader^ czytacz = komenda->ExecuteReader();

				czytacz->Read();
				int conflicts = czytacz->GetInt32(0);
				czytacz->Close();


				// DISPLAYING MESSAGE
				if (conflicts == 0) {
					MessageBox::Show("Wybrany termin jest wolny", "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				else {
					MessageBox::Show("Wybrany termin jest zajety", "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				}
			}
		}
	}


	private: System::Void button_rezerwuj_Click(System::Object^  sender, System::EventArgs^  e) {

		bool error = false;
		
		int indeksWyswietlanejGrupy = 0;
		int i = 0;
		if (comboBox_grupa->SelectedIndex >= 0) {
			while (i <= comboBox_grupa->SelectedIndex) {
				if (grupy->lista[indeksWyswietlanejGrupy]->wyswietlana = true) {
					i++;
				}
				indeksWyswietlanejGrupy++;
			}
			indeksWyswietlanejGrupy--;
		}
		else {
			MessageBox::Show("Nie wybrano numeru grupy", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			error = true;
		}


		int indeksWyswietlanejSali = 0;
		i = 0;
		if (comboBox_sala->SelectedIndex >= 0) {
			while (i <= comboBox_sala->SelectedIndex) {
				if (sale->lista[indeksWyswietlanejSali]->wyswietlana = true) {
					i++;
				}
				indeksWyswietlanejSali++;
			}
			indeksWyswietlanejSali--;
		}
		else {
			MessageBox::Show("Nie wybrano numeru sali", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			error = true;
		}

		
		if ((comboBox_pocz->SelectedIndex == -1) || (comboBox_koniec->SelectedIndex == -1)) {
			MessageBox::Show("Nie wybrano godziny", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			error = true;
		}


		if (textBox_nazwisko->Text == "") {
			MessageBox::Show("Nie podano nazwiska", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			error = true;
		}


		if (!error) {

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

				// CHECKING IF CONFLICTS EXISTS
				System::Data::SqlClient::SqlCommand^ komenda = gcnew System::Data::SqlClient::SqlCommand();
				komenda->Connection = polaczenie;
				komenda->CommandText = "SELECT COUNT(*) From RezSal.dbo.TRezerwacje WHERE ID_sali=";
				komenda->CommandText += sale->lista[indeksWyswietlanejSali]->id;
				komenda->CommandText += " AND (NOT ( (termin_od>='";
				komenda->CommandText += dateTimePicker->Value.ToShortDateString();
				komenda->CommandText += " ";
				komenda->CommandText += comboBox_pocz->Text;
				komenda->CommandText += "' AND termin_od>='";
				komenda->CommandText += dateTimePicker->Value.ToShortDateString();
				komenda->CommandText += " ";
				komenda->CommandText += comboBox_koniec->Text;
				komenda->CommandText += "' AND termin_do>='";
				komenda->CommandText += dateTimePicker->Value.ToShortDateString();
				komenda->CommandText += " ";
				komenda->CommandText += comboBox_pocz->Text;
				komenda->CommandText += "' AND termin_do>='";
				komenda->CommandText += dateTimePicker->Value.ToShortDateString();
				komenda->CommandText += " ";
				komenda->CommandText += comboBox_koniec->Text;
				komenda->CommandText += "') OR (termin_od<='";
				komenda->CommandText += dateTimePicker->Value.ToShortDateString();
				komenda->CommandText += " ";
				komenda->CommandText += comboBox_pocz->Text;
				komenda->CommandText += "' AND termin_od<='";
				komenda->CommandText += dateTimePicker->Value.ToShortDateString();
				komenda->CommandText += " ";
				komenda->CommandText += comboBox_koniec->Text;
				komenda->CommandText += "' AND termin_do<='";
				komenda->CommandText += dateTimePicker->Value.ToShortDateString();
				komenda->CommandText += " ";
				komenda->CommandText += comboBox_pocz->Text;
				komenda->CommandText += "' AND termin_do<='";
				komenda->CommandText += dateTimePicker->Value.ToShortDateString();
				komenda->CommandText += " ";
				komenda->CommandText += comboBox_koniec->Text;
				komenda->CommandText += "')))";

				System::Data::SqlClient::SqlDataReader^ czytacz = komenda->ExecuteReader();

				czytacz->Read();
				int conflicts = czytacz->GetInt32(0);
				czytacz->Close();


				// SENDING RESERVATION TO DB IF NO CONFLICTS DETECTED
				if (conflicts == 0) {

					komenda = gcnew System::Data::SqlClient::SqlCommand();

					komenda->Connection = polaczenie;
					komenda->CommandText = "INSERT INTO RezSal.dbo.TRezerwacje ([ID_sali], [ID_grupy], [termin_od], [termin_do], [rezerwujacy]) VALUES(";
					komenda->CommandText += sale->lista[indeksWyswietlanejSali]->id;
					komenda->CommandText += ",";
					komenda->CommandText += grupy->lista[indeksWyswietlanejGrupy]->id;
					komenda->CommandText += ",'";
					komenda->CommandText += dateTimePicker->Value.ToShortDateString();
					komenda->CommandText += " ";
					komenda->CommandText += comboBox_pocz->Text;
					komenda->CommandText += "','";
					komenda->CommandText += dateTimePicker->Value.ToShortDateString();
					komenda->CommandText += " ";
					komenda->CommandText += comboBox_koniec->Text;
					komenda->CommandText += "','";
					komenda->CommandText += textBox_nazwisko->Text;
					komenda->CommandText += "')";

					czytacz = komenda->ExecuteReader();
					czytacz->Close();


					numericUpDown_semestr->Value = 1;
					comboBox_grupa->Text = "";
					comboBox_sala->Text = "";
					checkBox_rzutnik->Checked = false;
					checkBox_komputerowa->Checked = false;
					comboBox_pocz->Text = "";
					comboBox_koniec->Text = "";
					MessageBox::Show("Dokonano rezerwacji", "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				else {
					MessageBox::Show("Wybrany termin jest zajety", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				
				// CLOSING CONNECTION
				polaczenie->Close();
			}

		}
	}

};
}
