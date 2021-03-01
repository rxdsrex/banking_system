/**  CurrentAccount class inherited from Account class.
 *
 * #include "CurrentAccount.h"
 * Author: Rajnarayan Dutta (rajnarayand@kpit.com)
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
  explicit CurrentAccount(int = 0, std::string = "", double = 0, std::string = 0);

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