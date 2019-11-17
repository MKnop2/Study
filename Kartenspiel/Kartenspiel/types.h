#pragma once

struct SCard {
	char m_Card_Value;
	char m_Card_Color;
};

struct SCardStack {
	SCard* m_Card;
	int m_NumOfCards;
};

struct SPlayer {
	int m_PlayerID;
	char* m_PlayerName;
	SCardStack m_Hand;
};

struct SPlayers {
	SPlayer* m_Players;
	int m_NumOfPlayers;
};

struct SGame {
	SPlayers m_Players;
	int m_CurrentPlayer;
	SCardStack m_Deck;
	SCardStack m_Stack;
};