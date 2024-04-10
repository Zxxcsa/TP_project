#pragma once
#include "client.h"
#include "account.h"
#include "credit.h"
#include "debit.h"
#include "deposit.h"
#include "withdrawing.h"
#include "replenish.h"
#include "transfer.h"
#include "clientbuilder.h"
#include <iostream> 
#include <vector>


class Bank {
 private:
  size_t clientnum = 0;
  size_t accountnum = 0;
  size_t transactionnum = 0;
  ClientBuilder builder;
 public:
  std::string name;
  std::vector <Client> clientlist;
  std::vector <Account*> accountlist;// 0 - credit  1 - debit   2 - deposit
  std::vector <Transaction*> transactionlist;
  
  Bank() = default;

  Account* FindAccount(size_t num);
  Transaction* FindTransaction(size_t num);
  void AddAccount(size_t id, size_t type);
  void RemoveAccount(size_t num);
  void AddClient();
  void RemoveClient(size_t id);
  void Transact(size_t type, double amount, size_t num);
  void AntiTransact(size_t num);
  Client PassCheck(std::string login, std::string password);
}; 