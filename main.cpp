#include<iostream>
#include "adder/adder.h"
#include <fmt/core.h>


class Coordinates {
public:
    int x;
    int y;
    Coordinates(int x, int y): x(x), y(y){};
};

class BankAccount : public Coordinates  {
public:
    int balance;
    int maxBalance;
    std::string name;
    BankAccount(int b, int max, std::string name, int x, int y): balance(b), maxBalance(max), name(name), Coordinates(x, y){};
};

int main(){
    std::cout << "test" << std::endl;
    std::cout << plusone(1) << std::endl;
    fmt::print("Hello, world!\n");
    std::cout << std::endl;


    // BankAccount* a = new BankAccount(1, 100, "Daniel", 10, 20);
    // std::cout << a->balance << std::endl;
    // std::cout << a->maxBalance << std::endl;
    // std::cout << a->name << std::endl;
    // std::cout << a->x << std::endl;
    // std::cout << a->y << std::endl;

    return 0;
}