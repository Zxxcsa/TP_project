#pragma once
#include <account.h>
#include <iostream>
#include <datatime.h>

class Deposit : public Account {
  public:
    DataTime time;
    double percent;
    Deposit(double x1, size_t x2, size_t x3, DataTime x4, double x5):Account(x1, x2, x3){
      time = x4;
      percent = x5;
    }
    void Transact() {
      std::cout << ' '<< amount<< ' '<< num;
    }
};