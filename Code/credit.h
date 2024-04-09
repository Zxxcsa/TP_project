#pragma once
#include "account.h"
#include <iostream>

class Credit : public Account {
  public:
    double limit;
    double commision;
    Credit(double x1, size_t x2, size_t x3, double x4, double x5);
};