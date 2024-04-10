#pragma once
#include "account.h"
#include <iostream>
#include <vector>

class Transaction {
 public:
  size_t num;

  void Execute();
  
  void Cancel();
};