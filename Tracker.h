#pragma once
#include "Song.h"
#include "TrackSong.h"
#include <vector>
class Tracker
{
protected:
	Song trackedSong;
	std::vector<TrackSong> historicalTrack;
public:
	void AddHistorical(TrackSong ts);
	float getBestReating(TrackSong r);//me obtiene el promedio de calificiacion
	float getNumberSongPlayed(float porcent);//me devuelve la cantidad de historiaas que se han reproducido en un porcentaje esperado
	void setSong(Song s);

	void ClearHistorial(); //limpiar la historia
	void printStars();//muestra en estrellas las historias trackeadas ejemplo ***
	void printHistoricalwithReate(int reat);
	void printBarPercent();// imprimir en barras el total de la cancion
/*
	| | | |
    | | | | | | | | | |
    | | | | | | | |
    | | | | | | | | | |
*/

};


