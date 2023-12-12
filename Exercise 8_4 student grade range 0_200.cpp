#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;
// global variables
   ifstream inFile;
   int counter;
   int range1 = 0;
   int range2 = 0;
   int range3 = 0;
   int range4 = 0;
   int range5 = 0;
   int range6 = 0;
   int range7 = 0;
   int range8 = 0;

// proto functions
void getGrades(int list[], int& counter);
void sortGrades(int list[],int&);
void displayGrades();

int main() {
// main variables
  int list[30]; // array
  int counter = 0;

// statements to call the functions
  getGrades(list, counter);
  sortGrades(list,counter);
  displayGrades();
  
return 0;
}

// funtion to grab input from file
void getGrades(int list[], int& counter){
   //statement to read file
   inFile.open("Ch8_Ex4Data.txt");

// if file doesnt open
   if(!inFile){
     cout << "file did not open";
   }

// while loop to input all grades in array list
   while(inFile){
      inFile >> list[counter];
      counter++;
}
}

// funtion to sort and display grades
void sortGrades(int list[], int& counter){
// switch method to count the amount of students within each range
  for(int x = 0; x <= counter - 1; x++){
     switch(list[x]){
       case 0 ... 24:
           range1++;
       break;
       case 25 ... 49:
           range2++;
       break;
       case 50 ... 74:
           range3++;
       break;
       case 75 ... 99:
           range4++;
       break;
       case 100 ... 124:
           range5++;
       break;
       case 125 ... 149:
           range6++;
       break;
       case 150 ... 174:
           range7++;
       break;
       case 175 ... 200:
           range8++;
       break;

     }
  }
}

// funtion to display grades
void displayGrades(){
  cout << "0 - 24" << setw(2) << range1 << endl;
  cout << "25 - 49" << setw(2) << range2 << endl;
  cout << "50 - 74" << setw(2) << range3 << endl;
  cout << "75 - 99" << setw(2) << range4 << endl;
  cout << "100 - 124" << setw(2) << range5 << endl;
  cout << "125 - 149" << setw(2) << range6 << endl;
  cout << "150 - 174" << setw(2) << range7 << endl;
  cout << "175 - 200" << setw(2) << range8 << endl;
}
