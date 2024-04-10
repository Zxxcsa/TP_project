#include "bank.h"
#include <iostream>
#include <vector>

int main() {
  Bank bank;
  int k;
  while (true) {
    std::cout << "\nВыберете действие:\nЗарегистрироваться - 0\nВойти - "
                 "1\nЗакончить работу - 2\nВведите код: ";
    std::cin >> k;
    while (0 > k or 2 < k) {
      std::cout << "Неправильный код. Попробуйте ещё раз: ";
      std::cin >> k;
    }
    Client client;
    std::string login;
    std::string pass;
    switch (k) {
    case 0:
      bank.AddClient();
      client = bank.clientlist.back();
      break;
    case 1: // Войти
      std::cout << "Введите логин: ";
      std::cin >> login;
      std::cout << "Введите пароль: ";
      std::cin >> pass;
      client = bank.PassCheck(login, pass);
      break;
    case 2:
      return 0;
    }

    while (true) {
      std::cout << "\nВыберете действие:\nСделать транзакцию - 0\nОтменить "
                   "транзакцию - 1\nОткрыть счёт - 2\nЗакрыть счёт - 3\nВыйти "
                   "из аккаунта - 4\nУдалить аккаунт - 5\nВведите код: ";
      std::cin >> k;

      while (0 > k or 5 < k) {
        std::cout << "Неправильный код. Попробуйте ещё раз: ";
        std::cin >> k;
      }

      double num;
      switch (k) {
      case 0: // Сделать транзакцию
        std::cout << "\nВыберете тип транзакции:\nСнятие - 0\nПополнение - 1\nПеревод - 2\nВведите код: ";
        std::cin >> k;
        while (0 > k or 2 < k) {
          std::cout << "Неправильный код. Попробуйте ещё раз: ";
          std::cin >> k;
        }
        std::cout << "\nВведите номер вашего счета: ";
        std::cin >> num;
        std::cout << "\nВведите сумму: ";
        double amount;
        std::cin >> amount;
        bank.Transact(k, amount, num);
        break;
      case 1: // Отменить транзакцию
        std::cout << "\nВведите номер транзакции: ";
        std::cin >> num;  
        bank.AntiTransact(num);
        break;
      case 2: // Открыть счёт
        std::cout << "\nВыберете тип счета:\nДебетовый - 0\nКредитнрый - 1\nДепозит - 2\nВведите код: ";
        std::cin >> k;
        while (0 > k or 2 < k) {
          std::cout << "Неправильный код. Попробуйте ещё раз: ";
          std::cin >> k;
        }
        bank.AddAccount(client.id, k);
        break;
      case 3: // Закрыть счёт
        std::cout << "\nВведите номер Счёта: ";
        std::cin >> num;
        bank.RemoveAccount(num);
        break;
      case 4: // Выйти из аккаунта
        std::cout << "Всего доброго\n";
        break;
      case 5: // Удалить аккаунт
        bank.RemoveClient(client.id);
        break;
      }
      if (k == 4 or k == 5) {
        break;
      }
    }
  }

  return 0;
}