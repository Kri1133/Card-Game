#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "combination_check.h"

// In this file hand represents the concatenated vectors of the player's hand 
// and the community cards

bool isRoyalFlush(const std::vector<std::vector<std::string>> &hand)
{
    std::vector<std::string> royalFlushCards = {"10", "Jack", "Queen", "King", "Ace"};
    for (int i = 0; i < hand.size(); i++)
    {
        for (int j = 0; j < royalFlushCards.size(); j++)
        {
            if (royalFlushCards[j].compare(hand[i][0]))
            {
                royalFlushCards.erase(royalFlushCards.begin() + j);
                if (royalFlushCards.empty())
                {
                    return true;
                }
            }
        }
    }
    return false;
}

bool isStraightFlush(const std::vector<std::vector<std::string>> &hand)
{
    std::string suitToCheck = hand[0][1];
    for (auto card : hand)
    {
        if (card[1] != suitToCheck) return false;
    }
    return true;

    static std::map<std::string, int> rankMap = {
        {"2", 2}, {"3", 3}, {"4", 4}, {"5", 5}, {"6", 6},
        {"7", 7}, {"8", 8}, {"9", 9}, {"10", 10},
        {"jack", 11}, {"queen", 12}, {"king", 13}, {"ace", 14}
    };
    // FINISH
}

bool isFourOfaKind(const std::vector<std::vector<std::string>> &hand);
bool isFullHouse(const std::vector<std::vector<std::string>> &hand);

bool isFlush(std::vector<std::vector<std::string>> hand)
{
    std::string suitToCheck = hand[0][1];
    for (auto card : hand)
    {
        if (card[1] != suitToCheck)
        {
            return false;
        }
    }
    return true;
}

bool isStraight(const std::vector<std::vector<std::string>> &hand);
bool isThreeOfaKind(const std::vector<std::vector<std::string>> &hand);
bool isTwoPair(const std::vector<std::vector<std::string>> &hand);
bool isPair(const std::vector<std::vector<std::string>> &hand);
bool isHighCard(const std::vector<std::vector<std::string>> &hand);