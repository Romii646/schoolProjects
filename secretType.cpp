#include <iostream>
#include <string>
#include "secretType.h"

using namespace std;

// start of member function of class secretType

		void secretType::setName(string n){ // function to set name
            this -> name = n;              // postcondition: name is now set to name
		} 
		string secretType::getName() const{ // function to get name
		   return name;                    // postcondition: name returned to user program                
		} 
		
		void secretType::setAge(int a){ // function to set age
		   this -> age = a;             // postcondition: age is now set to age
		}  
		
		int secretType::getAge() const{// function to get age
		   return age;                 //postcondition: age returned to user program  
		} 
		
		void secretType::setWeight(int w){ // function to get weight
		   this -> weight = w;             // postcondition: weight is now set to weight
		}  
		int secretType::getWeight() const{// function to set weight
		   return weight;                 //postcondition: weight returned to user program          
		} 
		
		void secretType::setHieght(double h){ // function to set height
		   this -> height = h;               // postcondition: height is now set to height
		} 
		double secretType::getHeight() const{// function to get height
		   return height;                   //postcondition: height returned to user program
		}  
		
		void secretType::print() const{// function to print member variables
		   cout << "Name: " << name << endl;  // postcondition: name, age, weight, and height are now output to a prompt
		   cout << "Age: " << age << endl;
		   cout << "Weight: " << weight << endl;
		   cout << "Height: " << height << endl;
		}
		
		
		secretType::secretType(){// default constructor
		   name = " ";
		   age = 0;
		   weight = 0;
		   height = 0;
		}
		 
		secretType::secretType(string n, int a, int w, double h){// defined constructor
			this -> name = n;
			this -> age = a;
			this -> weight = w;
			this -> height = h;
		} 