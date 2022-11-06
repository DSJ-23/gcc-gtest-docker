#include<iostream>
#include "adder/adder.h"
#include "fmt/core.h"


int main(){
    std::cout << "test" << std::endl;
    std::cout << plusone(1) << std::endl;
    fmt::print("Hello, world!\n");
    return 0;
}