//instructions: redo this code so it follows last week's "coffee" problem in python
// if the user has more than 20, tell them to buy you coffee
// if they have between 10-20, tell them to join you for coffee
// if they have under 10, tell them you'll buy them coffee...

#include <iostream> // you need a library for input/output
using namespace std; // lets you type less for cin/cout statements

int main() { // main is the STARTING point of your program

    int num; // remember you gotta tell C++ what TYPE of variable you're using!
    cout << "Enter a number: ";
    cin >> num;

    if (num > 0)
        cout << "Positive number\n"; //  you could use "<<endl" to skip a line instead of \n
    else if (num < 0)
        cout << "Negative number\n";
    else
        cout << "Zero\n";

}
