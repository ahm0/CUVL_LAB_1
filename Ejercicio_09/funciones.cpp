#include "ejercicio_09.h"

bool esBisiesto(int anio){
    return ((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0);
}

int obtenerDiasDelMes(int mes, int anio){
    int dias=0;

    switch (mes) {
        case ENERO:
        case MARZO:
        case MAYO:
        case JULIO:
        case AGOSTO:
        case OCTUBRE:
        case DICIEMBRE:
            dias = 31;
            break;
        case ABRIL:
        case JUNIO:
        case SEPTIEMBRE:
        case NOVIEMBRE:
            dias = 30;
            break;
        case FEBRERO:
            dias = esBisiesto(anio)? 29 : 28;
            break;
    }

    return dias;
}
