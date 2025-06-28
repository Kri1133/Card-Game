#include <string>

class Player
{
    int playerNumber;
    std::string name;
    std::string hand[5];
    std::string action;

public:
    void setNumber(const int i);
    void setName();
    void getName();
};
