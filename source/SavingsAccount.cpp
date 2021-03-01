#include "SavingsAccount.h"
using namespace std;

/* CONSTRUCTOR IMPLEMENTATION */

// SavingsAccount Default + Overloaded Constructor
SavingsAccount::SavingsAccount(string aAccountHolderName,
                               double aAccountBalance)
    : Account(aAccountHolderName, aAccountBalance,
              "Savings") {
  // base class initialization using member initializer list
}
// end SavingsAccount constructor

/* OPERATIONS IMPLEMENTATION*/

// Implementing pure virtual function that withdraws amount from SavingsAccount.
void SavingsAccount::Withdraw(double aAmount) {
  // TODO: Add biz logic
}
// end function Withdraw

// Implementing pure virtual function that prints Account details of
// SavingsAccount
void SavingsAccount::PrintAccountDetails() const {
  cout << "-------------- Account Details : Savings Account --------------\n"
       << "Account Number: "
       << ":" << this->GetAccountNumber() << "\n"
       << "Account Holder Name: "
       << ":" << this->GetAccountHolderName() << "\n"
       << "Account Balance: "
       << ":" << this->GetAccountBalance() << "\n"
       << "---------------------------------------------\n";
}