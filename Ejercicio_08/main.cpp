#include <iostream>
#include <stdlib.h>
#include "ejercicio_08.h"

using namespace std;

int main()
{
    int lado_1 = 0;
    int lado_2 = 0;
    int lado_3 = 0;

    lado_1 = leerLado();
    lado_2 = leerLado();
    lado_3 = leerLado();

    if(esEscaleno(lado_1, lado_2, lado_3)){
        cout << "El triángulo es escaleno" << endl;
        return EXIT_SUCCESS;
    }

    if(esIsoceles(lado_1, lado_2, lado_3)){
        cout << "El triángulo es isóceles" << endl;
        return EXIT_SUCCESS;
    }

    cout << "El triángulo es equilátero" << endl;
    return EXIT_SUCCESS;
}
