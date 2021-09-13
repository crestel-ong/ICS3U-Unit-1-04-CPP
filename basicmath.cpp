// Copyright (c) 2021 Crestel Ong All rights reserved
//
// Created by Crestel Ong
// Created on Sept 2021
// This program does basic math

#include <iostream>
#include <math.h>     

int main() {
    std::cout << "9+2=" << (9 + 2) << std::endl;
    std::cout << "7-2=" << (7 - 2) << std::endl;
    std::cout << "4/2=" << (4 / 2) << std::endl;
    std::cout << "4+4/2=" << (4 + 4 / 2) << std::endl;
    std::cout << "3+4*2=" << (3 + 4 * 2) << std::endl;
    std::cout << "5+2^3=" << (5 + 2 ^ 3) << std::endl;
    std::cout << "5+pow(2,3)=" << (5 + pow(2, 3)) << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
