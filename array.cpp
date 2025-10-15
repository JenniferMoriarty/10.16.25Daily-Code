//instructions: change the array so it holds 8 WORDS (not numbers)
//add an if statement inside the for loop that prints "NO FROGS ALLOWED" if the word it's printing is "frogs"

#include <iostream>
using namespace std;

int main() {

    //the counterpart to a python list is a C++ ARRAY
    //big differences: can only contain one kind of thing, 
    //and can't change size once set up
    int nums[5] = { 2, 4, 6, 8, 10 };

    //C++ doesn't have a "print" function for arrays like python
    //so you gotta use a for loop (also works for python)
    for (int i = 0; i < 5; i++) { 
        cout << "Element " << i << ": " << nums[i] << endl;
    }

}
