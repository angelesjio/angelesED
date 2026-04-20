#include <stdlib.h>
#include <stdio.h>
#include <math.h>

struct Dato{
  int d;
  struct Dato *Ptrsig;
};

int Menu(int op);
struct Dato* Crear();
void mostrar(struct Dato *Ptr);
void Liberar(struct Dato *Ptr);

int main()
{
    struct Dato *Ptr=NULL;
    int op=9;
    int cont=0;
    do{
        op=Menu(op);

        switch(op){
            case 1:
            Ptr=Crear();
            cont=1;
            break;
            case 2:
            if (cont==0){
             printf ("\nERROR: No se ha creado bloque\n");
            }else {
            mostrar(Ptr);
            }
            break;
            case 3:
            if (cont==0){
             printf ("\nERROR: No se ha ingresado datos\n");
            }else {
            Liberar(Ptr);
            Ptr=NULL;
            cont=0;
            }
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

int Menu(int op){
    printf("\n *MENU*\n");
    printf ("1 Crear dato\n");
    printf ("2 Mostrar dato\n");
    printf ("3 Liberar \n");
    printf ("4 Salir\n");
    printf ("Escoja una opcion\n");
    scanf ("%d", &op);

    return op;

}

struct Dato* Crear(){

    struct Dato *dato= (struct Dato*) malloc (sizeof(struct Dato));

    if (dato==NULL){
        return NULL;
    }
    printf("Ingrese un numero: ");
    scanf("%d", &(*dato).d);

    (*dato).Ptrsig = NULL;

    return dato;
}

void mostrar(struct Dato *Ptr){
    int temporal;

    if (Ptr==NULL){
        printf ("\n No ay bloque creado\n");
    }else{
        printf("\nDato: %d\n", (*Ptr).d);
    }


}

void Liberar(struct Dato *Ptr){

    free(Ptr);
    printf ("\n Liberado :D\n");
}
