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
    //declare all of our vairable ("whiteboards")
string item_name = "tire"; // replace with your item
int num_items = 10;
double cost_per = 80.25;

//give oue slaes pitch
cout << "welcome to the " << item_name << " store!" << endl;
cout << "Each " << item_name << " is $" <<cost_per << endl;
cout << "We have " << num_items << " total." << "\n";
// do the processing
double total_cost = num_items * cost_per;


    //end program
    return 0;
}