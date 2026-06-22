#include <stdlib.h>
#include <stdio.h>
#include "futuralibreria.h"
//#include "Altas.h"

   struct Persona{
    char *nombre;
    int Edad;
    char genero; 
    char Fn[8];

    struct Alumno *PtrAlum;
    struct Persona *Ptrsig;  
    };

    struct Alumno{
    char matricula[10];
    char carrera[5];
    int semestre;
    char correo[25];
    float calif[5][5];

    };



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


    struct Persona *nuevaPersona(){
        struct Persona *PtrP;
        PtrP=(struct Persona*)malloc(sizeof(struct Persona));

        if (PtrP!=NULL) {
            printf ("Ingrese el nombre; ");
            PtrP->nombre = malloc(50*sizeof(char));
            fgets(PtrP->nombre, 50, stdin);
            printf ("INgrese edad; ");
            scanf ("%d", &(PtrP->Edad));
            printf ("INgrese fecha de nacimiento; ");
            scanf ("%s", &(PtrP->Fn));
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
                scanf ("%f", &(PtrA->calif[i][j]));
               }
            }
        }

    return PtrA; 

}



int main()
{
    struct Persona *Ptr=NULL;
    int op;
    
    do{
        op=menuPrincipal();
        
        switch(op){
            case 1:
                if(Ingresar (&Ptr))
                    printf("Persona creada correctamente");
                else    
                    printf("No se pudo crear la persona");
                break;
            case 2:
            
            break;
            case 3:
            
            break;
            case 4:
            printf ("\n Saliendo...");
            break;
            
            default:
            printf ("\nOpcion no encontrada, intente de nuevo....\n");
            
            
        }
        
        
    }while (op!=4);

    return 0;
}

