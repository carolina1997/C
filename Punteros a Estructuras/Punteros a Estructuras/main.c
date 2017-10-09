#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"


int main()
{

    ePersona listaPersonas[5];

    char seguir;
    int opcion;
    int i;

    do
    {
        printf("1-Alta persona");
        printf("2-Ordenar persona");
        printf("3-Baja persona");
        printf("4-Mostrar persona");
        printf("5-Salir");

        scanf("%d", &opcion);


        switch(opcion)

    {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;

    }
    }while(seguir = 's');



    printf("**************LISTA DE PERSONAS****************");
    for(i=0; i<5; i++)
    {
        personaToString(listaPersonas+i);
    }


    return 0;
}

