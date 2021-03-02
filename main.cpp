#include <iostream>

#include "Account.h"
#include "Bank.h"
#include "CurrentAccount.h"
#include "SavingsAccount.h"

int main(int, char **) {
  std::cout << "----------- Banking System -------------\n";
  Bank *localBank = new Bank("Local Bank", 123);
  localBank->CreateAccount("Raj", 550.50, "Current");
  localBank->CreateAccount("Amit", 500.95, "Savings");
  localBank->printAllAccounts();

  localBank->WithdrawMoneyFromAccount(1, 100.0);
  localBank->WithdrawMoneyFromAccount(1, -9.5);
  localBank->printAccountBalanceByAccountNumber(1);

  localBank->DepositMoneyToAccount(1, 200.0);
  localBank->printAccountByAccountNumber(1);

  localBank->WithdrawMoneyFromAccount(1, 100.0);
  localBank->DepositMoneyToAccount(2, -2);
  localBank->printAccountBalanceByAccountNumber(1);
  localBank->DepositMoneyToAccount(2, 225);
  localBank->printAccountByAccountNumber(1);

  localBank->updateAccountNameByAccountNumber(2, "Ankit");
  Account *temp = localBank->GetAccountByAccNum(2);
  std::cout << *temp;
  delete temp;
  return 0;
}
