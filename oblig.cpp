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

TipoRetorno InsertarPalabra(Texto &a, Posicion posicionLinea, Posicion posicionPalabra, Cadena palabra){
    int response = insertarPalabra(a, posicionLinea, posicionPalabra, palabra);

    if(response == 1){
        return OK;
    }else{
        return ERROR;
    }        
}

TipoRetorno BorrarPalabra(Texto a, Posicion posicionLinea, Posicion posicionPalabra){
    int response = borrarPalabra(a, posicionLinea, posicionPalabra);

    if(response == 1){
        return OK;
    }else{
        return ERROR;
    }   
}

TipoRetorno BorrarOcurrenciasPalabraEnLinea(Texto a, Posicion posicionLinea, Cadena palabraABorrar){
    int response = borrarOcurrenciasPalabraEnLinea(a, posicionLinea, palabraABorrar);

    if(response == 1){
        return OK;
    }else{
        return ERROR;
    }  
}

TipoRetorno BorrarOcurrenciasPalabraEnTexto(Texto a, Cadena palabraABorrar){
    int response = borrarOcurrenciasPalabraEnTexto(a, palabraABorrar);

    if(response == 1){
        return OK;
    }else{
        return ERROR;
    }  
}

/*
TipoRetorno ComprimirTexto(Texto &a);
*/
