#pragma once

#include "types.h"

bool canCardBePlayed(SCard& _StackCard, SCard& _PlayerCard);

void shuffelDeck(SCard* _Card_Deck, int _Card_Size_Current_Deck);

void drawCard(SCard* _Source_Deck, SCard* _Target_Deck, int _Source_Deck_Size, int _Target_Deck_Size);
