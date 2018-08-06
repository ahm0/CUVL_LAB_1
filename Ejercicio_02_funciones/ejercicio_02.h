#ifndef EJERCICIO_02_H_INCLUDED
#define EJERCICIO_02_H_INCLUDED

#include <string>
#include <iostream>
#include <stdlib.h>

using namespace std;

/**
 * Lee un número de la entrada estándar (pantalla)
 * Valida que lo ingresado sea un número.
 * @param {string} mensaje a mostrar al usuario
 * @return {int} numero ingresado
 */
int leerNumeroDesdePantalla(string mensjae);

/**
 * Calcula la fecha a partir de la terna dia, mes, año.
 * Devuelve la fecha en formato AAAAMMDD
 *
 * @param {int} dia
 * @param {int} mes
 * @param {int} anio
 * @return {int} fecha en formato AAAAMMDD
 */
int calcularFecha(int dia, int mes, int anio);

/**
 * Muestra por la salida estándar (pantalla) el mensaje recibido por parámetro
 * y le concatena el numero que se recibe también por parámetro.
 * @param {string} mensaje mensaje a mostrar por pantalla
 * @param {int} fecha a mostrar por pantalla.
 */
void mostrarFechaEnPantalla(string mensaje, int fecha);

#endif // EJERCICIO_01_H_INCLUDED

#endif // EJERCICIO_02_H_INCLUDED

