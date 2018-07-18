#pragma once

namespace Wisielec {
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace MySql::Data::MySqlClient;
    /// <summary>
    /// Summary for wyniki
    /// </summary>
    public ref class wyniki : public System::Windows::Forms::Form
    {
    public:
        wyniki(void)
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
        ~wyniki()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::DataGridView^  siatka;
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
            System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(wyniki::typeid));
            this->siatka = (gcnew System::Windows::Forms::DataGridView());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->siatka))->BeginInit();
            this->SuspendLayout();
            // 
            // siatka
            // 
            this->siatka->AllowUserToAddRows = false;
            this->siatka->AllowUserToDeleteRows = false;
            this->siatka->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
            this->siatka->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
            this->siatka->BackgroundColor = System::Drawing::Color::White;
            this->siatka->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Window;
            dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Gabriola", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::ControlText;
            dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::White;
            dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::ControlText;
            dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
            this->siatka->DefaultCellStyle = dataGridViewCellStyle1;
            this->siatka->GridColor = System::Drawing::Color::White;
            this->siatka->Location = System::Drawing::Point(0, 0);
            this->siatka->Margin = System::Windows::Forms::Padding(4, 10, 4, 10);
            this->siatka->Name = L"siatka";
            this->siatka->ReadOnly = true;
            this->siatka->Size = System::Drawing::Size(502, 221);
            this->siatka->TabIndex = 0;
            // 
            // wyniki
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(9, 39);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->ClientSize = System::Drawing::Size(502, 221);
            this->Controls->Add(this->siatka);
            this->Font = (gcnew System::Drawing::Font(L"Gabriola", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->Margin = System::Windows::Forms::Padding(4, 10, 4, 10);
            this->MaximizeBox = false;
            this->Name = L"wyniki";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"wyniki";
            this->Load += gcnew System::EventHandler(this, &wyniki::wyniki_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->siatka))->EndInit();
            this->ResumeLayout(false);
        }
#pragma endregion
    private: System::Void wyniki_Load(System::Object^  sender, System::EventArgs^  e);
    };
}
