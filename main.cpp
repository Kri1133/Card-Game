#include <iostream>
#include <vector>
#include <ctime>
#include "player.h"
using namespace std;

const int PLAYER_COUNT = 4;

std::vector<std::vector<string>> shuffleCards(string Deck[52][2])
{
    bool isCardUsed[52];
    for (int i = 0; i < 52; i++)
    {
        isCardUsed[i] = 0;
    }
    std::vector<std::vector<string>> shuffledDeck(52, std::vector<string>(2));
    srand(time(0));
    int randomNum = rand() % 52;
    for (int i = 0; i < 52; i++)
    {
        randomNum = rand() % 52;
        // std::cout << "Kachow" << endl;
        if (!isCardUsed[randomNum])
        {
            isCardUsed[randomNum] = 1;
            shuffledDeck[i][0] = Deck[randomNum][0];
            shuffledDeck[i][1] = Deck[randomNum][1];
        }
        else
        {
            while (isCardUsed[randomNum] == 1)
            {
                randomNum = rand() % 52;
                // std::cout << "'" << randomNum << "'" << endl;
                // std::cout << isCardUsed[randomNum] << endl;
            }
            // std::cout << "end" << endl;
            isCardUsed[randomNum] = 1;
            shuffledDeck[i][0] = Deck[randomNum][0];
            shuffledDeck[i][1] = Deck[randomNum][1];
        }
    }
    
    return shuffledDeck;
}

int main()
{
    std::cout << "Hello World" << endl;
    string CardNames[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace"};
    int CardNamesSize = sizeof(CardNames) / sizeof(CardNames[0]); // sizeof() gives the size in bytes
    string Suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    int SuitsSize = 4;
    string Deck[52][2];
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

    vector<Player> players(PLAYER_COUNT);
    for (int i = 0; i < PLAYER_COUNT; i++)
    {
        players[i].setNumber(i + 1);
        players[i].setName();
        // players[i].addCardToHand(Deck[i][0] + " of " + Deck[i][1]);
    }

    std::vector<std::vector<string>> shuffledDeck = shuffleCards(Deck);
    for (int i = 0; i < 52; i++)
    {
        std::cout << shuffledDeck[i][0] << " of " << shuffledDeck[i][1] << endl;
    }

    return 0;
}