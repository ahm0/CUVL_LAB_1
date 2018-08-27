#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int numero=0;
    int cantidad=0;

    cout << "*** Ingrese un numero negativo para terminar ***" << endl;
    cout << "Ingrese un número:" << endl;
    cin >> numero;
    if(cin.fail()){
        cout << "Error. Debe ingresar un número." << endl;
        exit(EXIT_FAILURE);
    }

    while(numero >= 0){
        cantidad ++;
        cin >> numero;
        if(cin.fail()){
            cout << "Error. Debe ingresar un número." << endl;
            exit(EXIT_FAILURE);
        }
    }

    cout << "La cantidad de números ingresados es: " << cantidad << endl;
    exit(EXIT_SUCCESS);
}
