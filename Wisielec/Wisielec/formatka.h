#pragma once
#include <string>

namespace Wisielec {
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace MySql::Data::MySqlClient;
    /// <summary>
    /// Summary for formatka
    /// </summary>
    public ref class formatka : public System::Windows::Forms::Form
    {
    public:
        formatka(void)
        {
            InitializeComponent();

            //TODO: Add the constructor code here
            //
        }
    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~formatka()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::TextBox^  wylosowaneSlowo;
    private: System::Windows::Forms::Label^  label;
    private: System::Windows::Forms::RichTextBox^  txtKomentarz;
    private: System::Windows::Forms::Label^  zleliterki;
    private: System::Windows::Forms::Label^  napisZleLiterki;
    private: System::Windows::Forms::PictureBox^  s1;
    private: System::Windows::Forms::PictureBox^  s2;
    private: System::Windows::Forms::PictureBox^  s3;
    private: System::Windows::Forms::PictureBox^  s6;
    private: System::Windows::Forms::PictureBox^  s5;
    private: System::Windows::Forms::PictureBox^  s4;
    private: System::Windows::Forms::PictureBox^  zdjKosz;
    private: System::Windows::Forms::Timer^  usunSerce;
    private: System::Windows::Forms::Label^  etykietaCzas;
    private: System::Windows::Forms::Timer^  ustawCzas;
    private: System::Windows::Forms::Label^  napisCzas;
    private: System::Windows::Forms::PictureBox^  zdjNutka;
    private: System::Windows::Forms::PictureBox^  zdjStopNutka;
    private: System::Windows::Forms::Label^  przyciskKoniecGry;
    private: System::Windows::Forms::Label^  przyciskLosuj;
    private: System::Windows::Forms::Timer^  koniecGry;
    private: System::Windows::Forms::PictureBox^  zdjKsiazki;
    private: System::Windows::Forms::PictureBox^  zdjKoniec;
    private: System::Windows::Forms::CheckBox^  poziom1;
    private: System::Windows::Forms::Label^  przyciskOdNowa;
    private: System::Windows::Forms::CheckBox^  poziom2;
    private: System::Windows::Forms::CheckBox^  poziom4;
    private: System::Windows::Forms::CheckBox^  poziom3;
    private: System::Windows::Forms::CheckBox^  poziom6;
    private: System::Windows::Forms::CheckBox^  poziom5;
    private: System::Windows::Forms::CheckBox^  poziom8;
    private: System::Windows::Forms::CheckBox^  poziom7;
    private: System::Windows::Forms::CheckBox^  poziom10;
    private: System::Windows::Forms::CheckBox^  poziom9;
    private: System::Windows::Forms::PictureBox^  zdjRobot;
    private: System::Windows::Forms::Label^  etykietaTwojaLiterka;
    private: System::Windows::Forms::TextBox^  literka;
    private: System::Windows::Forms::ComboBox^  wybierzutwor;
    private: System::Windows::Forms::RichTextBox^  txtZycia;
    private: System::Windows::Forms::RichTextBox^  txtPodpowiedz;
    private: System::ComponentModel::IContainer^  components;
    private:
        /// <summary>
        /// Required designer variable.
        /// </summary>
#pragma region Windows Form Designer generated code
        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        void InitializeComponent(void)
        {
            this->components = (gcnew System::ComponentModel::Container());
            System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(formatka::typeid));
            this->wylosowaneSlowo = (gcnew System::Windows::Forms::TextBox());
            this->label = (gcnew System::Windows::Forms::Label());
            this->txtKomentarz = (gcnew System::Windows::Forms::RichTextBox());
            this->zleliterki = (gcnew System::Windows::Forms::Label());
            this->napisZleLiterki = (gcnew System::Windows::Forms::Label());
            this->s1 = (gcnew System::Windows::Forms::PictureBox());
            this->s2 = (gcnew System::Windows::Forms::PictureBox());
            this->s3 = (gcnew System::Windows::Forms::PictureBox());
            this->s6 = (gcnew System::Windows::Forms::PictureBox());
            this->s5 = (gcnew System::Windows::Forms::PictureBox());
            this->s4 = (gcnew System::Windows::Forms::PictureBox());
            this->zdjKosz = (gcnew System::Windows::Forms::PictureBox());
            this->usunSerce = (gcnew System::Windows::Forms::Timer(this->components));
            this->etykietaCzas = (gcnew System::Windows::Forms::Label());
            this->ustawCzas = (gcnew System::Windows::Forms::Timer(this->components));
            this->napisCzas = (gcnew System::Windows::Forms::Label());
            this->zdjNutka = (gcnew System::Windows::Forms::PictureBox());
            this->zdjStopNutka = (gcnew System::Windows::Forms::PictureBox());
            this->przyciskKoniecGry = (gcnew System::Windows::Forms::Label());
            this->przyciskLosuj = (gcnew System::Windows::Forms::Label());
            this->koniecGry = (gcnew System::Windows::Forms::Timer(this->components));
            this->zdjKsiazki = (gcnew System::Windows::Forms::PictureBox());
            this->zdjKoniec = (gcnew System::Windows::Forms::PictureBox());
            this->poziom1 = (gcnew System::Windows::Forms::CheckBox());
            this->przyciskOdNowa = (gcnew System::Windows::Forms::Label());
            this->poziom2 = (gcnew System::Windows::Forms::CheckBox());
            this->poziom4 = (gcnew System::Windows::Forms::CheckBox());
            this->poziom3 = (gcnew System::Windows::Forms::CheckBox());
            this->poziom6 = (gcnew System::Windows::Forms::CheckBox());
            this->poziom5 = (gcnew System::Windows::Forms::CheckBox());
            this->poziom8 = (gcnew System::Windows::Forms::CheckBox());
            this->poziom7 = (gcnew System::Windows::Forms::CheckBox());
            this->poziom10 = (gcnew System::Windows::Forms::CheckBox());
            this->poziom9 = (gcnew System::Windows::Forms::CheckBox());
            this->zdjRobot = (gcnew System::Windows::Forms::PictureBox());
            this->etykietaTwojaLiterka = (gcnew System::Windows::Forms::Label());
            this->literka = (gcnew System::Windows::Forms::TextBox());
            this->wybierzutwor = (gcnew System::Windows::Forms::ComboBox());
            this->txtZycia = (gcnew System::Windows::Forms::RichTextBox());
            this->txtPodpowiedz = (gcnew System::Windows::Forms::RichTextBox());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s3))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s6))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s5))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s4))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->zdjKosz))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->zdjNutka))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->zdjStopNutka))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->zdjKsiazki))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->zdjKoniec))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->zdjRobot))->BeginInit();
            this->SuspendLayout();
            // 
            // wylosowaneSlowo
            // 
            this->wylosowaneSlowo->BackColor = System::Drawing::Color::White;
            this->wylosowaneSlowo->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->wylosowaneSlowo->Font = (gcnew System::Drawing::Font(L"Gabriola", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->wylosowaneSlowo->Location = System::Drawing::Point(302, 137);
            this->wylosowaneSlowo->Name = L"wylosowaneSlowo";
            this->wylosowaneSlowo->ReadOnly = true;
            this->wylosowaneSlowo->Size = System::Drawing::Size(254, 63);
            this->wylosowaneSlowo->TabIndex = 2;
            this->wylosowaneSlowo->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // label
            // 
            this->label->Location = System::Drawing::Point(0, 0);
            this->label->Name = L"label";
            this->label->Size = System::Drawing::Size(100, 23);
            this->label->TabIndex = 63;
            // 
            // txtKomentarz
            // 
            this->txtKomentarz->BackColor = System::Drawing::Color::White;
            this->txtKomentarz->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->txtKomentarz->Font = (gcnew System::Drawing::Font(L"Gabriola", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->txtKomentarz->ForeColor = System::Drawing::Color::Black;
            this->txtKomentarz->Location = System::Drawing::Point(330, 343);
            this->txtKomentarz->Name = L"txtKomentarz";
            this->txtKomentarz->ReadOnly = true;
            this->txtKomentarz->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
            this->txtKomentarz->Size = System::Drawing::Size(387, 31);
            this->txtKomentarz->TabIndex = 14;
            this->txtKomentarz->Text = L"OOO... no w koñcu jesteœ... Kliknij \"Losuj\"\n";
            // 
            // zleliterki
            // 
            this->zleliterki->AllowDrop = true;
            this->zleliterki->AutoSize = true;
            this->zleliterki->BackColor = System::Drawing::Color::Transparent;
            this->zleliterki->Font = (gcnew System::Drawing::Font(L"Gabriola", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->zleliterki->Location = System::Drawing::Point(713, 138);
            this->zleliterki->Name = L"zleliterki";
            this->zleliterki->Size = System::Drawing::Size(47, 68);
            this->zleliterki->TabIndex = 15;
            this->zleliterki->Text = L"...";
            // 
            // napisZleLiterki
            // 
            this->napisZleLiterki->AllowDrop = true;
            this->napisZleLiterki->AutoSize = true;
            this->napisZleLiterki->BackColor = System::Drawing::Color::Transparent;
            this->napisZleLiterki->Font = (gcnew System::Drawing::Font(L"Gabriola", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->napisZleLiterki->Location = System::Drawing::Point(583, 140);
            this->napisZleLiterki->Name = L"napisZleLiterki";
            this->napisZleLiterki->Size = System::Drawing::Size(143, 65);
            this->napisZleLiterki->TabIndex = 16;
            this->napisZleLiterki->Text = L"Z³e literki :";
            // 
            // s1
            // 
            this->s1->BackColor = System::Drawing::Color::Transparent;
            this->s1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"s1.Image")));
            this->s1->Location = System::Drawing::Point(12, 3);
            this->s1->Name = L"s1";
            this->s1->Size = System::Drawing::Size(67, 64);
            this->s1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->s1->TabIndex = 17;
            this->s1->TabStop = false;
            // 
            // s2
            // 
            this->s2->BackColor = System::Drawing::Color::Transparent;
            this->s2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"s2.Image")));
            this->s2->Location = System::Drawing::Point(85, 3);
            this->s2->Name = L"s2";
            this->s2->Size = System::Drawing::Size(67, 64);
            this->s2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->s2->TabIndex = 18;
            this->s2->TabStop = false;
            // 
            // s3
            // 
            this->s3->BackColor = System::Drawing::Color::Transparent;
            this->s3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"s3.Image")));
            this->s3->Location = System::Drawing::Point(158, 3);
            this->s3->Name = L"s3";
            this->s3->Size = System::Drawing::Size(67, 64);
            this->s3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->s3->TabIndex = 19;
            this->s3->TabStop = false;
            // 
            // s6
            // 
            this->s6->BackColor = System::Drawing::Color::Transparent;
            this->s6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"s6.Image")));
            this->s6->Location = System::Drawing::Point(377, 3);
            this->s6->Name = L"s6";
            this->s6->Size = System::Drawing::Size(67, 64);
            this->s6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->s6->TabIndex = 22;
            this->s6->TabStop = false;
            // 
            // s5
            // 
            this->s5->BackColor = System::Drawing::Color::Transparent;
            this->s5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"s5.Image")));
            this->s5->Location = System::Drawing::Point(304, 3);
            this->s5->Name = L"s5";
            this->s5->Size = System::Drawing::Size(67, 64);
            this->s5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->s5->TabIndex = 21;
            this->s5->TabStop = false;
            // 
            // s4
            // 
            this->s4->BackColor = System::Drawing::Color::Transparent;
            this->s4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"s4.Image")));
            this->s4->Location = System::Drawing::Point(231, 3);
            this->s4->Name = L"s4";
            this->s4->Size = System::Drawing::Size(67, 64);
            this->s4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->s4->TabIndex = 20;
            this->s4->TabStop = false;
            // 
            // zdjKosz
            // 
            this->zdjKosz->BackColor = System::Drawing::Color::Transparent;
            this->zdjKosz->Enabled = false;
            this->zdjKosz->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"zdjKosz.Image")));
            this->zdjKosz->Location = System::Drawing::Point(508, 3);
            this->zdjKosz->Name = L"zdjKosz";
            this->zdjKosz->Size = System::Drawing::Size(67, 64);
            this->zdjKosz->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->zdjKosz->TabIndex = 28;
            this->zdjKosz->TabStop = false;
            this->zdjKosz->Visible = false;
            // 
            // usunSerce
            // 
            this->usunSerce->Interval = 10;
            this->usunSerce->Tick += gcnew System::EventHandler(this, &formatka::usunSerce_Tick);
            // 
            // etykietaCzas
            // 
            this->etykietaCzas->AutoSize = true;
            this->etykietaCzas->BackColor = System::Drawing::Color::Transparent;
            this->etykietaCzas->Font = (gcnew System::Drawing::Font(L"Freestyle Script", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->etykietaCzas->Location = System::Drawing::Point(855, 14);
            this->etykietaCzas->Name = L"etykietaCzas";
            this->etykietaCzas->Size = System::Drawing::Size(71, 47);
            this->etykietaCzas->TabIndex = 39;
            this->etykietaCzas->Text = L"0:00";
            // 
            // ustawCzas
            // 
            this->ustawCzas->Interval = 1000;
            this->ustawCzas->Tick += gcnew System::EventHandler(this, &formatka::ustawCzas_Tick);
            // 
            // napisCzas
            // 
            this->napisCzas->AutoSize = true;
            this->napisCzas->BackColor = System::Drawing::Color::Transparent;
            this->napisCzas->Font = (gcnew System::Drawing::Font(L"Gabriola", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->napisCzas->Location = System::Drawing::Point(769, 4);
            this->napisCzas->Name = L"napisCzas";
            this->napisCzas->Size = System::Drawing::Size(89, 68);
            this->napisCzas->TabIndex = 40;
            this->napisCzas->Text = L"Czas:";
            // 
            // zdjNutka
            // 
            this->zdjNutka->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"zdjNutka.Image")));
            this->zdjNutka->Location = System::Drawing::Point(690, 12);
            this->zdjNutka->Name = L"zdjNutka";
            this->zdjNutka->Size = System::Drawing::Size(55, 43);
            this->zdjNutka->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->zdjNutka->TabIndex = 41;
            this->zdjNutka->TabStop = false;
            this->zdjNutka->Visible = false;
            this->zdjNutka->Click += gcnew System::EventHandler(this, &formatka::zdjNutka_Click);
            this->zdjNutka->MouseEnter += gcnew System::EventHandler(this, &formatka::zdjNutka_MouseEnter);
            // 
            // zdjStopNutka
            // 
            this->zdjStopNutka->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"zdjStopNutka.Image")));
            this->zdjStopNutka->Location = System::Drawing::Point(690, 12);
            this->zdjStopNutka->Name = L"zdjStopNutka";
            this->zdjStopNutka->Size = System::Drawing::Size(55, 43);
            this->zdjStopNutka->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->zdjStopNutka->TabIndex = 42;
            this->zdjStopNutka->TabStop = false;
            this->zdjStopNutka->Visible = false;
            this->zdjStopNutka->Click += gcnew System::EventHandler(this, &formatka::zdjStopNutka_Click);
            // 
            // przyciskKoniecGry
            // 
            this->przyciskKoniecGry->AllowDrop = true;
            this->przyciskKoniecGry->AutoSize = true;
            this->przyciskKoniecGry->BackColor = System::Drawing::Color::Transparent;
            this->przyciskKoniecGry->Font = (gcnew System::Drawing::Font(L"Gabriola", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->przyciskKoniecGry->Location = System::Drawing::Point(964, 137);
            this->przyciskKoniecGry->Name = L"przyciskKoniecGry";
            this->przyciskKoniecGry->Size = System::Drawing::Size(116, 54);
            this->przyciskKoniecGry->TabIndex = 43;
            this->przyciskKoniecGry->Text = L"Koniec gry";
            this->przyciskKoniecGry->Click += gcnew System::EventHandler(this, &formatka::przyciskKoniecGry_Click);
            this->przyciskKoniecGry->MouseEnter += gcnew System::EventHandler(this, &formatka::przyciskKoniecGry_MouseEnter);
            // 
            // przyciskLosuj
            // 
            this->przyciskLosuj->AllowDrop = true;
            this->przyciskLosuj->AutoSize = true;
            this->przyciskLosuj->BackColor = System::Drawing::Color::Transparent;
            this->przyciskLosuj->Font = (gcnew System::Drawing::Font(L"Gabriola", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->przyciskLosuj->Location = System::Drawing::Point(1010, 4);
            this->przyciskLosuj->Name = L"przyciskLosuj";
            this->przyciskLosuj->Size = System::Drawing::Size(70, 54);
            this->przyciskLosuj->TabIndex = 44;
            this->przyciskLosuj->Text = L"Losuj";
            this->przyciskLosuj->Click += gcnew System::EventHandler(this, &formatka::przyciskLosuj_Click);
            this->przyciskLosuj->MouseEnter += gcnew System::EventHandler(this, &formatka::przyciskLosuj_MouseEnter_1);
            // 
            // koniecGry
            // 
            this->koniecGry->Interval = 1000;
            this->koniecGry->Tick += gcnew System::EventHandler(this, &formatka::koniecGry_Tick);
            // 
            // zdjKsiazki
            // 
            this->zdjKsiazki->BackColor = System::Drawing::Color::Transparent;
            this->zdjKsiazki->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"zdjKsiazki.Image")));
            this->zdjKsiazki->Location = System::Drawing::Point(12, 275);
            this->zdjKsiazki->Name = L"zdjKsiazki";
            this->zdjKsiazki->Size = System::Drawing::Size(315, 283);
            this->zdjKsiazki->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->zdjKsiazki->TabIndex = 46;
            this->zdjKsiazki->TabStop = false;
            this->zdjKsiazki->Click += gcnew System::EventHandler(this, &formatka::zdjKsiazki_Click);
            this->zdjKsiazki->DoubleClick += gcnew System::EventHandler(this, &formatka::zdjKsiazki_DoubleClick);
            // 
            // zdjKoniec
            // 
            this->zdjKoniec->BackColor = System::Drawing::Color::Transparent;
            this->zdjKoniec->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"zdjKoniec.Image")));
            this->zdjKoniec->Location = System::Drawing::Point(12, 275);
            this->zdjKoniec->Name = L"zdjKoniec";
            this->zdjKoniec->Size = System::Drawing::Size(315, 283);
            this->zdjKoniec->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->zdjKoniec->TabIndex = 47;
            this->zdjKoniec->TabStop = false;
            this->zdjKoniec->Visible = false;
            // 
            // poziom1
            // 
            this->poziom1->AutoCheck = false;
            this->poziom1->AutoSize = true;
            this->poziom1->BackColor = System::Drawing::Color::Transparent;
            this->poziom1->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
            this->poziom1->Font = (gcnew System::Drawing::Font(L"Gabriola", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->poziom1->Location = System::Drawing::Point(769, 238);
            this->poziom1->Name = L"poziom1";
            this->poziom1->Size = System::Drawing::Size(113, 54);
            this->poziom1->TabIndex = 48;
            this->poziom1->Text = L"Poziom 1";
            this->poziom1->UseVisualStyleBackColor = false;
            // 
            // przyciskOdNowa
            // 
            this->przyciskOdNowa->AllowDrop = true;
            this->przyciskOdNowa->AutoSize = true;
            this->przyciskOdNowa->BackColor = System::Drawing::Color::Transparent;
            this->przyciskOdNowa->Font = (gcnew System::Drawing::Font(L"Gabriola", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->przyciskOdNowa->Location = System::Drawing::Point(979, 69);
            this->przyciskOdNowa->Name = L"przyciskOdNowa";
            this->przyciskOdNowa->Size = System::Drawing::Size(101, 54);
            this->przyciskOdNowa->TabIndex = 49;
            this->przyciskOdNowa->Text = L"Od nowa";
            this->przyciskOdNowa->Click += gcnew System::EventHandler(this, &formatka::przyciskOdNowa_Click);
            this->przyciskOdNowa->MouseEnter += gcnew System::EventHandler(this, &formatka::przyciskOdNowa_MouseEnter);
            // 
            // poziom2
            // 
            this->poziom2->AutoCheck = false;
            this->poziom2->AutoSize = true;
            this->poziom2->BackColor = System::Drawing::Color::Transparent;
            this->poziom2->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
            this->poziom2->Font = (gcnew System::Drawing::Font(L"Gabriola", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->poziom2->Location = System::Drawing::Point(769, 307);
            this->poziom2->Name = L"poziom2";
            this->poziom2->Size = System::Drawing::Size(116, 54);
            this->poziom2->TabIndex = 50;
            this->poziom2->Text = L"Poziom 2";
            this->poziom2->UseVisualStyleBackColor = false;
            // 
            // poziom4
            // 
            this->poziom4->AutoCheck = false;
            this->poziom4->AutoSize = true;
            this->poziom4->BackColor = System::Drawing::Color::Transparent;
            this->poziom4->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
            this->poziom4->Font = (gcnew System::Drawing::Font(L"Gabriola", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->poziom4->Location = System::Drawing::Point(769, 446);
            this->poziom4->Name = L"poziom4";
            this->poziom4->Size = System::Drawing::Size(118, 54);
            this->poziom4->TabIndex = 52;
            this->poziom4->Text = L"Poziom 4";
            this->poziom4->UseVisualStyleBackColor = false;
            // 
            // poziom3
            // 
            this->poziom3->AutoCheck = false;
            this->poziom3->AutoSize = true;
            this->poziom3->BackColor = System::Drawing::Color::Transparent;
            this->poziom3->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
            this->poziom3->Font = (gcnew System::Drawing::Font(L"Gabriola", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->poziom3->Location = System::Drawing::Point(769, 376);
            this->poziom3->Name = L"poziom3";
            this->poziom3->Size = System::Drawing::Size(116, 54);
            this->poziom3->TabIndex = 51;
            this->poziom3->Text = L"Poziom 3";
            this->poziom3->UseVisualStyleBackColor = false;
            // 
            // poziom6
            // 
            this->poziom6->AutoCheck = false;
            this->poziom6->AutoSize = true;
            this->poziom6->BackColor = System::Drawing::Color::Transparent;
            this->poziom6->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
            this->poziom6->Font = (gcnew System::Drawing::Font(L"Gabriola", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->poziom6->Location = System::Drawing::Point(940, 238);
            this->poziom6->Name = L"poziom6";
            this->poziom6->Size = System::Drawing::Size(118, 54);
            this->poziom6->TabIndex = 54;
            this->poziom6->Text = L"Poziom 6";
            this->poziom6->UseVisualStyleBackColor = false;
            // 
            // poziom5
            // 
            this->poziom5->AutoCheck = false;
            this->poziom5->AutoSize = true;
            this->poziom5->BackColor = System::Drawing::Color::Transparent;
            this->poziom5->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
            this->poziom5->Font = (gcnew System::Drawing::Font(L"Gabriola", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->poziom5->Location = System::Drawing::Point(771, 512);
            this->poziom5->Name = L"poziom5";
            this->poziom5->Size = System::Drawing::Size(116, 54);
            this->poziom5->TabIndex = 53;
            this->poziom5->Text = L"Poziom 5";
            this->poziom5->UseVisualStyleBackColor = false;
            // 
            // poziom8
            // 
            this->poziom8->AutoCheck = false;
            this->poziom8->AutoSize = true;
            this->poziom8->BackColor = System::Drawing::Color::Transparent;
            this->poziom8->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
            this->poziom8->Font = (gcnew System::Drawing::Font(L"Gabriola", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->poziom8->Location = System::Drawing::Point(941, 376);
            this->poziom8->Name = L"poziom8";
            this->poziom8->Size = System::Drawing::Size(117, 54);
            this->poziom8->TabIndex = 56;
            this->poziom8->Text = L"Poziom 8";
            this->poziom8->UseVisualStyleBackColor = false;
            // 
            // poziom7
            // 
            this->poziom7->AutoCheck = false;
            this->poziom7->AutoSize = true;
            this->poziom7->BackColor = System::Drawing::Color::Transparent;
            this->poziom7->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
            this->poziom7->Font = (gcnew System::Drawing::Font(L"Gabriola", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->poziom7->Location = System::Drawing::Point(941, 307);
            this->poziom7->Name = L"poziom7";
            this->poziom7->Size = System::Drawing::Size(117, 54);
            this->poziom7->TabIndex = 55;
            this->poziom7->Text = L"Poziom 7";
            this->poziom7->UseVisualStyleBackColor = false;
            // 
            // poziom10
            // 
            this->poziom10->AutoCheck = false;
            this->poziom10->AutoSize = true;
            this->poziom10->BackColor = System::Drawing::Color::Transparent;
            this->poziom10->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
            this->poziom10->Font = (gcnew System::Drawing::Font(L"Gabriola", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->poziom10->Location = System::Drawing::Point(940, 512);
            this->poziom10->Name = L"poziom10";
            this->poziom10->Size = System::Drawing::Size(124, 54);
            this->poziom10->TabIndex = 58;
            this->poziom10->Text = L"Poziom 10";
            this->poziom10->UseVisualStyleBackColor = false;
            // 
            // poziom9
            // 
            this->poziom9->AutoCheck = false;
            this->poziom9->AutoSize = true;
            this->poziom9->BackColor = System::Drawing::Color::Transparent;
            this->poziom9->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
            this->poziom9->Font = (gcnew System::Drawing::Font(L"Gabriola", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->poziom9->Location = System::Drawing::Point(941, 446);
            this->poziom9->Name = L"poziom9";
            this->poziom9->Size = System::Drawing::Size(118, 54);
            this->poziom9->TabIndex = 57;
            this->poziom9->Text = L"Poziom 9";
            this->poziom9->UseVisualStyleBackColor = false;
            // 
            // zdjRobot
            // 
            this->zdjRobot->BackColor = System::Drawing::Color::Transparent;
            this->zdjRobot->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"zdjRobot.Image")));
            this->zdjRobot->Location = System::Drawing::Point(12, 275);
            this->zdjRobot->Name = L"zdjRobot";
            this->zdjRobot->Size = System::Drawing::Size(315, 283);
            this->zdjRobot->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->zdjRobot->TabIndex = 60;
            this->zdjRobot->TabStop = false;
            this->zdjRobot->Visible = false;
            // 
            // etykietaTwojaLiterka
            // 
            this->etykietaTwojaLiterka->AutoSize = true;
            this->etykietaTwojaLiterka->BackColor = System::Drawing::Color::Transparent;
            this->etykietaTwojaLiterka->Font = (gcnew System::Drawing::Font(L"Gabriola", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->etykietaTwojaLiterka->Location = System::Drawing::Point(1, 137);
            this->etykietaTwojaLiterka->Name = L"etykietaTwojaLiterka";
            this->etykietaTwojaLiterka->Size = System::Drawing::Size(170, 65);
            this->etykietaTwojaLiterka->TabIndex = 64;
            this->etykietaTwojaLiterka->Text = L"Twoja literka:";
            // 
            // literka
            // 
            this->literka->BackColor = System::Drawing::Color::White;
            this->literka->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->literka->Enabled = false;
            this->literka->Font = (gcnew System::Drawing::Font(L"Gabriola", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->literka->Location = System::Drawing::Point(158, 140);
            this->literka->Name = L"literka";
            this->literka->Size = System::Drawing::Size(53, 60);
            this->literka->TabIndex = 65;
            this->literka->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->literka->TextChanged += gcnew System::EventHandler(this, &formatka::literka_TextChanged_1);
            // 
            // wybierzutwor
            // 
            this->wybierzutwor->Font = (gcnew System::Drawing::Font(L"Gabriola", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->wybierzutwor->FormattingEnabled = true;
            this->wybierzutwor->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
                L"Ahrix-Nova", L"Alan_Walker-Faded", L"Alan_Walker-Spectre",
                    L"Different-My_heart", L"Disfigure-Blank", L"Spektrem-Shine", L"Tobu-Hope"
            });
            this->wybierzutwor->Location = System::Drawing::Point(690, 69);
            this->wybierzutwor->Name = L"wybierzutwor";
            this->wybierzutwor->Size = System::Drawing::Size(176, 47);
            this->wybierzutwor->TabIndex = 66;
            this->wybierzutwor->Text = L"Wybierz utwór";
            this->wybierzutwor->Visible = false;
            this->wybierzutwor->SelectedIndexChanged += gcnew System::EventHandler(this, &formatka::wybierzutwor_SelectedIndexChanged);
            // 
            // txtZycia
            // 
            this->txtZycia->BackColor = System::Drawing::Color::White;
            this->txtZycia->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->txtZycia->Font = (gcnew System::Drawing::Font(L"Gabriola", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->txtZycia->ForeColor = System::Drawing::Color::Black;
            this->txtZycia->Location = System::Drawing::Point(330, 376);
            this->txtZycia->Name = L"txtZycia";
            this->txtZycia->ReadOnly = true;
            this->txtZycia->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
            this->txtZycia->Size = System::Drawing::Size(387, 31);
            this->txtZycia->TabIndex = 67;
            this->txtZycia->Text = L"";
            // 
            // txtPodpowiedz
            // 
            this->txtPodpowiedz->BackColor = System::Drawing::Color::White;
            this->txtPodpowiedz->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->txtPodpowiedz->Font = (gcnew System::Drawing::Font(L"Gabriola", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->txtPodpowiedz->ForeColor = System::Drawing::Color::Black;
            this->txtPodpowiedz->Location = System::Drawing::Point(330, 413);
            this->txtPodpowiedz->Name = L"txtPodpowiedz";
            this->txtPodpowiedz->ReadOnly = true;
            this->txtPodpowiedz->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
            this->txtPodpowiedz->Size = System::Drawing::Size(387, 31);
            this->txtPodpowiedz->TabIndex = 68;
            this->txtPodpowiedz->Text = L"\n";
            // 
            // formatka
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::White;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->ClientSize = System::Drawing::Size(1079, 555);
            this->Controls->Add(this->poziom10);
            this->Controls->Add(this->poziom1);
            this->Controls->Add(this->poziom9);
            this->Controls->Add(this->poziom2);
            this->Controls->Add(this->poziom8);
            this->Controls->Add(this->poziom3);
            this->Controls->Add(this->poziom7);
            this->Controls->Add(this->poziom4);
            this->Controls->Add(this->poziom6);
            this->Controls->Add(this->poziom5);
            this->Controls->Add(this->txtPodpowiedz);
            this->Controls->Add(this->txtZycia);
            this->Controls->Add(this->wybierzutwor);
            this->Controls->Add(this->literka);
            this->Controls->Add(this->etykietaTwojaLiterka);
            this->Controls->Add(this->zdjRobot);
            this->Controls->Add(this->przyciskOdNowa);
            this->Controls->Add(this->zdjKoniec);
            this->Controls->Add(this->zdjKsiazki);
            this->Controls->Add(this->przyciskLosuj);
            this->Controls->Add(this->przyciskKoniecGry);
            this->Controls->Add(this->zdjStopNutka);
            this->Controls->Add(this->zdjNutka);
            this->Controls->Add(this->napisCzas);
            this->Controls->Add(this->etykietaCzas);
            this->Controls->Add(this->zdjKosz);
            this->Controls->Add(this->s6);
            this->Controls->Add(this->s5);
            this->Controls->Add(this->s4);
            this->Controls->Add(this->s3);
            this->Controls->Add(this->s2);
            this->Controls->Add(this->s1);
            this->Controls->Add(this->napisZleLiterki);
            this->Controls->Add(this->zleliterki);
            this->Controls->Add(this->txtKomentarz);
            this->Controls->Add(this->label);
            this->Controls->Add(this->wylosowaneSlowo);
            this->Cursor = System::Windows::Forms::Cursors::Arrow;
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->MaximizeBox = false;
            this->Name = L"formatka";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Wisielec";
            this->TransparencyKey = System::Drawing::Color::DarkRed;
            this->Click += gcnew System::EventHandler(this, &formatka::formatka_Click);
            this->MouseEnter += gcnew System::EventHandler(this, &formatka::formatka_MouseEnter);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s3))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s6))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s5))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->s4))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->zdjKosz))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->zdjNutka))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->zdjStopNutka))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->zdjKsiazki))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->zdjKoniec))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->zdjRobot))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
        System::Media::SoundPlayer^ graj = gcnew System::Media::SoundPlayer();

        System::String^ konfiguracja = L"datasource = localhost; port = 3306; username = root; password = ***; database = wisielec";

    private: void muzyka(String^ dzwiek);

    private: void MarshalString(String ^ s, std::string& os);

    private: System::Void przyciskLosuj_Click(System::Object^  sender, System::EventArgs^  e);

    private: void wczytajPoziom(int p);

    private: System::Void literka_TextChanged_1(System::Object^  sender, System::EventArgs^  e);

    private: System::Void usunSerce_Tick(System::Object^  sender, System::EventArgs^  e);

    private: void przesunSerce(PictureBox^ serce);

    private: void przywrocZycia();

    private: System::Void ustawCzas_Tick(System::Object^  sender, System::EventArgs^  e);

    private: System::Void przyciskLosuj_MouseEnter_1(System::Object^  sender, System::EventArgs^  e);

    private: System::Void zdjNutka_Click(System::Object^  sender, System::EventArgs^  e);

    private: System::Void zdjStopNutka_Click(System::Object^  sender, System::EventArgs^  e);

    private: System::Void przyciskKoniecGry_Click(System::Object^  sender, System::EventArgs^  e);

    private: System::Void formatka_MouseEnter(System::Object^  sender, System::EventArgs^  e);

    private: System::Void przyciskKoniecGry_MouseEnter(System::Object^  sender, System::EventArgs^  e);

    private: System::Void zdjNutka_MouseEnter(System::Object^  sender, System::EventArgs^  e);

    private: System::Void formatka_Click(System::Object^  sender, System::EventArgs^  e);

    private: System::Void wybierzutwor_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e);

    private: System::Void koniecGry_Tick(System::Object^  sender, System::EventArgs^  e);

    private: System::Void zdjKsiazki_Click(System::Object^  sender, System::EventArgs^  e);

    private: System::Void zdjKsiazki_DoubleClick(System::Object^  sender, System::EventArgs^  e);

    private: System::Void przyciskOdNowa_MouseEnter(System::Object^  sender, System::EventArgs^  e);

    private: System::Void przyciskOdNowa_Click(System::Object^  sender, System::EventArgs^  e);

    private: System::Void wybierzutwor_Click(System::Object^  sender, System::EventArgs^  e);

    private: void zapiszwynik();
    };
}
