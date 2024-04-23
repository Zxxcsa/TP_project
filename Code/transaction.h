#pragma once
#include "account.h"
#include <iostream>
#include <vector>

class Transaction {//транзакция
 public:
  size_t num;

  void Execute();//выполнить
  void Cancel();//отменить
};