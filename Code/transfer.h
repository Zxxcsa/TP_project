#pragma once
#include "transaction.h"
#include "account.h"
#include <iostream>
#include <vector>

class Transfer : public Transaction {//перевод
 public:
  double amount;
  Account* inp; //кому
  Account* out; //кто
  Transfer(double x1, Account* x2, Account* x3, size_t n);
  void Execute();//выполнить
  void Cancel();//отменить
};