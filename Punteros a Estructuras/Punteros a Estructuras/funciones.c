#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

int  newPersona(ePersona* miPersona, int dni, char nombre[], float altura)
{
    int retorno=0;
    if(miPersona!=NULL)
    {
        miPersona->dni = dni;
        strcpy(miPersona->nombre, nombre);
        miPersona->altura = altura;
        retorno = 1;
    }
    return retorno;

}

void personaToString(ePersona* miPersona)
{
    printf("%d--%s--%.2f\n",  miPersona->dni,  miPersona->nombre,  miPersona->altura);
}

void altaPersona(ePersona* listaPersonas[], int tam)
{
    int i;
    int dni;
    char nombre[50];
    float altura;
       for(i=0; i<tam; i++)
    {
        printf("Ingrese el dni: ");
        scanf("%d", &dni);
        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(nombre);
        printf("Ingrese la altura: ");
        scanf("%f", &altura);


        if(newPersona(listaPersonas+i, dni, nombre, altura))
        {
            printf("Persona generada con exito!!!");
        }
        else
        {
            printf("Carga fallida");
        }


}
}

void ordenarPersona (ePersona* listaPersona[], int tam)
{
    char auxPersona;
    int i, j;

    for(i=0;i<tam-1; i++)
    {
        for(j= i+1; j<tam; j++)
        {
            if(*(listaPersona+i)< *(listaPersona+j))
            {
                auxPersona = *(listaPersona+i);
                *(listaPersona+i)= *(listaPersona+j);
                *(listaPersona+j) = auxPersona;
            }


        }
    }
}
