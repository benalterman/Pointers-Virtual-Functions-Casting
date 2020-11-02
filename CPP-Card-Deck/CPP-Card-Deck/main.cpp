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
using std::cout;

int main()
{
    CardValue(CardNumber::Two, CardSuit::Spades);
    
    return 0;
}
