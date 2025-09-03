/*
csc 134 M2T1
jacec
9/3/25
purpose: The "tire" sales program with user input
*/

// magic words
#include <iostream>
using namespace std;

int main() {
    // Declare our variables ("the truth")
    string item = "tires";
    double cost_per = 80.99;
    int amount = 20;
    //variables for user input
    int amount_purchased;
    double total_cost;

    //greet the user
    cout << "Hello Welcome to our " << item << " cost $" << cost_per << endl;
    //ask for information
    cout << "each of the " << item << " cost " << cost_per << endl;
    cout << "we have " << amount << " for sale." << endl;
    cout << endl;
    cout << "how much would you like to buy?" << endl;
    // cin: puut information from keyboard into a variable
    cin >> amount_purchased;

    //do some processing
    // I say single equal as "gets"
    total_cost = amount_purchased * cost_per;
    //TODO
    //output the answer
    cout << "you are buying" << amount_purchased << " " << item << endl;
    cout << "the total is: $" << total_cost << endl;
    cout << "thank you for shopping with us." << endl;
    return 0;
}