#ifndef FACTORY_H
#define FACTORY_H

#include "GameAgent.h"

class Factory {
public:
    virtual GameAgent* createGameAgents() = 0;
    virtual ~Factory() {}
};

#endif
