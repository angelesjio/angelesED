#ifndef BAJAS_H
#define BAJAS_H

#include <stdio.h>
#include <stdlib.h>     
#include "estructuras.h"

int Baja (struct Persona **Ptr);
int VariasBajas (struct Persona **Ptr);
int Eliminartodo (struct Persona **Ptr);
void Casosbajas(int opB, struct Persona **Ptr);
int Salir (struct Persona **Ptr);


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

        case 4:
            printf ("\nSaliendo\n");
            break;

        default:
            printf ("Opcion no encontrada, intente de nuevo\n");
            break; 
    }
}


int Baja (struct Persona **Ptr){
    
    if (Ptr == NULL || *Ptr == NULL){
        printf ("No hay elementos en la lista / Memoria no reservada\n");
        return 0;
    }

    struct Persona *Ptrauxiliar = *Ptr;

    
    *Ptr = (*Ptr)->Ptrsig;
    
    
    free(Ptrauxiliar->nombre);
    free(Ptrauxiliar->PtrAlum);
    free(Ptrauxiliar);

    return 1;
}

int VariasBajas (struct Persona **Ptr){
    int b = 1;
    int opB;

    do {
        if (*Ptr == NULL){
            printf ("La lista se ha quedado vacía.\n");
            return b;
        }
        
        if (Baja(Ptr)) {
            b = 1;
        }

        printf ("\n¿Desea seguir eliminando? (1) Si, (0) No\n");
        scanf ("%d", &opB);

    } while(opB != 0);

    return b; 
}

int Eliminartodo (struct Persona **Ptr){
    if(*Ptr == NULL){
        printf("No hay personas que eliminar\n");
        return 0;
    }
    
    
    while(*Ptr != NULL){
        Baja(Ptr);
    }
    printf("Todas las personas fueron eliminadas\n");

    return 1; 
}


int Salir (struct Persona **Ptr){
    if(*Ptr == NULL){
        return 1;
    }
    
    while(*Ptr != NULL){
        Baja(Ptr);
    }
    
    return 1;
}

#endif
