#include "interfacebank.h"

void InterfaceBank::CreateInterface(Bank &bank) {
  int key;
  Client client;
  while (true) {
    std::cout << "\nВыберете действие:\nЗарегистрироваться - 0\nВойти - "
                 "1\nЗакончить работу - 2\nВведите код: ";
    std::cin >> key;
    while (0 > key or 2 < key) {
      std::cout << "Неправильный код. Попробуйте ещё раз: ";
      std::cin >> key;
    }
    std::string login;
    std::string pass;
    switch (key) {
    case 0: // Зарегистрироваться
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
    Facade facade{&bank, &client};

    while (true) {
      std::cout << "\nВыберете действие:\nСделать транзакцию - 0\nОтменить "
                   "транзакцию - 1\nОткрыть счёт - 2\nЗакрыть счёт - 3\nВыйти "
                   "из аккаунта - 4\nУдалить аккаунт - 5\nВведите код: ";
      std::cin >> key;
      while (0 > key or 5 < key) {
        std::cout << "Неправильный код. Попробуйте ещё раз: ";
        std::cin >> key;
      }
      switch (key) {
      case 0: // Сделать транзакцию
        facade.Operation0();
        break;
      case 1: // Отменить транзакцию
        facade.Operation1();
        break;
      case 2: // Открыть счёт
        facade.Operation2();
        break;
      case 3: // Закрыть счёт
        facade.Operation3();
        break;
      case 4: // Выйти из аккаунта
        facade.Operation4();
        break;
      case 5: // Удалить аккаунт
        facade.Operation5();
        break;
      }
      if (key == 4 or key == 5) {
        break;
      }
    }
  }
}