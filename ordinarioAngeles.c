#include <stdlib.h>
#include <stdio.h>

#include "Menus.h"
#include "Altas.h"
#include "Bajas.h"
#include "estructuras.h"

int main(){
    struct Persona *Ptr=NULL;
    int op;
    int opA;
    int opB;
    int opM;
    
    do{
        op=menuPrincipal();
        
        switch(op){
            case 1:
                opA=MenuAltas();
                CasosAltas(opA, &Ptr);
                   
                break;

            case 2:
            
                opB= MenuBajas();
                Casosbajas(opB, &Ptr);
            
                break;

            case 3:
            if (Ptr!=NULL){
                opM= MenuMostrar();
                CasosMostrar(opM, &Ptr);
            }else{
                printf ("\n No se ha reservado memoria\n ");
            }
            break;

            case 4:
                printf ("\n Saliendo...");
            break;
            
            default:
                printf ("\nOpcion no encontrada, intente de nuevo....\n");
            break; 
            
            
        }
        
        
    }while (op!=4);

    return 0;
}

