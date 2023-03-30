//
// Created by Marco Bertini on 08/04/18.
//

#ifndef E3_INHERITANCE_EXERCISE_BOW_H
#define E3_INHERITANCE_EXERCISE_BOW_H

#include "Weapon.h"

class Bow: public Weapon {
public:
    explicit Bow(int s, bool m = false, int a = 20);

    virtual int use() override;


    // TODO add a constructor with an "a" parameter with a default of 20
    // must it be explicit ?

    // override use(). Each use should decrement arrows

    int getArrows() const {
        return arrows;
    }

    void setArrows(int arrows) {
        Bow::arrows = arrows;
    }

protected:
    int arrows;
};


#endif //E3_INHERITANCE_EXERCISE_BOW_H
