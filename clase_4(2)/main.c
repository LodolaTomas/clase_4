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
/*

pasaje por valor, pasamos varibales de tipo entero(int) char y float
pasaje por referencias, pasamos arrays y punteros

main{

int numero=4;
fx(numero);
***en el caso de querer cambiar numero tendriamos que hacer
***numero = fx(numero);

}

fx(int x)//x tiene una copia de numero
{

x=9// solo se modifica x a noser
***x=9
***return x;

}


*/
    return 0;
}
/*                PUNTEROS (BASICO)
    main
    {

    int numero=4;
    fx(&numero);//envio la direccion de memoria

    }

    fx(int* x)
    {

    *x=9;//modifico directamente al valor de numero
    //modifica al valor que apunta
    }


*/
