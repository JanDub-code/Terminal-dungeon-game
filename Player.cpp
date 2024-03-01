//
// Created by hans on 3/1/24.
//

#include "Player.h"

Player::Player(){
    m_name = "New Player";
    m_dexterity =10;
    m_health=30;
    m_strenght=10;
}


int Player::getMHealth() const {
    return m_health;
}

int Player::getMStrenght() const {
    return m_strenght;
}

int Player::getMDexterity() const {
    return m_dexterity;
}

const std::string &Player::getMName() const {
    return m_name;
}

char Player::getMApperance() const {
    return m_apperance;
}

Player::~Player() {

}
