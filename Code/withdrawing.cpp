#pragma once
#include "withdrawing.h"

void Withdrawing::Execute() {
  acc->amount -= amount;
  acc->transactnum.push_back(num);
}
void Withdrawing::Cancel() {
  acc->amount += amount;
}

Withdrawing::Withdrawing(double x1, Account* x2, size_t n) {
  amount = x1;
  acc = x2;
  num = n;
} 