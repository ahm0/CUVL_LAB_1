#include <iostream>
#include <stdlib.h>
#include "ejercicio_09.h"

using namespace std;

int main()
{
    int mes=0;
    int anio=0;

    cout << "Ingrese un mes" << endl;
    cin >> mes;
    if(cin.fail()){
        exit(EXIT_FAILURE);
    }

    cout << "Ingrese un año" << endl;
    cin >> anio;
    if(cin.fail()){
        exit(EXIT_FAILURE);
    }

    int dias = obtenerDiasDelMes(mes, anio);

    cout << "Dias: " << dias << endl;

    return 0;
}
