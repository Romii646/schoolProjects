// Aaron Cortina cortina.aaron@titans.easternflorida.edu
#ifndef PROJECT_SAVINGACCOUNT_H
#define PROJECT_SAVINGACCOUNT_H
#include "bankAcct.h"
#include <iostream>
#include <string>

using namespace std;

class savingAcct: public bankAcct{
	public:// prototype public functions
//declared constructors and deconstructor
       savingAcct();
       savingAcct(double);
       ~savingAcct();
// public function members
       void setAcct(int, double);// function to set account num and balance
	                            // postcondtion acctNum= acctNum blance = balance;	
       void setRate(double); // set the rate
                             // postcondition: rate = intRate
       
       double getRate()const; // returns interest rate
                             // postconditon: return rate
                             
       void postRate() const; // function to out interest rate
                              // postcondition: rates are out putted to user
                              
       void cashChange(double);// function to change balance
                              // postcondtion: the balance is affected by this function either to add or withdraw
       void print()const;// function to print
                         // postcondtion: prints balance,account num, and interest
    private:
       	double rate;
};
#endif