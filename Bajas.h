#include <stdio.h>
#include <stdlib.h>
#include "estructuras.h"

int Baja (struct Persona **Ptr);
int VariasBajas (struct Persona **Ptr);
int Eliminartodo (struct Persona **Ptr);
void Salir (struct Persona **Ptr);
void Casosbajas(int opB, struct Persona **Ptr);


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


int Baja (struct Persona **Ptr){
    struct Persona *Ptrauxiliar=*Ptr;

    int b=1;

    if (Ptrauxiliar==NULL){
        printf ("No se ha reservado memoria\n");
        b=0; 
    }else{
        *Ptr=(*Ptr)->Ptrsig;
        
        free(Ptrauxiliar->nombre);
        free (Ptrauxiliar->PtrAlum);
        free(Ptrauxiliar);

        b=1;
    }
    return b;
}

int VariasBajas (struct Persona **Ptr){
    int b=1;
    int opB;

    do{
        if (*Ptr==NULL){
            printf ("No se ha reservado memoria\n");
            b=0; 
            break;
        }else{
            Baja(Ptr);
            b=1;
        }

        printf ("\n Desea seguir eliminando? (1) Si, (0) No\n");
        scanf ("%d", &opB);
    } while(opB!=0);

    return b; 
}

int Eliminartodo (struct Persona **Ptr){
    int b=1;

    if (*Ptr==NULL){
        printf ("No hay nada que aliminar\n");
        b=0; 

    }else{
        while(*Ptr != NULL){
            Baja(Ptr);
        }
        b=1;
    }

    return b;
}

void Salir (struct Persona **Ptr){
    Eliminartodo(Ptr);
}
