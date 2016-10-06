//Header File
//This program creates the Set! deck.
#ifndef DECK_H
#define DECK_H
#include <iostream>
#include "card.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::left;

class Deck  //The Deck class
{
	public:
		Deck();
		Card dealCard();  //Function to deal a card.
		void shuffle();   //Function to shuffle the deck.
	private: 
		Card _cards[82];  //Location of a card in the deck.
		int _nextCard; //Next card in the deck.
	
};

#endif
