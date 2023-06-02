//
// Created by Fran on 30/05/2023.
//

#ifndef UNTITLED3_NODO_H
#define UNTITLED3_NODO_H

typedef struct nodo{
    int valor;
    struct nodo * siguiente;
}Nodo;
typedef struct lista{
    Nodo * cabecera;
    int tamanio;
}Lista;

Nodo * newNodo(int valor);
Lista * newLista();
int valorExiste(Lista *lista,int valorAbuscar);  //Lista * lista significa pasar la lista con su contenido
int tamanioDeLista(Lista * lista);
void insertarAlFinaldeLista(Lista * lista,Nodo * nodoAinsertar);
void eliminarValorDeLista(Lista * lista,int valorAeliminar);

#endif //UNTITLED3_NODO_H
