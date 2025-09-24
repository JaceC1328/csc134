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
    cout << "not yet written" << endl;
}
void door1()
{
    cout << "not yet written" << endl;
}
void door2()
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