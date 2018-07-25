Project name: Wisielec

Project type: GUI application

Program, in which the application was created: Visual Studio 2015

Goal of the game:
- the player's task is to guess ten words (10 words = 10 levels)
- you have only 6 lives

Functionalities:
- words and tips are retrieved from the local database
- achieved level and time are saved to the local database (you can check them whenever you want)
- you can add your favorite music to the game
What you have to do:
1. add music (only .wav files) to the folder "dzwiek"
2. make changes in formatka.cpp:<br>
2.1. muzyka("../dzwiek/(hier type the name of your file).wav");
3. make changes in formatka.h:<br>
3.1. this->wybierzutwor->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
              L"st", L"st", L"st", L"st", L"st", L"st", L"st" 
              }<br>
where "st" means the title of the song you added in point 1.
 - implemented game guide
 - multiple game
 - game restart
