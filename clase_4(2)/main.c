#include <stdio.h>
#include <stdlib.h>
#include "inputs.h"


int main()
{
    int legajo,nota,edad,peso;

    /*
    legajo
    nombre
    edad
    nota
    peso kg
    */

    legajo= getInt("ingrese legajo:",0,1000);
    nota= getInt("ingrese nota:",0,10);


    printf("Ud ingreso: %d----%d",legajo,nota);

    return 0;
}

