#include "oblig.h"
#include "linea.h"

#include <stdio.h>

int main(){
    Texto t;
    TipoRetorno tr = CrearTexto(t); // un texto vacio
    //-------------------------


    tr = InsertarLinea(t);
    tr = InsertarLinea(t);
    tr = InsertarLinea(t);

    char a[] = "Hola";
    char b[] = "Como";
    char c[] = "Estas";
    char d[] = "Bien";
    char e[] = "Emma";
    char f[] = "Vos";
    
    //printf("%s", t->palabras->palabra);

    tr = InsertarPalabra(t, 1, 1, a);
    tr = InsertarPalabra(t, 1, 2, b);

    tr = InsertarPalabra(t, 1, 1, a);
    tr = InsertarPalabra(t, 1, 1, a);
    tr = InsertarPalabra(t, 1, 1, a);
    tr = InsertarPalabra(t, 1, 1, a); 
    tr = InsertarPalabra(t, 1, 1, a); 
    tr = InsertarPalabra(t, 1, 1, a); 
    tr = InsertarPalabra(t, 1, 1, a); 
    tr = InsertarPalabra(t, 1, 1, a); 
    tr = InsertarPalabra(t, 1, 1, a); 

    tr = InsertarPalabra(t, 3, 2, f);

    tr = ImprimirTexto(t);

    return 0;
}
