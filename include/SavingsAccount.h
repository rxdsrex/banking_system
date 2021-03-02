/**  SavingsAccount class inherited from Account class.
 *
 * #include "SavingsAccount.h"
 *
 */

#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H

// SYSTEM INCLUDES
#include <iostream>

// LOCAL INCLUDES
#include "Account.h"

class SavingsAccount : public Account {
 public:
// CONSTRUCTOR
  explicit SavingsAccount(std::string = "", double = 0);

// OPERATIONS

  /** Function that deposits an amount.
   *
   * @param aAmount The amount to be deposited.
   *
   * @return void
   */
  void Deposit(double aAmount) override;

  /** Overriding function that withdraws amount from CurrentAccount.
   *
   * @param aAmount The amount to be withdrawn.
   *
   * @return void
   */
  void Withdraw(double aAmount) override;

  /** Function that prints the account details.
   *
   * @param void
   *
   * @return void
   */
  void PrintAccountDetails() const override;
};

// end class SavingsAccount
#endif
// _SAVINGS_ACCOUNT_H_