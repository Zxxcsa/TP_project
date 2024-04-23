#pragma once
#include "account.h"
#include <iostream>

class Deposit : public Account {//депозит
 public:
  std::string time;
  double percent;
  Deposit(double x1, size_t x2, size_t x3, std::string x4, double x5);
};