#include "linea.h"
#include <stdlib.h>
#include <stdio.h>

Texto crearTexto()
{
    return NULL;
}

int largoTexto(Texto a)
{
    if (a == NULL)
    {
        return 0;
    }
    else
    {
        return 1 + largoTexto(a->sig);
    }
}

void insertarLinea(Texto &a)
{
    Texto aux = new str_linea;
    aux->palabras = crearPalabrasVacia();
    aux->sig = a;
    a = aux;
}

void imprimirTexto(Texto a)
{
    if (a == NULL)
    {
        printf(" NULL \n");
    }
    else
    {
        imprimirTexto(a->sig);
        printf(" hay linea \n");
    }
}

int insertarLineaEnPosicion(Texto &a, Posicion posicion)
{
    Texto aux = a;
    Texto ant = a;

    int largo = largoTexto(a);
    int count = largo;

    if (posicion > (largo + 1) || posicion == 0)
    {
        return 0;
    }
    else if (posicion == (largo + 1))
    {
        insertarLinea(a);
    }
    else
    {
        while (aux != NULL)
        {
            if (posicion == count)
            {
                if (ant == aux)
                {
                    ant = new str_linea;
                    ant->palabras = crearPalabrasVacia();
                    ant->sig = a;
                    a = ant;

                    return 1;
                }
                else
                {
                    ant->sig = new str_linea;
                    ant->sig->palabras = crearPalabrasVacia();
                    ant->sig->sig = aux;
                    a = ant;

                    return 1;
                }
            }

            ant = aux;
            aux = aux->sig;
            count--;
        }
    }
}

int borrarLinea(Texto &a, Posicion posicion)
{
    Texto aux = a;
    Texto ant = a;

    int largo = largoTexto(a);
    int count = largo;

    if (posicion > largo || posicion < 1)
    {
        return 0;
    }
    else
    {
        while (aux != NULL)
        {
            if (posicion == count)
            {
                if (ant == aux)
                {
                    a = a->sig;
                    delete aux;

                    return 1;
                }
                else
                {
                    ant->sig = aux->sig;
                    delete aux;

                    return 1;
                }
            }

            ant = aux;
            aux = aux->sig;
            count--;
        }
    }
}

void borrarTodo(Texto &a)
{
    Texto aux = a;

    while (aux != NULL)
    {
        a = aux->sig;
        delete aux;
        aux = a;
    }
}