#pragma once
#include "account.h"
#include <iostream>

class Transaction {
 public:
  size_t num;
  virtual ~Transaction() {
  }
  virtual void Execute() const = 0;
  
  virtual void Cancel() const = 0;
};