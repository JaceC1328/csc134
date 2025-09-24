/*
csc 134 
m3lab1
jacec
9/24/25
*/

#include <iostream>
using namespace std;

void gameroom();
void door1();
void door2();
void gameroom2();
void door3();
void door4();
void door5();
void door6();
void Victory();
void GameOver();


int main()
{
    cout << "welcome to the survivor games, where if you pick all the right doors you get one billion dollars"  << endl;
    cout << " if you continue to go on with these games then you may suffer a horrible death, would youstill like to continue" << endl;
    cout << "if yes choose 1, if no then choose 2 ";

int choice;
    cin >> choice;

    if(choice == 1)
{
    cout << "Alrighty you chose to stay so lets carry on with the survivor games" << endl;
    gameroom();
}
    if (choice == 2)
{
    cout << "why are you here then?? go home!" << endl;
    GameOver();
    }
}
void gameroom()
{
    cout << "now you need to pick between the two doors, one of these doors will let you move on to the next area while the other will kill you" << endl;
    cout << "if you would like to go through door one choose 1, if you would like to go through door two choose door 2";

    int choice;
        cin >> choice;

        if (choice == 1)
{
    cout << "you have chosen door 1 please proceed inside" << endl;
   door1();
}
if (choice == 2) 
{
    cout << "you have chosen the correct door congratulations" << endl;
    door2();

}
}

void door1()
{
    cout << "you walk into the room and see a tiger who kills you" << endl;
    GameOver();
}
void door2()
{
    cout << "congratulations you have chosen the correct door and survived the first round"  << endl;
    gameroom2();
}
void gameroom2()
{
    cout << "not yet written" << endl;
}
void door3()
{
    cout << "not yet written" << endl;
}
void door4()
{
    cout << "not yet written" << endl;
}
void door5()
{
    cout << "not yet written" << endl;
}
void door6()
{
    cout << "not yet written" << endl;
}
void Victory()
{
    cout << "congratulations you won!!" << endl;
}
void GameOver()
{
    cout << "Game over... You lose..." << endl;
}