#include "formatka.h"
#include "wyniki.h"

#pragma once

namespace Wisielec {
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    /// <summary>
    /// Summary for powitanie
    /// </summary>
    public ref class powitanie : public System::Windows::Forms::Form
    {
    public:
        powitanie(void)
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
        ~powitanie()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::PictureBox^  zdjPowitanie;
    private: System::Windows::Forms::Label^  powitanieGraj;
    private: System::Windows::Forms::Label^  powitanieKoniec;
    private: System::Windows::Forms::Label^  powitanieWynik;
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
            System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(powitanie::typeid));
            this->zdjPowitanie = (gcnew System::Windows::Forms::PictureBox());
            this->powitanieGraj = (gcnew System::Windows::Forms::Label());
            this->powitanieKoniec = (gcnew System::Windows::Forms::Label());
            this->powitanieWynik = (gcnew System::Windows::Forms::Label());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->zdjPowitanie))->BeginInit();
            this->SuspendLayout();
            // 
            // zdjPowitanie
            // 
            this->zdjPowitanie->BackColor = System::Drawing::Color::Transparent;
            this->zdjPowitanie->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"zdjPowitanie.Image")));
            this->zdjPowitanie->Location = System::Drawing::Point(-1, 1);
            this->zdjPowitanie->Name = L"zdjPowitanie";
            this->zdjPowitanie->Size = System::Drawing::Size(229, 271);
            this->zdjPowitanie->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->zdjPowitanie->TabIndex = 0;
            this->zdjPowitanie->TabStop = false;
            // 
            // powitanieGraj
            // 
            this->powitanieGraj->AutoSize = true;
            this->powitanieGraj->BackColor = System::Drawing::Color::Transparent;
            this->powitanieGraj->Font = (gcnew System::Drawing::Font(L"Gabriola", 39.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->powitanieGraj->Location = System::Drawing::Point(253, -1);
            this->powitanieGraj->Name = L"powitanieGraj";
            this->powitanieGraj->Size = System::Drawing::Size(112, 97);
            this->powitanieGraj->TabIndex = 1;
            this->powitanieGraj->Text = L"Graj";
            this->powitanieGraj->Click += gcnew System::EventHandler(this, &powitanie::powitanieGraj_Click);
            this->powitanieGraj->MouseEnter += gcnew System::EventHandler(this, &powitanie::powitanieGraj_MouseEnter);
            // 
            // powitanieKoniec
            // 
            this->powitanieKoniec->AutoSize = true;
            this->powitanieKoniec->BackColor = System::Drawing::Color::Transparent;
            this->powitanieKoniec->Font = (gcnew System::Drawing::Font(L"Gabriola", 39.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->powitanieKoniec->Location = System::Drawing::Point(233, 138);
            this->powitanieKoniec->Name = L"powitanieKoniec";
            this->powitanieKoniec->Size = System::Drawing::Size(151, 97);
            this->powitanieKoniec->TabIndex = 2;
            this->powitanieKoniec->Text = L"Koniec";
            this->powitanieKoniec->Click += gcnew System::EventHandler(this, &powitanie::powitanieKoniec_Click);
            this->powitanieKoniec->MouseEnter += gcnew System::EventHandler(this, &powitanie::powitanieKoniec_MouseEnter);
            // 
            // powitanieWynik
            // 
            this->powitanieWynik->AutoSize = true;
            this->powitanieWynik->BackColor = System::Drawing::Color::Transparent;
            this->powitanieWynik->Font = (gcnew System::Drawing::Font(L"Gabriola", 39.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->powitanieWynik->Location = System::Drawing::Point(227, 68);
            this->powitanieWynik->Name = L"powitanieWynik";
            this->powitanieWynik->Size = System::Drawing::Size(161, 97);
            this->powitanieWynik->TabIndex = 3;
            this->powitanieWynik->Text = L"Wyniki";
            this->powitanieWynik->Click += gcnew System::EventHandler(this, &powitanie::powitanieWynik_Click);
            this->powitanieWynik->MouseEnter += gcnew System::EventHandler(this, &powitanie::powitanieWynik_MouseEnter);
            // 
            // powitanie
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->ClientSize = System::Drawing::Size(396, 272);
            this->Controls->Add(this->powitanieWynik);
            this->Controls->Add(this->powitanieKoniec);
            this->Controls->Add(this->powitanieGraj);
            this->Controls->Add(this->zdjPowitanie);
            this->Cursor = System::Windows::Forms::Cursors::Arrow;
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->MaximizeBox = false;
            this->Name = L"powitanie";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Wisielec";
            this->MouseEnter += gcnew System::EventHandler(this, &powitanie::powitanie_MouseEnter);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->zdjPowitanie))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();
        }
#pragma endregion
    private: void muzyka(String^ dzwiek);

    private: System::Void powitanieGraj_Click(System::Object^  sender, System::EventArgs^  e);

    private: System::Void powitanieGraj_MouseEnter(System::Object^  sender, System::EventArgs^  e);

    private: System::Void powitanieWynik_Click(System::Object^  sender, System::EventArgs^  e);

    private: System::Void powitanieWynik_MouseEnter(System::Object^  sender, System::EventArgs^  e);

    private: System::Void powitanieKoniec_Click(System::Object^  sender, System::EventArgs^  e);

    private: System::Void powitanieKoniec_MouseEnter(System::Object^  sender, System::EventArgs^  e);

    private: System::Void powitanie_MouseEnter(System::Object^  sender, System::EventArgs^  e);
    };
}
