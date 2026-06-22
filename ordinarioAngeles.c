#include <stdlib.h>
#include <stdio.h>
#include "futuralibreria.h"
#include "Altas.h"

   struct Persona{
    char *nombre;
    int Edad;
    char genero; 
    char Fn[8];

    struct Alumno *PtrAlum;
    struct Persona *Ptrsig;  
    };

    struct Alumno{
    char matricula[10];
    char carrera[5];
    int semestre;
    char correo[25];
    float calif[5][5];

    };




int main()
{
    struct Persona *Ptr=NULL;
    int op;
    
    do{
        op=menuPrincipal();
        
        switch(op){
            case 1:
                if(Ingresar (&Ptr)){
                    printf("Persona creada correctamente");
                }else{
                    printf("No se pudo crear la persona");
                }    
                break;
            case 2:
            
            break;
            case 3:
            
            break;
            case 4:
            printf ("\n Saliendo...");
            break;
            
            default:
            printf ("\nOpcion no encontrada, intente de nuevo....\n");
            
            
        }
        
        
    }while (op!=4);

    return 0;
}

