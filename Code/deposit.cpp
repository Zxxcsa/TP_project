#pragma once
#include "deposit.h"

Deposit::Deposit(double x1, size_t x2, size_t x3, std::string x4, double x5) : Account(x1, x2, x3) {
  time = x4;
  percent = x5;
}