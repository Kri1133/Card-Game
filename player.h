#pragma once
#include <string>

class Player
{
    int playerNumber;
    std::string name;
    std::string hand[5];
    std::string action;

public:
    void setNumber(const int i);
    int getNumber();
    void setName();
    std::string getName();
    // void addCardToHand(const std::string card);
};
