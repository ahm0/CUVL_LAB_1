#include <iostream>
#include <stdlib.h>
#include "ejercicio_05.h"

using namespace std;

int main()
{
    int numero_1 = 0;
    int numero_2 = 0;

    numero_1 = leerNumero();
    numero_2 = leerNumero();

    int resultado = compararNumeros(numero_1, numero_2);

    switch (resultado){
        case MAYOR:
            cout << "El número: " << numero_1 << " es mayor que: " << numero_2 << endl;
            break;
        case MENOR:
            cout << "El número: " << numero_1 << " es menor que: " << numero_2 << endl;
            break;
        case IGUAL:
            cout << "Los números ingresados son iguales" << endl;
            break;
        default:
            cout << "ocurrió un error!!" << endl;
            break;
    }

    return EXIT_SUCCESS;
}
