#include <iostream>
#include <stdlib.h>
#include "ejercicio_05.h"

using namespace std;


/**
 * Indica si el primer numero es mayor que el segundo
 *
 * @param int numero_1 1er numero a comparar
 * @param int numero_2 2do numero a comparar
 * @returns bool true si el primer numero es mayor que el segundo. false en otro caso.
 */
bool esMayorQue(int numero_1, int numero_2){
    return numero_1 > numero_2;
}

/**
 * Indica si los numeros son iguales
 *
 * @param int numero_1 1er numero a comparar
 * @param int numero_2 2do numero a comparar
 * @returns bool true los numeros son iguales. false en otro caso.
 */
bool sonIguales(int numero_1, int numero_2){
    return numero_1 == numero_2;
}


int leerNumero(){
    int numero = 0;
    cout << "Ingrese un valor entero" << endl;
    cin >> numero;

    if(cin.fail()){
        cout << "Error. Debe ingresar un número entero" << endl;
        exit(EXIT_FAILURE);
    }

    return numero;
}

int compararNumeros(int numero_1, int numero_2){
    if(esMayorQue(numero_1, numero_2)){
        return MAYOR;
    }

    if(sonIguales(numero_1, numero_2)){
        return IGUAL;
    }

    return MENOR;
}

