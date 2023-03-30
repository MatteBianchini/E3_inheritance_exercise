//
// Created by Marco Bertini on 08/04/18.
//

#include "Wizard.h"

#include <iostream>
#include <utility>

Wizard::Wizard(std::string& name, int mana, int hp) : GameCharacter(hp), mana(mana), name(name) {
    Wizard::mana=mana;
    Wizard::name=name;
}

void Wizard::doMagic() {
    if (mana > 1)
        std::cout << "Do magic trick !" << std::endl;
    // FIXME find something nicer to do!
    // In order to do something nicer you may need to change
    // the signature of the method.
    // Feel free to do so as an home exercise.
}

int Wizard::fight(GameCharacter &enemy) {
    int damage = 0;
    damage = GameCharacter::fight(enemy);
    if (mana > 20) {
        damage *= 1.2;
        mana--;
    } else if (mana > 10)
        damage += 2;
    return damage;
}
