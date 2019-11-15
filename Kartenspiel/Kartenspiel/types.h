#pragma once

struct SCard {
	char m_Card_Value;
	char m_Card_Color;
};

struct SCardStack {
	SCard* card;
	int numOfCards;
};

struct SPlayer {
	int m_PlayerID;
	char* m_PlayerName;
	SCardStack hand;
};

struct SPlayers {
	SPlayer* players;
	int numOfPlayers;
};

struct SGame {
	SPlayers players;
	int currentPlayer;
	SCardStack deck;
	SCardStack stack;
};