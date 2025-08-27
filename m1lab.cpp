/*
csc 134 
m1lab
jacec
8/27/25
purpose: The "tire" (replace noun) sales program
*/

// magic words
#include <iostream>
using namespace std;

int main() {
    // start program
    //declare all of our variable ("whiteboards")
string item_name = "tire"; // replace with your item
int num_items = 10;
double cost_per = 80.25;

//give oue slaes pitch
cout << "welcome to the " << item_name << " store!" << endl;
cout << "Each " << item_name << " is $" <<cost_per << endl;
cout << "We have " << num_items << " total." << "\n";
// do the processing
double total_cost = num_items * cost_per;
// Print the output
cout << "Buying them all will cost: $" << total_cost << endl;
cout << "Thanks for shopping with us!" << endl;

    //end program
    return 0;
}