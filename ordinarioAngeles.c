#include <stdio.h>
#include <stdlib.h>

#include "estructuras.h"
#include "Menus.h"       
#include "Altas.h"      
#include "Bajas.h"
#include "mostrar.h"
#include "funespeciales.h"

int main(){
    struct Persona *Ptr=NULL;
    int op;
    int opA;
    int opB;
    int opM;
    int opFun;
    
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
                opFun=Funcionesespeciales (&Ptr);
                    switch (opFun){
                    case 1:
                        casosmodificar(&Ptr);
                        break;

                    case 2:
                        casoscalificaciones ();
                        break;
    
                    default:
                        printf ("\n Opcion no valida, intente de nuevo\n");
                        break;
                    }
            break;

            case 5:
                Salir(&Ptr); 
                printf ("\n saliendo\n");
            break; 
            
            default:
                printf ("\nOpcion no encontrada, intente de nuevo....\n");
            break; 
        }
        
    }while (op!=5);

    return 0;
}
