#pragma once
#include "replenish.h"

void Replenish::Execute() {
  acc->amount += amount;
  acc->transactnum.push_back(num);
}
void Replenish::Cancel() {
  acc->amount -= amount;
}

Replenish::Replenish(double x1, Account* x2, size_t n) {
  amount = x1;
  acc = x2;
  num = n;
}  