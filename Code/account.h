#pragma once
#include "transaction.h"

class Account { //счёт
 public:
  double amount;
  size_t num;
  size_t client_id;
  std::vector<size_t> transactnum;
  Account() = default;
  Account(double x1, size_t x2, size_t x3);
  Account &operator=(Account other);
};