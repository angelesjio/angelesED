#ifndef STRUCTS_H
#define STRUCTS_H

#include <stdio.h>

int menuPrincipal(void);

    int menuPrincipal(void){
        int op; 
        printf ("\n ---MENU--- \n");
        printf ("1 Ingresar persona\n");
        printf ("2 Mostrar\n");
        printf ("3 Eliminar\n");
        printf ("4 Salir\n");
        printf ("INgrese su elección: ");
        scanf ("%d", &op);

        return op; 
    }

#endif
