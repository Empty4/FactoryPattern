#include "Game.h"
#include <iostream>

Game::Game(std::unique_ptr<Factory> factory) : _factory(std::move(factory)), _level(1) {}

void Game::start() {
    std::cout << "game started!" << std::endl;
    while (_level <= 3) {
        if (startLevel(_level)) {
            _level++;
        } else {
            std::cout << "game over!" << std::endl;
            return;
        }
    }
    std::cout << "you win!" << std::endl;
}

bool Game::startLevel(int level) {
    std::cout << "start level " << level << std::endl;
    getShootPosition();
    createGameAgents(level);
    int score = calcScore();
    std::cout << "your score: " << score << std::endl;
    clearLevel();
    return score > 2;
}

void Game::createGameAgents(int level) {
    for (int i = 0; i < 10 - 3 * level; i++) {
        _agents.push_back(_factory->createGameAgents());
    }
}

void Game::clearLevel() {
    for (auto agent : _agents) delete agent;
    _agents.clear();
    _shoots.clear();
}

void Game::getShootPosition() {
    for (int i = 0; i < 6; i++) {
        std::cout << "enter shoot position 1-9: " << std::endl;
        int input;
        std::cin >> input;
        _shoots.push_back(input);
    }
}

int Game::calcScore() {
    int score = 0;
    for (auto shoot : _shoots) {
        for (auto agent : _agents) {
            if (agent->gotShot(shoot)) {
                score++;
                break;
            }
        }
    }
    return score;
}
