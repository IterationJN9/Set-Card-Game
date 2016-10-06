// Main file for Set! card game.
//It deals three cards at a time and the user determines if there is a set or not.
//At the end of the deck, tells the user how many times they were correct.

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

#include "card.h"
#include "deck.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;


int main()
{
   int dealNumCards = 81;  //Number of cards in a set deck.
   //srand(time(0)); 
   
   Deck currentDeck; //Current deck.
   char type;  //For input.
   
   int correct = 0;  //Number of correct identifications the user found.
   
   currentDeck.shuffle();  //Shuffle the deck.
      
   cout << "The cards on the table are: ";   //Deal three cards from the deck.
   for (int numCard = 0; numCard < dealNumCards; numCard = numCard + 3)
   {
      //currentDeck.shuffle();  //Shuffle the deck.
      
      Card firstCard = currentDeck.dealCard();
      string nu1 = firstCard.getNumber();
      string co1 = firstCard.getColor();
      string sh1 = firstCard.getShading();
      string sy1 = firstCard.getSymbol();
         
      cout << "First card is " << nu1 << " " << co1 << " " << sh1 << " " << sy1 << endl;
         
      Card secondCard = currentDeck.dealCard();
      string nu2 = secondCard.getNumber();
      string co2 = secondCard.getColor();
      string sh2 = secondCard.getShading();
      string sy2 = secondCard.getSymbol();
         
      cout << "Second card is " << nu2 << " " << co2 << " " << sh2 << " " << sy2 << endl;
         
      Card thirdCard = currentDeck.dealCard();
      string nu3 = thirdCard.getNumber();
      string co3 = thirdCard.getColor();
      string sh3 = thirdCard.getShading();
      string sy3 = thirdCard.getSymbol();
         
      cout << "Third card is " << nu3 << " " << co3 << " " << sh3 << " " << sy3 << endl;
         
      //Ask the user if these cards are a set.
      cout << "Are these three cards a set? [y/n]" << endl;
      cin >> type;
         
         
      if (type == 'y')  //Determine if the user is correct in saying that there is a set.
      {
         if (((nu1 == nu2) && (nu2 == nu3)) || ((nu1 != nu2) && (nu2 != nu3) && (nu1 != nu3)))
         {
            if (((co1 == co2) && (co2 == co3)) || ((co1 != co2) && (co2 != co3) && (co1 != co3)))
            {
               if (((sh1 == sh2) && (sh2 == sh3)) || ((sh1 != sh2) && (sh2 != sh3) && (sh1 != sh3)))
               {
                  if (((sy1 == sy2) && (sy2 == sy3)) || ((sy1 != sy2) && (sy2 != sy3) && (sy1 != sy3)))
                  {
                     cout << "Correct, set found!" << endl;
                     correct++;
                     
                  }
                  else
                  {
                     cout << "Incorrect, no set detected." << endl;
                  }
               }
               else
               {
                  cout << "Incorrect, no set detected." << endl;
               }
            }
            else
            {
               cout << "Incorrect, no set detected." << endl;
            }
         }
         else
         {
            cout << "Incorrect, no set detected." << endl;
         }
           
      }
      else if (type == 'n')   //Determine if the user is correct in saying that there is not a set.
      {
         if ( ( (nu1 == nu2) && (nu1 != nu3) ) || ( (nu2 == nu3) && (nu1 != nu2) ) || ( (nu1 == nu3) && (nu2 != nu3) ) )
         {
            if ( ( (co1 == co2) && (co1 != co3) ) || ( (co2 == co3) && (co1 != co2) ) || ( (co1 == co3) && (co2 != co3) ) )
            {
               if ( ( (sh1 == sh2) && (sh1 != sh3) ) || ( (sh2 == sh3) && (sh1 != sh2) ) || ( (sh1 == sh3) && (sh2 != sh3) ) )
               {
                  if ( ( (sy1 == sy2) && (sy1 != sy3) ) || ( (sy2 == sy3) && (sy1 != sy2) ) || ( (sy1 == sy3) && (sy2 != sy3) ) )
                  {
                     cout << "Correct, no set detected." << endl;
                     correct++;
                  }
                  else
                  {
                     cout << "Incorrect, set detected." << endl;
                  }
               }
               else
               {
                  cout << "Incorrect, set detected." << endl;
               }
            }
            else
            {
               cout << "Incorrect, set detected." << endl;
            }
         }
         else
         {
            cout << "Incorrect, set detected." << endl;
         }
      }
      else  //If the user inputs something other than "y" or "n".
      {
         cout << "Please try again." << endl;
      }
   cout << endl;
   }
   cout << "End of the deck you were correct " << correct << " times out of 27." << endl;
   
   return 0;
}//end main
