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
#include "interfaceaddclient.h"
#include <iostream> 
#include <vector>


class Bank { // банк
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

  Account* FindAccount(size_t num);//найти аккаунт
  Transaction* FindTransaction(size_t num);//найти транзакцию
  void AddAccount(size_t id, size_t type);//добавить счет
  void RemoveAccount(size_t num);//удалить счет
  void AddClient();//добавить клиент
  void RemoveClient(size_t id);//удалить клиента
  void Transact(size_t type, double amount, size_t num);//транзакция
  void AntiTransact(size_t num);//отмена транзакции
  Client PassCheck(std::string login, std::string password);//проверка допуска клиента
}; 