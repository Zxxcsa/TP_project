#pragma once
#include <iostream>
#include <vector>
#include "client.h"


class ClientBuilder{
private:
  Client client;
public:
  ClientBuilder();
  void AddLogin();
  void AddPassword();
  void AddName();
  void AddSurname();
  void AddAdress();
  void AddPasport();
  void AddId(size_t num);
  Client GetClient();
};