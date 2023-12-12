// Aaron Cortina cortina.aaron@titans.easternflorida.edu
#ifndef PROJECT_BOOKTYPE_H
#define PROJECT_BOOKTYPE_H
#include <string>

using namespace std;

// start of class bookType
class bookType{
	
	public:  // public declared variables
// simple constructor and defined constructors
		bookType();
	    bookType(string, string, int, double, int, string[]);
	    bookType(const bookType &obj); // copy constructor
	    bookType(string, string, string, string, int, double, int);
	    bookType(string, string, string, string, string, int, double, int);
	    bookType(string, string, string, string, string, string, int, double, int);
	   ~bookType();   // deconstructor
	  
 // class prototype functions
	   void setTitle(string);                                 // function used to set the title to private variable title
	   void checkTitle(string);                                // functon to validate the title is the same of actual title
	   string getTitle() const;                               // to get title from main program
	   void setAuthor(string[]);      // set authors to private variables
	   string* getAuthor()const;                              // return information back to main program
	   void setPublisher(string);                            // function to set publisher
	   string getPublisher() const;                         // function to return publisher info
	   void setISBN(int);                                   // set book ISBN #
	   int getISBN() const;                                 // return ISBN #
	   void setPrice(double);                               // set book price
	   double getPrice() const;                             // return book price
	   void setCopies(int);                                // set copies variable
	   void updateCopies(int);                             // updates copies
	   int getCopies() const;                             // return copies
	   void print() const;                                // print info on prompt
	   
	   
	
	private:            // private declared variables
	   string title;
	   string *authorPtr = nullptr; // dynamic array
	   int len;    // used to contain title of book
	  // string author1;  // used to contain name of author
	  // string author2;  // used to contain name of author
	  // string author3;  // used to contain name of author
	  // string author4;   // used to contain name of author
	   string publisher; // used to contain publisher
	   long long isbn;         // holds the books unique idenification
	   double price;      // holds price of book
	   int copies;        // hold number of copies available
};
#endif