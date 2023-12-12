// Aaron Cortina cortina.aaron@titans.easternflorida.edu
#include <iostream>
#include <string>
#include <iomanip>
#include "bankAcct.h"
#include "checkAcct.h"

using namespace std;

// start of class checkAcct implamentation
// declared constructors and deconstructor
checkAcct::checkAcct(){
   rate = 0.00;         // default constructor
   miniBal = 0;         // postcondtion: sets rate to zero, mini bal to zero and fee to zero
   fee = 32;
}
	   
checkAcct::checkAcct(double intRate){// takes in 1 arguments
	rate = intRate;
	miniBal = 0;          //postcondtion: sets rate to inrate, mini bal to zero and fee to zero
	fee = 32;
}

checkAcct::checkAcct(double intRate,  int miniB){// takes in 2 arguments 
   rate = intRate;                            //postcondtion: sets rate to inrate, mini bal to minib, and fee to zero
   miniBal = miniB;
   fee = 32;
}

checkAcct::checkAcct(double intRate,  int miniB, int charge){// takes in 3 arguments constructor
   rate = intRate;                                    //postcondtion: sets rate to inrate, mini bal to minib, and fee to charge
   miniBal = miniB;
   fee = charge;
}

checkAcct::~checkAcct(){}//  deconstructor
// start of public functions difinitions

void checkAcct::setAcct(int acctNum, double balance){// function to send the account number and balance 
   	bankAcct::setAcct(acctNum);                     // postcondtion: acctNUm and balance are set to variables acctNUm and balance
   	bankAcct::setBal(balance);
}

void checkAcct::setRate(double intRate){// set the rate
      rate = intRate;                    // postcondition: rate = intRate		                        
} 
                             
       
double checkAcct::getRate()const{ // returns interest rate
     return rate;                 // postconditon: return rate
}
                             
                             
void checkAcct::setBal(double miniB){// set the minimum balance to the account
         miniBal = miniB;            //postcondition: miniBal = miniB
                     
}
                            
                            
double checkAcct::getBal()const{// returns minum Balance
       return miniBal;          // postcondtion: return miniBal
}
                            
                            
void checkAcct::setFee(double charge){// set the service charge
          fee = charge;               // postcondition: fee = charge
} 
                           
                            
double checkAcct::getfee()const{// returns service charge
         return fee;                       // postcondtion: return fee
} 
  
void checkAcct::postRate()const{       // set the rate
	double finBal = 0.00;             // postcondition: rate = intRate
	finBal = balance * (1 + (rate * 1));
	cout << "Interest rate: " << rate << endl;
	cout << "Yearly balance after interest: " << finBal << endl;
} 

void checkAcct::veriMinBal(){// function used to verify if balance is below minimum
 	if(balance < miniBal){   // postcondition: balance on account will incur a fee of 32 dollars
	    cout << "Below minimum balance check for service charges.";
	    incurCharges();
	 }
 }
 
void checkAcct::incurCharges(){// function to be called if balance is below zero
 	balance -= fee;            // postcondtion: balance is reduced by fee
 }
 
void checkAcct::cashChange(double withD){// preconditon: brings in withdraw value to the varable withdrawn
	withdrawn = withD;                    // postcondtion: variable is sent to bank account class and the nprint on screen
	bankAcct::cashChange();
}

void checkAcct::print()const{  // function is used to print information about account num and balance
	bankAcct::print();        // postcondtion: information is output to users screen
	postRate();
	cout << "current FEEs are: " << fee << endl;
	cout << "Current minimum balance: " << miniBal << endl;	
}

void checkAcct::check(string payToOrder, double amount, string memo, string sign){ // precondtion: function is called by main program to initate a check
	cout << "Pay to the order of: " << payToOrder << endl;                     // postcondtion: users inputs are placed on a check
	cout << "Amount: " << amount << endl;
	cout << "For: " << memo << endl;
	cout << "Signature: " << sign << endl;
}