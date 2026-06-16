#include <stdlib.h>
#include <stdio.h>
#include "futuralibreria.h"

   struct Persona{
    char *nombre;
    int Edad;
    char genero; 
    char Fn[8];

    struct Alumno *PtrAlu;
    struct Persona *Ptrsig;  
};

    struct Persona{
    char matricula[10];
    char carrera[5];
    int semestre;
    char correo[25];
    float calif[5][5];

};

int main()
{
    struct Persona people;
    int op;
    
    do{
        op=Menu(op);
        
        switch(op){
            case 1:
            ingresar (People);
            
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

