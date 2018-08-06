#include "ejercicio_01_plus.h"

using namespace std;

/**
 * Ej. MI-1 Dados dos valores enteros A y B, informar la suma, la resta y el producto.
 */
int main()
{
    int numero1=0;
    int numero2=0;

    numero1 = leerNumeroDesdePantalla();
    numero2 = leerNumeroDesdePantalla();

    mostrarNumeroPorPantalla("La suma es: ", sumar(numero1, numero2));
    mostrarNumeroPorPantalla("La resta es: ", restar(numero1, numero2));
    mostrarNumeroPorPantalla("El producto es: ", multiplicar(numero1, numero2));
    mostrarNumeroPorPantalla("El cociente es: ", dividir(numero1, numero2));

    return 0;
}
