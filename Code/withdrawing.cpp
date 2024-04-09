#pragma once
#include "withdrawing.h"

void Withdrawing::Execute() const {
  acc->amount -= amount;
  acc->transactnum.push_back(num);
}
void Withdrawing::Cancel() const {
  acc->amount += amount;
}

Withdrawing::Withdrawing(double x1, Account* x2) {
  amount = x1;
  acc = x2;
} 