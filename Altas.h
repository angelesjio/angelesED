#ifndef ALTAS_H
#define ALTAS_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>      
#include "estructuras.h" 
#include "Menus.h"


    struct Persona *nuevaPersona();
    struct Alumno *nuevoAlumno();
    int Ingresar (struct Persona **Ptr);
    int IngresoVarios (struct Persona **Ptr);
    void CasosAltas(int opA, struct Persona **Ptr);

    
    void CasosAltas(int opA, struct Persona **Ptr){
        switch (opA){
            case 1:
                    if(Ingresar (Ptr)){
                        printf("Se ingreso correctamente\n");
                    }else{
                        printf("No se pudo crear la persona\n");
                    }
                    break;

                case 2:
                    if(IngresoVarios(Ptr)){
                        printf("Personas creadas correctamente\n");
                    }else{
                        printf("No se pudo crear las personas\n");
                    } 
                break; 

                default:
                    printf ("Opcion no encontrada, intente de nuevo\n");
                break;
            }
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
                b=0;
                free(P->nombre);
                free(P);
            }else{
                P->PtrAlum=A;
                P->Ptrsig=*Ptr;
                *Ptr=P;
            }
        }
        return b;
    }

    int IngresoVarios (struct Persona **Ptr){
        int OpA2;
        int b=1;

        do {
            if(Ingresar (Ptr)){
                b=1;
            }else{
                b=0;
            }
            printf ("Desea seguir ingresando personas? (1)Si (0)No\n");
            scanf ("%d", &OpA2);

        }while (OpA2 != 0);

        return b;
    }

    struct Persona *nuevaPersona(){
        struct Persona *PtrP;
        PtrP=(struct Persona*)malloc(sizeof(struct Persona));

        if (PtrP!=NULL) {
            PtrP->nombre =(char*) malloc(50*sizeof(char));
                if(PtrP->nombre==NULL){
                    free(PtrP);
                    return NULL;
                }
            printf ("Ingrese el nombre: ");
            scanf(" ");
            fgets(PtrP->nombre, 50, stdin);
            PtrP->nombre[strcspn(PtrP->nombre,"\n")]=0;
            printf ("Ingrese genero: (F o M)");
            scanf (" %c", &(PtrP->genero));
            printf ("INgrese edad; ");
            scanf ("%d", &(PtrP->Edad));
            printf ("INgrese fecha de nacimiento; ");
            scanf (" ");
            fgets(PtrP->Fn, 9, stdin);
            
        }

        return PtrP; 
    }

    struct Alumno* nuevoAlumno(void){
        struct Alumno *PtrA;
        PtrA=(struct Alumno*)malloc(sizeof(struct Alumno));

        if(PtrA!=NULL){ 

            printf ("Ingrese carrera: ");
            PtrA->carrera= Carrera( );
            printf ("\nIngrese matricula: ");
            scanf (" ");
            fgets (PtrA->matricula, 11, stdin);
            PtrA->matricula[strcspn(PtrA->matricula,"\n")]=0;
            printf ("Ingrese semestre (ejemplo. 1,2,3...): ");
            scanf ("%d", &PtrA->semestre);
            printf ("\n Correo asignado :D: ");
            
            switch(PtrA->carrera){
            case 1:
                strcpy(PtrA->correo, "ca");
                break;
            case 2:
                strcpy(PtrA->correo, "if");
                break;
            case 3:
                strcpy(PtrA->correo, "ds");
                break;
            case 4:
                strcpy(PtrA->correo, "lb");
                break;
            case 5:
                strcpy(PtrA->correo, "at");
                break;
            }
            for(int i=0; i<4; i++){
                PtrA->correo[i+2] = PtrA->matricula[i];
            }
            for(int i=0; i<4; i++){
                PtrA->correo[i+6] = PtrA->matricula[i+6];
            }
                PtrA->correo[10] = '\0';
                printf(" %s@unsij.edu.mx\n", PtrA->correo);
        } 
        
        return PtrA; 
    }

#endif
