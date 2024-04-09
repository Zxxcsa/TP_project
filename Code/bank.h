#pragma once
#include "client.h"
#include "account.h"
#include "credit.h"
#include "debit.h"
#include "deposit.h"
#include "withdrawing.h"
#include "replenish.h"
#include "transfer.h"
#include <iostream> 
#include <vector> 

class Bank {
 public:
  std::string name;
  std::vector <Client> clientlist;
  std::vector <Account> accountlist;// 0 - credit  1 - debit   2 - deposit
  std::vector <Transaction> transactionlist;
  size_t clientnum = 0;
  size_t accountnum = 0;
  size_t transactionnum = 0;
  void AddAccount(size_t id, size_t type);
  void RemoveAccount(size_t num);
  void AddClient();
  void RemoveClient(size_t id);

  void Transact(size_t type, double amount, Account* acc);
  void Transact(size_t type, double amount, Account* inp, Account* out);
}; 