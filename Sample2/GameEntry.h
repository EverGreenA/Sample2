#include <iostream>
#include <string>

class GameEntry {
public:
	GameEntry(std::string n, int s = 0);
	std::string getName() const;
	int getScore() const;
private:
	std::string name;
	int score;
};