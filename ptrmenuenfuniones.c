#include <stdio.h>
#include <stdlib.h>

int Menu();
void Rellenar(int *Ptr);
void Imprimir (int *Ptr);

int main (){
    int *Ptr;
    Ptr=(int*)malloc(sizeof(int)*5);
    int op;

    do{
    op=Menu();

    switch(op){
    case 1:
        Rellenar(Ptr);
        break;
    case 2:
        Imprimir(Ptr);
        break;
    case 3:
        printf ("\n Saliendo del programa....\n");
        break;
    default:
        printf ("\nOpción no encontrada... Intente de nuevo\n");
        break;

    }
} while(op!=3);
    free(Ptr);

return 0;
}

int Menu(){
    int opcion;
    printf ("\n MENU\n");
    printf ("\n 1 Rellenar con numeros aleatoreos");
    printf ("\n 2 Imprimir");
    printf ("\n 3 Salir");
    printf ("\n Escoja su opcion: ");
    scanf ("%d", &opcion);

    return opcion;


}

void Rellenar(int *Ptr){
    for (int i=0; i<5; i++){
            *(Ptr+i)=rand()%5+6;
        }
        printf ("\nHecho\n");
}


void Imprimir (int *Ptr){
    printf ("\nLos números son: ");
        for (int i=0; i<5; i++){
            printf ("\n %d ", *(Ptr+i));
        }
        printf ("\n");
}
