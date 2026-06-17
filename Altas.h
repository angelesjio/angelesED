#include <stdio.h>

    struct Persona *Ptr;

    void Altas (struct Persona **Ptr);

    int Ingresar (struct Persona **Ptr){
        struct Persona *P=NULL;
        struct Alumno *A=NULL;
        int b=1;
        
        P = nuevaPerson();

        if (P==NULL){
            printf ("NO se pudo crear persona\n");
            b=0;
        }else{
            A = nuevoAlumno();
        }
        
      return b;
    }

/* Ptraux-> nombre= (char*) malloc (sizeof (stilen(nombre)+1)*char);
        printf ("Ingrese el nombre: ");
        scanf ("%s", &Ptraux->nombre);

        printf ("\nEs alumno (1) o Personal (2)\n");
        scanf ("%d", &opcion);
        

        printf("~~Ingrese datos~~\n");
        if ()*/
