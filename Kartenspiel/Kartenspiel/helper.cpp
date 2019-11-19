#include "helper.h"
#include <time.h>
#include <stdlib.h>

int getRandomInt(int _UpperLimit) {
	srand(time(0));
	return rand() % _UpperLimit;
}