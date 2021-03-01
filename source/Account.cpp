#include "Account.h"
using namespace std;

int Account::sNextAccNum = 1;

/* CONSTRUCTOR IMPLEMENTATION */

Account::Account(string aAccountHolderName,
                 double aAccountBalance, string mAccountType)
    : mAccountNumber(sNextAccNum++),
      mAccountHolderName(aAccountHolderName),
      mAccountBalance(aAccountBalance),
      mAccountType(mAccountType) {
  this->SetAccount(aAccountHolderName, aAccountBalance,
                   mAccountType);
}

/* OPERATIONS IMPLEMENTATION*/

// function that prints account balance.
void Account::PrintBalance() const {
  cout << this->GetAccountNumber() << " has total balance of Rs. "
       << this->GetAccountBalance() << " /-." << endl;
}
// end function PrintBalance

// Overloading << to print account details
ostream& operator<<(ostream& rout, const Account& ref) {
  rout << "-------------- Account Details --------------\n"
       << "Account Number: " << ":" << ref.mAccountNumber << "\n"
       << "Account Holder Name: " << ":" << ref.mAccountHolderName << "\n"
       << "Account Balance: " << ":" << ref.mAccountBalance << "\n"
       << "Account Type: " << ":" << ref.mAccountType << "\n"
       << "---------------------------------------------\n";
  return rout;
}

/* ACCESS FUNCTIONS IMPLEMENTATION */

// function that sets name of Account holder
void Account::SetAccountHolderName(string aName) {
  if (aName == "")
    throw "ERROR: Account holder name cannot be empty.";
  else
    this->mAccountHolderName = aName;
}
// end function SetAccountHolderName

// function that sets Balance of Account
void Account::SetAccountBalance(double aValue) {
  if (aValue < 0.0)
    cout << "ERROR: Account value cannot be negative." << endl;
  else
    this->mAccountBalance = aValue;
}
// end function SetAccountBalance

// function that sets the Account Type
void Account::SetAccountType(string aType) {
  if (aType == "")
    throw "ERROR: Account type cannot be empty.";
  else
    this->mAccountType = aType;
}
// end function SetAccountHolderName

// function that sets Account
void Account::SetAccount(string aAccountHolderName,
                         double aAccountBalance, string mAccountType) {
  try {
    this->SetAccountHolderName(aAccountHolderName);
    this->SetAccountBalance(aAccountBalance);
    this->SetAccountType(mAccountType);
  } catch (const char* msg) {
    throw msg;
  }
}
// end function SetAccount

// function that gets Account Number
int Account::GetAccountNumber() const { return this->mAccountNumber; }
// end function GetAccountNumber

// function that gets Account Holder Name
string Account::GetAccountHolderName() const {
  return this->mAccountHolderName;
}
// end function GetAccountHolderName

// function that gets Account Number
double Account::GetAccountBalance() const { return this->mAccountBalance; }
// end function GetAccountBalance

// function that gets Account Holder Name
string Account::GetAccountType() const { return this->mAccountType; }
// end function GetAccountHolderName

// function that gets the Account
const Account& Account::GetAccount() const { return *this; }