#include<iostream>
#include<string>
#include "bookType.h"

using namespace std;
// start of class implamentation
  // constructors
		bookType::bookType(){
	       title = "";    
	       authorPtr = nullptr;  
//	       author2 = ""; 
//	       author3 = "";  
//	       author4 = "";  
	       publisher = ""; 
	       isbn = 0;         
	       price = 0.0;      
	       copies = 0; 
		}
		// copy constructor
		bookType::bookType(const bookType &rhs){
			title = rhs.title;
			len = rhs.len;
			if(authorPtr)
			   delete [] authorPtr;
			string *authorPtr = new string[len];
			for (int i = 0; i < len; i++){
				authorPtr[i] = rhs.authorPtr[i];
			}
		}
		
	    bookType::bookType(string tT, string pub, int bookNum, double pr, int inStock, string Ath1[]){
		   title = tT;   
	       authorPtr = Ath1;  
	       //author2 = ""; 
	      // author3 = "";  
	       //author4 = "";  
	       publisher = pub; 
	       isbn = bookNum;         
	       price = pr;      
	       copies = inStock; 
		}
		
//	    bookType::bookType(string tT, string Ath1, string Ath2, string pub, int bookNum, double pr, int inStock){
//		   title = tT;    
//	       author1 = Ath1;  
//	       author2 = Ath2; 
//	       author3 = "";  
//	       author4 = "";  
//	       publisher = pub; 
//	       isbn = bookNum;         
//	       price = pr;      
//	       copies = inStock;
//		}
//		
//	    bookType::bookType(string tT, string Ath1, string Ath2, string Ath3, string pub, int bookNum, double pr, int inStock){
//		   title = tT;    
//	       author1 = Ath1;  
//	       author2 = Ath2; 
//	       author3 = Ath3;  
//	       author4 = "";  
//	       publisher = pub; 
//	       isbn = bookNum;         
//	       price = pr;      
//	       copies = inStock;
//		}
//		
//	    bookType::bookType(string tT, string Ath1, string Ath2, string Ath3, string Ath4, string pub, int bookNum, double pr, int inStock){
//		   title = tT;    
//	       author1 = Ath1;  
//	       author2 = Ath2; 
//	       author3 = Ath3;  
//	       author4 = Ath4;  
//	       publisher = pub; 
//	       isbn = bookNum;         
//	       price = pr;      
//	       copies = inStock;
//		}
		
	    bookType::~bookType(){   // deconstructor
		 cout << "thank you for visiting ONE STOP SKIPPTY HOP\n\nauthorPtr now deleted";
		 delete [] authorPtr; 
		}
	   
// class member functions
	   void bookType::setTitle(string tT){       // function used to set the title to private variable title
	       title = tT;
	   }// end of setTitle function 
	                                        
	   void bookType::checkTitle(string tT){    // functon to validate the title is the same of actual title
	      if(title != tT){
	      	cout << "Invalid Title.";
	      	system("pause");
		  }
	   }
	                                        
	  string bookType::getTitle() const{     // to get title from main program
	      return title;
	   } // end of return function
	                                      
	   void bookType::setAuthor(string Ath1[]){   // set authors to private variables
	       
		   authorPtr = Ath1;
		   len = authorPtr -> length();
		    
//		   if(Ath2 != ""){
//	          author2 = Ath2;
//	       }
//	       if(Ath3 != ""){
//	          author3 = Ath3;
//		   } 
//		   if(Ath4 != ""){
//	       author4 = Ath4;
//	       }
	   }// end of setAuthor function 
	                                    
	   string* bookType::getAuthor()const{      // return information back to main program
	      return authorPtr;
	   } 
	                                     
	  void bookType::setPublisher(string pub){     // function to set publisher
	      publisher = pub;
	   }// end of setPublisher function
	     
	   string bookType::getPublisher() const{    // function to return publisher info
	      return publisher;
	   }
	    
	   void bookType::setISBN(int bookNum){        // set book ISBN #
	      isbn = bookNum;
	   } 
	   int bookType::getISBN() const{           // return ISBN #
	      return isbn;
	   }
	   
	   void bookType::setPrice(double pr){          // set book price
	      price = pr;
	   } 
	   double bookType::getPrice() const{          // return book price
	      return price;
	   }
	    
	   void bookType::setCopies(int inStock){               // set copies variable
	      copies = inStock;
	   }
	   void bookType::updateCopies(int inStock){            // updates copies
	      if(inStock >= 0){
		     copies += inStock;
		   }
	   } 
	   int bookType::getCopies() const{             // return copies
	      return copies;
	   }
	   
	   void bookType::print() const{               // print info on prompt
	     cout << "Title : " << title <<endl;
         //cout << "Author :" << authorPtr[0] << endl;
         
         for(int i = 0; i < 4 ; i++){
         	 cout << "Author :" << authorPtr[i] << endl;
			}
		  
		 
         cout << "Publisher :" << publisher <<endl;
         cout << "ISBN :" << isbn << endl;
         cout << "Price :" << price << endl;
         cout << "Copies :" << copies << endl; 
	   } 