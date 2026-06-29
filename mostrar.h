#include <stdio.h>
#include "estructuras.h"

void Mostrartodo(struct Persona **Ptr);
void Mostrarporcarrera(struct Persona **Ptr);
void Mostrarporsemestre (struct Persona **Ptr);
void Mcarreraysemestre (struct Persona **Ptr);
void Mospornombre (struct Persona **Ptr);
void Mosmatricula (struct Persona **Ptr);


void Mostrartodo(struct Persona **Ptr){
    int h=0;
    struct Persona *otroPtr=Ptr;
    
        while(otroPtr!=NULL);{
            printf ("\nPersona %d\n", h);
            printf ("\nNombre: %s", Ptr->nombre);
            printf ("\nEdad: %d", Ptr->edad);
            printf ("\nGenero: %s", Ptr->genero);
            printf ("\nFecha de nacimiento: %d", Ptr->Fn);
            printf ("\nMatricula: %d", Ptr->matricula);
            printf ("\nCarrera: ");
            if (Ptr->carrera==1){
                printf ("Ing. DSSI ");
            }if(Ptr->carrera==2){
                printf ("\nIng. Forestal");
            }if (Ptr->carrera==3){
                printf ("\nIng. Forestal");
            }if(Ptr->carrera==4){
                printf ("\nLic. Biología");
            }if(Ptr->carrera==5){
                printf ("\nLic CN Ambientales");
            }
            printf ("\nSemestre: %d", Ptr->semestre);
            printf ("\nCorreo: %d@unsij.edu.mx", Ptr->correo);
            printf ("\nCalificaciones: ");
            for (int i=1; i<6; i++){
                printf ("Calificaciones de %d parcial\n", i);
                for (int j=0; j<6; j++){
                    PtrA->calif[i][j]= 3 + rand() % (9 - 3 + 1);
                }
                }
            
            otroPtr= otroPtr->Ptrsig;
            h++;
        }
    
}

void Mostrarporcarrera(struct Persona **Ptr){
    int h=0;
    struct Persona *otroPtr=Ptr;
    int impcarr;

    printf ("\nCARRERAS ");
        printf ("\n1) Ing. DSSI ");
        printf ("\n2) Ing. Forestal");
        printf ("\n3) Lic. Administración Turística");
        printf ("\n4) Lic. Biología");
        printf ("\n5) Lic CN Ambientales");
    printf ("\n De que carrera desea imprimir?, seleccione el número de la opción: ");
    scanf ("%d", impcarr);

        while(otroPtr->carrera==impcarr){
            printf ("\nPersona %d\n", h);
            printf ("\nNombre: %s", Ptr->nombre);
            printf ("\nEdad: %d", Ptr->edad);
            printf ("\nGenero: %s", Ptr->genero);
            printf ("\nFecha de nacimiento: %d", Ptr->Fn);
            printf ("\nMatricula: %d", Ptr->matricula);
            printf ("\nCarrera: ");
            if (Ptr->carrera==1){
                printf ("Ing. DSSI ");
            }if(Ptr->carrera==2){
                printf ("\nIng. Forestal");
            }if (Ptr->carrera==3){
                printf ("\nIng. Forestal");
            }if(Ptr->carrera==4){
                printf ("\nLic. Biología");
            }if(Ptr->carrera==5){
                printf ("\nLic CN Ambientales");
            }
            printf ("\nSemestre: %d", Ptr->semestre);
            printf ("\nCorreo: %d@unsij.edu.mx", Ptr->correo);
            printf ("\nCalificaciones: ");
            for (int i=1; i<6; i++){
                printf ("Calificaciones de %d parcial\n", i);
                for (int j=0; j<6; j++){
                    PtrA->calif[i][j]= 3 + rand() % (9 - 3 + 1);
                }
                }
            
            otroPtr= otroPtr->Ptrsig;
            h++;
        }
    
}

void Mostrarporsemestre (struct Persona **Ptr){
    int h=0;
    struct Persona *otroPtr=Ptr;
    int opse;

    printf ("\n Ingrese el semestre (Ejemplo. 1,2,3...)");
    scanf ("%d", opse);

        while(otroPtr->semestre==opse);{
            printf ("\nPersona %d\n", h);
            printf ("\nNombre: %s", Ptr->nombre);
            printf ("\nEdad: %d", Ptr->edad);
            printf ("\nGenero: %s", Ptr->genero);
            printf ("\nFecha de nacimiento: %d", Ptr->Fn);
            printf ("\nMatricula: %d", Ptr->matricula);
            printf ("\nCarrera: ");
            if (Ptr->carrera==1){
                printf ("Ing. DSSI ");
            }if(Ptr->carrera==2){
                printf ("\nIng. Forestal");
            }if (Ptr->carrera==3){
                printf ("\nIng. Forestal");
            }if(Ptr->carrera==4){
                printf ("\nLic. Biología");
            }if(Ptr->carrera==5){
                printf ("\nLic CN Ambientales");
            }
            printf ("\nSemestre: %d", Ptr->semestre);
            printf ("\nCorreo: %d@unsij.edu.mx", Ptr->correo);
            printf ("\nCalificaciones: ");
            for (int i=1; i<6; i++){
                printf ("Calificaciones de %d parcial\n", i);
                for (int j=0; j<6; j++){
                    PtrA->calif[i][j]= 3 + rand() % (9 - 3 + 1);
                }
                }
            
            otroPtr= otroPtr->Ptrsig;
            h++;
        }
}

void Mcarreraysemestre (struct Persona **Ptr){
    int h=0;
    struct Persona *otroPtr=Ptr;
    int opse;
    int opcarr;

    printf ("\nCARRERAS ");
        printf ("\n1) Ing. DSSI ");
        printf ("\n2) Ing. Forestal");
        printf ("\n3) Lic. Administración Turística");
        printf ("\n4) Lic. Biología");
        printf ("\n5) Lic CN Ambientales");
    printf ("\n De que carrera desea imprimir?, seleccione el número de la opción: ");
    scanf ("%d", opcarr);
    printf ("\n Ingrese el semestre (Ejemplo. 1,2,3...)");
    scanf ("%d", opse);

        while(otroPtr->semestre==opse && otroPtr->carrera==opcarr){
            printf ("\nPersona %d\n", h);
            printf ("\nNombre: %s", Ptr->nombre);
            printf ("\nEdad: %d", Ptr->edad);
            printf ("\nGenero: %s", Ptr->genero);
            printf ("\nFecha de nacimiento: %d", Ptr->Fn);
            printf ("\nMatricula: %d", Ptr->matricula);
            printf ("\nCarrera: ");
            if (Ptr->carrera==1){
                printf ("Ing. DSSI ");
            }if(Ptr->carrera==2){
                printf ("\nIng. Forestal");
            }if (Ptr->carrera==3){
                printf ("\nIng. Forestal");
            }if(Ptr->carrera==4){
                printf ("\nLic. Biología");
            }if(Ptr->carrera==5){
                printf ("\nLic CN Ambientales");
            }
            printf ("\nSemestre: %d", Ptr->semestre);
            printf ("\nCorreo: %d@unsij.edu.mx", Ptr->correo);
            printf ("\nCalificaciones: ");
            for (int i=1; i<6; i++){
                printf ("Calificaciones de %d parcial\n", i);
                for (int j=0; j<6; j++){
                    PtrA->calif[i][j]= 3 + rand() % (9 - 3 + 1);
                }
                }
            
            otroPtr= otroPtr->Ptrsig;
            h++;
        }
}

void Mospornombre (struct Persona **Ptr){
    int h=0;
    struct Persona *otroPtr=Ptr;
    char nompers;

    printf ("\n Ingrese el semestre nombre de la persona: ");
    scanf ("%s", nompers);

        while(otroPtr->nombre==nompers){
            printf ("\nPersona %d\n", h);
            printf ("\nNombre: %s", Ptr->nombre);
            printf ("\nEdad: %d", Ptr->edad);
            printf ("\nGenero: %s", Ptr->genero);
            printf ("\nFecha de nacimiento: %d", Ptr->Fn);
            printf ("\nMatricula: %d", Ptr->matricula);
            printf ("\nCarrera: ");
            if (Ptr->carrera==1){
                printf ("Ing. DSSI ");
            }if(Ptr->carrera==2){
                printf ("\nIng. Forestal");
            }if (Ptr->carrera==3){
                printf ("\nIng. Forestal");
            }if(Ptr->carrera==4){
                printf ("\nLic. Biología");
            }if(Ptr->carrera==5){
                printf ("\nLic CN Ambientales");
            }
            printf ("\nSemestre: %d", Ptr->semestre);
            printf ("\nCorreo: %d@unsij.edu.mx", Ptr->correo);
            printf ("\nCalificaciones: ");
            for (int i=1; i<6; i++){
                printf ("Calificaciones de %d parcial\n", i);
                for (int j=0; j<6; j++){
                    PtrA->calif[i][j]= 3 + rand() % (9 - 3 + 1);
                }
                }
            
            otroPtr= otroPtr->Ptrsig;
            h++;
        }
}

void Mosmatricula (struct Persona **Ptr){
    int h=0;
    struct Persona *otroPtr=Ptr;
    char opma;

    printf ("\n Ingrese la matricula:  ");
    scanf ("%s", opma);

        while(otroPtr->matricula==opma){
            printf ("\nPersona %d\n", h);
            printf ("\nNombre: %s", Ptr->nombre);
            printf ("\nEdad: %d", Ptr->edad);
            printf ("\nGenero: %s", Ptr->genero);
            printf ("\nFecha de nacimiento: %d", Ptr->Fn);
            printf ("\nMatricula: %d", Ptr->matricula);
            printf ("\nCarrera: ");
            if (Ptr->carrera==1){
                printf ("Ing. DSSI ");
            }if(Ptr->carrera==2){
                printf ("\nIng. Forestal");
            }if (Ptr->carrera==3){
                printf ("\nIng. Forestal");
            }if(Ptr->carrera==4){
                printf ("\nLic. Biología");
            }if(Ptr->carrera==5){
                printf ("\nLic CN Ambientales");
            }
            printf ("\nSemestre: %d", Ptr->semestre);
            printf ("\nCorreo: %d@unsij.edu.mx", Ptr->correo);
            printf ("\nCalificaciones: ");
            for (int i=1; i<6; i++){
                printf ("Calificaciones de %d parcial\n", i);
                for (int j=0; j<6; j++){
                    PtrA->calif[i][j]= 3 + rand() % (9 - 3 + 1);
                }
                }
            
            otroPtr= otroPtr->Ptrsig;
            h++;
        }
}