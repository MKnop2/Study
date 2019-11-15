#include "io.h"

#include <iostream>
#include <string>

int askForInt(const char* msg)
{
	int result;
	std::cout << msg << "\n";
	std::cin >> result;
	return result;
}

const int MAX_INPUT_STRING_SIZE = 20;

void askForString(const char* msg, const char* result)
{
	std::string line;
	std::cout << msg << "\n";
	std::cin >> line;
	result = line.data();
}

void deckPrint(SCard *_Card_Deck, int _DeckSize) {
	for (int i = 0; i < _DeckSize; i++)
		std::cout << i << "\t" << _Card_Deck[i].m_Card_Color << " , " << _Card_Deck[i].m_Card_Value << "\n";
}

void amountPlayer(int _Player) {
	std::cout << "How many Players? \n";
	std::cin >> _Player;
}