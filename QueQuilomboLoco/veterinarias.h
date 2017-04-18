//PROTOTIPOS Y ESTRUCTURAS

typedef struct
{
    int identificador;
    int raza;
    char nombrePerro[20];
    int vacunasAlDia;

}ePerro;


typedef struct
{
   int codigo;
   char nombreDuenio[50];
   char telefono[20];
}eDuenio;

   ePerro cargarPerros(int, int, char[], int);
   eDuenio cargarDuenios(int, char[], char[]);

   void mostrarPerro(ePerro);
   void mostrarDuenios(eDuenio);
