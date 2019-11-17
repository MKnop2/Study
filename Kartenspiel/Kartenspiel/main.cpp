#include <iostream>
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

	SCard Discard_Deck[Deck_Size];
	SCardStack Stack_Discard_Deck;
	Stack_Card_Deck.m_pCards = Discard_Deck;
	
	SCard Players_Hand[Deck_Size];
	SCardStack Stack_Players_Hand;
	Stack_Players_Hand.m_pCards = Players_Hand;


	// ---------------------------------------------------------------------
	// create deck, put first card on stack
	buildDeck(Stack_Card_Deck.m_pCards, Amount_Colors, Amount_Values, Color, Value);
	shuffelDeck(Stack_Card_Deck.m_pCards, Deck_Size);
	drawCard(Stack_Card_Deck.m_pCards, Discard_Deck, Deck_Size); //todo i have to rewrite that

	// ask for players, init players (distribute hand cards ...)
	//todo put all functionality in own methods
	const int Max_Player = 4;
	SPlayer Player[Max_Player];		//SPlayer contains int m_PlayerID; char* m_PlayerName; SCardStack m_Hand;
	Player.m_Hand = Players_Hand;	//? How to Declaire an Array of an Array of an Array = Players[Player1[HandCards1],Player2[HandCards2]....]
	

	SPlayers Players;			
	Players.m_Players = Player;
	Players.m_AmmountOfPlayers = 4;

	int Player = 0;
	int CurrentPlayer = 1;
	const char* Msg = "Na du wie viele sind wir heute?";
	const char* PlayersName[16];
	std::cout << Msg;
	std::cin >> Player; //? How to set a String in char* ?
	for (int i = 0; i < Player; i++) {
		std::cout << "Name of the " << Player << " Player?" << "\n";
		std::cin >> PlayersName*;
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