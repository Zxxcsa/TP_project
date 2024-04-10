#include "bank.h"
#include <iostream>
#include <vector>

int main() {
  int k;
  char c;
  while (true) {
    std::cout << "\nВыберете действие:\nЗарегистрироваться - 0\nВойти - 1\nЗакончить работу - 2\nВведите код: ";
    std::cin >> k;
    if (k == 0) { //"Зарегистрироваться"

      
      //создать клиента
    } else if (k == 1) { //"Войти"
      std::cout << "Введите логин: ";
      std::string login;
      std::cin >> login;
      std::cout << "Введите пароль: ";
      std::string pass;
      std::cin >> pass;
      //проверить пароль и найти клиента
    }else if (k == 2) { //"Выйти совсем"
      std::cout << "Всего доброго\n";
      break;
    } else {
      std::cout << "Неправильный код\n";
      break;
    }

    while (true) {
      std::cout << "\nВыберете действие:\nСделать транзакцию - 0\nОтменить транзакцию - 1\nОткрыть счёт - 2\nЗакрыть счёт - 3\nВыйти из аккаунта - 4\nУдалить аккаунт - 5\n";
      std::cin >> k;
      if (k == 0) { //Сделать транзакцию

      } else if (k == 1) { // Отменить транзакцию

      } else if (k == 2) { // Открыть счёт

      } else if (k == 3) { // Закрыть счёт

      } else if (k == 4) { // Выйти из аккаунта 
        break;
      } else if (k == 5) { // Удалить аккаунт

      } else {
        std::cout << "Неправильный код\n";
        break;
      }
    }
  }

  return 0;
}