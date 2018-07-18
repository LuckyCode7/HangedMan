#include "formatka.h"
#include <string>
#include <vector>
#include <ctime>
#include <cctype>

namespace zmienne
{
    std::string slowo;
    std::string zleLiterki;
    std::string literka;
    std::string kopia;
    std::string zgadywaneSlowo;
    int IDwylosowaneSlowo;
    int pomocniczaLiterka;
    int dlugoscSlowa;
    int zycia_ = 6;
    int minuta = 0;
    int sekunda = 0;
    int poziom_ = 0;
    int odliczanie = 0;
    int x = 4;
}

void Wisielec::formatka::muzyka(System::String^ dzwiek)
{
    try
    {
        graj->SoundLocation = dzwiek;
        graj->Load();
        graj->Play();
    }
    catch (...)
    {

    }
}

void Wisielec::formatka::MarshalString(System::String ^ s, std::string& os)
{
    using namespace Runtime::InteropServices;
    const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
    os = chars;
    Marshal::FreeHGlobal(IntPtr((void*)chars));
}

System::Void Wisielec::formatka::przyciskLosuj_Click(System::Object^  sender, System::EventArgs^  e)
{
    MySqlConnection^laczBaze = gcnew MySqlConnection(konfiguracja);
    MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT * FROM slowa WHERE dostep = 1 ORDER BY RAND() LIMIT 1;", laczBaze);
    MySqlDataReader^ odczytanie;
    try
    {
        laczBaze->Open();
        odczytanie = zapytanie->ExecuteReader();

        if (odczytanie->Read())
        {
            zmienne::IDwylosowaneSlowo = odczytanie->GetInt32(0);
            String^ slowozbazy = odczytanie->GetString(1);
            MarshalString(slowozbazy, zmienne::slowo);
            String^ kategoria = odczytanie->GetString(2);
            this->txtKomentarz->Visible = false;
            this->txtKomentarz->Text = "Nasze s³owo sk³ada siê z " + zmienne::slowo.size() + " liter";
            this->txtZycia->Text = "Mamy " + zmienne::zycia_ + " ¿yæ";
            this->txtKomentarz->Visible = true;
            this->txtPodpowiedz->Text = "Moja podpowiedŸ: " + kategoria;
        }
    }
    catch (Exception^ ex)
    {
        MessageBox::Show(ex->Message);
    }
    laczBaze->Close();
    MySqlCommand^ dostep = gcnew MySqlCommand("UPDATE slowa SET dostep = 0 WHERE id =" + zmienne::IDwylosowaneSlowo + "  ;", laczBaze);
    try
    {
        laczBaze->Open();
        dostep->ExecuteNonQuery();
    }
    catch (Exception^ ex)
    {
        MessageBox::Show(ex->Message);
    }
    laczBaze->Close();
    if (zdjNutka->Visible == false && zdjNutka->Visible == false)
        muzyka("../dzwiek/Alan_Walker-Spectre.wav");
    this->zdjNutka->Visible = true;
    this->przyciskLosuj->Enabled = false;
    this->ustawCzas->Enabled = true;
    zmienne::dlugoscSlowa = zmienne::slowo.size();
    srand(time(NULL));
    std::string szukaneSlowo(zmienne::dlugoscSlowa, '-');
    zmienne::pomocniczaLiterka = rand() % zmienne::dlugoscSlowa;
    szukaneSlowo[zmienne::pomocniczaLiterka] = zmienne::slowo[zmienne::pomocniczaLiterka];
    for (int i = 0; i < zmienne::dlugoscSlowa; i++)
    {
        if (szukaneSlowo[zmienne::pomocniczaLiterka] == zmienne::slowo[i])
        {
            szukaneSlowo[i] = zmienne::slowo[i];
        }
    }
    String ^temp_ = gcnew String(szukaneSlowo.c_str());
    this->wylosowaneSlowo->Text = temp_;
    this->literka->Enabled = true;
    this->txtZycia->Visible = true;
    this->txtPodpowiedz->Visible = true;
    this->literka->Text = "";
    this->literka->Focus();
}

void Wisielec::formatka::wczytajPoziom(int p)
{
    switch (p)
    {
    case 1:
        this->poziom1->Checked = true;
        break;
    case 2:
        this->poziom2->Checked = true;
        break;
    case 3:
        this->poziom3->Checked = true;
        break;
    case 4:
        this->poziom4->Checked = true;
        break;
    case 5:
        this->poziom5->Checked = true;
        break;
    case 6:
        this->poziom6->Checked = true;
        break;
    case 7:
        this->poziom7->Checked = true;
        break;
    case 8:
        this->poziom8->Checked = true;
        break;
    case 9:
        this->poziom9->Checked = true;
        break;
    case 10:
        this->ustawCzas->Enabled = false;
        this->poziom10->Checked = true;
        this->zdjRobot->Visible = true;
        this->przyciskLosuj->Enabled = false;
        this->txtKomentarz->Text = "Jestem w szoku...Wygra³eœ, brawo !!!";
        this->txtZycia->Text = "Przeszed³eœ grê w " + this->etykietaCzas->Text + " min";
        this->txtPodpowiedz->Visible = false;
        this->literka->Enabled = false;
        break;
    default:
        this->poziom1->Checked = false;
        this->poziom2->Checked = false;
        this->poziom3->Checked = false;
        this->poziom4->Checked = false;
        this->poziom5->Checked = false;
        this->poziom6->Checked = false;
        this->poziom7->Checked = false;
        this->poziom8->Checked = false;
        this->poziom9->Checked = false;
        this->poziom10->Checked = false;
        break;
    }
}

System::Void Wisielec::formatka::literka_TextChanged_1(System::Object^  sender, System::EventArgs^  e)
{
    while (zmienne::zycia_ > 0 && this->literka->Text != "")
    {
        MarshalString(this->literka->Text, zmienne::literka);

        if ((zmienne::zleLiterki.find(zmienne::literka) != std::string::npos || zmienne::zgadywaneSlowo.find(zmienne::literka) != std::string::npos))
        {
            this->txtKomentarz->Text = "Skleroza ? ... ta literka juz byla :D";
            this->literka->Text = "";
            break;
        }
        int loc = zmienne::slowo.find(zmienne::literka);
        if (loc == std::string::npos)
        {
            this->zdjKosz->Visible = true;
            this->usunSerce->Enabled = true;
            --zmienne::zycia_;
            zmienne::zleLiterki += (zmienne::literka + " ");
            String ^zleliterki_ = gcnew String(zmienne::zleLiterki.c_str());
            this->zleliterki->Text = zleliterki_;
            this->txtKomentarz->Text = "Niestety, to s³owo nie ma takiej literki";
            this->literka->Text = "";
            if (zmienne::zycia_ == 6 || zmienne::zycia_ == 5);
            this->txtZycia->Text = "Pozosta³o nam " + zmienne::zycia_ + " ¿yæ";
            if (zmienne::zycia_ == 4 || zmienne::zycia_ == 3 || zmienne::zycia_ == 2);
            txtZycia->Text = "Pozosta³y nam " + zmienne::zycia_ + " ¿ycia";
            if (zmienne::zycia_ == 1)
                txtZycia->Text = "Uwa¿aj, zosta³o nam " + zmienne::zycia_ + " ¿ycie !";
            this->literka->Enabled = false;
        }
        else
        {
            this->txtKomentarz->Text = "Brawo, brawo, brawo, poprawna literka";
            MarshalString(wylosowaneSlowo->Text, zmienne::kopia);
            for (int i = 0; i < zmienne::dlugoscSlowa; i++)
            {
                if (zmienne::slowo[i] == zmienne::literka[0])
                    zmienne::kopia[i] = zmienne::literka[0];
            }
            zmienne::zgadywaneSlowo = zmienne::kopia;
            String^ temp_ = gcnew String(zmienne::zgadywaneSlowo.c_str());
            this->wylosowaneSlowo->Text = temp_;
            this->literka->Text = "";

        }
        if (zmienne::zgadywaneSlowo == zmienne::slowo)
        {
            this->usunSerce->Enabled = false;
            this->przywrocZycia();
            zmienne::poziom_++;
            this->wczytajPoziom(zmienne::poziom_);
            zmienne::zleLiterki.erase(zmienne::zleLiterki.begin(), zmienne::zleLiterki.end());
            zmienne::zgadywaneSlowo.erase(zmienne::zgadywaneSlowo.begin(), zmienne::zgadywaneSlowo.end());
            this->zleliterki->Text = "";
            if (zmienne::poziom_ != 10)
            {
                this->txtPodpowiedz->Visible = false;
                this->txtZycia->Visible = false;
                this->txtKomentarz->Text = "Super, mamy ca³e s³owo, pora na kolejne -> 'Losuj'";
            }
            zmienne::zycia_ = 6;
            this->przyciskLosuj->Enabled = true;
            this->literka->Enabled = false;
            this->txtKomentarz->Focus();
        }
    }
    if (zmienne::zycia_ == 0)
    {
        String^ odpowiedz = gcnew String(zmienne::slowo.c_str());
        this->ustawCzas->Enabled = false;
        this->txtKomentarz->Text = "A to pech, przegraliœmy...Mo¿e jeszcze raz ?";
        this->txtZycia->Text = "Szukanym s³owem by³o: " + odpowiedz;
        this->txtPodpowiedz->Visible = false;
    }
}

void Wisielec::formatka::przesunSerce(System::Windows::Forms::PictureBox^ serce)
{
    serce->Left += zmienne::x;
    if (serce->Left > 508)
    {
        serce->Visible = false;
        this->zdjKosz->Visible = false;
        this->literka->Enabled = true;
        this->literka->Focus();
    }
}

System::Void Wisielec::formatka::usunSerce_Tick(System::Object^  sender, System::EventArgs^  e)
{
    switch (zmienne::zycia_)
    {
    case 0:
        this->przesunSerce(s1);
        break;
    case 1:
        this->przesunSerce(s2);
        break;
    case 2:
        this->przesunSerce(s3);
        break;
    case 3:
        this->przesunSerce(s4);
        break;
    case 4:
        this->przesunSerce(s5);
        break;
    case 5:
        this->przesunSerce(s6);
        break;
    }
}

void Wisielec::formatka::przywrocZycia()
{
    this->s1->Location = System::Drawing::Point(12, 3);  s1->Visible = 1;
    this->s2->Location = System::Drawing::Point(85, 3);  s2->Visible = 1;
    this->s3->Location = System::Drawing::Point(158, 3); s3->Visible = 1;
    this->s4->Location = System::Drawing::Point(231, 3); s4->Visible = 1;
    this->s5->Location = System::Drawing::Point(304, 3); s5->Visible = 1;
    this->s6->Location = System::Drawing::Point(377, 3); s6->Visible = 1;
}

System::Void Wisielec::formatka::ustawCzas_Tick(System::Object^  sender, System::EventArgs^  e)
{
    if (zmienne::sekunda > 9 && zmienne::sekunda <= 60)
        this->etykietaCzas->Text = Convert::ToString(zmienne::minuta) + ":" + Convert::ToString(zmienne::sekunda);
    if (zmienne::sekunda < 10)
        this->etykietaCzas->Text = Convert::ToString(zmienne::minuta) + ":0" + Convert::ToString(zmienne::sekunda);
    zmienne::sekunda++;
    if (zmienne::sekunda > 60)
    {
        zmienne::sekunda = 0;
        zmienne::minuta++;
    }
}

System::Void Wisielec::formatka::przyciskLosuj_MouseEnter_1(System::Object^  sender, System::EventArgs^  e)
{
    if (zdjNutka->Visible == false)
        this->muzyka("../dzwiek/next.wav");
    this->przyciskLosuj->ForeColor = System::Drawing::Color::Blue;
}

System::Void Wisielec::formatka::zdjNutka_Click(System::Object^  sender, System::EventArgs^  e)
{
    if (this->przyciskLosuj->Enabled == false)
    {
        this->zdjNutka->Visible = false;
        this->graj->Stop();
        this->zdjStopNutka->Visible = true;
        this->wybierzutwor->Visible = false;
        this->literka->Focus();
    }
}

System::Void Wisielec::formatka::zdjStopNutka_Click(System::Object^  sender, System::EventArgs^  e)
{
    this->graj->Play();
    this->zdjStopNutka->Visible = false;
    this->zdjNutka->Visible = true;
    this->wybierzutwor->Visible = false;
    this->literka->Focus();
}

System::Void Wisielec::formatka::przyciskKoniecGry_Click(System::Object^  sender, System::EventArgs^  e)
{
    if (MessageBox::Show("Czy na pewno chcesz opuœciæ grê?", "Wisielec", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
    {
        MySqlConnection^laczBaze = gcnew MySqlConnection(konfiguracja);
        MySqlCommand^ dostepback = gcnew MySqlCommand("UPDATE slowa SET dostep = 1 where id != 1000;", laczBaze);
        try
        {
            laczBaze->Open();
            dostepback->ExecuteNonQuery();
        }
        catch (Exception^ ex)
        {
            MessageBox::Show(ex->Message);
        }
        laczBaze->Close();
        this->koniecGry->Enabled = true;
        this->zapiszwynik();
    }
}

System::Void Wisielec::formatka::formatka_MouseEnter(System::Object^  sender, System::EventArgs^  e)
{
    this->przyciskLosuj->ForeColor = System::Drawing::Color::Black;
    this->przyciskKoniecGry->ForeColor = System::Drawing::Color::Black;
    this->przyciskOdNowa->ForeColor = System::Drawing::Color::Black;
}

System::Void Wisielec::formatka::przyciskKoniecGry_MouseEnter(System::Object^  sender, System::EventArgs^  e)
{
    if (this->zdjNutka->Visible == false)
        this->muzyka("../dzwiek/next.wav");
    this->przyciskKoniecGry->ForeColor = System::Drawing::Color::Blue;
}

System::Void Wisielec::formatka::zdjNutka_MouseEnter(System::Object^  sender, System::EventArgs^  e)
{
    this->wybierzutwor->Visible = true;
}

System::Void Wisielec::formatka::formatka_Click(System::Object^  sender, System::EventArgs^  e)
{
    this->wybierzutwor->Visible = false;
    this->literka->Focus();
}

System::Void Wisielec::formatka::wybierzutwor_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
{
    this->muzyka("../dzwiek/" + this->wybierzutwor->Text + ".wav");
    this->wybierzutwor->Visible = false;
    this->literka->Focus();
}

System::Void Wisielec::formatka::koniecGry_Tick(System::Object^  sender, System::EventArgs^  e)
{
    if (zmienne::odliczanie == 1)
        for each(Control^elementy in this->Controls)
        {
            elementy->Visible = false;
        }
    if (zmienne::odliczanie == 2)
        this->zdjKoniec->Visible = true;
    if (zmienne::odliczanie == 3)
    {
        this->wylosowaneSlowo->Text = "Do zobaczenia :)";
        this->wylosowaneSlowo->Visible = true;
    }
    if (zmienne::odliczanie == 5)
        this->Close();
    zmienne::odliczanie++;
}

System::Void Wisielec::formatka::zdjKsiazki_Click(System::Object^  sender, System::EventArgs^  e)
{
    this->txtKomentarz->Visible = true;
}

System::Void Wisielec::formatka::zdjKsiazki_DoubleClick(System::Object^  sender, System::EventArgs^  e)
{
    this->txtKomentarz->Visible = false;
}

System::Void Wisielec::formatka::przyciskOdNowa_MouseEnter(System::Object^  sender, System::EventArgs^  e)
{
    if (this->zdjNutka->Visible == false)
        this->muzyka("../dzwiek/next.wav");
    this->przyciskOdNowa->ForeColor = System::Drawing::Color::Blue;
}

System::Void Wisielec::formatka::przyciskOdNowa_Click(System::Object^  sender, System::EventArgs^  e)
{
    if (MessageBox::Show("Czy na pewno chcesz zacz¹æ od nowa?", "Wisielec", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
    {
        this->zapiszwynik();
        zmienne::minuta = 0;
        zmienne::sekunda = 0;
        zmienne::poziom_ = 0;
        this->txtKomentarz->Text = "Coz...zaczynamy od nowa...\nKliknij 'Losuj'";
        this->txtZycia->Visible = true;
        this->txtZycia->Text = "Kliknij-> 'Losuj'";
        this->txtPodpowiedz->Visible = false;
        this->przyciskLosuj->Enabled = true;
        this->etykietaCzas->Text = "0:00";
        this->ustawCzas->Enabled = true;
        this->zdjRobot->Visible = false;
        this->wylosowaneSlowo->Text = "";
        this->przywrocZycia();
        this->wczytajPoziom(20);
        zmienne::zycia_ = 6;
        zmienne::zleLiterki.erase(zmienne::zleLiterki.begin(), zmienne::zleLiterki.end());
        zmienne::zgadywaneSlowo.erase(zmienne::zgadywaneSlowo.begin(), zmienne::zgadywaneSlowo.end());
        this->zleliterki->Text = "";
        this->literka->Enabled = false;
    }
}

System::Void Wisielec::formatka::wybierzutwor_Click(System::Object^  sender, System::EventArgs^  e)
{
    this->wybierzutwor->Focus();
}

void Wisielec::formatka::zapiszwynik()
{
    MySqlConnection^laczBaze = gcnew MySqlConnection(konfiguracja);
    MySqlCommand^ wynik = gcnew MySqlCommand("INSERT INTO wyniki SET ile = " + zmienne::poziom_ + ", czas = '" + this->etykietaCzas->Text + "';", laczBaze);
    try
    {
        laczBaze->Open();
        wynik->ExecuteNonQuery();
    }
    catch (Exception^ ex)
    {
        MessageBox::Show(ex->Message);
    }
    laczBaze->Close();
}