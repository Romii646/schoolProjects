// Aaron Cortina cortina.aaron@titans.easternflorida.edu
#include <iostream>
#include <string>
#include <iomanip>
#include "bankAcct.h"

using namespace std;

// start of class implamentation bank account
bankAcct::bankAcct(){// default constructor
	acctNum = -1;     //postcondtion: sets acctnum to =-1 balance to zero, deposit to zero, and withdrawn to zero
	balance = 0.0;     
	deposit = 0.0;
	withdrawn = 0.0;
}

bankAcct::bankAcct(int acctNum){// first constructor
   this -> acctNum = acctNum; //postcondtion: sets acctnum to acctnum, balance to zero, deposit to zero, and withdrawn to zero
   balance = 0.0;
   deposit = 0.0;
   withdrawn = 0.0;
}

bankAcct::bankAcct(int acctNum, double balance){// second constructor 
   this -> acctNum = acctNum;//postcondtion: sets acctnum to acctnum, balance to balance, deposit to zero, and withdrawn to zero
   this -> balance = balance;
   deposit = 0.0;
   withdrawn = 0.0;
}

bankAcct::bankAcct(int acctNum, double balance, double deposit){// third constructor
   this -> acctNum = acctNum;//postcondtion: sets acctnum to acctnum, balance to balance, deposit to deposit, and withdrawn to zero
   this -> balance = balance;
   this -> deposit = deposit;
   withdrawn = 0.0;
}

bankAcct::bankAcct(int acctNum, double balance, double deposit, double withdrawn){// fourth constructor
   this -> acctNum = acctNum;//postcondtion: sets acctnum to acctnum, balance to balance, deposit to deposit, and withdrawn to withdrawn
   this -> balance = balance;
   this -> deposit = deposit;
   this -> withdrawn = withdrawn;
}

bankAcct::~bankAcct(){// default deconstructor
	cout << "\n";
}
// end of constructor list

void bankAcct::setAcct(int acctNum){//preconditon: to taken in a string of the account number as a way to validate length
	                               //post condition: set acctNum to acctNum
	this -> acctNum = acctNum;
}
int bankAcct::getAcct()const{  // precondtion: gets acctNum
   return acctNum;             // postcondtion: returns acctNum
}

void bankAcct::setBal(double balance){// precondition: function to set the balance
	this -> balance = balance;        // postcondtion: balance has now become balance 
	oldBalance = balance;          
}

double bankAcct::getBal() const{// precondtion: gets balance
 	return balance;             // postcondtion: returns balance
 }
 
void bankAcct::cashChange(){
	 oldBalance = balance;
    if(deposit > 0){             // preconditoin: if selection to add money if user deposited or withdrawn money
       balance += deposit;       // post condition: money has been added or withdrawn from account
   }
   
   if(withdrawn > 0){
       balance -= withdrawn;
    }
}
void bankAcct::print()const{// precondtion: print function gives user information of account balance
	                        //postcondtion: accout number, balance, and deposit or withdraw output to screen
	cout << "Account number: " << acctNum << endl;
	cout << "Balance: " << oldBalance << endl;

	if(balance != oldBalance){
	   if(deposit > 0){
	      cout << "deposit: " << deposit << endl; 
	   }
	
	   if(withdrawn > 0){
	      cout << "withdrawn: " << withdrawn << endl;
	   }
	   cout << "Balance: " << balance << endl;
    }	
}                                       