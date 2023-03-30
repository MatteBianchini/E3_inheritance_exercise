//
// Created by Marco Bertini on 08/04/18.
//

#ifndef E3_INHERITANCE_EXERCISE_SKELETON_H
#define E3_INHERITANCE_EXERCISE_SKELETON_H
#include "GameCharacter.h"

// TODO extend GameCharacter
class Skeleton : public GameCharacter {
public:
    explicit Skeleton(int hp, bool magicRecover);
    // TODO add magicRecover param in c'tor
    int receiveDamage(int points) override;
    // TODO override receiveDamage(int points);
    // XXX it's already implemented in .cpp file

    // XXX no need to override other base class methods in this class

    // override base class method
    char getCharacterSymbol() const override{
        return 'S';
    }

protected:
    bool magicRecover;
};

#endif //E3_INHERITANCE_EXERCISE_SKELETON_H
