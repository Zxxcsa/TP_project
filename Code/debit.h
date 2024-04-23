#pragma once
#include "account.h"
#include <iostream>

class Debit : public Account {//дебет
 public:
  Debit(double x1, size_t x2, size_t x3);
};