#include "wyniki.h"

System::Void Wisielec::wyniki::wyniki_Load(System::Object^  sender, System::EventArgs^  e)
{
    String^ konfiguracja = L"datasource = localhost; port = 3306; username = root; password = ***; database = wisielec";
    MySqlConnection^laczBaze = gcnew MySqlConnection(konfiguracja);
    MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT kiedy AS Data_rozgrywki, ile AS Osi¹gniêty_poziom, czas AS D³ugoœæ_rozgrywki FROM wisielec.wyniki;", laczBaze);
    try
    {
        laczBaze->Open();
        MySqlDataAdapter^ moja = gcnew MySqlDataAdapter();
        moja->SelectCommand = zapytanie;
        DataTable^ tabela = gcnew DataTable();
        moja->Fill(tabela);
        BindingSource^ zrodlo = gcnew BindingSource();
        zrodlo->DataSource = tabela;
        siatka->DataSource = zrodlo;
        laczBaze->Close();
    }
    catch (Exception^ komunikat)
    {
        MessageBox::Show(komunikat->Message);
    }
    laczBaze->Close();
}