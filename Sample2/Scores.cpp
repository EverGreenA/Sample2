#include "Scores.h"
#include <iostream>
#include <string>

Scores::Scores(int maxEnt) {
	maxEntries = maxEnt;
	entries = new GameEntry[maxEntries];
	numEntries = 0;
}

Scores::~Scores() {
	delete[] entries;
}