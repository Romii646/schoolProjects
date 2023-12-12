// Aaron Cortina cortina.aaron@titans.easternflorida.edu
#include <iostream>
#include <cassert>
#include "circleLink.h" 

using namespace std;

int main(){
// local variable declaration
    circleLinked list1;
    circleLinked list2;
    
    list1.intializeList();
     
    int num;
    cout << "\nEnter number or press -999 to quit\n";
    cin >> num;
    cout << "***************************************************************\n";
    while(num != -999){
       list1.insert(num);
       cout << "Enter number or press -999 to quit\n";
       cin >> num;
       
    }
	cout << "***************************************************************\n";
	
	cout << "length is: " << list1.length() << endl;
	
	cout << "***************************************************************\n";
	

	// print list 1 itll print two times
	list1.print();
	
	cout << "\n***************************************************************\n";
	
	list1.search(3);
	
	cout << "\n***************************************************************\n";
	
	cout << "\nlist destoyed\n";
	
	list1.destroyList();
	
    cout << "***************************************************************\n\n";
    
	list1.print();

	return 0;
}