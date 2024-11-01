#pragma once
#include <string>
class Song
{
private:
	int tsec;
	int tmin;
public:
	std::string name;
	Song();
	Song(std::string n, int m, int s);
	int ToSec();
	bool HasTheSameTime(Song s);
};

