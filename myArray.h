// Aaron Cortina cortina.aaron@titans.easternflorida.edu
#ifndef PROJECT_MYARRAY_H
#define PROJECT_MYARRAY_H
#include <string>

using namespace std;
// start of class myArray


class myArray{
	protected:// class variables
		int maxSize;
		int minSize;
		int length;
		int *arrayPtr = nullptr;		
		
	public:
        myArray();            // default constructor
        myArray(int);         // constructor that takes in one argument
        myArray(int, int);      // constructor that takes in two argument
        myArray(const myArray&);// copy constructor
        ~myArray();             // deconstructor
        void setMaxSize(int = 50);   // function to set maxSize variable
        int getMaxSize() const;// function to return maxSize variable to main program
        void setMinSize(int = 0);   // function to set minSize variable
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
#endif