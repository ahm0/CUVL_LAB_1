#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int leerNumeroDesdePantalla(){
    int numero=0;
    cout << "Ingrese un número: " << endl;
    cin >> numero;
    return numero;
}

int sumar(int numero1, int numero2){
    return numero1 + numero2;
}

int restar(int numero1, int numero2){
    return numero1 - numero2;
}

int multiplicar(int numero1, int numero2){
    return numero1 * numero2;
}

int dividir(int dividendo, int divisor){
    if(divisor==0){
        cout << "El divisor no puede ser 0 (cero)";
        exit(EXIT_FAILURE);
    }

    return dividendo / divisor;
}

void mostrarNumeroPorPantalla(string mensaje, int numero){
    cout << mensaje << numero << endl;
}
