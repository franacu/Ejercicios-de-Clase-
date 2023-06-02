//
// Created by Fran on 30/05/2023.
//

#include "nodo.h"
#include <stdio.h>
#include <stdlib.h>

Nodo * newNodo(int valor)
{
    Nodo * aux=NULL;
    aux=malloc(sizeof(Nodo));

    if(aux==NULL)
    {
        exit -1;
    }

    aux->siguiente=NULL;
    aux->valor=valor;
    return aux;
}
Lista * newLista()
{
    Lista * aux=NULL;
    aux= malloc(sizeof(Lista));
    aux->cabecera=NULL;
    return aux;
}
void insertarAlFinaldeLista(Lista * lista,Nodo * nodoAinsertar)
{
    if(lista->cabecera == NULL)
        //significa q no hay elementos en la lista
        // nodoAinsertar tiene q ser el primer elemento ya q no hay elementos
        // nodoAinsertar es el "ultimo nodo" q en este caso es el primero, xq no hay elementos.
    {
        lista->cabecera=nodoAinsertar;
    }else
        //tengo elementos en la lista....q hago despues?-> busco el ultimo elemento en la lista
        {
            Nodo * aux=lista->cabecera;  // defino un auxilar(representante del numero/elemento
            while(aux->siguiente != NULL) //mientras aux en el campo siguiente sea distinto de NULL..continua
                {
                    aux=aux->siguiente;
                }
            // una vez q termino el while, aux esta apuntando en el ultimo elemento(nodoAinsertar)
            aux->siguiente=nodoAinsertar;
        }
}
int valorExiste(Lista *lista,int valorAbuscar) {
    Nodo * aux = lista->cabecera;
    while (aux != NULL && aux->valor != valorAbuscar) {
        aux = aux->siguiente;
    }
    //o encontro el valor o se pasó (no existe el valor)
    return aux != NULL;    //    if(aux=NULL)
    //        return 0; ---> return aux != NULL
    //    else
    //        return 1
}
    int tamanioDeLista(Lista * lista)   //queremos contar cuantos nodos tiene la lista, como lo hacemos?
                                                // vamos a tener un valor de aux, q va a ir apuntando al primer elemento de la lista
                                        // diferente de NULL, ya q si llegamos a NULL, significa q llegamos al final de la lista
    {
        Nodo * aux=lista->cabecera;
        int contador=0;
        while(aux!=NULL)
        {
            aux=aux->siguiente;
            contador++;
        }
        return contador;
    }

void eliminarValorDeLista(Lista * lista,int valorAeliminar)
{
    if(lista->cabecera=NULL)
    {
        printf("La lista esta vacia");
    }else
        {
            Nodo * ant=lista->cabecera;
            Nodo * act=ant;
            while (act != NULL && act->valor != valorAeliminar) {
                ant=act;      // de esta manera, el anterior ocupa el lugar del actual
                act = act->siguiente;  //y el actual va al siguiente puntero
                if(act==NULL)
                {
                    printf("El elemento %d no esta en la lista",valorAeliminar);
                }
                else if(act=lista->cabecera)  // que esta el actual en el primer elemento
                     {
                            lista->cabecera=act->siguiente;
                            free(act);
                     }else
                        {
                            ant->siguiente=act->siguiente;
                            free(act);
                        }

            }
        }
}