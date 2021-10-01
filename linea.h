#ifndef LINEA_H
#define LINEA_H

#include "palabra.h"

struct str_linea{
    Palabra palabras;
    str_linea * sig;
};

typedef struct str_linea * Texto;

Texto crearTextoVacio();

void crearLinea(Texto &t);

void imprimirLinea(Texto a);

#endif // LINEA_H
