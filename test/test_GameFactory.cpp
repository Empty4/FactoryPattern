#include "../include/GameFactory.h"
#include <iostream>

int main() {
    GameFactory factory;
    GameAgent* agent = factory.createGameAgents();
    
    if (agent != nullptr) {
        std::cout << "TEST PASSED: GameFactory created agent successfully" << std::endl;
        delete agent;
    } else {
        std::cout << "TEST FAILED: GameFactory failed to create agent" << std::endl;
        return 1;
    }
    
    std::cout << "GameFactory test passed!" << std::endl;
    return 0;
}
