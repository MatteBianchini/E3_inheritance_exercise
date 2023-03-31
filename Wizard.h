//
// Created by Marco Bertini on 08/04/18.
//

#ifndef E3_INHERITANCE_EXERCISE_WIZARD_H
#define E3_INHERITANCE_EXERCISE_WIZARD_H
#include "GameCharacter.h"
#include <string>

// TODO extend GameCharacter
class Wizard : public GameCharacter {
public:
    // TODO add std::string name and mana in constructor
    Wizard() : Wizard("Gaster", 100, 30) {}
    Wizard(std::string name, int mana, int hp = 30);
    // TODO override fight. Use mana to change behaviour. 
    // XXX it's already implemented in .cpp file
    int fight(GameCharacter &enemy) override;
    // in this class do not override move()

    // in derived classes we can introduce new behaviours, like this brand new method:
    virtual void doMagic(); // it's virtual: we expect to further derive and override its behaviour in derived classes

    // override base class method
    char getCharacterSymbol() const override{
        return 'W';
    }

protected:
    int mana; // spiritual strength
    std::string name;
};


#endif //E3_INHERITANCE_EXERCISE_WIZARD_H
