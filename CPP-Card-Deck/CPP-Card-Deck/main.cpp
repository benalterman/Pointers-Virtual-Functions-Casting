//
//  main.cpp
//  CPP-Card-Deck
//
//  Created by Benjamin Alterman on 11/2/20.
//

#include <iostream>
#include "Card.h"

using PlayingCard::CardValue;
using PlayingCard::CardNumber;
using PlayingCard::CardSuit;
using PlayingCard::Card;
using std::cout;

int main()
{
    CardValue TwoSpades(CardNumber::Two, CardSuit::Spades);
    const Card CardOne(TwoSpades);
    cout << "Card one: " << CardOne << '\n';
    CardOne.bFaceDown = false;
    cout << (CardOne.bFaceDown ? "The above card is facedown" : "The above card is faceup") << "\n\n";
    
    return 0;
}
