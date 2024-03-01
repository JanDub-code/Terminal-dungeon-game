//
// Created by hans on 3/1/24.
//
#include <iostream>
#include "GameEngine.h"
GameEngine& GameEngine::getInstance() {
    static GameEngine instance;
    return instance;
}

void GameEngine::start() {
    std::cout <<"Engine running"<<std::endl;
}

GameEngine::GameEngine() {

}

GameEngine::~GameEngine() {
}
