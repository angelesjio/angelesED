#include <stdio.h>
#include "estructuras.h"


int menuPrincipal(void);
int MenuAltas();
int MenuBajas();
void Casosbajas(int opB, struct Persona **Ptr);
void CasosAltas(int opA, struct Persona **Ptr);
void CasosMostrar(int opM, struct Persona **Ptr);

    int MenuMostrar();

    int menuPrincipal(void){
        int op; 
        printf ("\n ---MENU--- \n");
        printf ("1 Ingresar persona\n");
        printf ("2 Eliminar\n");
        printf ("3 Mostrar\n");
        printf ("4 Salir\n");
        printf ("INgrese su elección: ");
        scanf ("%d", &op);

        return op; 
    }


    int MenuAltas(){
        int opA;

        printf ("Menú altas\n");
        printf ("1) Ingresar una persona\n");
        printf ("2) Ingresar varias personas\n ");
        printf ("Escoja una opción: ");
        scanf ("%d", &opA);

        return opA;
    }

    int Carrera(struct Alumno *PtrA){
        int carrera=0; 

        printf ("\n Escoja la carrera\n ");
        printf ("1) Ing. DSSI\n ");
        printf ("2) Ing. Forestal\n");
        printf ("3) Lic. Administración Turística");
        printf ("4) Lic. Biología \n ");
        printf ("5) Lic CN Ambientales\n ");
        printf ("\nSeleccione el numero al que corresponda su carrera\n");
        scanf ("%d ", &carrera);

        return carrera; 

    }

    int MenuBajas(){
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
                    break;
                        if(Ingresar (&Ptr)){
                            printf("Persona creada correctamente\n");
                        }else{
                            printf("No se pudo crear la persona\n");
                        }

                    case 2:
                        if(IngresoVarios(&Ptr)){
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
                    break;
                        if(Baja (&Ptr)){
                            printf("Persona creada correctamente\n");
                        }else{
                            printf("No se pudo crear la persona\n");
                        }

                case 2:
                        if(VariasBajas(&Ptr)){
                            printf("Personas creadas correctamente\n");
                        }else{
                            printf("No se pudo crear las personas\n");
                        } 
                    break; 

                case 3:
                     if(Eliminartodo (&Ptr)){
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

    int MenuMostrar(){
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

            printf ("En construcción\n");

    }