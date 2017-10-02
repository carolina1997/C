#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int* punteroInt;

    int variable= 9;

    punteroInt = &variable;

    printf("direccion de memoria de la variable: %p\n", &variable);
    printf("el valor de la variable es: %d\n", *punteroInt);
    printf("la direcccion de memoria del puntero es: %d\n", &punteroInt);
    printf("lo que guarda el puntero: %p", punteroInt);
    printf("el valor que contiene por medio del puntero es: %d")*/


    int n;
    int* p;

    p=&n; //apunta a la direccion de memoria de n

    printf("Direccion de memoria de n: %d\n",p); //si es un puntero, no hay que poner el "&"
    printf("%d\n",p+1); //sumo 4 bits
    printf("%d\n",p+2); //suma otros 4 bits (va aumentando todo el tiempo 4+ bits)
    printf("%d\n",p+0); //si pones "0" vuelve desde el inicio
    printf("%d\n",p++); //se queda igual




    return 0;
}
