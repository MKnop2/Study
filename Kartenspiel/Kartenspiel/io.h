#pragma once

#include <string>
#include "types.h"

int askForInt(std::string _Msg);

std::string askForString(std::string _Msg);

void deckPrint(SCard* _Card_Deck, int _DeckSize);

void amountPlayer(int _Player);