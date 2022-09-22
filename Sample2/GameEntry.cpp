#include "GameEntry.h"
#include <iostream>
#include <string>

GameEntry::GameEntry(std::string& n, int s)
	: name(n), score(s) { }

GameEntry::GameEntry(std::string n, int s)
{
}

std::string GameEntry::getName() const { return name; }
int GameEntry::getScore() const { return score; }