#include "Song.h"

Song::Song()
{
	name = "Cancion X";
	tsec = 30;
	tmin = 3;
}

Song::Song(std::string n, int m, int s)
{
	name = n;
	tmin = m;
	tsec = s;
}

int Song::ToSec()
{
	return tmin * 60 + tsec;
}

bool Song::HasTheSameTime(Song s)
{
	return ToSec() == s.ToSec();
}

