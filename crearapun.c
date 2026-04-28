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
    struct Dato *ptrtemp, *Ptraux;
    do{
        op=Menu(op);

        switch(op){
            case 1:
            ptrtemp=Crear();
            if(ptrtemp==NULL){
                printf ("No se ha creado nuevo dato");
            }else{
                if(Ptr==NULL){
                    Ptr=ptrtemp;
                }else{
                    Ptraux=Ptr;
                    while(Ptraux->Ptrsig!= NULL){
                        Ptraux=Ptraux->Ptrsig;
                    }
                    Ptraux->Ptrsig=ptrtemp;
                }
            }
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
            if (Ptr == NULL){
            printf("No se ha reservado memoria \n");
            } else if (Ptr->Ptrsig == NULL){
            free(Ptr);
            Ptr = NULL;
            } else{
                Ptraux=Ptr;
                while ((Ptraux->Ptrsig)->Ptrsig!= NULL ){
                    Ptraux=Ptraux->Ptrsig;
                }
                free(Ptraux->Ptrsig);
                Ptraux->Ptrsig=NULL;
                Ptraux=NULL;
                printf ("\n Ultimo nodo eliminado\n");
            }
            break;

            case 4:
                Ptraux=Ptr;
                while (Ptr!=NULL){
                    Ptraux=Ptr;
                    free (Ptraux);
                    Ptr=Ptraux->Ptrsig;
                }
              Ptr=NULL;
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
    printf ("3 Elimnar nodo\n");
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
    scanf("%d", &dato->d);

    dato->Ptrsig = NULL;

    return dato;
}

void mostrar(struct Dato *Ptr){
     printf ("\n");
    if (Ptr==NULL){
        printf ("\n No hay bloque creado\n");
    }else{
        while (Ptr != NULL ){
            printf("Dato: %d\n", Ptr->d);
            Ptr=Ptr->Ptrsig;
        }
    }


}
