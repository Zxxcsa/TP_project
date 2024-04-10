#pragma once
#include "bank.h"

void Bank::AddAccount(size_t id, size_t type) {
  double limit = 100000; // лимит кредитки
  double commision = 10; // Комиссия при отрицательном балансе
  double percent = 5; // Процент для депозита
  if (type == 0) {
    Credit acc{0, accountnum, id, limit, commision};
    accountlist.push_back(acc);
  } else if (type == 1) {
    Debit acc{0, accountnum, id};
    accountlist.push_back(acc);
  } else if (type == 2) {
    std::string time;
    Deposit acc{0, accountnum, id, time, percent};
    accountlist.push_back(acc);
  }
  ++accountnum;
}

void Bank::RemoveAccount(size_t num) {
  auto size = accountlist.size();
  for (auto i = 0; i < size; ++i) {
    if (accountlist[i].num == num) {
      accountlist.erase(accountlist.begin() + i);
      break;
    }
  }
}

void Bank::AddClient() {
  std::cout << "Введите логин: ";
  builder->AddLogin();
  std::cout << "Введите пароль: ";
  builder->AddPassword();
  std::cout << "Введите имя: ";
  builder->AddName();
  std::cout << "Введите фамилию: ";
  builder->AddSurname();
  std::cout << "Хотите ввести адрес[Y/n]: ";
  char c;
  if (c == 'Y') {
    std::cout << "Введите адресс: ";
    builder->AddAdress();
  }
  std::cout << "Хотите ввести номер паспорта[Y/n]: ";
  std::cin >> c;
  if (c == 'Y') {
    std::cout << "Введите номер паспорта: ";
    builder->AddPasport();
  }
  builder->AddId(clientnum);
  clientlist.push_back(builder->GetClient());
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

void Bank::Transact(size_t type, double amount, Account* acc) {
  Transaction* trans;
  if (type == 0) {
    trans = new Withdrawing(amount, acc);
  } else if (type == 1) {
    trans = new Replenish(amount, acc);
  }
  transactionlist.push_back(*trans);
  trans->Execute();
}

void Bank::Transact(size_t type, double amount, Account* inp, Account* out) {
  Transaction* trans;
  if (type == 2) {
    trans = new Transfer(amount, inp, out);
    transactionlist.push_back(*trans);
  }
  transactionlist.push_back(*trans);
  trans->Execute();

}

