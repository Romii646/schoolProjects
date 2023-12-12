// Aaron Cortina cortina.aaron@titans.easternflorida.edu
#include <iostream>
#include <string>
#include "myAray.h"

int main() 
{// start of main program
// declared class objects
myArray<string> list(5);
myArray<int> myList(2, 13);
myArray<double> yourList(-5, 9);

// main variables to get the length for each object
int lenOne;
int lenTwo;
int lenThree;

lenOne = list.getLength(); // object list legnth assigned to lenOne
lenTwo = myList.getLength();// object mylist legnth assigned to lenTwo
lenThree = yourList.getLength();// object yourlist legnth assigned to lenThree

// for loops to print out array elements
list.print();


cout << endl;


myList.print();


cout << endl;


yourList.print();


cout << endl;


system("pause");
return 0;
}
