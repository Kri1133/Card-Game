#include <iostream>
#include <vector>
#include <string>

bool isRoyalFlush(const std::vector<std::vector<std::string>> &hand);
bool isStraightFlush(const std::vector<std::vector<std::string>> &hand);
bool isFourOfaKind(const std::vector<std::vector<std::string>> &hand);
bool isFullHouse(const std::vector<std::vector<std::string>> &hand);
bool isFlush(const std::vector<std::vector<std::string>> &hand);
bool isStraight(const std::vector<std::vector<std::string>> &hand);
bool isThreeOfaKind(const std::vector<std::vector<std::string>> &hand);
bool isTwoPair(const std::vector<std::vector<std::string>> &hand);
bool isPair(const std::vector<std::vector<std::string>> &hand);
bool isHighCard(const std::vector<std::vector<std::string>> &hand);
