#include<string>

namespace bank {
    struct Coordinates
    {
        int x;
        int y;

        Coordinates(int x, int y);
        int sumCoordinates();
    };

    struct BankAccount : public Coordinates
    {
        int balance;
        int maxBalance;
        std::string name;
        BankAccount(int b, int max, std::string name, int x, int y);
    };
}

