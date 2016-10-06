//This program sets the traits of the cards and
//the functions to return them.

#include <string>
#include "card.h"

using std::string;

//Static constants of the numbers, colors, shadings, and symbols on the cards.
const string Card::NUMBERS[] = {"1", "2", "3"};
const string Card::COLORS[] = {"Green", "Purple", "Red"};
const string Card::SHADINGS[] = {"Empty", "Lined", "Full"};
const string Card::SYMBOLS[] = {"Oval", "Swiggle", "Diamond"};

Card::Card()
{
   _card = 0;
}

Card::Card(int card)
{
   _card = card;
}

//Returns number of symbols on the card
string Card::getNumber() const
{
   return NUMBERS[_card % 3];
}//end getNumber

//Returns color of symbols on the card
string Card::getColor() const
{
   return COLORS[_card % 3];
}//end getColor

//Returns shading of symbols on the card
string Card::getShading() const
{
   return SHADINGS[_card % 3];
}//end getSymbol

//Returns what the symbols are on the card
string Card::getSymbol() const
{
   return SYMBOLS[_card % 3];
}//end getSymbol
