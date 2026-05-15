#include <stdio.h>
#include <stdlib.h>

struct Dato{
    int n;
    struct Dato *ant;
    struct Dato *sig;
};

int Menu(){

    int op;

    printf("\nMenu\n");
    printf("1 Crear dato\n");
    printf("2 Eliminar nodo\n");
    printf("3 Mostrar datos\n");
    printf("4 Salir\n");
    printf("Elija una opcion: ");
    scanf("%d",&op);

    return op;
}

struct Dato *Crear(){

    struct Dato *dato = (struct Dato*)malloc(sizeof(struct Dato));

    if(dato==NULL){
        printf ("No se pudo reservar memoria\n");
        return NULL;
    }

    printf("Ingrese un dato: ");
    scanf("%d",&dato->n);


    return dato;



};

int main(){

    int op;
    struct Dato *ptr = NULL;
    struct Dato *Ptrnew;
    struct Dato *Ptrult;
    struct Dato *Ptrpenult;
    struct Dato *Ptrtem;

    do{

        op = Menu();

        switch(op){

        case 1:{

            Ptrnew = Crear();

            if(Ptrnew == NULL){

                printf("No se pudo crear memoria\n");

            }else{

                if(ptr == NULL){

                    Ptrnew->sig = Ptrnew;
                    Ptrnew->ant = Ptrnew;
                    ptr = Ptrnew;

                }else{

                    Ptrult = ptr->ant;
                    Ptrnew->sig = ptr;
                    Ptrnew->ant = Ptrult;
                    Ptrult->sig = Ptrnew;
                    ptr->ant = Ptrnew;

                    ptr = Ptrnew;
                }

                printf("Se creo el dato\n");
            }

            break;
        }

        case 2:{

            if(ptr == NULL){

                printf("No se ha reservado memoria\n");

            }else{

                Ptrult = ptr->ant;

                if(Ptrult == ptr){

                    free(ptr);
                    ptr = NULL;

                    printf("Nodo eliminado\n");

                }else{

                    Ptrpenult = Ptrult->ant;

                    Ptrpenult->sig = ptr;
                    ptr->ant = Ptrpenult;

                    free(Ptrult);

                    printf("Nodo eliminado\n");
                }
            }

            break;
        }

        case 3:{

            if(ptr == NULL){

                printf("No ay datos creados\n");

            }else{

                Ptrtem = ptr;

                printf("\nNodos\n");

                do{

                    printf("%d -> ", Ptrtem->n);
                    Ptrtem = Ptrtem->sig;

                }while(Ptrtem != ptr);

                printf ("\n");
            }

            break;
        }

        case 4:

    if(ptr != NULL){

        Ptrtem = ptr->sig;

        while(Ptrtem != ptr){

            Ptrult = Ptrtem;
            Ptrtem = Ptrtem->sig;
            free(Ptrult);
        }

        free(ptr);
        ptr = NULL;
    }

    printf("\nSaliendo :D...");
    break;


        default:
            printf("Opcion invalida\n");
        }

    }while(op != 4);

    return 0;
}
