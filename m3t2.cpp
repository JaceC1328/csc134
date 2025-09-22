/*
jacec
m3t2 -craps part 1
csc134
9/22/25
begining of craps game
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Helper function (todo)
int roll();

//main
int main() {
    int num = roll();
    cout << num << endl;
    
/*
-roll 2d6 (2-12)
-branch based on win lose or point
rest come later
*/
 int roll1 = 2;
 int roll2 = 5;
int point;
// seed RNG before role
srand(time(0));
// roll the dice
roll1 = roll();
roll2 = roll();
int sum = roll1+roll2 ;
cout << "ROLL: " << sum << endl;
 //win on 7 or 11
 if (sum == 7 || sum == 11) {
    cout << "Lucky Seven or Eleven-- You win!" << endl;

 }
 // lose on 2 3 or 12
 else if ( (sum == 2) || (sum == 3) || ( sum == 12) ) {
    cout << "2,3,12 -- Sorry, you lose." << endl;
 }
 else {
    point = sum;

    cout << "Rolled a point." << endl;
    cout << "Your point is: " << point << endl;
 }

    return 0;
}

//Define Helper functions
int roll() {
   int my_roll;
   my_roll = (rand() % 6) + 1;
   return my_roll;
}