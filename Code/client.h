#pragma once
#include <iostream>
#include <vector>

class Client {// клиент
public:
  size_t id;
  std::string name;
  std::string surname;
  std::string adress;
  size_t pasport;
  std::vector<size_t> accountlist;
  std::string login;
  std::string password;

  Client() {
    adress = "";
    pasport = 0;
  }
  Client(size_t x0, std::string x1, std::string x2, std::string x3, size_t x4,
         std::string x5, std::string x6);
  bool Questionable();
};