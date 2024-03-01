//
// Created by hans on 3/1/24.
//

#ifndef TERMINAL_DUNGEON_GAME_GAMEENGINE_H
#define TERMINAL_DUNGEON_GAME_GAMEENGINE_H

#include "Player.h"
#include "GameEngine.h"
#include "GameReports.h"

class GameEngine {
public:
    static GameEngine& getInstance();

    GameEngine(const GameEngine&) = delete;
    GameEngine& operator=(const GameEngine&) = delete;
    GameEngine(GameEngine&&) = delete;
    GameEngine& operator=(GameEngine&&) = delete;

    void start();

private:
    Player m_player;
    GameReports m_gameReport;
    bool m_gameOver;
    GameEngine();

    ~GameEngine();
};

#endif //TERMINAL_DUNGEON_GAME_GAMEENGINE_H
