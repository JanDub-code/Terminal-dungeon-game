#include <iostream>
#include "GameEngine.h"

int main() {
    GameEngine& engine = GameEngine::getInstance();

    engine.start();

    return 0;
}
