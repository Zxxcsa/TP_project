#pragma once
#include <iostream>

class Account {
  public:
    double amount;
    size_t num;
    size_t client_id;
  public:
    Account(double x1, size_t x2, size_t x3) {
      amount = x1;
      num = x2;
      client_id = x3;
    }
    virtual void Transact() = 0;
};