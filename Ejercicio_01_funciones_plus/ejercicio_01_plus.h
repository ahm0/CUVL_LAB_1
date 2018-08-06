#include <iostream>
#include <string>

using namespace std;

/**
 * Lee un número de la entrada estándar (pantalla)
 * Valida que lo ingresado sea un número.
 * @return {int} numero ingresado
 */
int leerNumeroDesdePantalla();

/**
 * Devuelve el resultado de sumar numero1 y numero2
 *
 * @param {int} numero1
 * @param {int} numero2
 * @return {int} suma de numero1 y numero2
 */
int sumar(int numero1, int numero2);

/**
 * Devuelve el resultado de restar numero1 y numero2
 *
 * @param {int} numero1
 * @param {int} numero2
 * @return {int} resta de numero1 y numero2
 */
int restar(int numero1, int numero2);

/**
 * Devuelve el resultado de multiplicar numero1 y numero2
 *
 * @param {int} numero1
 * @param {int} numero2
 * @return {int} producto de numero1 y numero2
 */
int multiplicar(int numero1, int numero2);

/**
 * Devuelve el resultado de dividir dividendo por el divisor
 * Valida que divisor sea distinto de 0 (cero).
 *
 * @param {int} divisor
 * @param {int} dividendo
 * @return {int} cociente entre dividendo y divisor
 */
int dividir(int dividendo, int divisor);

/**
 * Muestra por la salida estándar (pantalla) el mensaje recibido por parámetro
 * y le concatena el numero que se recibe también por parámetro.
 * @param {string} mensaje mensaje a mostrar por pantalla
 * @param {int} número a mostrar por pantalla.
 */
void mostrarNumeroPorPantalla(string mensaje, int numero);
