#pragma once
#include "transaction.h"
#include <iostream>
#include <vector>

class Replenish : public Transaction { //пополнение счета 
 public:
  double amount;
  Account* acc;
  Replenish(double x1, Account* x2);
  void Execute() const override;
  void Cancel() const override;
};