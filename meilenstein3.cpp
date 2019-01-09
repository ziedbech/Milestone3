// meilenstein3.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include "pch.h"
#include "bibliotheken.h"
#include "Neuron.h"
#include "aktivierungsfunktion.h"

#include <string>
#include <random>


void matrixgenerator (int x, int y) {  // x Zeile y Spalte


    float matrix[x][y];

    std::default_random_engine generator;
    std::normal_distribution<double> distribution(0.0,2.0);

    int p[]={};

    for (int i=0; i<x; ++i) {
        for (int j=0; j<y; ++j) {
            double number = distribution(generator);
            if ((number>=0.0)&&(number<10.0)) ++p[int(number)];
            matrix[i][j] = number ;

        } }

    for (int i=0; i<x; ++i) {
        for (int j=0; j<y; ++j) {
            std::cout << matrix[i][j] << std::endl;
        }}


}



int main()
{
    matrixgenerator(5, 5);
    return 0;
}
