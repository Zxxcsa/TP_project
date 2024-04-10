#pragma once
#include "transfer.h"

void Transfer::Execute() {
  out->amount -= amount;
  inp->amount += amount;
  out->transactnum.push_back(num);
}
void Transfer::Cancel() {
  out->amount += amount;
  inp->amount -= amount;
}
Transfer::Transfer(double x1, Account* x2, Account* x3, size_t n) {
  amount = x1;
  out = x2;
  inp = x3;
  num = n;
}  