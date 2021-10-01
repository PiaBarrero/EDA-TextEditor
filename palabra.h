#ifndef PALABRA_H
#define PALABRA_H

typedef char* Cadena;

struct str_pal{
    Cadena palabra;
    struct str_pal * sig;
};

typedef struct str_pal * Palabra;

Palabra crearPalabrasVacia();


#endif // PALABRA_H
