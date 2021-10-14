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
    tr = InsertarLinea(t);
    tr = InsertarLinea(t);
    tr = InsertarLinea(t);

    char a[] = "Hola";
    char b[] = "Como";
    char c[] = "Estas";
    char d[] = "Bien";
    char e[] = "Y";
    char f[] = "Vos";
    
    tr = InsertarPalabra(t, 1, 1, a); // Hola

    //printf("%s", t->palabras->palabra);

    tr = InsertarPalabra(t, 1, 2, b); // Hola Como
    tr = InsertarPalabra(t, 1, 3, c); // Hola como estas
    tr = InsertarPalabra(t, 1, 2, d); // Hola bien como estas
    tr = InsertarPalabra(t, 1, 1, e); // y hola bien como estas
    tr = InsertarPalabra(t, 1, 3, f); // y hola vos bien como estas
    

    tr = InsertarPalabra(t, 4, 1, f);

    tr = InsertarPalabra(t, 2, 1, b);

    tr = InsertarLineaEnPosicion(t, 2);

    // tr = BorrarLinea(t, 5);
    
    //tr = BorrarTodo(t);
    


    tr = ImprimirTexto(t);

    return 0;
}
