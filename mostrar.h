#ifndef MOSTRAR_H
#define MOSTRAR_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>     
#include "estructuras.h"

void Mostrartodo(struct Persona **Ptr);
void Mostrarporcarrera(struct Persona **Ptr);
void Mostrarporsemestre (struct Persona **Ptr);
void Mcarreraysemestre (struct Persona **Ptr);
void Mospornombre (struct Persona **Ptr);
void Mosmatricula (struct Persona **Ptr);

void CasosMostrar(int opM, struct Persona **Ptr);


void Mostrartodo(struct Persona **Ptr){
    int h=0;
    struct Persona *otroPtr=*Ptr;
    
    while(otroPtr!=NULL){
        struct Alumno *otroPtrA = otroPtr->PtrAlum; 
        
        printf ("\nPersona %d\n", h+1);
        printf ("\nNombre: %s", otroPtr->nombre);
        printf ("\nEdad: %d", otroPtr->Edad);
        printf ("\nGenero: %c", otroPtr->genero);
        printf ("\nFecha de nacimiento: %s", otroPtr->Fn);
        printf ("\nMatricula: %s", otroPtrA->matricula);
        printf ("\nCarrera: ");
            if (otroPtrA->carrera==1){
                printf ("\nIng. DSSI ");
            }if(otroPtrA->carrera==2){
                printf ("\nIng. Forestal");
            }if (otroPtrA->carrera==3){
                printf ("\nLic. administracion turistica");
            }if(otroPtrA->carrera==4){
                printf ("\nLic. Biología");
            }if(otroPtrA->carrera==5){
                printf ("\nLic CN Ambientales");
            }
            printf ("\nSemestre: %d", otroPtrA->semestre);
            printf ("\nCorreo: %s@unsij.edu.mx", otroPtrA->correo);
            printf ("\nCalificaciones: ");
            for(int i = 0; i < 5; i++){
                printf("Calificaciones de Parcial %d\n", i + 1);
                for(int j = 0; j < 5; j++){
                    printf("%.2f ", otroPtrA->calif[i][j]);
                }
                printf("\n");
            }
            
            otroPtr = otroPtr->Ptrsig;
            if (otroPtr != NULL){
                otroPtrA = otroPtr->PtrAlum;
            }
            h++;
        }
    
}

void Mostrarporcarrera(struct Persona **Ptr){
    int h=0;
    struct Persona *otroPtr=*Ptr;
    struct Alumno *otroPtrA = otroPtr->PtrAlum;
    int impcarr;

    printf ("\nCARRERAS ");
        printf ("\n1) Ing. DSSI ");
        printf ("\n2) Ing. Forestal");
        printf ("\n3) Lic. Administración Turística");
        printf ("\n4) Lic. Biología");
        printf ("\n5) Lic CN Ambientales");
    printf ("\n De que carrera desea imprimir?, seleccione el número de la opción: ");
    scanf ("%d", &impcarr);

        while (otroPtr!=NULL){
            if(otroPtrA->carrera==impcarr){
            printf ("\nPersona %d\n", h+1);
            printf ("\nNombre: %s", otroPtr->nombre);
            printf ("\nEdad: %d", otroPtr->Edad);
            printf ("\nGenero: %c", otroPtr->genero);
            printf ("\nFecha de nacimiento: %s", otroPtr->Fn);
            printf ("\nMatricula: %s", otroPtrA->matricula);
            printf ("\nCarrera: ");
                if (otroPtrA->carrera==1){
                    printf ("\nIng. DSSI ");
                }if(otroPtrA->carrera==2){
                    printf ("\nIng. Forestal");
                }if (otroPtrA->carrera==3){
                    printf ("\nLic. Administracion turistica");
                }if(otroPtrA->carrera==4){
                    printf ("\nLic. Biología");
                }if(otroPtrA->carrera==5){
                    printf ("\nLic CN Ambientales");
                }
                printf ("\nSemestre: %d", otroPtrA->semestre);
                printf ("\nCorreo: %s@unsij.edu.mx", otroPtrA->correo);
                printf ("\nCalificaciones: ");
                for(int i = 0; i < 5; i++){
                    printf("Calificaciones de Parcial %d\n", i + 1);
                    for(int j = 0; j < 5; j++){
                        printf("%.2f ", otroPtrA->calif[i][j]);
                }
                printf("\n");
            }
            
            h++;
            }
            otroPtr = otroPtr->Ptrsig;
            if (otroPtr != NULL){
                otroPtrA = otroPtr->PtrAlum;
            }
        }

        if(h==0){
            printf ("\nNo se encontraron coincidencias\n");
        }
        
            
}
    


void Mostrarporsemestre (struct Persona **Ptr){
    int h=0;
    struct Persona *otroPtr=*Ptr;
    struct Alumno *otroPtrA = otroPtr->PtrAlum;
    int opse;

    printf ("\n Ingrese el semestre (Ejemplo. 1,2,3...)");
    scanf ("%d", &opse);
    
    while (otroPtr!=NULL){
        if(otroPtrA->semestre==opse){
            printf ("\nPersona %d\n", h+1);
            printf ("\nNombre: %s", otroPtr->nombre);
            printf ("\nEdad: %d", otroPtr->Edad);
            printf ("\nGenero: %c", otroPtr->genero);
            printf ("\nFecha de nacimiento: %s", otroPtr->Fn);
            printf ("\nMatricula: %s", otroPtrA->matricula);
            printf ("\nCarrera: ");
                if (otroPtrA->carrera==1){
                    printf ("\nIng. DSSI ");
                }if(otroPtrA->carrera==2){
                    printf ("\nIng. Forestal");
                }if (otroPtrA->carrera==3){
                    printf ("\nLic. Administracion turistica");
                }if(otroPtrA->carrera==4){
                    printf ("\nLic. Biología");
                }if(otroPtrA->carrera==5){
                    printf ("\nLic CN Ambientales");
                }
                printf ("\nSemestre: %d", otroPtrA->semestre);
                printf ("\nCorreo: %s@unsij.edu.mx", otroPtrA->correo);
                printf ("\nCalificaciones: ");
                for(int i = 0; i < 5; i++){
                    printf("Calificaciones de Parcial %d\n", i + 1);
                    for(int j = 0; j < 5; j++){
                        printf("%.2f ", otroPtrA->calif[i][j]);
                }
                printf("\n");
            }
            
            h++;
            }
            otroPtr = otroPtr->Ptrsig;
            if (otroPtr != NULL){
                otroPtrA = otroPtr->PtrAlum;
            }
        }

        if(h==0){
            printf ("\nNo se encontraron coincidencias\n");
        }
        
}

void Mcarreraysemestre (struct Persona **Ptr){
    int h=0;
    struct Persona *otroPtr=*Ptr;
    struct Alumno *otroPtrA = otroPtr->PtrAlum;
    int opse;
    int opcarr;

    printf ("\nCARRERAS ");
        printf ("\n1) Ing. DSSI ");
        printf ("\n2) Ing. Forestal");
        printf ("\n3) Lic. Administración Turística");
        printf ("\n4) Lic. Biología");
        printf ("\n5) Lic CN Ambientales");
    printf ("\n De que carrera desea imprimir?, seleccione el número de la opción: ");
    scanf ("%d", &opcarr);
    printf ("\n Ingrese el semestre (Ejemplo. 1,2,3...)");
    scanf ("%d", &opse);

        while (otroPtr!=NULL){
            if(otroPtrA->semestre == opse && otroPtrA->carrera == opcarr){
                printf ("\nPersona %d\n", h+1);
                printf ("\nNombre: %s", otroPtr->nombre);
                printf ("\nEdad: %d", otroPtr->Edad);
                printf ("\nGenero: %c", otroPtr->genero);
                printf ("\nFecha de nacimiento: %s", otroPtr->Fn);
                printf ("\nMatricula: %s", otroPtrA->matricula);
                printf ("\nCarrera: ");
                    if (otroPtrA->carrera==1){
                        printf ("\nIng. DSSI ");
                    }if(otroPtrA->carrera==2){
                        printf ("\nIng. Forestal");
                    }if (otroPtrA->carrera==3){
                        printf ("\nLic. Administración turistica");
                    }if(otroPtrA->carrera==4){
                        printf ("\nLic. Biología");
                    }if(otroPtrA->carrera==5){
                        printf ("\nLic CN Ambientales");
                    }
                    printf ("\nSemestre: %d", otroPtrA->semestre);
                    printf ("\nCorreo: %s@unsij.edu.mx", otroPtrA->correo);
                    printf ("\nCalificaciones: ");
                    for(int i = 0; i < 5; i++){
                        printf("Calificaciones de Parcial %d\n", i + 1);
                        for(int j = 0; j < 5; j++){
                            printf("%.2f ", otroPtrA->calif[i][j]);
                    }
                printf("\n");
            }
                
                h++;
                }
            otroPtr = otroPtr->Ptrsig;
            if (otroPtr != NULL){
                otroPtrA = otroPtr->PtrAlum;
            }
        }

        if(h==0){
            printf ("\nNo se encontraron coincidencias\n");
        }
}


void Mospornombre (struct Persona **Ptr){
    int h=0;
    struct Persona *otroPtr=*Ptr;
    struct Alumno *otroPtrA = otroPtr->PtrAlum;
    char nompers[30];

    printf ("\n Ingrese el semestre nombre de la persona: ");
    scanf ("%s", nompers);

    while (otroPtr!=NULL){
        if(strcmp(otroPtr->nombre, nompers) == 0){
            printf ("\nPersona %d\n", h+1);
                printf ("\nNombre: %s", otroPtr->nombre);
                printf ("\nEdad: %d", otroPtr->Edad);
                printf ("\nGenero: %c", otroPtr->genero);
                printf ("\nFecha de nacimiento: %s", otroPtr->Fn);
                printf ("\nMatricula: %s", otroPtrA->matricula);
                printf ("\nCarrera: ");
                    if (otroPtrA->carrera==1){
                        printf ("\nIng. DSSI ");
                    }if(otroPtrA->carrera==2){
                        printf ("\nIng. Forestal");
                    }if (otroPtrA->carrera==3){
                        printf ("\nLic. Administracion Turistica");
                    }if(otroPtrA->carrera==4){
                        printf ("\nLic. Biología");
                    }if(otroPtrA->carrera==5){
                        printf ("\nLic CN Ambientales");
                    }
                    printf ("\nSemestre: %d", otroPtrA->semestre);
                    printf ("\nCorreo: %s@unsij.edu.mx", otroPtrA->correo);
                    printf ("\nCalificaciones: ");
                    for(int i = 0; i < 5; i++){
                        printf("Calificaciones de Parcial %d\n", i + 1);
                        for(int j = 0; j < 5; j++){
                            printf("%.2f ", otroPtrA->calif[i][j]);
                    }
                printf("\n");
            }
                
                h++;
            }
        otroPtr = otroPtr->Ptrsig;
        if (otroPtr != NULL){
            otroPtrA = otroPtr->PtrAlum;
        }
        }

        if(h==0){
            printf ("\nNo se encontraron coincidencias\n");
        }
        
}

void Mosmatricula (struct Persona **Ptr){
    int h=0;
    struct Persona *otroPtr=*Ptr;
    struct Alumno *otroPtrA = otroPtr->PtrAlum;
    char opma[10];

    printf ("\n Ingrese la matricula:  ");
    scanf ("%s", opma);

    while (otroPtr!=NULL){
         if(strcmp(otroPtrA->matricula, opma)==0){
            printf ("\nPersona %d\n", h+1);
                printf ("\nNombre: %s", otroPtr->nombre);
                printf ("\nEdad: %d", otroPtr->Edad);
                printf ("\nGenero: %c", otroPtr->genero);
                printf ("\nFecha de nacimiento: %s", otroPtr->Fn);
                printf ("\nMatricula: %s", otroPtrA->matricula);
                printf ("\nCarrera: ");
                    if (otroPtrA->carrera==1){
                        printf ("\nIng. DSSI ");
                    }if(otroPtrA->carrera==2){
                        printf ("\nIng. Forestal");
                    }if (otroPtrA->carrera==3){
                        printf ("\nLic. Administración turistica");
                    }if(otroPtrA->carrera==4){
                        printf ("\nLic. Biología");
                    }if(otroPtrA->carrera==5){
                        printf ("\nLic CN Ambientales");
                    }
                    printf ("\nSemestre: %d", otroPtrA->semestre);
                    printf ("\nCorreo: %s@unsij.edu.mx", otroPtrA->correo);
                    printf ("\nCalificaciones: ");
                    for(int i = 0; i < 5; i++){
                        printf("Calificaciones de Parcial %d\n", i + 1);
                        for(int j = 0; j < 5; j++){
                            printf("%.2f ", otroPtrA->calif[i][j]);
                    }
                printf("\n");
            }
                
                h++;
        }
        otroPtr = otroPtr->Ptrsig;
        if (otroPtr != NULL){
            otroPtrA = otroPtr->PtrAlum;
        }

    }

    if(h==0){
            printf ("\nNo se encontraron coincidencias\n");
        }
       
}

void CasosMostrar(int opM, struct Persona **Ptr){
        if(*Ptr!=NULL){
            
        switch(opM){
                case 1:
                    Mostrartodo(Ptr);
                break;

                case 2:
                    Mostrarporcarrera(Ptr);
                break;

                case 3:
                    Mostrarporsemestre (Ptr);
                break;

                case 4:
                    Mcarreraysemestre (Ptr);
                break;

                case 5:
                    Mospornombre (Ptr);
                break;

                case 6:
                    Mosmatricula (Ptr);
                break;

                case 7:
                printf ("\n Saliendo\n");
                    break;

                default:
                printf ("\n Eleccion no valida, intente de nuevo\n");
                break; 
                }
            }else{
                printf ("\nNo existe nada que imprimir\n");
            }

    }

#endif
