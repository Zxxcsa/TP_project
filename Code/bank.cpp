#pragma once
#include "bank.h"

Account* Bank::FindAccount(size_t num) {
  auto size = accountlist.size();
  for (auto i = 0; i < size; ++i) {
    if (accountlist[i]->num == num) {
      return accountlist[i];
    }
  }
}

Transaction* Bank::FindTransaction(size_t num) {
  auto size = transactionlist.size();
  for (auto i = 0; i < size; ++i) {
    if (transactionlist[i]->num == num) {
      return transactionlist[i];
    }
  }
}

void Bank::AddAccount(size_t id, size_t type) {
  double limit = 100000; // лимит кредитки
  double commision = 10; // Комиссия при отрицательном балансе
  double percent = 5; // Процент для депозита
  if (type == 0) {
    Account* acc = new Credit(0, accountnum, id, limit, commision);
    accountlist.push_back(acc);
  } else if (type == 1) {
    Account* acc = new Debit(0, accountnum, id);
    accountlist.push_back(acc);
  } else if (type == 2) {
    std::string time = "2033.09.03";

    Account* acc = new Deposit(0, accountnum, id, time, percent);
    accountlist.push_back(acc);
  }
  ++accountnum;
}

void Bank::RemoveAccount(size_t num) {
  auto size = accountlist.size();
  for (auto i = 0; i < size; ++i) {
    if (accountlist[i]->num == num) {
      accountlist.erase(accountlist.begin() + i);
      break;
    }
  }
}

void Bank::AddClient() {
  InterfaceAddClient interf;
  interf.CreateInterface(builder);
  builder.AddId(clientnum);
  clientlist.push_back(builder.GetClient());
  ++clientnum;
}

void Bank::RemoveClient(size_t id) {
  auto size = clientlist.size();
  for (auto i = 0; i < size; ++i) {
    if (clientlist[i].id == id) {
      clientlist.erase(clientlist.begin() + i);
      break;
    }
  }
}

void Bank::Transact(size_t type, double amount, size_t num) {
  Account* acc = FindAccount(num);
  Transaction* trans;
  if (type == 0) {
    trans = new Withdrawing(amount, acc, transactionnum);
  } else if (type == 1) {
    trans = new Replenish(amount, acc, transactionnum);
  } else if (type == 2) {
    std::cout << "\nВведите номер счета получателя: ";
    double num1;
    std::cin >> num1;
    Account* acc1 = FindAccount(num1);
    trans = new Transfer(amount, acc, acc1, transactionnum);
  }
  ++transactionnum;
  transactionlist.push_back(trans);
  trans->Execute();
}

void Bank::AntiTransact(size_t num) {
  Transaction* trans = FindTransaction(num);
  trans->Cancel();
}

Client Bank::PassCheck(std::string login, std::string password) {
  auto size = transactionlist.size();
  for (auto i = 0; i < size; ++i) {
    if (clientlist[i].login == login and password == clientlist[i].password) {
      return clientlist[i];
    }
  }
}
