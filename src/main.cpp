#include "GameFactory.h"
#include "Game.h"
#include <memory>

int main() {
    std::unique_ptr<Factory> factory = std::make_unique<GameFactory>();
    Game game(std::move(factory));
    game.start();
    return 0;
}
