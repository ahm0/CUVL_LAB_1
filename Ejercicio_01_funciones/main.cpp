#include "ejercicio_01.h"

using namespace std;

int main()
{
    int numero1=0;
    int numero2=0;

    numero1 = leerNumeroDesdePantalla();
    numero2 = leerNumeroDesdePantalla();

    mostrarNumeroEnPantalla("La suma de los numeros es: ", numero1+numero2);
    return 0;
}
