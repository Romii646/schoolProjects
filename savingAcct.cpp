// Aaron Cortina cortina.aaron@titans.easternflorida.edu
#include <iostream>
#include <string>
#include <iomanip>
#include "bankAcct.h"
#include "savingAcct.h"

using namespace std;

// start of class savingAcct implamentation
// declared constructors and deconstructor

savingAcct::savingAcct(){// default constructor
	rate = 0;            // postcondtion: rate is set to zero
}

savingAcct::savingAcct(double intRate){// constructor with one argument
	rate = intRate;                   // postcondtion: rate is set to intRate
}

savingAcct::~savingAcct(){}// deconstructor

// start of public functions difinitions
void savingAcct::setAcct(int acctNum, double balance){// precondtion: asks for two arguments
   	bankAcct::setAcct(acctNum);                       // postcondtion: sends acctnum and balance to class bankAcct
   	bankAcct::setBal(balance);
}

void savingAcct::setRate(double intRate){// set the rate
    rate = intRate;                    // postcondition: rate = intRate		                        
} 

double savingAcct::getRate()const{ // returns interest rate
    return rate;                 // postconditon: return rate
}

void savingAcct::postRate()const{  // precondtion: function is accessed by its class
	//double finBal = 0.00;        // postcondtion: calculates yearly interest earned and prints it
	//finBal = balance * (1 + (rate * 1));
	cout << "Interest rate: " << rate << endl;
	cout << "Yearly balance after interest: " << balance * (1 + (rate * 1)) << endl;
}

void savingAcct::cashChange(double withD){// preconditon: brings in withdraw value to the varable withdrawn
	withdrawn = withD;                   // postcondtion: variable is sent to bank account class and the nprint on screen
	bankAcct::cashChange();
}

void savingAcct::print()const{// precondtion function is called to print
	bankAcct::print();        // postcondtion: both functons are called to display the balance, account num, and interest rate.
	postRate();	
}