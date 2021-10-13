#include "oblig.h"

TipoRetorno ImprimirTexto(Texto a){
    imprimirTexto(a);
    return OK;
}

TipoRetorno CrearTexto(Texto &a){
    a = crearTexto();
    return OK;
}

TipoRetorno InsertarLinea(Texto &a){
    insertarLinea(a);
    return OK;
}

TipoRetorno InsertarLineaEnPosicion(Texto &a, Posicion posicion){
    int response = insertarLineaEnPosicion(a, posicion);

    if(response == 1){
        return OK;
    }else{
        return ERROR;
    }    
}

TipoRetorno BorrarLinea(Texto &a, Posicion posicion){
    int response = borrarLinea(a, posicion);

    if(response == 1){
        return OK;
    }else{
        return ERROR;
    }    
}

TipoRetorno BorrarTodo(Texto &a){
    borrarTodo(a);
    return OK;
}

TipoRetorno InsertarPalabra(Texto a, Posicion posicionLinea, Posicion posicionPalabra, Cadena palabra){
    int response = insertarPalabra(a, posicionLinea, posicionPalabra, palabra);


}

/*
TipoRetorno BorrarOcurrenciasPalabraEnTexto(Texto a, Cadena palabraABorrar);
TipoRetorno ComprimirTexto(Texto &a);
TipoRetorno BorrarPalabra(Texto a, Posicion posicionLinea, Posicion posicionPalabra);
TipoRetorno BorrarOcurrenciasPalabraEnLinea(Texto a, Posicion posicionLinea, Cadena palabraABorrar);
TipoRetorno ImprimirLinea(Texto a, Posicion posicionLinea);
*/
