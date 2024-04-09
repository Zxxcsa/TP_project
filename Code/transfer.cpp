#pragma once
#include "transfer.h"

void Transfer::Execute() const {
  inp->amount += amount;
  out->amount -= amount;
  out->transactnum.push_back(num);
}
void Transfer::Cancel() const {
  inp->amount -= amount;
  out->amount += amount;
}
Transfer::Transfer(double x1, Account* x2, Account* x3) {
  amount = x1;
  inp = x2;
  out = x3;
} 