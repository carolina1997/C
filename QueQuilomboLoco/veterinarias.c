#include <string.h>
#include "veterinarias.h"
//DESARROLLOS

ePerro cargarPerros(int identificador, int raza, char nombrePerro[], int vacunasAlDia)
{
    ePerro perrito;
    perrito.identificador=identificador;
    perrito.raza=raza;
    strcpy(perrito.nombrePerro,nombrePerro);
    perrito.vacunasAlDia=vacunasAlDia;

    return perrito;

}

eDuenio cargarDuenios(int codigo, char nombreDuenio[], char telefono[])
{
    eDuenio duenioPerrito;
    duenioPerrito.codigo=codigo;
    strcpy(duenioPerrito.nombreDuenio, nombreDuenio);
    strcpy(duenioPerrito.telefono,telefono);

    return duenioPerrito;
}

void mostrarPerro(ePerro perros)
{
   printf("\nidentificador: %d\n, raza: %d\n, nombre del perro: %s\n, vacunas: %d\n ", perros.identificador,perros.raza,perros.nombrePerro,perros.vacunasAlDia);
}

void mostrarDuenios(eDuenio duenios)
{
   printf("\ncodigo: %d\n, nombre: %s\n, telefono: %s\n ", duenios.codigo,duenios.nombreDuenio,duenios.telefono);
}


