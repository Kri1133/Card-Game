#include<iostream>
using namespace std;
int main(){
    cout<<"Hello world"<<endl;
    string CardNames[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace"};
    int CardNamesSize = sizeof(CardNames)/sizeof(CardNames[0]);  //sizeof() gives the size in bytes
    string Suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    int SuitsSize = 4;
    string Cards[52];
    int counter = 0;
    for(int i = 0; i < CardNamesSize; i++){
        for(int j = 0; j < SuitsSize; j++){
            string card = CardNames[i] + " of " + Suits[j];
            Cards[counter] = card;
            counter++;
        }
    }
    // for(int i = 0; i < CardNamesSize*SuitsSize; i++){
    //     cout<<Cards[i]<<endl;
    // }
    
    return 0;
}