#ifndef EJERCICIO_05_H_INCLUDED
#define EJERCICIO_05_H_INCLUDED

enum {MAYOR, MENOR, IGUAL};

/**
 * Lee y devuelve un número desde la entrada estandar.
 *
 * @returns int numero leído.
 */

int leerNumero();

/**
 * Indica si el primer numero es mayor que el segundo
 *
 * @param int numero_1 1er numero a comparar
 * @param int numero_2 2do numero a comparar
 * @returns bool true si el primer numero es mayor que el segundo. false en otro caso.
 */
int compararNumeros(int, int);


#endif // EJERCICIO_05_H_INCLUDED
