#include <stdlib.h>


struct Persona{
    char *nombre;
    int Edad;
    struct Persona *Alumno;  
};


int main()
{
    struct Persona people;
    int op;
    
    do{
        op=Menu(op);
        
        switch(op){
            case 1:
            
            
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

