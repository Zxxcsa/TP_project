#include "bank.h"
#include <iostream>

class Facade {//фасад
  Bank* bank;
  Client* client;
public:
  Facade() = default;
  Facade(Bank* x1, Client* x2);
  void Operation0(); // Сделать транзакцию
  void Operation1(); // Отменить транзакцию
  void Operation2(); // Открыть счёт
  void Operation3(); // Закрыть счёт
  void Operation4(); // Выйти из аккаунта
  void Operation5(); // Удалить аккаунт
};