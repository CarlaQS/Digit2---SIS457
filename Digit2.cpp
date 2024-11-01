// Digit2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Song.h"
#include "Tracker.h"

int main()
{
    Song s1("Fiesta", 3, 30);
    Song s2("Cnacion B", 4, 30);
    Song s3("Cancion C", 4, 30);

    Tracker t1;
    t1.setSong(s1);
    t1.AddHistorical(TrackSong(1, 30, 3));
    t1.AddHistorical(TrackSong(3, 30, 5));
    t1.AddHistorical(TrackSong(3, 0, 4));
    t1.AddHistorical(TrackSong(3, 30, 4));

    float np = t1.getNumberSongPlayed(100);

    void ClearHistorial(); 
    void printStars();
    void printHistoricalwithReate(int reat);
    void printBarPercent();

    std::cout << "Numero de reproduciones validas "<<np;
    std::cout << "Hello World!\n";
}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
