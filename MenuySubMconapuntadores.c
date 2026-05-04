#include <stdlib.h>
#include <stdio.h>
#include <math.h>

struct Dato{
  int d;
  struct Dato *Ptrsig;
};

int Menu(int op);

int Funciones(int op2);
void Buscar (struct Dato *Ptr);
void Contar(struct Dato *Ptr);
void Remplazar(struct Dato *Ptr);
void Ordenar(struct Dato *Ptr);

struct Dato* Crear();
void mostrar(struct Dato *Ptr);
void Liberar(struct Dato *Ptr);

int main()
{
    struct Dato *Ptr=NULL;
    int op,op2;
    int cont=0;
    struct Dato *ptrtemp, *Ptraux;
    int cuantos=0;
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

            case 2://SUB MENUUUUuuuuuuuuuuuuuuuuuu
            if(cont==0){
                printf ("\n No se ha reservado memoria, no es posible acceder a estas funciones\n");
            }else{
            do{
                op2=Funciones(op2);
                cont=1;

                switch (op2)
                {
                case 1:
                    Buscar (Ptr);
                    break;

                case 2:
                    Contar(Ptr);
                    break;

                case 3:
                    Remplazar(Ptr);
                    break;

                case 4:
                    Ordenar(Ptr);
                    break;

                case 5:
                    printf ("Volviendo a Menú principal...\n");
                    break;

                default:
                    printf ("Opción no encontrada, intente de nuevo ...\n");
                    break;
                }

            }while(op2!=5);
            }
            break;
//FIN DE SUB MENUUUUUUUUUUUUUUUU
            case 3:
            if (cont==0){
             printf ("\nERROR: No se ha creado bloque\n");
            }else {
            mostrar(Ptr);
            }
            break;

            case 4:
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

            case 5:
                Ptraux=Ptr;
                while (Ptr!=NULL){
                    Ptraux=Ptr;
                    Ptr=Ptraux->Ptrsig;
                    free (Ptraux);
                }
                Ptr=NULL;
                printf ("\n Saliendo...");
                break;

            default:
            printf ("\nOpcion no encontrada, intente de nuevo....\n");

            }


    }while (op!=5);

    return 0;
}

int Menu(int op){
    printf("\n *MENU*\n");
    printf ("1 Crear dato\n");
    printf ("2 Funciones\n");
    printf ("3 Mostrar dato\n");
    printf ("4 Elimnar nodo\n");
    printf ("5 Salir\n");
    printf ("Escoja una opcion\n");
    scanf ("%d", &op);

    return op;

}

//funciones sub menu
int Funciones(int op2){
    printf ("\n Funciones...\n");
    printf ("1 Buscar\n");//ya
    printf ("2 Contar\n");//ya
    printf ("3 Reemplazar\n");//ya
    printf ("4 Ordenar\n");//Falta revisar
    printf ("5 Volver a Menú principal\n");
    printf ("Escoga una opción: ");
    scanf ("%d", &op2);

    return op2;

}

void Buscar (struct Dato *Ptr){
    int dabus;
    printf ("Ingrese el dato que desea buscar en los nodos: ");
    scanf ("%d", &dabus);
    int con=0;

    while (Ptr!=NULL){
        if (Ptr->d==dabus){
            con++;
        }
        Ptr=Ptr->Ptrsig;
    }

    if (con==0){
        printf ("El dato que buscas no existe en los nodos\n");
    }else{
        printf ("Existe %d nodo/s con ese dato\n", con);
    }
}


void Contar(struct Dato *Ptr){
    int cont=0;
    if(Ptr==NULL){
        printf ("No existen nodos creados\n");
    }else{
        while (Ptr!=NULL){
            cont++;
            Ptr=Ptr->Ptrsig;
        }
        printf ("La cantidad de nodos creados es: %d \n", cont);
    }

}

void Remplazar(struct Dato *Ptr){
    int rem, cambio;
    printf ("Ingrese el dato que desea reemplazar: ");
    scanf ("%d", &rem);
    int si=0;

    while (Ptr!=NULL){
        if (Ptr->d==rem){
            printf ("Ingrese el dato que quiere insertar: ");
            scanf ("%d", &cambio);
            Ptr->d=cambio;
            printf ("Dato reemplazado :D\n");
            si++;
            break;
        }
        Ptr=Ptr->Ptrsig;
    }

    if(si==0){
       printf ("El dato no existe en los nodos actuales, no se pudo remplazar :c\n");
    }
}

void Ordenar(struct Dato *Ptr){
    struct Dato *i, *j;
    int temp;
        for(i = Ptr; i != NULL; i = i->Ptrsig){
            for(j = i->Ptrsig; j != NULL; j = j->Ptrsig){
                if(i->d > j->d){
                    temp = i->d;
                    i->d = j->d;
                    j->d = temp;
            }
        }
    }
    printf ("Ordenado! \n");


}
//Fin de funciones sub menu

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
            printf(" %d -> ", Ptr->d);
            Ptr=Ptr->Ptrsig;
        }
        printf ("\n");
    }


}