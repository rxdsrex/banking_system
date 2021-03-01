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

// function that deposits amount to CurrentAccount.
void CurrentAccount::Deposit(double aAmount) {
  if (aAmount < 0.0)
    throw "ERROR: Deposit amount cannot be negative.";
  else {
    double totalAmount = this->GetAccountBalance() + aAmount;
    this->SetAccountBalance(totalAmount);
    cout << aAmount
         << " has been deposited to account #: " << this->GetAccountNumber()
         << endl;
    this->PrintBalance();
  }
}
// end function Deposit

// Implementing pure virtual function that withdraws amount from CurrentAccount.
void CurrentAccount::Withdraw(double aAmount) {
  if (aAmount < 0.0)
    throw "ERROR: Withdraw amount cannot be negative.";
  else {
    double currentBalance = this->GetAccountBalance();
    if ((currentBalance - aAmount) < 0.0) {
      throw "ERROR: You don't have sufficient balance to withdraw the amount.";
    } else if ((currentBalance - aAmount) < sMinBalance) {
      cout << "You will be charged service charge of Rs. "
           << sLessMinBalanceCharge
           << " for withdrawing more than minimum limit." << endl;
      double totalAmount = this->GetAccountBalance() - aAmount - sLessMinBalanceCharge;
      this->SetAccountBalance(totalAmount);
      cout << "Rs. " << aAmount << " + " << sLessMinBalanceCharge
           << " has been withdrawn from account #: " << this->GetAccountNumber()
           << endl;
      this->PrintBalance();
    } else {
      double totalAmount = this->GetAccountBalance() - aAmount;
      this->SetAccountBalance(totalAmount);
      cout << "Rs. " << aAmount
           << " has been withdrawn from account #: " << this->GetAccountNumber()
           << endl;
      this->PrintBalance();
    }
  }
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