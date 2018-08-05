#include <iostream> //cin; cout
#include <stdlib.h> // exit
#include "ejercicio_01.h"

using namespace std;

int leerNumeroDesdePantalla(){
    int numero;
    cout << "Ingrese un numero: " << endl;
    cin >> numero;
    if(cin.fail()){
        cout << "No ha ingresado un numero" << endl;
        exit(EXIT_FAILURE);
    }
    return numero;
}

void mostrarNumeroEnPantalla(std::string mensaje, int numero){
    cout << mensaje << numero << endl;
}
