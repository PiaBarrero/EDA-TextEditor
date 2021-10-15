#include "linea.h"
#include <stdlib.h>
#include <stdio.h>

Palabra crearPalabrasVacia()
{
    return NULL;
}

int largoLinea(Texto a, Posicion posicion)
{
    int largo = largoTexto(a);

    if (a == NULL)
    {
        return 0;
    }
    else if (posicion < 1 || posicion > largo)
    {
        return 0;
    }
    else
    {
        int count = largo;
        int countP = 0;

        while (a != NULL)
        {
            if (count == posicion)
            {
                Palabra aux = a->palabras;

                while (aux != NULL)
                {
                    countP++;
                    aux = aux->sig;
                }
            }

            count--;
            a = a->sig;
        }

        return countP;
    }
}

int insertarPalabra(Texto &a, Posicion posicionLinea, Posicion posicionPalabra, Cadena palabra)
{
    Texto aux = a;
    Texto ant = a;

    int countL = largoTexto(a);
    int largoL = countL;
    int countP = 1;
    int largoP = largoLinea(a, posicionLinea);

    if ((posicionLinea <= countL) && (posicionLinea >= 1) && (posicionPalabra >= 1) && (posicionPalabra <= largoP + 1))
    {

        while (aux != NULL) // Recorrer lineas
        {
            if (countL == posicionLinea)
            {

                Palabra auxP = aux->palabras;
                Palabra antP = auxP;

                if (auxP == NULL)
                {
                    auxP = new str_pal;
                    auxP->palabra = palabra;
                    auxP->sig = NULL;
                    aux->palabras = auxP;

                    return 1;
                }
                else
                {
                    while (auxP != NULL) // Recorrer palabras
                    {
                        if (countP == posicionPalabra)
                        {
                            if (antP == auxP)
                            {
                                antP = new str_pal;
                                antP->palabra = palabra;
                                antP->sig = auxP;
                                aux->palabras = antP;

                                return 1;
                            }
                            else
                            {
                                antP->sig = new str_pal;
                                antP->sig->palabra = palabra;
                                antP->sig->sig = auxP;

                                return 1;
                            }
                        }
                        else if (auxP->sig == NULL)
                        {
                            auxP->sig = new str_pal;
                            auxP->sig->palabra = palabra;
                            auxP->sig->sig = NULL;

                            return 1;
                        }

                        antP = auxP;
                        auxP = auxP->sig;
                        countP++;
                    }
                }
            }

            aux = aux->sig;
            countL--;
        }
    }
    else
    {
        return 0;
    }
}

int borrarPalabra(Texto &a, Posicion posicionLinea, Posicion posicionPalabra)
{
    Texto aux = a;
    Texto ant = a;

    int countL = largoTexto(a);
    int largoL = countL;
    int countP = 1;
    int largoP = largoLinea(a, posicionLinea);

    if ((posicionLinea <= countL) && (posicionLinea >= 1) && (posicionPalabra >= 1) && (posicionPalabra <= largoP))
    { // Si la posicion de la linea y de la palabra existen:
        while (aux != NULL)
        {
            if (countL == posicionLinea)
            { //Si el contador llego a la posicion en linea
                //Creo una linea auxiliar y anterior
                Palabra auxP = aux->palabras; //AuxP apunta al primer nodo de aux (la linea original en la posicionLinea)
                Palabra antP = auxP;

                if (auxP == NULL) //Si la linea está vacía
                {
                    return 0; //Error porque no hay nada pa borrar, aunque si no hay no deberia entrar por el if anterior, so.. debe estar mal
                }
                else
                {

                    while (auxP != NULL) // Recorro la linea
                    {
                        if (countP == posicionPalabra) // Si el contador llegó a la posicionPalabra
                        {
                            if (antP == auxP)
                            {                //Si antp y auxp estan con el mismo nodo
                                delete antP; //borro el nodo en ambos
                                antP = antP->sig; // Los hago avanzar
                                return 1; //Done
                            }
                            else
                            {
                                antP = auxP->sig;      // el nodo actual de antp, saltea el nodo actual de auxP y apunta al siguiente de auxP
                                delete auxP;           //Borro el nodo actual de auxP
                                auxP = auxP->sig;      //le hago avanzar al siguiente nodo
                                antP->sig = auxP->sig; //El siguiente nodo de antP apunta al siguiente de auxP
                                return 1;              //Done
                            }
                        }
                        antP = auxP;
                        auxP = auxP->sig;
                        countP++;
                    }
                }
                aux = aux->sig;
                countL--;
            }
        }
    }
    else
    {
        return 0;
    }
}

int borrarOcurrenciasPalabraEnLinea(Texto a, Posicion posicionLinea, Cadena palabraABorrar)
{
    Texto aux = a;

    int largoL = largoTexto(a);
    int countL = largoL;

    if (a == NULL)
    {
        return 0;
    }
    else
    {
        if ((posicionLinea <= countL) && (posicionLinea >= 1))
        {
            while (aux != NULL)
            {
                if (countL == posicionLinea)
                {

                    //Creo una linea auxiliar y anterior
                    Palabra auxP = aux->palabras; //AuxP apunta al primer nodo de aux (la linea original en la posicionLinea)
                    Palabra antP = auxP;

                    int largoP = largoLinea(a, countL);
                    int countP = largoP;

                    while (auxP != NULL)
                    {
                        if (countP != 0)
                        {
                            if (antP == auxP)
                            { //Primer caso
                                if (auxP->palabra == palabraABorrar)
                                {
                                    delete auxP;
                                    return 1;
                                }
                                else
                                {
                                    auxP = auxP->sig;
                                    antP = auxP;
                                }
                            }
                            else
                            {
                                if (auxP->palabra == palabraABorrar)
                                {
                                    antP = auxP->sig;
                                    delete auxP;
                                    return 1;
                                }
                                else
                                {
                                    auxP = auxP->sig;
                                    antP = auxP;
                                }
                            }
                        }
                        antP = auxP;
                        auxP = auxP->sig;
                        countP--;
                    }
                }
                aux = aux->sig;
                countL--;
            }
        }
        else
        {
            return 0;
        }
    }
}

int borrarOcurrenciasPalabraEnTexto(Texto a, Cadena palabraABorrar)
{

    Texto aux = a;

    int largoL = largoTexto(a);
    int countL = largoL;

    if (a == NULL)
    {
        return 0;
    }
    else
    {
        return 1;
        while (aux != NULL)
        {
            borrarOcurrenciasPalabraEnLinea(a, countL, palabraABorrar);
            aux = aux->sig;
            countL--;
        }
    }
}
