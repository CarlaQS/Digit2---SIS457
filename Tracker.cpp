#include "Tracker.h"
#include <iostream>
using namespace std;

void Tracker::AddHistorical(TrackSong ts) {
    historicalTrack.push_back(ts);
}

float Tracker::getBestReating(TrackSong r) {
    if (historicalTrack.empty()) return 0.0;

    float bestRaetingPorcent = r.getRaetingPorcent(trackedSong); // Usa el par�metro r con el m�todo
    for (const auto& track : historicalTrack) {
        if (track.getRaetingPorcent(trackedSong) > bestRaetingPorcent) {
            bestRaetingPorcent = track.getRaetingPorcent(trackedSong);
        }
    }
    return bestRaetingPorcent;
}

float Tracker::getNumberSongPlayed(float porcent) {
    int counter = 0;
    for (int i = 0; i < historicalTrack.size(); i++) {
        float p = historicalTrack[i].getRaetingPorcent(trackedSong);
        if (p >= porcent) {
            counter++;
        }
    }
    return counter;
}

void Tracker::setSong(Song s) {
    trackedSong = s;
}

void Tracker::ClearHistorial() {
    historicalTrack.clear();
}

void Tracker::printStars() {
    for (const auto& track : historicalTrack) {
        for (int i = 0; i < track.raeting; ++i) { // Usa directamente `raeting`
            cout << "*";
        }
        cout << endl;
    }
}

void Tracker::printHistoricalwithReate(int rate) {
    for (const auto& track : historicalTrack) {
        if (track.raeting == rate) { // Usa directamente `raeting`
            cout << "Reproducci�n: " << track.playMin << " minutos con calificaci�n " << track.raeting << endl;
        }
    }
}

void Tracker::printBarPercent() {
    for (const auto& track : historicalTrack) {
        int bars = static_cast<int>(track.getRaetingPorcent(trackedSong) / 10); // Escala en funci�n de 10%
        for (int i = 0; i < bars; ++i) {
            cout << "| ";
        }
        cout << endl;
    }
}

