#include "linea.h"
#include <stdlib.h>
#include <stdio.h>

Texto crearTextoVacio(){
    return NULL;
}

void crearLinea(Texto &t){
    Texto aux = new str_linea;
    aux->palabras = crearPalabrasVacia();
    aux->sig = t;
    t = aux;
}

void imprimirLinea(Texto a){
    if (a == NULL){
        printf(" NULL \n");
    }else{
        imprimirLinea(a->sig);
        printf(" hay linea \n");
    }
}
