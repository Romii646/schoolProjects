// Aaron Cortina cortina.aaron@titans.easternflorida.edu
#include <iostream>
#include <string>
#include "bankAcct.h"
#include "checkAcct.h"
#include "savingAcct.h"

// prototype to void modules
void bankRoll();// bank Account
void checkIt();// checking account
void butta();// saving account

int main() 
{// start of main program

   bankRoll();// void module used for bank account class
   checkIt();// void module used for checking account class
   butta();// void module used for saving account class

   system("pause");
return 0;
}

// bank roll have the difinitions that interact with the bankAcct class. BankAcct class attritbutes are set account balance and account along with depositing and withdrawing
void bankRoll(){
	// class object name
  bankAcct shmolder(54685, 500, 50);
  
  shmolder.cashChange();// this is to test and call bank account class
  shmolder.print();	// print function
}

// check it function have the difinitions that interact with the checkAcct class and can change savings rate, change minimum balance, and set fee rate
void checkIt(){
  // class object	
  checkAcct blazinWheel(0,0,22);

  blazinWheel.setAcct(65892, 1000); // to check if inheritence works between classes
  blazinWheel.cashChange(200);
  blazinWheel.print();
  cout << endl;
  blazinWheel.check("Maria", 200, "Grogery", "STEVEN");
}

// butta function have the difinitions that interact with the savingAcct class. its attributes are set interest rate
void butta(){
  //class object
  //savingAcct reggie;	
  savingAcct pvtRyan(0.01);
  
// function variables
//  int setNum = 0;
//  double setBalance = 0;
 // double withD = 0.00;
 // double rate = 0.00;
  
  // user is prompted for account number balance amount and withdraw
  /*
  cout << "\n set rate: ";
  cin >> rate;
  cout << "\nAccount number: ";
  cin >> setNum;
  cout << "\n Balance on account: ";
  cin >> setBalance;
  cout << "\n amount to been withdrawn? \n";
  cin >> withD;
  cout << endl;
  */
  
  // user own inputs
 // reggie.setRate(rate);
 // reggie.setAcct(setNum, setBalance);
 // reggie.cashChange(withD);
 // reggie.print();
  
  pvtRyan.setAcct(47474747, 2000);
  pvtRyan.cashChange(500);
  pvtRyan.print();  	
}
