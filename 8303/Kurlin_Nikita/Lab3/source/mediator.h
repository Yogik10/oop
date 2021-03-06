#ifndef MEDIATOR_H
#define MEDIATOR_H

#include "gamefield.h"

class Mediator
{
    GameField* field;

public:
    Mediator(GameField*);
    bool attack(Unit*, int, int);
    void setMediator(Unit *);
};

#endif // MEDIATOR_H
