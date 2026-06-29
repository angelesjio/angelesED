#include <stdio.h>
#include "estructuras.h"


int menuPrincipal(void);
int MenuAltas(void);
int MenuBajas(void);
void Casosbajas(int opB, struct Persona **Ptr);
void CasosAltas(int opA, struct Persona **Ptr);
void CasosMostrar(int opM, struct Persona **Ptr);
int Carrera(void);
void Mostrartodo(struct Persona **Ptr);
void Mostrarporcarrera(struct Persona **Ptr);
void Mostrarporsemestre (struct Persona **Ptr);
void Mcarreraysemestre (struct Persona **Ptr);

int MenuMostrar();

    int menuPrincipal(void){
        int op; 
        printf ("\n ---MENU--- \n");
        printf ("1 Ingresar persona\n");
        printf ("2 Eliminar\n");
        printf ("3 Mostrar\n");
        printf ("4 Funciones especiales\n");
        printf ("5 Salir\n");
        printf ("INgrese su elección: ");
        scanf ("%d", &op);

        return op; 
    }


    int MenuAltas(void){
        int opA;

        printf ("\nMenú altas\n");
        printf ("\n1) Ingresar una persona");
        printf ("\n2) Ingresar varias personas");
        printf ("\nEscoja una opción: ");
        scanf ("%d", &opA);

        printf ("\n");
        return opA;
    }

    int Carrera(void){
        int c=0; 

        printf ("\n \nEscoja la carrera ");
        printf ("\n1) Ing. DSSI ");
        printf ("\n2) Ing. Forestal");
        printf ("\n3) Lic. Administración Turística");
        printf ("\n4) Lic. Biología");
        printf ("\n5) Lic CN Ambientales");
        printf ("\nSeleccione el numero al que corresponda su carrera:\n");
        fflush(stdin);
        scanf ("%d", &c);
        return c; 

    }

    int MenuBajas(void){
        int opBA;

        printf ("Manú bajas\n");
        printf ("1) Dar de baja a una persona\n");
        printf ("2) Dar de baja a varias personas\n");
        printf ("3) Eliminar la base de datos \n");
        printf ("Escoja una opción: ");
        scanf ("%d", &opBA);

        return opBA; 
    }


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

void Casosbajas(int opB, struct Persona **Ptr){
    switch (opB){
        case 1:
            if(Baja (Ptr)){
                printf("Se ha eliminado una persona\n");
            }
            break;

        case 2:
            if(VariasBajas(Ptr)){
                printf("Personas eliminadas correctamente\n");
            }
            break; 

        case 3:
                if(Eliminartodo (Ptr)){
                printf("Toda la base de datos ha sido eliminada\n");
            }   
        break; 

        default:
            printf ("Opcion no encontrada, intente de nuevo\n");
        break; 

        }
}

    int MenuMostrar(void){
        int opMos; 

        printf ("\n Menu para mostrar\n ");
        printf ("1 Mostrar a todos en la base de datos \n");
        printf ("2 Mostrar por carrera\n");
        printf ("3 Mostrar por semestre\n");
        printf ("4 Mostrar por carrera y semestre \n");
        printf ("5 Mostrar por nombre\n");
        printf ("6 Mostrar por matricula\n");
        printf ("INgrese su elección: ");
        scanf ("%d", &opMos);

        return opMos;

    }

    void CasosMostrar(int opM, struct Persona **Ptr){
        if(Ptr!=NULL){
            
        switch(opM){
                case 1:
                    Mostrartodo(Ptr);
                break;

                case 2:
                    Mostrarporcarrera(Ptr);
                break;

                case 3:
                    Mostrarporsemestre (Ptr)
                break;

                case 4:
                    Mcarreraysemestre (Ptr)
                break;

                case 5:
                    Mospornombre (Ptr)
                break;

                case 6:
                    Mosmatricula (Ptr)
                break;

                default:
                printf ("\n Eleccion no valida, intente de nuevo\n");
                break; 
                }
            }else{
                printf ("\nNo existe nada que imprimir\n");
            }

    }

int Funcionesespeciales (void){
    int funcion;
    printf ("\n Funciones especiales :)");
    printf ("\n1) Modificar");
    printf ("\n2) Calificaciones");
    printf ("\nEscoja una opción: ");
    scanf ("%d", &funcion);

    return funcion;
}
