#include "bankaccount.h"

namespace bank {
    Coordinates::Coordinates(int x, int y): x(x), y(y) {};

    int Coordinates::sumCoordinates(){
        return x + y;
    };
    
    BankAccount::BankAccount(int balance, int max, std::string name, int x, int y): balance(balance), maxBalance(max), name(name), Coordinates(x, y) {};
}