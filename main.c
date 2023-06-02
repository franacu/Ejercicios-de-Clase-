#include <stdio.h>
#include "nodo.h"

int main()
{
    Lista * lista = newLista();

    insertarAlFinaldeLista(lista, newNodo(5));
    insertarAlFinaldeLista(lista, newNodo(3));
    insertarAlFinaldeLista(lista, newNodo(6));
    insertarAlFinaldeLista(lista, newNodo(18));
    insertarAlFinaldeLista(lista, newNodo(15));


    printf("Tamaño de la lista &d\n",tamanioDeLista(lista));

    if(valorExiste(lista, 5))
    {
        printf("Existe el 5\n");
    }else{
        printf("No existe el 5\n");
    }


    if(valorExiste(lista, 6))
    {
        printf("Existe el 6\n");
    }else {
        printf("No existe el 6\n");
    }


    if(valorExiste(lista, 20))
    {
        printf("Existe el 20\n");
    }else{
        printf("No existe el 20\n");
    }

    eliminarValorDeLista(lista,6);
    eliminarValorDeLista(lista,15);
    eliminarValorDeLista(lista,5);


    return 0;
}
