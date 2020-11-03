//
//  Card.cpp
//  CPP-Card-Deck
//
//  Created by Benjamin Alterman on 11/2/20.
//

#include <iostream>
#include "Card.h"

namespace PlayingCard
{
    // CardVal enum constructor
    CardValue::CardValue(CardNumber N, CardSuit S) : Num(N), St(S)
    {}

    array<const string, 5> const Card::CardSuitString{ { "Error", "Spades", "Clubs", "Diamonds", "Hearts"} };

    array<const string, 14> const Card::CardNumString { { "Error", "Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" } };

    // Card constructor
    Card::Card(const CardValue& CV) : CardVal(CardNumber::Ace, CardSuit::Hearts)
    {
        bFaceDown = false;
    }

    // definition for operator override
    std::ostream& operator<<(std::ostream& Os, const Card& C)
    {
        Os << C.GetNumberString() << " of " << C.GetSuitString() << ".";
        return Os;
    }
}
