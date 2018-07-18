#include "powitanie.h"

using namespace System;
using namespace System::Windows::Forms;

void ZamknijOkno(Object^ sender, FormClosedEventArgs^ e)
{
    if (Application::OpenForms->Count == 0)
    {
        Application::Exit();
    }
    else
    {
        Application::OpenForms[0]->FormClosed += gcnew FormClosedEventHandler(ZamknijOkno);
    }
}
[STAThreadAttribute]

int main()
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Wisielec::powitanie^ pierwsza = gcnew Wisielec::powitanie();
    pierwsza->FormClosed += gcnew FormClosedEventHandler(ZamknijOkno);
    pierwsza->Show();
    Application::Run();
    return 0;
}