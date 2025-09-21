#include "GameFactory.h"
#include "Tank.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

GameFactory::GameFactory() {
    srand(time(0));
}

GameFactory::~GameFactory() {}

GameAgent* GameFactory::createGameAgents() {
    int pos = rand() % 9 + 1;
    std::cout << "pos: " << pos << std::endl;
    return new Tank(pos, 0);
}
