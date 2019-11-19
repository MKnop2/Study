#include "logic.h"
#include "helper.h"
#include <ctime>
#include <cstdlib>

bool canCardBePlayed(SCard& _StackCard, SCard& _PlayerCard) {
	return _StackCard.m_Card_Color == _PlayerCard.m_Card_Color
		|| _StackCard.m_Card_Value == _PlayerCard.m_Card_Value;
}

void shuffelDeck(SCard* _Card_Deck, int _Card_Size_Current_Deck) {
	//iterate through deck swap two cards
	srand((int)time(0)); // thats for the random function
	for (int i = 0; i < _Card_Size_Current_Deck; i++) {
		SCard Temp_Card = _Card_Deck[i/*Temp_Pos*/];
		int Swap_Pos = getRandomInt(_Card_Size_Current_Deck);
		SCard Swap_Card = _Card_Deck[Swap_Pos];
		_Card_Deck[i/*Temp_Pos*/] = Swap_Card;
		_Card_Deck[Swap_Pos] = Temp_Card;
	}
}

void drawCard(SCard* _Source_Deck, SCard* _Target_Deck, int _Source_Deck_Size, int _Target_Deck_Size)
{
	SCard Temp = _Source_Deck[_Target_Deck_Size];
	for (int i = 0; i < _Source_Deck_Size; i++) {
		_Source_Deck[i] = _Source_Deck[i + 1];
	}
	_Target_Deck[_Target_Deck_Size] = Temp;
}

