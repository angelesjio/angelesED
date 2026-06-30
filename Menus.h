#include <stdio.h>

#include "estructuras.h"


int menuPrincipal(void);
int MenuAltas(void);
int MenuBajas(void);
int Carrera(void);

int MenuMostrar();
int Funcionesespeciales (struct Persona **Ptr);

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


int Funcionesespeciales (struct Persona **Ptr){

    int funcion;
    if (*Ptr!=NULL){
        printf ("\n Funciones especiales :)");
        printf ("\n1) Modificar");
        printf ("\n2) Calificaciones");
        printf ("\nEscoja una opción: ");
        scanf ("%d", &funcion);

        return funcion;
    }else{
        printf ("\nNo se ha generao memoria, no se puede acceder a este menu\n");
        return 0;
    }
    
}
