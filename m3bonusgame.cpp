/*
csc 134 
m3bonus
jacec
10/1/25
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

int rollDice() {
    return rand() % 6 + 1; //random number between 1 and 6
}

int main() {
srand(time(0)); // seed the random number generator once


int money = 100; //player starts with 100
char playAgain = 'y'; // stores players response

while (playAgain == 'y') {
    std::cout << "You have $" << money << ". How much would you like to bet? ";
    int bet; 
    std::cin >> bet;

    // validate the bet
if (bet <= 0 || bet > money){
    std::cout << "Invalid bet. Please enter an amount between 1 and " << money << ".\n";
    continue; // Skip to next loop
}

int die1 = rollDice();
int die2 = rollDice();
int sum = die1 + die2;

    std:: cout << "You rolled " << die1 << " + " << die2 << " = " << sum << "\n";

    if (sum == 7 || sum == 11) {
        std::cout << "You win!\n";
        money += bet;
    }
    else if (sum == 2 || sum == 3 || sum == 12) {
        std::cout << "You lose!\n";
        money -=bet;
    if (money <= 0) {
        std::cout << "You are out of money! Game Over!\n";
        break; //end game loop
    }
    } else {
        std::cout << "try again.\n";
        //money stays the same
    }
std::cout << "You now have $" << money << ". Play again? (y/n) ";
    std:: cin >> playAgain; 
}

std::cout << "Thanks for playing! You ended with $" << money << ".\n;";
    return 0;
}