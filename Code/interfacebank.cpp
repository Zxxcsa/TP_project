#include "interfacebank.h"

void InterfaceBank::CreateInterface(Bank &bank) {
  int key;
  while (true) {
    std::cout << "\nВыберете действие:\nЗарегистрироваться - 0\nВойти - "
                 "1\nЗакончить работу - 2\nВведите код: ";
    std::cin >> key;
    while (0 > key or 2 < key) {
      std::cout << "Неправильный код. Попробуйте ещё раз: ";
      std::cin >> key;
    }
    Client client;
    std::string login;
    std::string pass;
    switch (key) {
    case 0:// nЗарегистрироваться
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
    }
    if (key == 2) {
      break;
    }
    while (true) {
      std::cout << "\nВыберете действие:\nСделать транзакцию - 0\nОтменить "
                   "транзакцию - 1\nОткрыть счёт - 2\nЗакрыть счёт - 3\nВыйти "
                   "из аккаунта - 4\nУдалить аккаунт - 5\nВведите код: ";

      std::cin >> key;
      while (0 > key or 5 < key) {
        std::cout << "Неправильный код. Попробуйте ещё раз: ";
        std::cin >> key;
      }

      double num;
      switch (key) {
      case 0: // Сделать транзакцию
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
        bank.Transact(key, amount, num);
        break;
      case 1: // Отменить транзакцию
        std::cout << "\nВведите номер транзакции: ";
        std::cin >> num;
        bank.AntiTransact(num);
        break;
      case 2: // Открыть счёт
        std::cout << "\nВыберете тип счета:\nДебетовый - 0\nКредитнрый - "
                     "1\nДепозит - 2\nВведите код: ";
        std::cin >> key;
        while (0 > key or 2 < key) {
          std::cout << "Неправильный код. Попробуйте ещё раз: ";
          std::cin >> key;
        }
        bank.AddAccount(client.id, key);
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
      if (key == 4 or key == 5) {
        break;
      }
    }
  }
}