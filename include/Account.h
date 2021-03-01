/**  Account class header
 *
 * #include "Account.h"
 * Author: Rajnarayan Dutta (rajnarayand@kpit.com)
 *
 */

#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>

class Account {
 public:
  // CONSTRUCTOR

  /** Default + Overloaded constructor. */
  explicit Account(int = 0, std::string = "", double = 0.0);

  // OPERATIONS

  /** Function that deposits an amount.
   *
   * @param aAmount The amount to be deposited.
   *
   * @return void
   */
  void Deposit(double aAmount = 0);

  /** Function that withdraws an amount.
   *
   * @param aAmount The amount to be withdrawn.
   *
   * @return void
   */
  void Withdraw(double aAmount = 0);

  /** Function that prints the account balance.
   *
   * @param void
   *
   * @return void
   */
  void PrintBalance() const;

  /** Function that prints the account details.
   *
   * @param void
   *
   * @return void
   */
  virtual void PrintAccountDetails() const = 0;

  // friend std::ostream& operator<<(std::ostream&,const Account&);

  /** Destructor */
  ~Account();

  // ACCESS FUNCTIONS

  // Setters
  void SetAccountNumber(int = 0);
  void SetAccountHolderName(std::string = "");
  void SetAccountBalance(double = 0.0);
  void SetAccount(int = 0, std::string = "", double = 0.0);
  /**
      # @overload void SetAccount(const Account&);
      */
  void SetAccount(const Account &);

  // Getters
  int GetAccountNumber() const;
  std::string GetAccountHolderName() const;
  double GetAccountBalance() const;
  const Account &GetAccount() const;

 private:
  // Data Members
  int mAccountNumber;
  std::string mAccountHolderName;
  double mAccountBalance;
};

// end of class Account
#endif
// _ACCOUNT_H_