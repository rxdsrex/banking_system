/**  Account class header
 *
 * #include "Account.h"
 *
 */

#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>

class Account {
 public:
 // CONSTRUCTOR/DESTRUCTOR

  explicit Account(std::string = "", double = 0, std::string = 0);

// OPERATIONS

  /** Function that prints the account balance.
   *
   * @param void
   *
   * @return void
   */
  void PrintBalance() const;

  /** Function that deposits an amount.
   *
   * @param aAmount The amount to be deposited.
   *
   * @return void
   */
  virtual void Deposit(double aAmount) = 0;

  /** Function that withdraws an amount.
   *
   * @param aAmount The amount to be withdrawn.
   *
   * @return void
   */
  virtual void Withdraw(double aAmount) = 0;

  /** Function that prints the account details.
   *
   * @param void
   *
   * @return void
   */
  virtual void PrintAccountDetails() const = 0;

  friend std::ostream &operator<<(std::ostream &, const Account &);

// ACCESSORS

  // Setters
  void SetAccountNumber(int = 0);
  void SetAccountHolderName(std::string = "");
  void SetAccountBalance(double = 0.0);
  void SetAccountType(std::string = "");
  void SetAccount(std::string = "", double = 0.0, std::string = "");

  // Getters
  int GetAccountNumber() const;
  std::string GetAccountHolderName() const;
  double GetAccountBalance() const;
  std::string GetAccountType() const;
  const Account &GetAccount() const;

 private:
  // Data Members
  int mAccountNumber;
  std::string mAccountHolderName;
  double mAccountBalance;
  std::string mAccountType;
  static int sNextAccNum;
};

// end of class Account
#endif
// _ACCOUNT_H_