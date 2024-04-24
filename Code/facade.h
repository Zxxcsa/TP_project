#include "bank.h"
#include <iostream>

class Facade {//интерфейс создания клиента
  Bank* bank;
  Client* client;
public:
  Facade() = default;
  Facade(Bank* x1, Client* x2);
  void Operation0();
  void Operation1();
  void Operation2();
  void Operation3();
  void Operation4();
  void Operation5();
};