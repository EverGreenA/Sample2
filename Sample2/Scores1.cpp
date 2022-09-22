#include "Scores.h"
#include <iostream>
#include <string>

void Scores::add(const GameEntry& e) {
	int newScore = e.getScore();
	if (numEntries == maxEntries) {
		if (newScore <= entries[maxEntries - 1].getScore())
			return;
	}
	else numEntries++;

	int i = numEntries - 2;
	while (i >= 0 && newScore > entries[i].getScore()) {
		entries[i + 1] = entries[i];
		i--;
	}
	entries[i + 1] = e;
}