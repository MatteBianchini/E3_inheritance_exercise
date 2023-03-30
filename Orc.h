//
// Created by Marco Bertini on 08/04/18.
//

#ifndef E3_INHERITANCE_EXERCISE_ORC_H
#define E3_INHERITANCE_EXERCISE_ORC_H
#include "GameCharacter.h"

class Orc : public GameCharacter{
public:

    explicit Orc(int s, int hp=20);
    // TODO override fight: if strength > 10 perform second attack
    int fight(GameCharacter &enemy) override;
    // TODO override move; if strength > 10 then allow +1 on the movements (see base class method)
    // XXX it's already implemented in .cpp file
    void move(int x, int y) override;
    // override base class method
    char getCharacterSymbol() const override{
        return 'O';
    }

protected:
    int strength;
};


#endif //E3_INHERITANCE_EXERCISE_ORC_H
