#include <iostream>

using namespace std;

int main()
{
    int dia=0;
    int mes=0;
    int anio=0;
    int fecha=0;

    cout << "Ingrese el día" << endl;
    cin >> dia;
    cout << "Ingrese el mes" << endl;
    cin >> mes;
    cout << "Ingrese el año" << endl;
    cin >> anio;

    fecha = anio*10000 + mes*100 + dia;

    cout << "La fecha ingresada es: " << fecha << endl;

    return 0;
}
