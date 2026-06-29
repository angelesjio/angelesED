
#include <stdio.h>
#include <stdlib.h>
#include "estructuras.h"

    struct Persona *PtrP;
    struct Alumno *PtrA;

    struct Persona *nuevaPersona();
    struct Alumno *nuevoAlumno();
    int Ingresar (struct Persona **Ptr);
    int IngresoVarios (struct Persona **Ptr);


//Ingresa una persona

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

    //Ingresa varias personas


     int IngresoVarios (struct Persona **Ptr){
        struct Persona *P=NULL;
        struct Alumno *A=NULL;
        struct Persona *Ptrauxiliar=NULL;
        int b=1;
        int OpA2;

        do{
            P = nuevaPersona();

        if (P==NULL){
            //printf ("NO se pudo crear persona\n");
            b=0;
                }else{
                A = nuevoAlumno();
                if (A==NULL){
                    //printf ("No se pudo crear memoria\n");
                    b=0;
                    free(P);
                }else{
                        if (Ptr==NULL){
                            *Ptr=P;
                        }else{
                           /*Ptrauxiliar=*Ptr;
                        while(Ptrauxiliar->Ptrsig!= NULL){
                            Ptrauxiliar=Ptrauxiliar->Ptrsig;
                        }*/
                            P->PtrAlum=A;
                            P->Ptrsig=*Ptr;
                            *Ptr=P; 
                        
                        }
                    }
                }

        printf ("Desea seguir ingresando personas? (1)Si (0)No\n");
        scanf ("%d", &OpA2);
        }while (OpA2!=0);
        
        
      return b;
    }

    struct Persona *nuevaPersona(){
        struct Persona *PtrP=(struct Persona*)malloc(sizeof(struct Persona));
        PtrP->nombre =(char*) malloc(50*sizeof(char));

        if (PtrP!=NULL) {
            printf ("Ingrese el nombre; ");
            scanf (" ");
            fgets(PtrP->nombre, 50, stdin);
            printf ("INgrese genero; ");
            scanf (" ");
            scanf ("%c", &(PtrP->genero));
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

            printf ("Ingrese carrera; ");
            PtrA->carrera= Carrera( );
            printf ("\nINgrese matricula; ");
            scanf (" ");
            fflush(stdin);
            fgets (PtrA->matricula, 10, stdin);
            printf ("Ingrese semestre (ejemplo. 1,2,3...); ");
            //fflush(stdin);//ahora aqui ajajsjajsa
            scanf ("%d", &PtrA->semestre);
            printf ("INgrese correo; ");
            scanf (" ");
            //corregir correo electrónico 
            fgets (PtrA->correo, 25, stdin);
            printf ("\nSe asignaron las calificaciones correctamente *u*/ \n");
            }

        return PtrA; 

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

