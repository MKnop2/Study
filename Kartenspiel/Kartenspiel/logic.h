#pragma once

#include "types.h"

bool canCardBePlayed(SCard& _StackCard, SCard& _PlayerCard);

void shuffelDeck(SCard* _Card_Deck, int _DeckSize);

void drawCard(SCard* _Source_Deck, SCard* _Target_Deck, int _DeckSize);
