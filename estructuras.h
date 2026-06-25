#ifndef STRUCTS_H
#define STRUCTS_H

#include <stdio.h>
    struct Alumno{
    char matricula[10];
    int carrera;
    int semestre;
    char correo[25];
    float calif[5][5];

    };

    struct Persona{
    char *nombre;
    int Edad;
    char genero; 
    char Fn[9];

    struct Alumno *PtrAlum;
    struct Persona *Ptrsig;  
    };


#endif