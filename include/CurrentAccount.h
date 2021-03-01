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
  static const int minBalance = 500;
// CONSTRUCTOR
  explicit CurrentAccount(std::string = "", double = 0);

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

// end class CurrentAccount
#endif
// _CURRENT_ACCOUNT_H_