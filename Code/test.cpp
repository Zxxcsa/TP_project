#include <iostream>

class Account {
  protected:
    double amount;
    size_t num;
    size_t client_id;
  public:
    Account(double x1, size_t x2, size_t x3) {
      amount = x1;
      num = x2;
      client_id = x3;
    }
    virtual void Transact(int code) = 0;
};

class Credit : public Account {
  public:
    double limit;
    double commision;
    Credit(double x1, size_t x2, size_t x3, double x4, double x5):Account(x1, x2, x3){
      limit = x4;
      commision = x5;
    }
    void Transact(int code) {
      std::cout << code<< ' '<< amount<< ' '<< num<< ' '<< client_id<< ' '<< limit << ' '<<  commision;
    }
};
int main() {
  Credit x{1, 2, 3, 4, 5};
  x.Transact(5);
  //Account x{1, 1, 1};
}