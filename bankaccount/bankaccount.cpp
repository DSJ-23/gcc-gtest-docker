#include "bankaccount.h"

namespace bank {
    Coordinates::Coordinates(int x, int y): x(x), y(y) {};
    int Coordinates::sumCoordinates(){
        return x + y;
    }
}