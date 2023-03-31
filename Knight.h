//
// Created by Marco Bertini on 08/04/18.
//

#ifndef E3_INHERITANCE_EXERCISE_KNIGHT_H
#define E3_INHERITANCE_EXERCISE_KNIGHT_H

#include <string>
#include "GameCharacter.h"
// extend GameCharacter
class Knight : public GameCharacter {
public:
    // TODO add a std::string name and some values for the new attributes
    Knight() : Knight("Undyne", 5, false, 20) {}
    Knight(std::string name, int dexterity, bool paladin = false, int hp =20);

    // TODO override fight: dexterity > 10 perform second attack
    // if paladin then +10 damage
    int fight(GameCharacter &enemy) override;

    // TODO override move: if dexterity > 10 allow +1 movement
    void move(int x, int y) override;

    // override base class method
    char getCharacterSymbol() const override{
        return 'K';
    }

private:
    int dexterity;
    bool paladin;
    std::string name;
};


#endif //E3_INHERITANCE_EXERCISE_KNIGHT_H
