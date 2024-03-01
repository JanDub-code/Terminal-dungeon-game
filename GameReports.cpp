//
// Created by hans on 3/1/24.
//

#include <iostream>
#include "GameReports.h"

GameReports::GameReports() {}

char GameReports::gameStart() {
    std::cout<<"Welcome to the game!"<<std::endl;
    std::cout<<"What do you wanna do?"<<std::endl;
    std::cout<<"For start press s or S"<<std::endl;
    std::cout<<"For ending the game press k or K"<<std::endl;
    char answer;
    std::cin>>answer;
    do {
        switch (answer) {
            case 's':
            case 'S':
                std::cout << "Game starting!" << std::endl;
                break;
            case 'K':
            case 'k':
                std::cout << "Game Over" << std::endl;
                break;
            default:
                std::cout<<"Wrong character"<<std::endl;
                std::cin>>answer;
                break;
        }
    } while (answer != 's' && answer != 'S' && answer != 'k' && answer != 'K');
    return answer;
}

GameReports::~GameReports() {}