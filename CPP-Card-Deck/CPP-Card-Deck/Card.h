//
//  Card.h
//  CPP-Card-Deck
//
//  Created by Benjamin Alterman on 11/2/20.
//

#pragma once
#include <iostream>
#include <string>
#include <array>

using std::string;
using std::cout;
using std::array;

namespace PlayingCard
{

    enum class CardNumber
    {
        Ace=1, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King
    };

    enum class CardSuit
    {
        Spades=1, Clubs, Diamonds, Hearts
    };

    struct CardValue
    {
        CardValue(CardNumber N, CardSuit S);
        enum CardNumber Num;
        enum CardSuit St;
    };

    class Card
    {
    public:
        inline const string& GetNumberString() const { return CardNumString[static_cast<int>(CardVal.Num)]; }
        inline const string& GetSuitString() const { return CardSuitString[static_cast<int>(CardVal.St)]; }
    private:
        // holds card number and suit
        CardValue CardVal;
        // using arrays instead of vectors
        static const array<const string, 5> CardSuitString;
        static const array<const string, 14> CardNumString;
    };
}
