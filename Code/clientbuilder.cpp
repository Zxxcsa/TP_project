#include "clientbuilder.h"

ClientBuilder::ClientBuilder() = default;
void ClientBuilder::AddLogin() {
  std::cin >> client.login;
}
void ClientBuilder::AddPassword() {
  std::cin >> client.password;
}
void ClientBuilder::AddName() {
  std::cin >> client.name;
}
void ClientBuilder::AddSurname() {
  std::cin >> client.surname;
}
void ClientBuilder::AddAdress() {
  std::cin >> client.adress;
}
void ClientBuilder::AddPasport() {
  std::cin >> client.pasport;
}
void ClientBuilder::AddId(size_t num) {
  client.id = num;
}
Client ClientBuilder::GetClient() {
  return client;
}