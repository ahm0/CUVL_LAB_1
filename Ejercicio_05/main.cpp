#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int numero_1 = 0;
    int numero_2 = 0;
    cout << "Ingrese un valor entero" << endl;
    cin >> numero_1;
    if(cin.fail()){
        exit(EXIT_FAILURE);
    }

    cout << "Ingrese otro valor entero" << endl;
    cin >> numero_2;
    if(cin.fail()){
        exit(EXIT_FAILURE);
    }

    if(numero_1 > numero_2){
        cout << "El número: " << numero_1 << " es mayor que: " << numero_2 << endl;
    }
    else{
        if(numero_1 < numero_2){
            cout << "El número: " << numero_1 << " es menor que: " << numero_2 << endl;
        }
        else{
            cout << "Los números ingresados son iguales" << endl;
        }
    }
    return 0;
}
