//Header File
//This program creates the Set! cards.
#ifndef CARD_H
#define CARD_H
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;

class Card
{
	public:
   
      //Default card.
      Card();
      //Card from deck.
		Card(int card);
      
      //Functions to get a trait of the card.
		string getNumber() const;
		string getColor() const;
      string getShading() const;
      string getSymbol() const; 
	private: 
      int _card; 
      
      //Traits of the cards
		static const string NUMBERS[];
		static const string COLORS[];
		static const string SHADINGS[];
		static const string SYMBOLS[];
	
};

#endif
