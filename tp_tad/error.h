#ifndef ERROR_H_INCLUDED
#define ERROR_H_INCLUDED

#define ERROR_LENGHT 40

#include <stdio.h>

enum ERROR_TYPE {
    ERR_OK,
    ERR_NO_GARAGE

};

typedef struct error {
    int err_no;
    char err_desc[ERROR_LENGHT + 1];
} ERROR_ST;


/**
 * Crea un error y lo devuelve.
 *
 * @param[in] {ERROR_TYPE} errorNumber número de error.
 * @param[in] {char *} description descripción del error.
 * @return {ERROR_ST} error creado
 */
ERROR_ST createError(ERROR_TYPE error, char description[ERROR_LENGHT + 1]);

/**
 * Imprime la descripción del error por pantalla. Agrega fecha y hora.
 *
 * @param[in] {ERROR_ST} error a imprimir
 */
void logError(ERROR_ST error);

/**
 * Imprime la descripción del error por pantalla.
 *
 * @param[in] {ERROR_ST} error a imprimir
 * @param[in] {char *} texto extra. En caso de ser distinto de null se imprime.
 */
void printError(ERROR_ST error, char *text = NULL);



#endif // ERROR_H_INCLUDED
