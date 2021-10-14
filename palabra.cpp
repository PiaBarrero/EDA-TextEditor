#include "palabra.h"
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
