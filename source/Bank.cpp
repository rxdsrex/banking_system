#include <Bank.h>

#include <iostream>

using namespace std;

Bank::Bank(std::string aBankName, int aBranchCode)
    : mBankName(aBankName), mBranchCode(aBranchCode) {}

void Bank::CreateAccount(std::string aAccountHolderName, double aAccountBalance,
                         std::string aAccountType) {
  try {
    if (aAccountType == "Current" || aAccountType == "current") {
      Account* currentAccountObj =
          new CurrentAccount(aAccountHolderName, aAccountBalance);
      mAccounts.push_back(currentAccountObj);
    } else if (aAccountType == "Savings" || aAccountType == "savings") {
      Account* savingsAccountObj =
          new SavingsAccount(aAccountHolderName, aAccountBalance);
      mAccounts.push_back(savingsAccountObj);
    } else {
      throw "ERROR: Invalid Account type.";
    }
  } catch (const char* msg) {
    cerr << msg << '\n';
  }
}

void Bank::DepositMoneyToAccount(int aAccountNumber, double amount) {
  bool found = false;
  for (Account* accountIter : mAccounts) {
    if (accountIter->GetAccountNumber() == aAccountNumber) {
      found = true;
      try {
        accountIter->Deposit(amount);
      } catch (const char* msg) {
        cerr << msg << '\n';
      }
      break;
    }
  }
  if (!found) {
    cout << "Account with account no# " << aAccountNumber << " not found.";
  }
}

void Bank::WithdrawMoneyFromAccount(int aAccountNumber, double amount) {
  bool found = false;
  for (Account* accountIter : mAccounts) {
    if (accountIter->GetAccountNumber() == aAccountNumber) {
      found = true;
      try {
        accountIter->Withdraw(amount);
      } catch (const char* msg) {
        cerr << msg << '\n';
      }
      break;
    }
  }
  if (!found) {
    cout << "Account with account no# " << aAccountNumber << " not found.";
  }
}

void Bank::printAllAccounts() {
  for (Account* accountIter : mAccounts) {
    accountIter->PrintAccountDetails();
  }
}

void Bank::printAccountByAccountNumber(int aAccountNumber) {
  bool found = false;
  for (Account* accountIter : mAccounts) {
    if (accountIter->GetAccountNumber() == aAccountNumber) {
      found = true;
      accountIter->PrintAccountDetails();
      break;
    }
  }
  if (!found) {
    cout << "Account with account no# " << aAccountNumber << " not found.";
  }
}

void Bank::printAccountBalanceByAccountNumber(int aAccountNumber) {
  bool found = false;
  for (Account* accountIter : mAccounts) {
    if (accountIter->GetAccountNumber() == aAccountNumber) {
      found = true;
      accountIter->PrintBalance();
      break;
    }
  }
  if (!found) {
    cout << "Account with account no# " << aAccountNumber << " not found.";
  }
}

void Bank::updateAccountNameByAccountNumber(int aAccountNumber, std::string mAccountHolderName) {
  bool found = false;
  for (Account* accountIter : mAccounts) {
    if (accountIter->GetAccountNumber() == aAccountNumber) {
      found = true;
      accountIter->SetAccountHolderName(mAccountHolderName);
      break;
    }
  }
  if (!found) {
    cout << "Account with account no# " << aAccountNumber << " not found.";
  }
}

// ACCESSORS

// Setters
// function that sets name of Bank
void Bank::SetBankName(const string aName) { this->mBankName = aName; }
// end function SetBankName

// function that sets code of Branch
void Bank::SetBranchCode(int aBranchCode) {
  if (aBranchCode < 0.0)
    throw "ERROR: Branch code cannot be negative.";
  else
    this->mBranchCode = aBranchCode;
}
// end function SetBranchCode

// function that sets Bank
void Bank::SetBank(const string aName, int aBranchCode) {
  this->mBankName = aName;
  this->SetBranchCode(aBranchCode);
}
// end function SetBank

// Overloaded function that sets the Bank
void Bank::SetBank(const Bank& obj) {
  this->SetBank(obj.GetBankName(), obj.GetBranchCode());
}
// end function SetBank

// Getters
// function that gets name of Bank
string Bank::GetBankName() const { return this->mBankName; }
// end function GetBankName

// function that gets code of Branch
int Bank::GetBranchCode() const { return this->mBranchCode; }
// end function GetBranchCode

// function that gets accounts of Bank
std::vector<Account*> Bank::GetAccounts() const { return this->mAccounts; }
// end function GetAccounts

// function that gets accounts by ID of Bank
Account* Bank::GetAccountByAccNum(int aAccountNumber) const { 
  for (Account* accountIter : mAccounts) {
    if (accountIter->GetAccountNumber() == aAccountNumber) {
      return accountIter;
    } else {
      continue;
    }
  }
  return nullptr;
}
// end function GetAccountByAccNum

// function that gets the Bank
const Bank& Bank::GetBank() const { return *this; }
// end function GetBank