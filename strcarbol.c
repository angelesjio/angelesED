#include <stdio.h>
#include <stdlib.h>

struct arbol{
    int dato;
    struct arbol *izq, *der;
};

int Menu(int op);
struct arbol* crear();
void inOrden(struct arbol* raiz);
void Eliminar (struct arbol *raiz);

int main(){
    struct arbol *raiz=NULL;
    struct arbol *Craiz=NULL;
    int op;
    struct arbol *Ptrtemp=NULL;

    do{
        op=Menu(op);

        switch(op){
            case 1:
                Ptrtemp=crear();
                if (Ptrtemp==NULL){
                    printf ("NO se pudo crear memoria\n");
                }else if(raiz==NULL){
                    raiz=Ptrtemp;
                } else {
                                Craiz=raiz;
                                while(1){ 
                                    if (Ptrtemp->dato>Craiz->dato){
                                            if (Craiz->der==NULL){
                                                Craiz->der=Ptrtemp;
                                                break;
                                             }
                                            else{
                                                Craiz=Craiz->der;    
                                             }
                                    }

                                    if (Ptrtemp->dato<Craiz->dato){
                                            if (Craiz->izq==NULL){
                                                Craiz->izq=Ptrtemp;
                                                break;
                                            }
                                            else{
                                                Craiz=Craiz->izq;                                                 
                                            }
                                    }
                                }
                                    
                            }

            break;

            case 2:
                inOrden(raiz);
            break;

            case 3:
            Eliminar(raiz);
            break;

            case 4:
            printf ("\n Saliendo \n");
            break;

            default:
            printf ("\n Opción no encontrada\n");
            break;
        }

    }while(op!=4);


}

int Menu(int op){
    printf ("\nMenu\n");
    printf ("1 Ingresar\n");
    printf ("2 MOstrar\n");
    printf ("3 ELiminar\n");
    printf ("4 Salir\n");
    printf ("Escoja una opcion: ");
    scanf ("%d", &op);

    return op;
}

struct arbol* crear(){
    struct arbol *rama= (struct arbol*) malloc(sizeof(struct arbol));

    if (rama==NULL){
        return 0;
    }else{
    printf ("Ingrese su dato: ");
    scanf ("%d", &rama->dato);

    rama->izq=NULL;
    rama->der=NULL;
    return rama;
    }
    


}
/*
int mostrar(struct arbol *raiz){
    struct arbol *Craiz=raiz;
    if (Craiz==NULL){
        printf ("Vacia\n");
        break;
    }

    system.out.printf("->", )

}*/


void inOrden(struct arbol* raiz){
    
    if (raiz!=NULL){
        inOrden(raiz->izq);
        printf (" -> %d", raiz->dato);
        inOrden (raiz->der);
        
    }

    printf ("\n");

}

void Eliminar (struct arbol *raiz){

}
