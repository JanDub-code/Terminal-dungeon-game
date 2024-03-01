//
// Created by hans on 3/1/24.
//

#ifndef TERMINAL_DUNGEON_GAME_GAMEENGINE_H
#define TERMINAL_DUNGEON_GAME_GAMEENGINE_H

class GameEngine {
public:
    static GameEngine& getInstance();

    GameEngine(const GameEngine&) = delete;
    GameEngine& operator=(const GameEngine&) = delete;
    GameEngine(GameEngine&&) = delete;
    GameEngine& operator=(GameEngine&&) = delete;

    void start();

private:
    GameEngine();

    ~GameEngine();
};

#endif //TERMINAL_DUNGEON_GAME_GAMEENGINE_H
