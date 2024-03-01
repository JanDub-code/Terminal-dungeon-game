//
// Created by hans on 3/1/24.
//

#ifndef TERMINAL_DUNGEON_GAME_PLAYER_H
#define TERMINAL_DUNGEON_GAME_PLAYER_H
#include "iostream"
class Player{
    int m_health;
    int m_strenght;
    int m_dexterity;
    std::string m_name;
    char m_apperance='P';

public:
    Player();

    int getMStrenght() const;

    int getMDexterity() const;

    const std::string &getMName() const;

    char getMApperance() const;

    int getMHealth() const;

    virtual ~Player();
};

#endif //TERMINAL_DUNGEON_GAME_PLAYER_H
