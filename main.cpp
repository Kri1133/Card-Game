#include <iostream>
#include <vector>
#include "player.h"
using namespace std;

const int PLAYER_COUNT = 4;

int main()
{
    string CardNames[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace"};
    int CardNamesSize = sizeof(CardNames) / sizeof(CardNames[0]); // sizeof() gives the size in bytes
    string Suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    int SuitsSize = 4;
    string Deck[52][2];
    vector<Player> players(PLAYER_COUNT);
    int counter = 0;

    for (int i = 0; i < CardNamesSize; i++)
    {
        for (int j = 0; j < SuitsSize; j++)
        {
            Deck[counter][0] = CardNames[i];
            Deck[counter][1] = Suits[j];
            counter++;
        }
    }

    for (int i = 0; i < PLAYER_COUNT; i++)
    {
        players[i].setNumber(i + 1);
        players[i].setName();
        players[i].getName();
    }

    return 0;
}