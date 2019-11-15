#include "logic.h"

bool canCardBePlayed(SCard& stackCard, SCard& playerCard) {
	return stackCard.m_Card_Color == playerCard.m_Card_Color
		|| stackCard.m_Card_Value == playerCard.m_Card_Value;
}