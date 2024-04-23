#include "interfaceaddclient.h"

void InterfaceAddClient::CreateInterface(ClientBuilder &builder) {
  std::cout << "Введите логин: ";
  builder.AddLogin();
  std::cout << "Введите пароль: ";
  builder.AddPassword();
  std::cout << "Введите имя: ";
  builder.AddName();
  std::cout << "Введите фамилию: ";
  builder.AddSurname();
  std::cout << "Хотите ввести адрес[Y/n]: ";
  char c;
  std::cin >> c;
  if (c == 'Y') {
    std::cout << "Введите адресс: ";
    builder.AddAdress();
  }
  std::cout << "Хотите ввести номер паспорта[Y/n]: ";
  std::cin >> c;
  if (c == 'Y') {
    std::cout << "Введите номер паспорта: ";
    builder.AddPasport();
  }
}