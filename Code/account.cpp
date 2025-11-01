#pragma once
#include "account.h"

Account::Account(double x1, size_t x2, size_t x3) {
  amount = x1;
  num = x2;
  client_id = x3;
}
Account &Account::operator=(Account other) {
  amount = other.amount;
  num = other.num;
  client_id = other.client_id;
  transactnum = other.transactnum;
  return *this;
}