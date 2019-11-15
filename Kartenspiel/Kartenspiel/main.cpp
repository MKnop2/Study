#include <iostream>
#include "types.h"
#include "io.h"
#include "start_up.h"

void main() {
	const int Amount_Colors = 4;
	const int Amount_Values = 13;
	char Color[Amount_Colors] = { 'H', 'C', 'D', 'S' };
	char Value[Amount_Values] = { '2', '3', '4', '5', '6', '7', '8', '9', '10', 'J', 'Q', 'K', 'A' };
	int Player = 0;
	const int Deck_Size = Amount_Colors * Amount_Values;
	//SCard Card_Deck[Size_Card_Deck];
	SCard Card_Deck[Deck_Size];
	SCard Discard_Deck[1];


	//build a deck
	buildDeck(Card_Deck, Amount_Colors, Amount_Values, Color, Value);

	//shuffle deck
	shuffelDeck(Card_Deck, Deck_Size);
	deckPrint(Card_Deck, Deck_Size);
	//asking for players?

	//int i = askForInt("Gib mal ne Zahl!");
	// std::cout << i;
	const char* s = "This is GeeksForGeeks";
	askForString("Sag ma wat", s);
	std::cout << s;

	//provite cards to each player
	//put the first card to the discard_deck


}