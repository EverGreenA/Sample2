#include "GameEntry.h"
#include "Scores.h"
#include <iostream>
#include <string>

GameEntry Scores::remove(int i){
	if ((i < 0) || (i >= numEntries));
	GameEntry e = entries[i];
	for (int j = i + 1; j < numEntries; j++)
		entries[j - 1] = entries[j];
	numEntries--;
	return e;
}