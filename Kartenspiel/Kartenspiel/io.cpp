#include "io.h"

#include <iostream>
#include <string>

int askForInt(const char* _Msg)
{
	int Result;
	std::cout << _Msg << "\n";
	std::cin >> Result;
	return Result;
}


void deckPrint(SCard *_Card_Deck, int _DeckSize) {
	for (int i = 0; i < _DeckSize; i++)
		std::cout << i << "\t" << _Card_Deck[i].m_Card_Color << " , " << _Card_Deck[i].m_Card_Value << "\n";
}

void amountPlayer(int _Player) {
	std::cout << "How many Players? \n";
	std::cin >> _Player;
}