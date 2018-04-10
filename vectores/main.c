#include <stdio.h>
#include <stdlib.h>
#include "vectores.h"

void mostrarVector(int[], int);
void ordenarVector(int[], int);
int buscarMinimo(int[], int);
int main()
{
    int vec[] = {7,5,3,2,6,1,4};
    //int buscar;


  /*buscar = buscarMinimo(vec, 7);
  printf("el minimo es: %d", buscar);*/

   ordenarVector(vec, 7);
   //mostrarVector(vec, 7);



return 0;
}


/*int buscarMinimo(int v[], int tam)
{
    int minimo;
    int flag=0;
    int i;

    for(i=0; i<tam; i++)

    {
      if(minimo > v[i] || flag == 0)
      {
          minimo = v[i];
          flag = 1;
      }

    }
    printf("%d", minimo);

    return minimo;
}


/*int buscar(int vec[], int tam, int numero)
{
int indice = -1;
 itn i;
 for(i=0; i< tam; i++)
 {
    if(numero == vec[i])
}

}*/


void ordenarVector(int vec[], int tam)
{
   int i, j;
   int aux;

   for(i=0; i< tam-1; i++)
   {

    for(j= i+1; j<tam;j++)
    {
        if(vec[i] < vec[j])
        {
            aux = vec[i];
            vec[i]= vec[j];
            vec[j]= aux;
        }
    }
}
mostrarVector(vec, 7);

}

void mostrarVector(int vec[], int tam)
{
  int i;
  for(i=0;i<tam;i++)
  {
    printf(" %d\n", vec[i]);

  }



}





