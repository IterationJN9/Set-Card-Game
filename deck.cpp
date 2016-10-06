//This program contains the constructor for the deck and
//the functions dealCard and shuffle.

#include <iostream>
#include <string>
#include <cstdlib>
#include <cassert>
#include <algorithm>

#include "card.h"
#include "deck.h"

using std::string;
using std::swap;

Deck::Deck()   //Deck constructor.
{
   //Note that there are 81 cards in a Set! deck.
   
   for (int i = 0; i < 82; i++)
   {
      _cards[i] = Card(i);
   }
   shuffle();
   _nextCard = 0;
}


Card Deck::dealCard()   //Returns the next card.
{
   assert(_nextCard >= 0 && _nextCard < 82);
   return _cards[_nextCard++]; 
}//end dealCard

void Deck::shuffle() //Shuffles the deck.
{
   for (int j = 0; j < 82; j++)
   {
      int randNum1 = rand() % 81; //Random number from 0 to 80.
      swap(_cards[j], _cards[randNum1]);   //Swap the current card with the random card.
   }
   _nextCard = 0;
}//end shuffle
