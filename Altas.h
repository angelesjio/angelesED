#include <stdio.h>
#include <stdlib.h>

    struct Persona *PtrP;
    struct Alumno *PtrA;

    int *nuevaPersona();
    int *nuevoAlumno();

    int Ingresar (struct Persona **Ptr);

    int Ingresar (struct Persona **Ptr){
        struct Persona *P=NULL;
        struct Alumno *A=NULL;
        int b=1;
        
        P = nuevaPersona();

        if (P==NULL){
            printf ("NO se pudo crear persona\n");
            b=0;
            }else{
            A = nuevoAlumno();
            if (A==NULL){
                printf ("No se pudo crear memoria\n");
                b=0;
                free(P);
            }else{
            P->PtrAlum=A;
            P->Ptrsig=*Ptr;
            *Ptr=P;
            }
        }
        
      return b;
    }


    int *nuevaPersona(){
        struct Persona *PtrP=NULL;
        PtrP->nombre=(int*)malloc(sizeof(int)*5);

        if (PtrP==NULL){
            printf ("NO se pudo crear memoria; \n");

        }else {
            printf ("Ingrese el nombre; ");
            fgets(PtrP->nombre, 50, PtrP);
            printf ("INgrese edad; ");
            scanf ("%d", &PtrP->Edad);
            printf ("INgrese fecha de nacimiento; ");
            scanf ("%d", &PtrP->Fn);
            printf ("INgrese genero; ");
            scanf ("%s", &PtrP->genero);
        }

        return PtrP; 

    }

    int *nuevoAlumno(){
        struct Alumno *PtrA=NULL;

            printf ("Ingrese carrera; ");
            fgets(PtrA->carrera, 5, PtrA);
            printf ("INgrese matricula; ");
            fgets (PtrA->matricula,10,PtrA);
            printf ("INgrese semestre; ");
            scanf ("%d", &PtrA->semestre);
            printf ("INgrese correo; ");
            scanf (fgets (PtrA->correo, 25, PtrA));
            printf ("Ingrese calificación: ");
            for (int i=0; i<5; i++){
                for (int j=0; j<5; j++){


                }
            }

        return PtrP; 

    }

    //Cosas que si se tiene tiempo se haga :0
//En edad no debe de aceptar letras


/* Ptraux-> nombre= (char*) malloc (sizeof (stilen(nombre)+1)*char);
        printf ("Ingrese el nombre: ");
        scanf ("%s", &Ptraux->nombre);

        printf ("\nEs alumno (1) o Personal (2)\n");
        scanf ("%d", &opcion);
        

        printf("~~Ingrese datos~~\n");
        if ()*/
