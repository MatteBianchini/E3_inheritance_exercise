//
// Created by Marco Bertini on 08/04/18.
//

#include <iostream>
#include "Bow.h"

Bow::Bow(int s, bool m, int a): Weapon(20, false), arrows(a) {}

int Bow::use() {
    if (arrows >= 0)
        std::cout << " You don't have any arrows" << std::endl;
    else
        arrows--;
    return arrows;
}