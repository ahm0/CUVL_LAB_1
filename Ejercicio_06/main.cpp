#include <iostream>
#include <stdlib.h>
#include "ejercicio_06.h"

using namespace std;

int main()
{
    int dia = 0;
    int mes = 0;
    int anio = 0;
    int fecha_1 = 0;
    int fecha_2 =0;

    dia = leerNumero("Ingrese el día");
    mes = leerNumero("Ingrese el mes");
    anio = leerNumero("Ingrese el año");
    fecha_1 = obtenerFecha(dia, mes, anio);

    dia = leerNumero("Ingrese el día");
    mes = leerNumero("Ingrese el mes");
    anio = leerNumero("Ingrese el año");
    fecha_2 = obtenerFecha(dia, mes, anio);

    switch (comparaFechas(fecha_1, fecha_2)){
        case MAYOR:
            cout << "La fecha: " << fecha_1 << " es más reciente que la fecha: " << fecha_2 << endl;
            break;
        case MENOR:
            cout << "La fecha: " << fecha_1 << " es menos reciente que la fecha: " << fecha_2 << endl;
            break;
        case IGUAL:
            cout << "Las fechas son iguales." << endl;
            break;
    }

    return EXIT_SUCCESS;
}
