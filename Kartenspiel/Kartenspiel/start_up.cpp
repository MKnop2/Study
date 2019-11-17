#include "start_up.h"
#include "helper.h"
#include "types.h"

void buildDeck(SCard* _Card_Deck, const int _Amount_Colors, const int _Amount_Values, char* _Color, char* _Value) {
	//build deck
	int Counter = 0;
	for (int c = 0; c < _Amount_Colors; c++) {
		for (int v = 0; v < _Amount_Values; v++) {
			_Card_Deck[Counter].m_Card_Color = _Color[c];
			_Card_Deck[Counter].m_Card_Value = _Value[v];
			Counter++;
		}
	}
}