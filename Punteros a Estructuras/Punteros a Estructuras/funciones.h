typedef struct
{
    int dni;
    char nombre[20];
    float altura;
} ePersona;

int newPersona(ePersona*, int, char[], float);
void personaToString(ePersona*);
void altaPersona(ePersona*[], int);
void ordenarPersona (ePersona*[], int);
