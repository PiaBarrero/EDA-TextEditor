#ifndef OBLIG_H
#define OBLIG_H

#include "linea.h"

//#define MAX_CANT_PALABRAS_X_LINEA 10

typedef char* Cadena;

enum _retorno{
    OK, ERROR, NO_IMPLEMENTADA
};
typedef enum _retorno TipoRetorno;

typedef unsigned int Posicion;

TipoRetorno CrearTexto(Texto &a);
TipoRetorno InsertarLinea(Texto &a);

TipoRetorno ImprimirTexto(Texto a);

/*
TipoRetorno InsertarLineaEnPosicion(Texto &a, Posicion posicionLinea);
TipoRetorno BorrarLinea(Texto &a, Posicion posicionLinea);
TipoRetorno BorrarTodo(Texto &a);
TipoRetorno BorrarOcurrenciasPalabraEnTexto(Texto a, Cadena palabraABorrar);
TipoRetorno ImprimirTexto(Texto a);
TipoRetorno ComprimirTexto(Texto &a);
TipoRetorno InsertarPalabra(Texto a, Posicion posicionLinea, Posicion posicionPalabra, Cadena palabraAIngresar);
TipoRetorno BorrarPalabra(Texto a, Posicion posicionLinea, Posicion posicionPalabra);
TipoRetorno BorrarOcurrenciasPalabraEnLinea(Texto a, Posicion posicionLinea, Cadena palabraABorrar);
TipoRetorno ImprimirLinea(Texto a, Posicion posicionLinea);
*/


#endif // OBLIG_H
