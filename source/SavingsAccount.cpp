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

// function that deposits amount to SavingsAccount.
void SavingsAccount::Deposit(double aAmount) {
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

// Implementing pure virtual function that withdraws amount from SavingsAccount.
void SavingsAccount::Withdraw(double aAmount) {
  if (aAmount < 0.0)
    throw "ERROR: Withdraw amount cannot be negative.";
  else {
    double currentBalance = this->GetAccountBalance();
    if ((currentBalance - aAmount) < 0) {
      throw "ERROR: You don't have sufficient balance to withdraw the amount.";
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