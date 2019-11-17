#include <iostream>
#include "types.h"
#include "io.h"
#include "start_up.h"
#include "logic.h"

int main() {
	const int Amount_Colors = 4;
	const int Amount_Values = 13;
	const int Deck_Size = Amount_Colors * Amount_Values;
	char Color[Amount_Colors] = { 'H', 'C', 'D', 'S' };
	char Value[Amount_Values] = { '2', '3', '4', '5', '6', '7', '8', '9', '0', 'J', 'Q', 'K', 'A' };
	//----------------------------------------------------------------------
	SCard Card_Deck[Deck_Size];
	SCardStack Stack_Card_Deck;
	Stack_Card_Deck.m_pCards = Card_Deck;
	SCard Discard_Deck[Deck_Size];
	//SCard Players_Hand[Deck_Size];


	// ---------------------------------------------------------------------
	// create Deck, put first card on stack
	buildDeck(Stack_Card_Deck.m_pCards, Amount_Colors, Amount_Values, Color, Value);
	shuffelDeck(Stack_Card_Deck.m_pCards, Deck_Size);
	drawCard(Stack_Card_Deck.m_pCards, Discard_Deck, Deck_Size);

	// ask for players, init players (distribute hand cards ...)
	int Player = 0;
	const char* msg = "Na du wie viele sind wir heute?";
	const char* PlayersName[16];
	std::cout << msg;
	std::cin >> Player;
	for (int i = 0; i < Player; i++) {
		std::cout << "Name of the " << Player << " Player?" << "\n";
		std::cin >> PlayersName*;
	}
	// -----> gameState  <-- hier steht alles drin zum Game

	// main game loop, one itertion is a players turn
	// while(isGameOn(gameState)) 
		// list upper stack card
		// list players hand cards
		// ask player which card to play OR draw
			// check if card can be played...

	// end message, declare winner, clean up
	// ---------------------------------------------------------------------







	// -------- Testing Stuff --------------------------------------------------------
	//build a deck

	//shuffle deck
	deckPrint(Stack_Card_Deck.m_pCards, Deck_Size);
	deckPrint(Discard_Deck, Deck_Size);
	//asking for players?


	//provite cards to each player
	//put the first card to the discard_deck

	return 0;
}