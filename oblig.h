#ifndef OBLIG_H
#define OBLIG_H

#include "linea.h"

#define MAX_CANT_PALABRAS_X_LINEA 4

typedef char* Cadena;

enum _retorno{
    OK, ERROR, NO_IMPLEMENTADA
};

typedef enum _retorno TipoRetorno;

TipoRetorno ImprimirTexto(Texto a);

TipoRetorno CrearTexto(Texto &a);

TipoRetorno InsertarLinea(Texto &a);

TipoRetorno InsertarLineaEnPosicion(Texto &a, Posicion posicion);

TipoRetorno BorrarLinea(Texto &a, Posicion posicion);

TipoRetorno BorrarTodo(Texto &a);

TipoRetorno InsertarPalabra(Texto &a, Posicion posicionLinea, Posicion posicionPalabra, Cadena palabra);

/*
TipoRetorno BorrarOcurrenciasPalabraEnTexto(Texto a, Cadena palabraABorrar);
TipoRetorno ComprimirTexto(Texto &a);
TipoRetorno BorrarPalabra(Texto a, Posicion posicionLinea, Posicion posicionPalabra);
TipoRetorno BorrarOcurrenciasPalabraEnLinea(Texto a, Posicion posicionLinea, Cadena palabraABorrar);
*/


#endif // OBLIG_H
