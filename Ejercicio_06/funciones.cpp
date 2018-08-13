#include <iostream>
#include <stdlib.h>
#include "ejercicio_06.h"

using namespace std;

int leerNumero(string mensaje){
    int numero=0;
    cout << mensaje << endl;
    cin >> numero;
    if(cin.fail()){
        exit(EXIT_FAILURE);
    }
    return numero;
}

int obtenerFecha(int dia, int mes, int anio){
    return anio * 10000 + mes * 100 + dia;
}

int comparaFechas(int fecha_1, int fecha_2){
    int resultado = fecha_1 - fecha_2;

    if(resultado > 0)
        return MAYOR;

    if(resultado < 0)
        return MENOR;

    return IGUAL;
}
