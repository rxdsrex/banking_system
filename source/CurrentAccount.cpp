#include "CurrentAccount.h"
using namespace std;

/* CONSTRUCTOR IMPLEMENTATION */

// CurrentAccount Default + Overloaded Constructor
CurrentAccount::CurrentAccount(string aAccountHolderName,
                               double aAccountBalance)
    : Account(aAccountHolderName, aAccountBalance, "Current") {
  // base class initialization using member initializer list
}
// end CurrentAccount constructor

/* OPERATIONS IMPLEMENTATION*/

// Implementing pure virtual function that withdraws amount from CurrentAccount.
void CurrentAccount::Withdraw(double aAmount) {
  // TODO: Add biz logic
}
// end function Withdraw

// Implementing pure virtual function that prints Account details of
// CurrentAccount
void CurrentAccount::PrintAccountDetails() const {
  cout << "-------------- Account Details : Current Account --------------\n"
       << "Account Number: "
       << ":" << this->GetAccountNumber() << "\n"
       << "Account Holder Name: "
       << ":" << this->GetAccountHolderName() << "\n"
       << "Account Balance: "
       << ":" << this->GetAccountBalance() << "\n"
       << "---------------------------------------------\n";
}