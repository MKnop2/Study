#include "logic.h"
#include "helper.h"

bool canCardBePlayed(SCard& _StackCard, SCard& _PlayerCard) {
	return _StackCard.m_Card_Color == _PlayerCard.m_Card_Color
		|| _StackCard.m_Card_Value == _PlayerCard.m_Card_Value;
}

void shuffelDeck(SCard* _Card_Deck, int _DeckSize) {
	//iterate thro deck swap two cards
	for (int i = 0; i < _DeckSize; i++) {
		SCard Orig = _Card_Deck[i];
		int SwapPos = getRandomInt(_DeckSize);
		SCard Swap = _Card_Deck[SwapPos];
		_Card_Deck[i] = Swap;
		_Card_Deck[SwapPos] = Orig;
	}
}