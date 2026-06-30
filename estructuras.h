#ifndef ESTRUCTURAS_H
#define ESTRUCTURAS_H

#include <stdio.h>

struct Alumno{
    char matricula[11];
    int carrera;
    int semestre;
    char correo[25];
    float calif[5][5];
};

struct Persona{
    char *nombre;
    int Edad;
    char genero;
    char Fn[11];        

    struct Alumno *PtrAlum;
    struct Persona *Ptrsig;
};

#endif
