#ifndef EJERCICIO_01_H_INCLUDED
#define EJERCICIO_01_H_INCLUDED

#include <string>

/**
 * Lee un número de la entrada estándar (pantalla)
 * Valida que lo ingresado sea un número.
 * @return {int} numero ingresado
 */
int leerNumeroDesdePantalla();

/**
 * Muestra por la salida estándar (pantalla) el mensaje recibido por parámetro
 * y le concatena el numero que se recibe también por parámetro.
 * @param {string} mensaje mensaje a mostrar por pantalla
 * @param {int} número a mostrar por pantalla.
 */
void mostrarNumeroEnPantalla(std::string mensaje, int numero);

#endif // EJERCICIO_01_H_INCLUDED
