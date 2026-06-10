#ifndef MILIBRERIA_H   // Evita que el archivo se incluya múltiples veces
#define MILIBRERIA_H

    int Menu(int op)(
        printf ("\n ---MENU--- \n");
        printf ("1 Ingresar persona\n");
        printf ("2 Ingresar Alumno\n");
        printf ("3 Buscar persona/ alumno\n");
        printf ("4 Salir\n");
        printf ("INgrese su elección: ");
        scanf ("%d", &op);

        return op; 
    )

    void ingresar (struct Persona people){
        printf ("INgrese los datos de la persona\n");
        
    }

#endif