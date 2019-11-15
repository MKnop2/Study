#include <iostream>
#include <stdlib.h> 

struct SCard {
	char m_Card_Value;
	char m_Card_Color;
};

struct SPlayer {
	int m_PlayerID;
	char* m_PlayerName;
};

void player(int _Player) {
	std::cout << "How much Players? \n";
	std::cin >> _Player;
	for (int i = 0; i < _Player; i++) {
		
	}
}

void shuffelDeck(SCard* _Card_Deck, const int* _Size_Card_Deck) {
	//create a Temp_Deck
	SCard Temp_Card_Deck[51];
	//assign random cards sequently to Temp_Deck
	
	std::cout << "\n New Stack \n";
	int Rand_Num = 0;
	int Rand_Max = 51;
	for (int i = 0; i <= 51; i++) {
		Rand_Num = rand() % Rand_Max;
		Temp_Card_Deck[i].m_Card_Color = _Card_Deck[Rand_Num].m_Card_Color;
		Temp_Card_Deck[i].m_Card_Value = _Card_Deck[Rand_Num].m_Card_Value;
		//pull the to the end of the array
		for (int j = Rand_Num; j < 51; ++j) {
			_Card_Deck[j].m_Card_Color = _Card_Deck[j + 1].m_Card_Color;
			_Card_Deck[j].m_Card_Value = _Card_Deck[j + 1].m_Card_Value;
		}
		//
		if (i != 0) {
			Rand_Max--;
		}
		std::cout << i << "\t" << Temp_Card_Deck[i].m_Card_Color << " , " << Temp_Card_Deck[i].m_Card_Value << "\n";
	}
	//return Temp_Deck or overwrite pointer from deck with pointer from temp deck
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

void deckPrint(SCard* _Card_Deck, const int _Amount_Colors, const int _Amount_Values, char* _Color, char* _Value) {
	int counter = 0;
	for (int c = 0; c < _Amount_Colors; c++) {
		for (int v = 0; v < _Amount_Values; v++) {
			std::cout << counter << "\t" << _Card_Deck[counter].m_Card_Color  << " , " << _Card_Deck[counter].m_Card_Value << "\n";
			counter++;
		}
	}
}

void main() {
	const int Amount_Colors = 4;
	const int Amount_Values = 13;
	const int Size_Card_Deck = 51;
	const int* pSize_Card_Deck = &Size_Card_Deck;
	char Color[Amount_Colors] = { 'H', 'C', 'D', 'S' };
	char Value[Amount_Values] = { '2', '3', '4', '5', '6', '7', '8', '9', '10', 'J', 'Q', 'K', 'A' };
	int Player = 0;
	//SCard Card_Deck[Size_Card_Deck];
	SCard Card_Deck[51];
	SCard Discard_Deck[1];
	//build a deck
	buildDeck(Card_Deck, Amount_Colors, Amount_Values, Color, Value);
	deckPrint(Card_Deck, Amount_Colors, Amount_Values, Color, Value);
	//shuffle deck
	shuffelDeck(Card_Deck, pSize_Card_Deck);
	deckPrint(Card_Deck, Amount_Colors, Amount_Values, Color, Value);
	//asking for players?
	//provite cards to each player
	//put the first card to the discard_deck


}