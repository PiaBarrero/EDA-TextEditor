#include "oblig.h"

TipoRetorno CrearTexto(Texto &a){
    a = crearTextoVacio();
    return OK;
}

TipoRetorno InsertarLinea(Texto &a){
    crearLinea(a);
    return OK;
}

TipoRetorno ImprimirTexto(Texto a){
    imprimirLinea(a);
    return OK;
}

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
