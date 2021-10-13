#ifndef PALABRA_H
#define PALABRA_H

typedef char* Cadena;

struct str_pal{
    Cadena palabra;
    struct str_pal * sig;
};

typedef struct str_pal * Palabra;

typedef struct str_linea * Texto;

typedef unsigned int Posicion;

Palabra crearPalabrasVacia();

int insertarPalabra(Texto a, Posicion posicionLinea, Posicion posicionPalabra, Cadena palabra);


#endif // PALABRA_H
