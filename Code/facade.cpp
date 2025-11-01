#include "facade.h"

Facade::Facade(Bank *x1, Client *x2) {
  bank = x1;
  client = x2;
}

void Facade::Operation0() {
  int key = 0;
  double num = 0;
  std::cout << "\nВыберете тип транзакции:\nСнятие - 0\nПополнение - "
               "1\nПеревод - 2\nВведите код: ";
  std::cin >> key;
  while (0 > key or 2 < key) {
    std::cout << "Неправильный код. Попробуйте ещё раз: ";
    std::cin >> key;
  }
  std::cout << "\nВведите номер вашего счета: ";
  std::cin >> num;
  std::cout << "\nВведите сумму: ";
  double amount;
  std::cin >> amount;
  bank->Transact(key, amount, num);
}

void Facade::Operation1() {
  double num = 0;
  std::cout << "\nВведите номер транзакции: ";
  std::cin >> num;
  bank->AntiTransact(num);
}

void Facade::Operation2() {
  int key = 0;
  std::cout << "\nВыберете тип счета:\nДебетовый - 0\nКредитнрый - "
               "1\nДепозит - 2\nВведите код: ";
  std::cin >> key;
  while (0 > key or 2 < key) {
    std::cout << "Неправильный код. Попробуйте ещё раз: ";
    std::cin >> key;
  }
  bank->AddAccount(client->id, key);
}

void Facade::Operation3() {
  double num = 0;
  std::cout << "\nВведите номер Счёта: ";
  std::cin >> num;
  bank->RemoveAccount(num);
}

void Facade::Operation4() { std::cout << "Всего доброго\n"; }

void Facade::Operation5() { bank->RemoveClient(client->id); }