//
// Created by Marco Bertini on 08/04/18.
//
#include <string>
#include "Knight.h"

Knight::Knight(const std::string& name, int dexterity, bool paladin, int hp) : GameCharacter(hp), dexterity(dexterity), paladin(paladin), name(name) {
    Knight::dexterity=dexterity;
    Knight::paladin=paladin;
    Knight::name=name;
}

int Knight::fight(GameCharacter &enemy) {
    int damage = GameCharacter::fight(enemy);
    if (dexterity >= 10)
        damage += GameCharacter::fight(enemy);
    if (paladin)
        enemy.receiveDamage(10);
    return damage;
}

void Knight::move(int x, int y) {
    int addMovement = 0;
    if (dexterity > 10)
        addMovement = 1;
    if (x > (movements + addMovement))
        x = (movements + addMovement);
    if (y > (movements + addMovement))
        y = (movements + addMovement);
    posX += x;
    posY += y;
}
