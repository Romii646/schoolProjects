// Aaron Cortina cortina.aaron@titans.easternflorida.edu
#include <iostream>
#include <string>
#include "myArray.h"

int main() 
{// start of main program
// declared class objects
myArray list(5);
myArray myList(2, 13);
myArray yourList(-5, 9);
myArray isList;

// main variables to get the length for each object
int lenOne;
int lenTwo;
int lenThree;

lenOne = list.getLength(); // object list legnth assigned to lenOne
lenTwo = myList.getLength();// object mylist legnth assigned to lenTwo
lenThree = yourList.getLength();// object yourlist legnth assigned to lenThree

// for loops to print out array elements
for(int i = 0; i < lenOne; i++){
	cout << "list["<< list[i] << "] ";
}

cout << endl;

for(int i = 0; i < lenTwo; i++){
	cout << "myList["<< myList[i] << "] ";
}

cout << endl;

for(int i = 0; i < lenThree; i++){
	cout << "yourList["<< yourList[i] << "] ";
}

cout << endl;


isList = myList;

cout << endl;
for(int i = 0; i < lenOne; i++){
	cout << "list["<< isList[i] << "] ";
}

system("pause");
return 0;
}
