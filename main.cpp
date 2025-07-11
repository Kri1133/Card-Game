#include<iostream>
using namespace std;
int main() {
    string CardNames[] = { "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A" };
    string Suits[] = { "Hearts", "Diamonds", "Clubs", "Spades" };
    string Cards[52];
    int counter = 0;
    for (int i = 0; i < sizeof(CardNames); i++) {
        for (int j = 0; j < sizeof(CardNames); j++) {
            string card = CardNames[i] + " of " + Suits[j];
            Cards[counter] = card;
            counter++;
        }
    }
    for (int i = 0; i < sizeof(CardNames); i++) {
        for (int j = 0; j < sizeof(CardNames); j++) {
            cout << Cards[i][j] << endl;
        }
    }
}