#include <iostream>
#include <vector>
#include <ctime>
#include "player.h"
using namespace std;

const int PLAYER_COUNT = 4;

// Player count must not be > 10
// Otherwise bad things will happen
// Or so I was told

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
            }
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
    }

    std::vector<std::vector<string>> shuffledDeck = shuffleCards(Deck);

    int cardIndex = 0;
    for (int i = 0; i < PLAYER_COUNT; i++)
    {
        players[i].addCardToHand(shuffledDeck[cardIndex]);
        cardIndex++;
        players[i].addCardToHand(shuffledDeck[cardIndex]);
        cardIndex++;
    }

    for (int i = 0; i < PLAYER_COUNT; i++)
    {
        std::cout << players[i].getName() << ": " << endl;
        std::vector<std::vector<std::string>> hand = players[i].getHand();
        for (int i = 0; i < 2; i++)
        {
            std::cout << hand[i][0] << " of " << hand[i][1] << endl;
        }
    }

    return 0;
}
