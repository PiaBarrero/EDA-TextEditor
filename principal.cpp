#include "oblig.h"
#include "linea.h"

#include <stdio.h>

int main(){
    Texto t;
    Posicion p = 4;
    TipoRetorno tr = CrearTexto(t); // un texto vacio
    //-------------------------


    if(tr == OK){
        printf("Se pudo crear el texto vacio\n");
    }else{
        printf("ERROR - NO se pudo crear el texto vacio\n");
    }
    tr = InsertarLinea(t);
    tr = InsertarLinea(t);
    tr = InsertarLinea(t);
    tr = InsertarLinea(t);
    tr = InsertarLinea(t);

    tr = InsertarLineaEnPosicion(t, p);

    tr = BorrarLinea(t, p);


    tr = BorrarTodo(t);


    tr = ImprimirTexto(t);

}
