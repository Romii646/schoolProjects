// Aaron Cortina cortina.aaron@titans.easternflorida.edu
#ifndef PROJECT_CHECKINGACCOUNT_H
#define PROJECT_CHECKINGACCOUNT_H
#include "bankAcct.h"
#include <iostream>
#include <string>


using namespace std;
// start of class header
class checkAcct: public bankAcct{

   public:// prototype public functions
//declared constructors and deconstructor
       checkAcct();
       checkAcct(double intRate = 0.00);
       checkAcct(double intRate = 0.00,  int miniB = -10);
       checkAcct(double intRate = 0.00, int miniB = -10, int charge = 32);
       ~checkAcct();
// public function members
       void setAcct(int, double);// function to set account num and balance
	                            // postcondtion acctNum= acctNum blance = balance;	
	   
       void setRate(double); // set the rate
                             // postcondition: rate = intRate
       
       double getRate()const; // returns interest rate
                             // postconditon: return rate
                             
       void setBal(double); // set the minimum balance to the account
                            //postcondition: miniBal = miniB
                            
       double getBal()const;// returns minum Balance
                            // postcondtion: return miniBal
                            
       void setFee(double); // set the service charge
                            // postcondition: fee = charge
                            
       double getfee()const; // returns service charge
                            // postcondtion: return fee
                            
       void postRate() const; // function to out interest rate
                              // postcondition: rates are out putted to user
                              
       void veriMinBal(); // function used to verify account below zero
                         // postcondton: if balance belower zero charge of $32 accures
                         
       void check(string, double, string, string);// precondtion: function is called by main program to initate a check
                                                  // postcondtion: users inputs are placed on a check
                         
       void cashChange(double); // preconditoin: if selection to add money if user deposited or withdrawn money
                               // post condition: money has been added or withdrawn from account
                               
       void print()const;// precondtion function is called to print
	                      // postcondtion: both functons are called to display the balance, account num, and interest rate.
       
    private:// declared variables
       void incurCharges();
       double rate;
       int miniBal;
       int fee;
       double withD;
};

#endif