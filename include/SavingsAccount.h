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

  /** Overriding function that withdraws amount from CurrentAccount.
   *
   * @param aAmount The amount to be withdrawn.
   *
   * @return void
   */
  void Withdraw(double aAmount = 0);

  /** Function that prints the account details.
   *
   * @param void
   *
   * @return void
   */
  void PrintAccountDetails() const;
};

// end class SavingsAccount
#endif
// _SAVINGS_ACCOUNT_H_