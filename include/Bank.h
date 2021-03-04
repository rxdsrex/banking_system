/**  Bank class header.
 *
 * #include "Bank.h"
 *
 */
#ifndef BANK_H
#define BANK_H

// SYSTEM INCLUDES
#include <iostream>
#include <vector>

// LOCAL INCLUDES
#include "Account.h"
#include "CurrentAccount.h"
#include "SavingsAccount.h"

class Bank {
 public:
  // CONSTRUCTOR
  /** Default + Overloaded constructor.
   */
  explicit Bank(std::string = "", int = 0);

  void CreateAccount(const std::string& aAccountHolderName, double aAccountBalance,
                     const std::string& aAccountType);
  void DepositMoneyToAccount(int aAccountNumber, double amount);
  void WithdrawMoneyFromAccount(int aAccountNumber, double amount);
  void printAllAccounts();
  void printAccountByAccountNumber(int aAccountNumber);
  void printAccountBalanceByAccountNumber(int aAccountNumber);
  void updateAccountNameByAccountNumber(int aAccountNumber, std::string mAccountHolderName);

  // ACCESSORS

  // setters
  void SetBankName(const std::string& = "");
  void SetBranchCode(int = 0);
  void SetBank(const std::string = "", int = 0);
  /**
	# @overload void SetBank(const Bank&);
	*/
	void SetBank(const Bank&);

  // getters
  std::string GetBankName() const;
  int GetBranchCode() const;
  std::vector<Account*> GetAccounts() const;
  Account* GetAccountByAccNum(int aAccountNumber) const;
  const Bank& GetBank() const;

 private:
  // DATA MEMBERS
  std::string mBankName;
  int mBranchCode;
  std::vector<Account*> mAccounts;
};
// end class Bank
#endif
// _BANK_H_