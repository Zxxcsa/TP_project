#pragma once
#include <adress.h>
#include <iostream>

class Client {
  size_t id;
  std::string name;
  std::string surname;
  Adress adress;
  size_t pasport;

  Client(size_t x0, std::string x1, std::string x2, Adress x3, size_t x4) {
    id = x0;
    name = x1;
    surname = x2;
    adress = x3;
    pasport = x4;
  }

  bool Questionable() {
    return ((pasport == 0) or (adress.Empty()));
  }

  
};