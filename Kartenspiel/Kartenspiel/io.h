#pragma once

#include "types.h"

int askForInt(const char* msg);

void askForString(const char* msg, const char* result);

void deckPrint(SCard* _Card_Deck, int _DeckSize);

void amountPlayer(int _Player);