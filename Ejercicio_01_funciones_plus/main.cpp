#include "ejercicio_01_plus.h"

using namespace std;

int main()
{
    int numero1=0;
    int numero2=0;

    numero1 = leerNumeroDesdePantalla();
    numero2 = leerNumeroDesdePantalla();

    mostrarNumeroPorPantalla("La suma es: ", sumar(numero1, numero2));
    mostrarNumeroPorPantalla("La resta es: ", restar(numero1, numero2));
    mostrarNumeroPorPantalla("El producto es: ", multiplicar(numero1, numero2));
    mostrarNumeroPorPantalla("La división es: ", dividir(numero1, numero2));

    return 0;
}
