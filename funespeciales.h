#include <stdio.h>
#include <stdlib.h>
#include "estructuras.h"
#include <string.h>

    void casosmodificar(struct Persona **Ptr);
    void modificarcalparcial(struct Persona **Ptr);
    void todosparcmateria(struct Persona **Ptr);
    void datosPersona (struct Persona **Ptr);
    void datosAlumno (struct Persona **Ptr);

    void casoscalificaciones ();


    void casosmodificar(struct Persona **Ptr){
        int opcionA;
        int opcionA2;
        int opcionA3;

        printf ("\nOpciones\n");
        printf ("\n1) Calificaciones de un alumno");
        printf ("\n2) Datos");
        printf ("\nEscoja una opcion: ");
        scanf ("%d", &opcionA);
        switch (opcionA){
            case 1:
            printf ("\n1) Todas las calificaciones de un parcial");
            printf ("\n2) Todos los parciales de una materia");
            printf ("\nIngrese su opcion: ");
            scanf ("%d", &opcionA2);
                switch (opcionA2){
                    case 1:
                        modificarcalparcial(Ptr);
                    break;

                    case 2:
                        todosparcmateria(Ptr);
                    break; 

                    default:
                        printf ("\n Opcion no valida\n");
                    break;
                }
            break;

            case 2:
            printf ("\n1) Datos de la persona");
            printf ("\n2) Datos del alumno");
            printf ("\nIngrese su opcion: ");
            scanf ("%d", &opcionA3);
                switch (opcionA3){
                    case 1:
                        datosPersona(Ptr);
                    break;

                    case 2:
                        datosAlumno(Ptr);
                    break;
                
                    default:
                        printf ("\n Opcion no valida\n");
                    break;
                }
            break;
        }
    }
    

    void modificarcalparcial(struct Persona **Ptr){
        struct Persona *otroPtr=*Ptr;
        char opma[10];
        printf ("\n Ingrese la matricula del alumno: ");
        scanf ("%s", opma);

        while (otroPtr!=NULL){
            if (strcmp(otroPtr->PtrAlum->matricula, opma)==0){
                int parcial;
                printf ("Ingrese el parcial que desea modificar (del 1-5): ");
                scanf ("%d", &parcial);
                parcial--; 

                for (int i=0; i<5; i++){
                    otroPtr->PtrAlum->calif[i][parcial]= 3 + rand() % (9 - 3 + 1);
                }
                printf ("\n Calificaciones modificadas\n");
                return;
            }
            otroPtr=otroPtr->Ptrsig;
        }
        printf ("\n Matricula no encontrada\n");
    }


    void todosparcmateria(struct Persona **Ptr){
        struct Persona *otroPtr = *Ptr;
        char opma[10];
        printf ("\n Ingrese la matricula del alumno: ");
        scanf ("%s", opma);

        while (otroPtr != NULL) {
            if (strcmp(otroPtr->PtrAlum->matricula, opma) == 0) {
                int materia;
                printf ("\n Ingrese el numero de materia que desea modificar parciales (1-5): ");
                scanf ("%d", &materia);
                materia--;

                for (int j=0; j<5; j++) {
                    otroPtr->PtrAlum->calif[materia][j] = 3 + rand() % (9 - 3 + 1);
                }
                printf ("\n Parciales de la materia modificados exitosamente\n");
                return;
            }
            otroPtr = otroPtr->Ptrsig;
        }
        printf ("\n Matricula no encontrada\n");
    }


    void datosPersona (struct Persona **Ptr){
        struct Persona *otroPtr=*Ptr;
        char nom[50];
        printf ("\n Ingrese el nombre de la persona que desea modificar: ");
        scanf (" ");
        fgets(nom, 50, stdin);
        nom[strcspn(nom, "\n")] = 0;

        while (otroPtr!=NULL){
            if (strcmp(otroPtr->nombre, nom)==0){
                printf ("\n Ingrese el nuevo nombre de la persona: ");
                fgets(otroPtr->nombre, 50, stdin);
                
                printf ("\n Ingrese la nueva edad de la persona: ");
                scanf ("%d", &otroPtr->Edad); 
                
                printf ("\n Ingrese el genero de la persona: ");
                scanf (" %c", &otroPtr->genero);
                
                printf ("\n Ingrese fecha de nacimiento diamesaño: ");
                scanf ("%s", otroPtr->Fn); 
                
                printf ("\n Datos de la persona modificados exitosamente\n");
                return;
            }
            otroPtr=otroPtr->Ptrsig;
        }
        printf ("\n Persona no encontrada\n");
    }


    void datosAlumno (struct Persona **Ptr){
        struct Persona *otroPtr=*Ptr;
        char mat[10];
        printf ("\n Ingrese la matricula del alumno que desea modificar: ");
        scanf ("%s", mat);

        while (otroPtr!=NULL){
            if (strcmp(otroPtr->PtrAlum->matricula, mat)==0){
                printf ("\n Ingrese la nueva matricula del alumno: ");
                scanf ("%s", otroPtr->PtrAlum->matricula);
                
                printf ("\n Ingrese el nuevo semestre del alumno: ");
                scanf ("%d", &otroPtr->PtrAlum->semestre);
                
                printf ("\n Datos del alumno modificados exitosamente\n");
                return;
            }
            otroPtr=otroPtr->Ptrsig;
        }
        printf ("\n Alumno no encontrado\n");
    }

    void casoscalificaciones (){
        int opB;
        int opB1;
        int opB11;
        int opB2;

        printf ("\n 1) Semestre\n 2) Carrera\n Escoja una opcion: ");
        scanf ("%d", &opB);

        switch (opB){
        case 1:
            printf ("\n1) Materia\n2) Parcial\n Escoja: ");
            scanf ("%d", &opB1);
                switch (opB1){
                case 1:
                    printf ("\n1) Matricula de aprobados\n2) Nombre de materia de alumnos que aprobaron cierta materia\n Escoja: ");
                    scanf ("%d", &opB11);
                    switch (opB11){
                    case 1:
                        printf ("\nEn construccion: Mostrar matricula de aprobados\n");
                        break;
                    case 2:
                        printf ("\nEn construccion: Nombre de materia de alumnos que aprobaron cierta materia\n");
                        break;
                    default:
                        printf ("\n Opcion no valida\n");
                        break;
                    }
                    break;

                case 2:
                printf ("\nMatricula de alumno y nombre de materia aprobado en construcción\n");
                break;
                
                default:
                    break;
                }
            break;

        case 2:
        printf ("\n1) Mostrar matricula de alumnos no reprobados");
        printf ("\n2) Mostrar matricula de alumnos con 1 a 3 adeudos");
        printf ("\n3) Mostrar alumnos de 4 en adelante adeudos");
        printf ("\n Escoja: ");
        scanf ("%d", &opB2);

                switch (opB2){
                case 1:
                    printf ("\nEn construcción: Mostrar matricula de alumnos no reprobados");
                    break;

                case 2:
                    printf ("\nEn construccion: Mostrar matricula de alumnos con 1 a 3 adeudos");
                    break;

                case 3:
                    printf ("En construccion: Mostrar alumnos de 4 en adelante adeudos");
                    break;
                
                default:
                printf ("\nOpcion no valida\n");
                    break;
                }

            break;
        
        default:
        printf ("\nNo se encontro la opcion escojida dentro de las opciones\n");
            break;
        }
    }
