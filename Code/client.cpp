#pragma once
#include "client.h"

Client::Client(size_t x0, std::string x1, std::string x2, std::string x3, size_t x4, std::string x5, std::string x6) {
  id = x0;
  name = x1;
  surname = x2;
  adress = x3;
  pasport = x4;
  login = x5;
  password = x6;
}
bool Client::Questionable() {
  return ((pasport == 0) or (adress == ""));
}