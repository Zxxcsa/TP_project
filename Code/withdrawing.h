#pragma once
#include "transaction.h"
#include "account.h"
#include <iostream>
#include <vector>

class Withdrawing : public Transaction { //снятие денег
 public:
  double amount;
  Account* acc;
  Withdrawing(double x1, Account* x2);
  void Execute() const override;
  void Cancel() const override;
};