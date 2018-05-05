#include <stdio.h>
#include <stdlib.h>


typedef struct
{
    int legajo;
    char nombre[50];
}eAlumno;

typedef struct
{
  int codigo;
  char desacripcion[20];

}eMateria;

typedef struct
{
    int legAalumno;
    int codInscripcion;

}eInscripciones;
void mostrarAlumnos(eAlumno[], int, eMateria[], int, eInscripciones[], int);
void CantInsMaterias(eMateria[], int, eInscripciones[], int);
int cantInscripciones(eInscripciones[], int, int);


int main()
{
   eAlumno alumnos[]= {{100,"Brian"}, {101,"Camila"}, {102,"Ruth"}, {103,"Agustin"}, {104,"Franco"}, {105,"Gabriel"}, {106,"Santiago"}, {107,"Lucas"}, {108,"Micaela"}, {109,"Milagros"}};

   eMateria materias[]= {{0,"Programacion"}, {1,"Laboratorio"}, {2,"SPD"}, {3,"Matematica"}, {4,"Ingles"}};

   eInscripciones inscripcion[]= {{100,2}, {100, 5}, {101, 0},{101, 4},{102, 3},{ 102, 0},{103, 2},{103, 5},{104, 1},{104, 5},{105, 0}, {106, 3},{108, 1},{109, 2},{109, 3},{109, 5},{109, 1}} ;

    mostrarAlumnos(alumnos, 10, materias, 5, inscripcion, 17);
    return 0;
}

void mostrarAlumnos(eAlumno alumnos[], int tamA, eMateria materias[], int tamM, eInscripciones inscripcion[], int tamI)
{


int a, m, i;
for(a=0; a<tamA; a++)
{
    printf("%s\t\t", alumnos[a].nombre);
  for(i=0; i<tamI; i++)
    {
     if(alumnos[a].legajo == inscripcion[i].legAalumno)
     {
         for(m= 0; m<tamM; m++)
         {
             if(inscripcion[i].codInscripcion == materias[m].codigo)
             {
                 printf("%s\n", materias[m].desacripcion);
             }
         }
     }

  }


}
}
void CantInsMaterias(eMateria materias[], int tamM, eInscripciones inscripcion[], int tamI)
{
    int i, m;
    int cantidad;

    for(m = 0; m < tamM; m++)
    {
        printf("%s\tt\n", materias[m].desacripcion);
    for(i= 0; i<tamI; i ++)
       {
        cantidad = cantInscripciones(inscripcion, tamI, materias[i].codigo);
        printf("%d", cantidad);
       }
    }
}
int cantInscripciones(eInscripciones inscripcion[], int tamI, int codigoMateria)
{
    int cantidad = 0;
    int i;
    for(i= 0; i< tamI; i++)
    {
        if(inscripcion[i].codInscripcion == codigoMateria)
          {
             cantidad++;
          }
    }

    return cantidad;
}


//CANTIDAD DE ALUMNOS QUE TENGO POR MATERIA
//MOSTRAR L0S NOMBRES DE LOS ALUMNOS QUE HAY EN CADA MATERIA
//MOSTRAR MAXIMO E IGUALES AL MAXIMO DE ALUMNOS INSCRIPTOS EN ESAS MATERIAS
//
