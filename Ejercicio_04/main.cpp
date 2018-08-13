#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int numero = 0;

    cout << "Ingrese un valor entero: " << endl;
    cin >> numero;
    if(cin.fail()){
        exit(EXIT_FAILURE);
    }

    cout << "La quinta parte de: " << numero << " es: " << numero / 5 << endl;
    cout << "El resto de dividir: " << numero << " por 5 es: " << numero % 5 << endl;
    cout << "La septima parte de: " << numero / 5 << " es: " << numero / 5 / 7<< endl;



    return 0;
}
