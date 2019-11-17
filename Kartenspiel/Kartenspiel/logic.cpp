#include "logic.h"
#include "helper.h"

bool canCardBePlayed(SCard& _StackCard, SCard& _PlayerCard) {
	return _StackCard.m_Card_Color == _PlayerCard.m_Card_Color
		|| _StackCard.m_Card_Value == _PlayerCard.m_Card_Value;
}

void shuffelDeck(SCard* _Card_Deck, int _DeckSize) {
	//iterate through deck swap two cards
	for (int i = 0; i < _DeckSize; i++) {
		SCard Temp_Card = _Card_Deck[i/*Temp_Pos*/];
		int Swap_Pos = getRandomInt(_DeckSize);
		SCard Swap_Card = _Card_Deck[Swap_Pos];
		_Card_Deck[i/*Temp_Pos*/] = Swap_Card;
		_Card_Deck[Swap_Pos] = Temp_Card;
	}
}

void drawCard(SCard* _Source_Deck, SCard* _Target_Deck, int _DeckSize)
{
	SCard Temp = _Source_Deck[0];
	for (int i = 0; i < _DeckSize; i++) {
		_Source_Deck[i] = _Source_Deck[i + 1];
	}

	_Target_Deck[0] = Temp;

}

