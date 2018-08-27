#include <iostream>

#define CANTIDAD 50

using namespace std;

int main()
{

    int sumaMenoresQueMenosDiez = 0;

    int cantidadMayoresQueCien = 0;
    int sumaAuxiliar=0;
    float promedio = 0;
    int numero=0;
    int i=0;

    for(i=0; i < CANTIDAD; i++){
        cout << "Ingrese un número entero: ";
        cin >> numero;
        if(numero < -10){
            sumaMenoresQueMenosDiez = sumaMenoresQueMenosDiez + numero;
        }

        if(numero > 100){
            cantidadMayoresQueCien++;
            sumaAuxiliar = sumaAuxiliar + numero;
        }
    }

    if(cantidadMayoresQueCien > 0){
        promedio = sumaAuxiliar / cantidadMayoresQueCien;
    }


    cout << "La suma de los menores de -10 es: " << sumaMenoresQueMenosDiez << endl;
    cout << "El promedio de los mayores de 100 es: " << promedio << endl;
    cout << "Hello world!" << endl;
    return 0;
}
