#include <stdio.h>
#include <stdlib.h>
#include "estructuras.h"

    int Baja (struct Persona **Ptr);
    int VariasBajas (struct Persona **Ptr);
    int Eliminartodo (struct Persona **Ptr);

    int Baja (struct Persona **Ptr){
        struct Persona *Ptrauxiliar=*Ptr;
        struct Persona *Antes=NULL;
        int b=1;

        if (Ptr==NULL){
            printf ("No se ha reservado memoria\n");
            b=0; 
        }else{
            Ptrauxiliar=*Ptr;
            while(Ptrauxiliar->Ptrsig!= NULL){
                Ptrauxiliar=Ptrauxiliar->Ptrsig;

                if ((Ptrauxiliar->Ptrsig)->Ptrsig==NULL){
                    Antes=(Ptrauxiliar->Ptrsig)->Ptrsig;
                }
            }
            
            Antes->Ptrsig=NULL;
            free(Ptrauxiliar->nombre);
            free (Ptrauxiliar->PtrAlum);
            free (Ptrauxiliar->Ptrsig);
            free(Ptrauxiliar);

            b=1;
            
        }

        
      return b;
    }

    int VariasBajas (struct Persona **Ptr){

        struct Persona *Ptrauxiliar=*Ptr;
        struct Persona *Antes=NULL;
        int b=1;
        int opB;

        do{
            if (Ptr==NULL){
            printf ("No se ha reservado memoria\n");
            b=0; 
        }else{
            Ptrauxiliar=*Ptr;
            while(Ptrauxiliar->Ptrsig!= NULL){
                Ptrauxiliar=Ptrauxiliar->Ptrsig;

                if ((Ptrauxiliar->Ptrsig)->Ptrsig==NULL){
                    Antes=(Ptrauxiliar->Ptrsig)->Ptrsig;
                }
            }
            
            Antes->Ptrsig=NULL;
            free(Ptrauxiliar->nombre);
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
        struct Persona *Antes=NULL;
        int b=1;
        int opB;

        
        if (Ptr==NULL){
            printf ("No hay nada que aliminar\n");
            b=0; 

        }else{

            do{
                Ptrauxiliar=*Ptr;
            while(Ptrauxiliar->Ptrsig!= NULL){
                Ptrauxiliar=Ptrauxiliar->Ptrsig;

                if ((Ptrauxiliar->Ptrsig)->Ptrsig==NULL){
                    Antes=(Ptrauxiliar->Ptrsig)->Ptrsig;
                }
            }
            
            Antes->Ptrsig=NULL;
            free(Ptrauxiliar->nombre);
            free (Ptrauxiliar->PtrAlum);
            free (Ptrauxiliar->Ptrsig);
            free(Ptrauxiliar);

            b=1;

            }while(Ptr!=NULL);
            
        }

        return b;

    }