#pragma once
#include "transaction.h"
#include "account.h"
#include <iostream>
#include <vector>

class Withdrawing : public Transaction { //снятие денег
 public:
  double amount;
  Account* acc;
  Withdrawing(double x1, Account* x2, size_t n);
  void Execute();
  void Cancel();
};