#pragma once
#include "replenish.h"

void Replenish::Execute() const {
  acc->amount += amount;
  acc->transactnum.push_back(num);
}
void Replenish::Cancel() const {
  acc->amount -= amount;
}

Replenish::Replenish(double x1, Account* x2) {
  amount = x1;
  acc = x2;
} 