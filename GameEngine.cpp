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
    std::cout<<"Welcome to the game!"<<std::endl;
    std::cout<<"What do you wanna do?"<<std::endl;
    while(!m_gameOver){
        char decision=m_gameReport.gameStart();
        if(decision=='k' or decision=='K'){
            m_gameOver=true;
        }
        if(decision=='s' or decision=='S'){
        }


    }
}

GameEngine::GameEngine() {
    m_player=Player();
    m_gameReport=GameReports();
    m_gameOver= false;

}

GameEngine::~GameEngine() {
}
