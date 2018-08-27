#include <iostream>

using namespace std;

int main()
{
    int numero_1 = 0;
    int numero_2 = 0;
    int i=0;
    int suma=0;

    cout << "Ingrese un número: " << endl;
    cin >> numero_1;

    cout << "Ingrese otro número: " << endl;
    cin >> numero_2;

    for(i=0; i<numero_2; i++){
        suma = suma + numero_1;
    }

    cout << "El producto de " << numero_1 << " y " << numero_2 << " es: " << suma << endl;
    return 0;
}
