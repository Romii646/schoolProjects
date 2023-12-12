// Aaron Cortina cortina.aaron@titans.easternflorida.edu
#ifndef PROJECT_MYARAY_H
#define PROJECT_MYARAY_H
#include <string>

using namespace std;
// start of class myArray

template<class elemType>
class myArray{
	protected:// class variables
		int maxSize;
		int minSize;
		int length;
		elemType *arrayPtr = nullptr;		
		
	public:
        myArray();            // default constructor
        myArray(int);         // constructor that takes in one argument
        myArray(int, int);      // constructor that takes in two argument
        myArray(const myArray&);// copy constructor
        ~myArray();             // deconstructor
        void setMaxSize(int);   // function to set maxSize variable
        int getMaxSize() const;// function to return maxSize variable to main program
        void setMinSize(int);   // function to set minSize variable
        int getMinSize() const;// function to return minSize variable to main program
        int getLength() const;// function to return length variable to main program
        void makeArray();     // function to set element values and create array 
        void print() const;  // function to print array
        
// overload the assignment operator
		const myArray& operator=(const myArray&);
		
// overloaded array
		int& operator[] (int index);
		const int& operator[] (int index) const;

		
	private:
	   void setLength(int);	 // private function to set length
		
	
};

template <class elemType>
void myArray<elemType>::setMinSize(int mini){ // function used to set minimum array size
   	   minSize = mini;                // postcondtion: assigns mini to miniSize
   }

template <class elemType>
int myArray<elemType>::getMinSize() const{// function used to get minimum array size
   	   return minSize;             // postcondtion: returns miniSize to main program
   }

template <class elemType>   
void myArray<elemType>::setMaxSize(int max){// function used to get minimum array size
   	   maxSize = max;                 // postcondtion: assigns maxSize to max
   }
   
template <class elemType>
int myArray<elemType>::getMaxSize() const{// function used to get minimum array size
       return maxSize;            // postcondtion: returns maxSize to main program
   }

template <class elemType>  
void myArray<elemType>::setLength(int maxSize){// function used to get minimum array size
   	   length = maxSize;               // postcondtion: assigns length to maxSize
   }
  
template <class elemType>   
int myArray<elemType>::getLength() const{// function used to get minimum array size
   	   return length;             // postcondtion: returns length to main program
   }
  
template <class elemType> 
void myArray<elemType>::makeArray(){  // function used to set array length if min Size is negative turns into positive
   	   if (minSize < 0){       // before sizes are combined 
   	   	  int temp = minSize;          //postcondtion: indexs the element numbers into the array variable
   	   	  temp = temp * -1;            // and sets the length of the array to later use for length in main program
   	      maxSize =  maxSize + temp;
   	   }
   	   else{
   	      maxSize = maxSize - minSize;
       }
   	   arrayPtr = new elemType[maxSize];
   	   for(int i = 0; i < maxSize; i++){
   	   	   arrayPtr[i] = minSize++;
	   }
	   setLength(maxSize);
   }
   
template <class elemType> 
void myArray<elemType>::print() const{           // function to print array
   	   for(int i = 0; i < maxSize; i++){  // postcondtion: array will be printed if called by mian program
   	   	   cout << "list ["<< arrayPtr[i] << "]  ";
	   }
   }
 
//template <class elemType>  
//int& myArray<elemType>::operator[](int index){ // postcondtion: if element becomes out of array bounds program will halt with 
//   	  //assert(0 <= index && index < maxSize);// the assert reserved word.
//   	   return arrayPtr[index];
//   }

template <class elemType>
const int& myArray<elemType>::operator[](int index) const{// overloaded operators used to check forthe index bounds of the array
   	   //assert(0 <= index && index < maxSize);      // postcondtion: if element becomes out of array bounds program will halt with
   	   return arrayPtr[index];                      // the assert reserved word.
   }

// constructors
template <class elemType>
myArray<elemType>::myArray(){	
  	maxSize = 10;
  	minSize = 0;
	arrayPtr = nullptr;
  }

template <class elemType>
myArray<elemType>::myArray(int maSize){
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

template <class elemType>
myArray<elemType>::myArray(int mSize, int maSize){
  	int count = 0;
  	minSize = mSize;
  	maxSize = maSize;
  	arrayPtr = nullptr;
  	makeArray();  	
  }
   
// copy constructor
template <class elemType>
myArray<elemType>::myArray(const myArray& rightList){
	maxSize = rightList.getLength();
	if(arrayPtr)
	   delete [] arrayPtr;
	int *arrayPtr = new int[maxSize];
	for (int i = 0; i < maxSize; i++){
		arrayPtr[i] = rightList.arrayPtr[i];
	}
}

template <class elemType>
myArray<elemType>::~myArray(){   // deconstructor
		 cout << "\narray now deleted\n";
         delete [] arrayPtr;
		}
#endif