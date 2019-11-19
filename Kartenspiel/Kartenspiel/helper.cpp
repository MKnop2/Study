#include "helper.h"
#include <cstdlib>
#include <ctime>

int getRandomInt(int _UpperLimit) {
	// srand((int)time(0));
	return rand() % _UpperLimit;
}