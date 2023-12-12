// Aaron Cortina cortina.aaron@titans.easternflorida.edu
#ifndef PROJECT_BANKACCOUNT_H
#define PROJECT_BANKACCOUNT_H

#include <iostream>
#include <string>

using namespace std;

//start of class bank account class
class bankAcct{
	public:
// constructor declaration
	   bankAcct();// default constructor
		           //postcondtion: sets acctnum to =-1 balance to zero, deposit to zero, and withdrawn to zero
		           
	   bankAcct(int);// first constructor
		              //postcondtion: sets acctnum to acctnum, balance to zero, deposit to zero, and withdrawn to zero
		              
	   bankAcct(int, double);// second constructor
		                      //postcondtion: sets acctnum to acctnum, balance to balance, deposit to zero, and withdrawn to zero
		                      
	   bankAcct(int, double, double);// third constructor
		                              //postcondtion: sets acctnum to acctnum, balance to balance, deposit to deposit, and withdrawn to zero
		                              
	   bankAcct(int, double, double, double);// fourth constructor
		                                      //postcondtion: sets acctnum to acctnum, balance to balance, deposit to deposit, and withdrawn to withdrawn
	   ~bankAcct();// default deconstructor
		
// public function list
        void setAcct(int);//preconditon: to taken in a string of the account number as a way to validate length
                          //post condition: set acctNum to acctNum
                          
        int getAcct() const;// precondtion: gets acctNum
                            // postcondtion: returns acctNum
                            
        void setBal(double);// precondition: function to set the balance
                            // postcondtion: balance has now become balance 
                            
        double getBal() const;// precondtion: gets balance
                              // postcondtion: returns balance
                              
		void cashChange();// preconditoin: if selection to add money if user deposited or withdrawn money
		                  // post condition: money has been added or withdrawn from account
		                  
		void print() const;// precondtion:print function gives user information of account balance
		                   //postcondtion: accout number, balance, and deposit or withdraw output to screen
		
	protected:// protect variables to pass along to derived classes
		int acctNum;
		double balance;
		double deposit;
		double withdrawn;
		
	private:
	    double oldBalance = 0.00;
};

#endif