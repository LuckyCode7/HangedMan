#include "powitanie.h"

void Wisielec::powitanie::muzyka(System::String^ dzwiek)
{
    try
    {
        System::Media::SoundPlayer^ graj = gcnew System::Media::SoundPlayer();
        graj->SoundLocation = dzwiek;
        graj->Load();
        graj->Play();
    }
    catch (...)
    {

    }
}

System::Void Wisielec::powitanie::powitanieWynik_Click(System::Object^  sender, System::EventArgs^  e)
{
    wyniki^ w = gcnew wyniki;
    w->Show();
}

System::Void Wisielec::powitanie::powitanieKoniec_Click(System::Object^  sender, System::EventArgs^  e)
{
    this->Close();
}

System::Void Wisielec::powitanie::powitanieGraj_Click(System::Object^  sender, System::EventArgs^  e)
{
    formatka^ zagram = gcnew formatka;
    zagram->Show();
    this->Close();
}

System::Void Wisielec::powitanie::powitanieGraj_MouseEnter(System::Object^  sender, System::EventArgs^  e)
{
    muzyka("../dzwiek/next.wav");
    this->powitanieGraj->ForeColor = System::Drawing::Color::Blue;
    this->powitanieWynik->ForeColor = System::Drawing::Color::Black;
    this->powitanieKoniec->ForeColor = System::Drawing::Color::Black;
}

System::Void Wisielec::powitanie::powitanieWynik_MouseEnter(System::Object^  sender, System::EventArgs^  e)
{
    muzyka("../dzwiek/next.wav");
    this->powitanieWynik->ForeColor = System::Drawing::Color::Blue;
    this->powitanieGraj->ForeColor = System::Drawing::Color::Black;
    this->powitanieKoniec->ForeColor = System::Drawing::Color::Black;
}

System::Void Wisielec::powitanie::powitanieKoniec_MouseEnter(System::Object^  sender, System::EventArgs^  e)
{
    muzyka("../dzwiek/next.wav");
    this->powitanieKoniec->ForeColor = System::Drawing::Color::Blue;
    this->powitanieWynik->ForeColor = System::Drawing::Color::Black;
    this->powitanieGraj->ForeColor = System::Drawing::Color::Black;
}

System::Void Wisielec::powitanie::powitanie_MouseEnter(System::Object^  sender, System::EventArgs^  e)
{
    this->powitanieGraj->ForeColor = System::Drawing::Color::Black;
    this->powitanieWynik->ForeColor = System::Drawing::Color::Black;
    this->powitanieKoniec->ForeColor = System::Drawing::Color::Black;
}
