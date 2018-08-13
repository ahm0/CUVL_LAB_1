#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    // Lo definimos como constante para prevenir que se modifique
    const int fecha = 20180813;

    // La operación división "a / b" devuelve el cociente de la división
    int anio = fecha / 10000;

    int mes = (fecha % 10000) / 100;

    // La operación módulo "a % b" devuelve el resto de la división
    int dia = fecha % 100;

    cout << "Día: " << dia << endl;
    cout << "Mes: " << mes << endl;
    cout << "Año: " << anio << endl;

    printf("\n--------------------Salida Formateada--------------------\n");
    printf("Día: %02d\nMes: %02d\nAño: %d.", dia, mes, anio);

    return 0;
}
