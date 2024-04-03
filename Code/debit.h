#pragma once
#include <account.h>
#include <iostream>

class Debit : public Account {
  public:
    Debit(double x1, size_t x2, size_t x3):Account(x1, x2, x3){}
    void Transact() {
      std::cout << ' '<< amount<< ' '<< num<< ' '<< client_id;
    }
};