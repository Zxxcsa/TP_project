#pragma once
#include <account.h>
#include <iostream>

class Credit : public Account {
  public:
    double limit;
    double commision;
    Credit(double x1, size_t x2, size_t x3, double x4, double x5):Account(x1, x2, x3){
      limit = x4;
      commision = x5;
    }
    void Transact() {
      std::cout << ' '<< amount<< ' '<< num<< ' '<< client_id<< ' '<< limit << ' '<<  commision;
    }
};