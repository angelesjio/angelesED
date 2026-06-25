
#include <stdio.h>
#include <stdlib.h>

    struct Persona *PtrP;
    struct Alumno *PtrA;

    struct Persona *nuevaPersona();
    struct Alumno *nuevoAlumno();
    int Ingresar (struct Persona **Ptr);

    struct Persona *nuevaPersona(){
        struct Persona *PtrP=(struct Persona*)malloc(sizeof(struct Persona));

        if (PtrP!=NULL) {
            printf ("Ingrese el nombre; ");
            PtrP->nombre = malloc(50*sizeof(char));
            
            fgets(PtrP->nombre, 50, stdin);
            printf ("INgrese edad; ");
            scanf ("%d", &(PtrP->Edad));
            printf ("INgrese fecha de nacimiento; ");
            fgets(PtrP->Fn, 9, stdin);
            printf ("INgrese genero; ");
            scanf ("%c", &(PtrP->genero));
        }

        return PtrP; 

    }

    struct Alumno* nuevoAlumno(void){
        struct Alumno *PtrA;
        PtrA=(struct Alumno*)malloc(sizeof(struct Alumno));

        if(PtrA!=NULL){ 

            printf ("Ingrese carrera; ");
            fgets(PtrA->carrera, 5, stdin);
            printf ("\nINgrese matricula; ");
            fgets (PtrA->matricula,10,stdin);
            printf ("Ingrese semestre; ");
            scanf ("%d", &PtrA->semestre);
            printf ("INgrese correo; ");
            fgets (PtrA->correo, 25, stdin);
            printf ("Ingrese calificación: ");
            for (int i=0; i<5; i++){
                printf ("Calificaciones de %d parcial\n", i);
                for (int j=0; j<5; j++){
                    sca
                }
                }
            }

        return PtrA; 

}

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
                //printf ("No se pudo crear memoria\n");
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



    //Cosas que si se tiene tiempo se haga :0
//En edad no debe de aceptar letras


/* Ptraux-> nombre= (char*) malloc (sizeof (stilen(nombre)+1)*char);
        printf ("Ingrese el nombre: ");
        scanf ("%s", &Ptraux->nombre);

        printf ("\nEs alumno (1) o Personal (2)\n");
        scanf ("%d", &opcion);
        

        printf("~~Ingrese datos~~\n");
        if ()*/

