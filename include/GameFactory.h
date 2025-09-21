#ifndef GAMEFACTORY_H
#define GAMEFACTORY_H

#include "Factory.h"

class GameFactory : public Factory {
public:
    GameFactory();
    ~GameFactory() override;
    GameAgent* createGameAgents() override;
};

#endif
