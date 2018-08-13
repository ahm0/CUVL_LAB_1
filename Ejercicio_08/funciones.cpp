#include "ejercicio_08.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

int leerLado(){
    int lado=0;
    cout << "Ingrese un lado del triángulo: " << endl;
    cin >> lado;
    if(cin.fail()){
        cout << "Error al ingresar el lado!!" << endl;
        exit(EXIT_FAILURE);
    }
    return lado;
}

bool esEscaleno(int lado_1, int lado_2, int lado_3){
    return lado_1 != lado_2 && lado_1 != lado_3 && lado_2 != lado_3;
}

bool esIsoceles(int lado_1, int lado_2, int lado_3){
    return (lado_1 == lado_2 && lado_1 != lado_3) ||
           (lado_1 == lado_3 && lado_1 != lado_2);
}

bool esEquilatero(int lado_1, int lado_2, int lado_3){
    return !esEscaleno(lado_1, lado_2, lado_3) && !esIsoceles(lado_1, lado_2, lado_3);
}
