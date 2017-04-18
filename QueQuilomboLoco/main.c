#include <stdio.h>
#include <stdlib.h>
#include "veterinarias.h"



int main()
{
   system("color 43");//COLOR DE FONDO
   eDuenio duenio[2];
   ePerro perro[2];
   int identificador[5],raza,codigo[5],vacunasAlDia, opcion=0, contadorDeVacunas=0, flagSalir=0, auxiOrdenar;
   char nombrePerro[20], nombreDuenio[50], telefono[20], seguir='s';
   int i, j;


do
 {
     system("cls");
     printf("***VETERINARIA QUILMES***\n");
      printf("1-Ingresar DATOS de los PERROS\n");
      printf("2-Ingresar DATOS de los DUEÑOS\n");
      printf("3-Mostrar los datos de los PERROS ingresados\n");
      printf("4-Mostrar los datos de los DUEÑOS ingresados\n");
      printf("5-Listado de PERROS con sus DUEÑOS\n");
      printf("6-Listado de DUEÑOS con sus PERROS\n");
      printf("7-Listado de DUEÑOS con sus PERROS de un tipo de RAZA\n");
      printf("8-Listado de PERROS que deben VACUNARSE\n");
      printf("9-Ordenar de mayor a menor\n");
      printf("10-Salir\n");
      printf("Ingrese una opcion:");

      scanf("%d",&opcion);




 switch(opcion)
  {
    case 1://INGRESAR DATOS DEL PERRO
    {
       for(i=0; i<2;i++)
      {
       printf("ingrese identificador de perro:\n ");
       scanf("%d", &identificador);

       printf("ingrese raza:\n ");
       scanf("%d", &raza);

       printf("ingrese nombre del perro:\n ");
       fflush(stdin);
       gets(nombrePerro);

       printf("tiene las vacunas al dia?? ingrese 1(si)/ ó 0 (no):\n ");
       scanf("%d", &vacunasAlDia);
       perro[i]= cargarPerros(identificador,raza,nombrePerro,vacunasAlDia);//LLAMADAAAA
      }

    }
    break;

    case 2://INGRESAR DATOS DEL DUEÑO
    {
      for(j=0;j<2;j++)
      {
       printf("ingrese el codigo del duenio:\n ");
       scanf("%d", &codigo);

       printf("ingrese el nombre del duenio:\n ");
       fflush(stdin);
       gets(nombreDuenio);

       printf("ingrese telefono:\n ");
       fflush(stdin);
       gets(telefono);
       duenio[j]=cargarDuenios(codigo, nombreDuenio,telefono);//LLAMADAAAA
       }


    }
    break;

    case 3: //MOSTRAR DATOS DEL PERRO
    {
       for(i=0;i<2;i++)//PARA MOSTRAR DUEÑOS
       {
         mostrarPerro(perro[i]);
       }
       system("pause");
       system("cls");
    }
    break;

    case 4://MOSTRAR DATOS DEL DUEÑO
    {
      for(j=0;j<2;j++)//PARA MOSTRAR DUEÑOS
       {
        mostrarDuenios(duenio[j]);
       }

    }
    break;

    case 5://LISTADO DE PERRO CON SUS DUEÑOS
    {
       for(i=0;i<5;i++)
       {
           for(j=0;j<5;j++)
           {
               if(perro[i].identificador == duenio[j].codigo)
               {
                   printf("\nidentificador: %d\n, raza: %d\n, nombre del perro: %s\n, vacunas: %d\n ", perro[i].identificador,perro[i].raza,perro[i].nombrePerro,perro[i].vacunasAlDia);
               }
           }
       }
    }
    break;

    case 6://LISTADO DE DUEÑOS CON SUS PERROS
    {
      for(i=0;i<5;i++)
          {
            for(j=0;j<5;j++)
              {
                if(duenio[j].codigo == perro[i].identificador)
                  {
                   printf("\n codigo: %d\n, nombre: %s\n, telefono: %s\n ", duenio[j].codigo,duenio[j].nombreDuenio,duenio[j].telefono);                  }
                  }
          }
    }

    break;

    case 7://LISTADO DE DUEÑOS CON SUS PERROS Y LA RAZA
    {

    }
    break;

    case 8://LISTADO DE LOS PERROS QUE DEBEN SER VACUNADOS
    {
     if(vacunasAlDia=="1")
       {
          contadorDeVacunas++;
       }

    }
    break;

            case 9:
             {
                 for(i=0; i<5;i++)
                 {
                    for(j=i+1;j<5;j++)
                     {
                       if(identificador[i] > codigo[j])//ORDENO DE MAYOR  MENOR
                         {
                           auxiOrdenar= identificador[i];
                           identificador[i]=codigo[j];
                           codigo[j]=auxiOrdenar;
                         }
                    }
                }
             }
                break;
            case 10:
                {
                if(flagSalir==0)
                  {
                   seguir== 'no';
                   flagSalir++;
                  }

                }
                if(opcion<1 || opcion<9)
                {
                    printf("ERROR,Reingrese nuevamente una opcion");
                }



  }//switch
  system("pause");
  system("cls");
 }while(seguir=='s');
   return 0;
}




