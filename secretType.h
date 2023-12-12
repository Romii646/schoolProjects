// Aaron Cortina cortina.aaron@titans.easternflorida.edu
#ifndef PROJECT_SECRETTYPE_H
#define PROJECT_SECRETTYPE_H
#include <string>

using namespace std;

// start of class secretType
class secretType{
	public:  // secton of member functions that are public
		
		void setName(string);  // function to set name
		string getName() const;  // function to get name
		
		void setAge(int);  // function to set age
		int getAge() const;  // function to get age
		
		void setWeight(int);  // function to set weight
		int getWeight() const;  // function to get weight
		
		void setHieght(double);  // function to set height
		double getHeight() const;  // function to get height
		
		void print() const; // function to print
		
		secretType(); // default constructor
		secretType(string, int, int, double); // defined constructor
		
	private:// private variables
	   string name;
	   int age;
	   int weight;
	   double height;
};
#endif