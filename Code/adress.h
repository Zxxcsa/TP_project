#include <iostream> 

class Adress {
  public:
    std::string country;
    std::string city;
    std::string street;
    size_t num_house;
    Adress() = default;
    Adress(std::string x1, std::string x2, std::string x3, size_t x4) {
      country = x1;
      city = x2;
      street = x3;
      num_house = x4;
    }
    Adress(const Adress& other) {
      country = other.country;
      city = other.city;
      street = other.street;
      num_house = other.num_house;
    }
    Adress& operator=(Adress other) {
      country = other.country;
      city = other.city;
      street = other.street;
      num_house = other.num_house;
      return *this;
    }

    bool Empty() {
      return (num_house == 0);
    }
};