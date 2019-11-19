#pragma once
#include <string>

struct SCard {
	char m_Card_Value;
	char m_Card_Color;
};

struct SCardStack {
	SCard* m_pCards;
	int m_AmmountOfCards;
};

struct SPlayer {
	int m_PlayerID;
	std::string m_PlayerName;
	SCardStack m_Hand;
};

struct SPlayers { //?????????
	SPlayer* m_Players;
	int m_AmmountOfPlayers;
};

struct SGame {
	SPlayers m_Players;
	int m_CurrentPlayer;
	SCardStack m_Deck;
	SCardStack m_Stack;
};