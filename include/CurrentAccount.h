/**  CurrentAccount class inherited from Account class.
 *
 * #include "CurrentAccount.h"
 *
 */

#ifndef CURRENT_ACCOUNT_H
#define CURRENT_ACCOUNT_H

// SYSTEM INCLUDES
#include <iostream>

// LOCAL INCLUDES
#include "Account.h"

class CurrentAccount : public Account {
 public:
  static constexpr double sMinBalance = 500.0;
  static constexpr double sLessMinBalanceCharge = 20.0;
// CONSTRUCTOR
  explicit CurrentAccount(std::string = "", double = 0);

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

// end class CurrentAccount
#endif
// _CURRENT_ACCOUNT_H_