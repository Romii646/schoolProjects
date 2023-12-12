// Aaron Cortina cortina.aaron@titans.easternflorida.edu
#include<iostream>
#include<string>
#include<cassert>
#include "myAray.h"

using namespace std;

// start of class implamentation
  // constructors
  myArray::myArray(){	
  	maxSize = 10;
  	minSize = 0;
	arrayPtr = nullptr;
  }
  
    myArray::myArray(int maSize){
    int count = 0;
	if(maSize < 0){
		maxSize = maSize * -1;
	}
	else{
  	    maxSize = maSize;
    }
  	minSize = 0;
	arrayPtr = nullptr;
	makeArray();
}
	
  
    myArray::myArray(int mSize, int maSize){
  	int count = 0;
  	minSize = mSize;
  	maxSize = maSize;
  	arrayPtr = nullptr;
  	makeArray();  	
  }
  
// copy constructor
   myArray::myArray(const myArray& rightList){
	maxSize = rightList.getLength();
	if(arrayPtr)
	   delete [] arrayPtr;
	int *arrayPtr = new int[maxSize];
	for (int i = 0; i < maxSize; i++){
		arrayPtr[i] = rightList.arrayPtr[i];
	}
}
  
  myArray::~myArray(){   // deconstructor
		 cout << "\narray now deleted\n";
         delete [] arrayPtr;
		}
		
 overload assignment operator
   const myArray& myArray::operator=(const myArray& rightList){
   	if (this != &rightList){// avoid self copy
   		delete [] arrayPtr;
   		maxSize = rightList.getLength();
   		int *arrayPtr = new int[maxSize];
	   }
	return maxSize;
   }
  
//	start of class member functions	
   void myArray::setMinSize(int mini){ // function used to set minimum array size
   	   minSize = mini;                // postcondtion: assigns mini to miniSize
   }
   
   int myArray::getMinSize() const{// function used to get minimum array size
   	   return minSize;             // postcondtion: returns miniSize to main program
   }
   
   void myArray::setMaxSize(int max){// function used to get minimum array size
   	   maxSize = max;                 // postcondtion: assigns maxSize to max
   }
   
   int myArray::getMaxSize() const{// function used to get minimum array size
       return maxSize;            // postcondtion: returns maxSize to main program
   }
   
   void myArray::setLength(int maxSize){// function used to get minimum array size
   	   length = maxSize;               // postcondtion: assigns length to maxSize
   }
   
   int myArray::getLength() const{// function used to get minimum array size
   	   return length;             // postcondtion: returns length to main program
   }
   
   void myArray::makeArray(){  // function used to set array length if min Size is negative turns into positive
   	   if (minSize < 0){       // before sizes are combined 
   	   	  int temp = minSize;          //postcondtion: indexs the element numbers into the array variable
   	   	  temp = temp * -1;            // and sets the length of the array to later use for length in main program
   	      maxSize =  maxSize + temp;
   	   }
   	   else{
   	      maxSize = maxSize - minSize;
       }
   	   arrayPtr = new int[maxSize];
   	   for(int i = 0; i < maxSize; i++){
   	   	   arrayPtr[i] = minSize++;
	   }
	   setLength(maxSize);
   }
   
   void myArray::print() const{           // function to print array
   	   for(int i = 0; i < maxSize; i++){  // postcondtion: array will be printed if called by mian program
   	   	   cout << "list ["<< arrayPtr[i] << "]  ";
	   }
   }
                                        // overloaded operators used to check forthe index bounds of the array   
   int& myArray::operator[](int index){ // postcondtion: if element becomes out of array bounds program will halt with 
   	   assert(0 <= index && index < maxSize);// the assert reserved word.
   	   return arrayPtr[index];
   }
   
   const int& myArray::operator[](int index) const{// overloaded operators used to check forthe index bounds of the array
   	   assert(0 <= index && index < maxSize);      // postcondtion: if element becomes out of array bounds program will halt with
   	   return arrayPtr[index];                      // the assert reserved word.
   }