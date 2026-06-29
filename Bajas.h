#include <stdio.h>
#include <stdlib.h>
#include "estructuras.h"

int Baja (struct Persona **Ptr);
int VariasBajas (struct Persona **Ptr);
int Eliminartodo (struct Persona **Ptr);
void Salir (struct Persona **Ptr);

int Baja (struct Persona **Ptr){

    struct Persona *Ptrauxiliar=*Ptr;
    struct Persona *Antes=NULL;

    int b=1;

    if (Ptrauxiliar==NULL){
        printf ("No se ha reservado memoria\n");
        b=0; 
    }else{
        Ptrauxiliar=*Ptr;
        
        *Ptr=(*Ptr)->Ptrsig;
        
        free(Ptrauxiliar->nombre);//NO SE
        free (Ptrauxiliar->PtrAlum);
        free (Ptrauxiliar->Ptrsig);
        free(Ptrauxiliar);

        b=1;
        
    }

    
    return b;
}

int VariasBajas (struct Persona **Ptr){

    struct Persona *Ptrauxiliar=*Ptr;
    int b=1;
    int opB;

    do{
        if (Ptrauxiliar==NULL){
        printf ("No se ha reservado memoria\n");
        b=0; 
    }else{
        
        *Ptr=(*Ptr)->Ptrsig;
        
        free(Ptrauxiliar->nombre);//NO SE
        free (Ptrauxiliar->PtrAlum);
        free (Ptrauxiliar->Ptrsig);
        free(Ptrauxiliar);

        b=1;
        
    }

    printf ("\n Desea seguir eliminando? (1) Si, (0) No\n");
    scanf ("%d", &opB);
    } while(opB!=0);

    return b; 

}

int Eliminartodo (struct Persona **Ptr){
    struct Persona *Ptrauxiliar=*Ptr;
    int b=1;

    
    if (Ptr==NULL){
        printf ("No hay nada que aliminar\n");
        b=0; 

    }else{

        do{
        
        *Ptr=(*Ptr)->Ptrsig;
        
        free(Ptrauxiliar->nombre);//NO SE
        free (Ptrauxiliar->PtrAlum);
        free (Ptrauxiliar->Ptrsig);
        free(Ptrauxiliar);

        b=1;

        }while(Ptr!=NULL);
        
    }

    return b;

}

void Salir (struct Persona **Ptr){
    struct Persona *Ptrauxiliar=*Ptr;

    
    if (Ptr==NULL){
        printf ("No hay nada que aliminar\n");
        b=0; 

    }else{

        do{
        
        *Ptr=(*Ptr)->Ptrsig;
        
        free(Ptrauxiliar->nombre);//NO SE
        free (Ptrauxiliar->PtrAlum);
        free (Ptrauxiliar->Ptrsig);
        free(Ptrauxiliar);

        }while(Ptr!=NULL);
        
    }

}
