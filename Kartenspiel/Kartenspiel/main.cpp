#include <iostream>
#include <string>
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

	//? is there a better way to initialize variables?
	SCard Card_Deck[Deck_Size];				//SCard contains int m_Card_Value; int m_Card_Color
	SCardStack Stack_Card_Deck;				//SCardStack contains SCard* m_pCards; int m_AmmountOfCards
	Stack_Card_Deck.m_pCards = Card_Deck;
	Stack_Card_Deck.m_AmmountOfCards = Deck_Size;

	SCard Discard_Deck[Deck_Size];
	SCardStack Stack_Discard_Deck;
	Stack_Discard_Deck.m_pCards = Discard_Deck;
	Stack_Discard_Deck.m_AmmountOfCards = 0;

	const int Max_Player = 4;
	SPlayer Player[Max_Player];		//SPlayer contains int m_PlayerID; char* m_PlayerName; SCardStack m_Hand;

	SPlayers Players;			
	Players.m_Players = Player;
	Players.m_AmmountOfPlayers;

	int CurrentPlayer = 1;
	const int Start_Hand = 7;
	
	SCard Players_Hand[Deck_Size];
	SCardStack Stack_Players_Hand;
	Stack_Players_Hand.m_pCards = Players_Hand;
	Stack_Players_Hand.m_AmmountOfCards = 0;

	// ---------------------------------------------------------------------
	// create deck, put first card on stack
	buildDeck(Stack_Card_Deck.m_pCards, Amount_Colors, Amount_Values, Color, Value);
	deckPrint(Stack_Card_Deck.m_pCards, Deck_Size);
	shuffelDeck(Stack_Card_Deck.m_pCards, Stack_Card_Deck.m_AmmountOfCards);
	deckPrint(Stack_Card_Deck.m_pCards, Deck_Size);
	drawCard(Stack_Card_Deck.m_pCards, Stack_Discard_Deck.m_pCards, Stack_Card_Deck.m_AmmountOfCards, Stack_Discard_Deck.m_AmmountOfCards);
	deckPrint(Stack_Card_Deck.m_pCards, Deck_Size);
	deckPrint(Stack_Discard_Deck.m_pCards, Deck_Size);

	// ask for players, init players (distribute hand cards ...)
	//todo put all functionality in own methods

	for (int i = 0; i < 4; i++) {
		Player[i].m_Hand = Stack_Players_Hand;
	}

	std::string Msg = "How many players?";
	Players.m_AmmountOfPlayers = askForInt(Msg);

	for (int i = 0; i < Players.m_AmmountOfPlayers; i++) {
		std::cout << "Name of the " << i+1 << " Player?" << "\n";
		std::cin >> Player[i].m_PlayerName;

		for (int x = 0; x < Start_Hand; x++) {
			drawCard(Stack_Card_Deck.m_pCards, Player[i].m_Hand.m_pCards, Stack_Card_Deck.m_AmmountOfCards, Player[i].m_Hand.m_AmmountOfCards);
		}
		int temp = 7;
		deckPrint(Player[i].m_Hand.m_pCards, temp);
	}
	// -----> GameState  <-- all the information about the Game
	SGame GameState;
	GameState.m_Players = Players;
	GameState.m_CurrentPlayer = CurrentPlayer;
	GameState.m_Deck = Stack_Card_Deck;
	GameState.m_Stack = Stack_Discard_Deck;
	// main game loop, one itertion is a players turn
	// while(isGameOn(gameState)) 
		// list upper stack card
		// list players hand cards
		// ask player which card to play OR draw
			// check if card can be played...

	// end message, declare winner, clean up
	// ---------------------------------------------------------------------

	return 0;
}

