#include <iostream>
#include <string>
#include "player.h"

void Player::setName()
{
    std::cout << "Enter the name of the player: ";
    std::cin >> name;
}
