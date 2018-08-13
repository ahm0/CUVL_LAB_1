#ifndef EJERCICIO_06_H_INCLUDED
#define EJERCICIO_06_H_INCLUDED

#include <string>
using namespace std;

enum {MAYOR, MENOR, IGUAL};

/**
 * Lee y devuelve un número desde la entrada estandar.
 *
 * @param string mensaje
 * @returns int numero leído.
 */
int leerNumero(string mensaje);

/**
 * Obtiene una fecha en formato AAAAMMDD a partir del dia, mes y año.
 *
 * @returns int fecha en formato AAAAMMDD
 */
int obtenerFecha(int, int, int);

/**
 * Compara 2 fechas en formato AAAAMMDD. Indica si la primera es mayor, menor o
 * igual que la segunda.
 *
 * @param int fecha_1
 * @param int fecha_2
 * @returns int {MAYOR, MENOR, IGUAL}
 */
int comparaFechas(int, int);

#endif // EJERCICIO_06_H_INCLUDED
