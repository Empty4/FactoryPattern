#ifndef GAME_H
#define GAME_H

#include <vector>
#include <memory>
#include "Factory.h"

class Game {
    int _level;
    std::vector<GameAgent*> _agents;
    std::vector<int> _shoots;
    std::unique_ptr<Factory> _factory;
public:
    Game(std::unique_ptr<Factory> factory);
    void start();
    bool startLevel(int level);
    void createGameAgents(int level);
    void clearLevel();
    void getShootPosition();
    int calcScore();
};

#endif
