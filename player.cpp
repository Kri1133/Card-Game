#include <iostream>
#include <string>
#include "player.h"

void Player::setName()
{
    std::cout << "Enter the name of the player: ";
    std::getline(std::cin, name);
}

void Player::setNumber(const int i){
    playerNumber = i;
}

void Player::getName()
{
    std::cout << "Player " << playerNumber << "'s name is " << name << std::endl;
}
