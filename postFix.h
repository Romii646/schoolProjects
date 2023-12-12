// Aaron Cortina cortina.aaron@titans.easternflorida.edu
#ifndef PROJECT_STACKTYPE_H
#define PROJECT_STACKTYPEq_H
#include <iostream> 
#include <cassert>
#include "stackType.h"

using namespace std;
template <class Type>
class inPostFix: public stackType<Type>{
	public:
	   inPostFix(int stackSize);// constructor
	   Type getInFix(Type inFix) const;// function to get and set infix expression	
	                                   // postcondtion: returns inFix
	                                   
	   void showInfix(const Type&) const;// function to print infix expression
	                                     //postcondition: print inFix expression recieved
										  
	   void showPostFix(const type&) const;// function to show postfix expression
	                                       // postcondtion: print postFix expression
	   
	   void converToPostfix(Type& Stack); // function to convert infix to pstfix
	                                      // postcondtion: operands and operators are formatted to postfix
	    
	   Type precendence(Type expVar);// function to evaluate precendence
	                                 //postcondition: if true expression returned to be of a high importance
	                                 //               return false otherwise
};

