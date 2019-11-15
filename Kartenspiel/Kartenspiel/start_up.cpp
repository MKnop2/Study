#include "start_up.h"
#include "helper.h"

void shuffelDeck(SCard* _Card_Deck, int _DeckSize) {
	//iterate thro deck swap two cards
	for (int i = 0; i < _DeckSize; i++) {
		SCard orig = _Card_Deck[i];
		int swapPos = getRandomInt(_DeckSize);
		SCard swap = _Card_Deck[swapPos];
		_Card_Deck[i] = swap;
		_Card_Deck[swapPos] = orig;
	}
}

void buildDeck(SCard* _Card_Deck, const int _Amount_Colors, const int _Amount_Values, char* _Color, char* _Value) {
	//build deck
	int counter = 0;
	for (int c = 0; c < _Amount_Colors; c++) {
		for (int v = 0; v < _Amount_Values; v++) {
			_Card_Deck[counter].m_Card_Color = _Color[c];
			_Card_Deck[counter].m_Card_Value = _Value[v];
			counter++;
		}
	}
}