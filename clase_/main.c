#include <stdio.h>
#include <stdlib.h>

///                            Ejemplos de Array


int main()
{
    printf("Ejemplos de Array y Vectores\n");
    int i;

///      definir un entero
//    int numero;
///     definir un Array
//      int vectordenumeros[10];
    /*                              indice 0, cantidad de elemetos que va a tener
                                    la definicion no cambia, solo la sintaxis[]
                                    datos nativos, facilitar el trabajo en grandes cantidades
                                    es una direccion, voy a tener direciones consecutivas
                                    no es una varibale es la direccion donde comienza
                                    si quiero modificar algo es con "For"
                                    inicializarla en 0

    */
    /*
           for(i=0;i<10;i++)
           {
               vectordenumeros[i]=0;
            //printf("vector: %d\n",vectordenumeros[i]);
           }
    */
    /*
        nombre de la variable hago referencia a la dirreccion de memoria
        si quiero mostrar tengo q poner el nombre de la variable con el subindice
        para iterar sobre el vector.

        Siempre Inicialiar los vectores, como en este caso que se inicializan en 0.


        inizializar por extencion, definir elementos para el dominio con {}
        int vectordeNumeros[10]={8,7,1,3,9,-8,5,9,-1,11};

        para inicalizar todos iguales
        int vectordenumeros[10]={}; llaves vacias inizializa todos en o sino con un FOR
        para que todos se inicializen

        Puedo cargar un vector, de manera secuencial (desde el primero hasta el ultimo en orden)

    */

/*    int vectordenumeros[10]= {8,7,1,3,9,-8,5,9,-1,11};

    for(i=0; i<10; i++)
    {

        printf("vector[%d]: %d\n",i,vectordenumeros[i]);

    }
*/
/*    for(i=0; i<10; i++)
    {

        printf("ingrese un numero:");
        scanf("%d",&vectordenumeros[i]);
*/
/*
        "&" tenemos q identificar los elementos del array, con la direccion de memoria
        siempre que me mueva por el vector utilizo la posicion "i"

*/
/// inicializo el vector con valores
int vectordenumeros[10]={2,-8,-7,456,-1,0,7,-66,4,-7};

    for(i=0; i<10; i++)
    {

        printf("vector[%d]: %d\n",i,vectordenumeros[i]);

    }
/*/*************************************************************************
///                 mostrar solo los negativos(cargar manualmente o harcodear)
    for(i=0;i<10;i++)
    {
        if(vectordenumeros[i]<0)
        {
            printf("Numero Negativo[%d]: %d\n",i,vectordenumeros[i]);
        }
    }
**************************************************************************/
/*
///                 promedio de numeros positivos
int acumulador=0;
int contador=0;
float promedio;
for(i=0;i<10;i++)
{

    if(vectordenumeros[i]>=0)
    {
        contador++;
        acumulador+=vectordenumeros[i];
    }


}
promedio=(float)acumulador/contador;//castear una variable para que la expresion de flotate
printf("promedio:%f",promedio);
//************************************************************************/
int maximo;
int minimo;
int flag=0;
int iaux;
int iaux2;
for(i=0;i<10;i++)
{

    if(flag==0 || vectordenumeros[i]<0)
    {

        minimo=vectordenumeros[i];
        iaux=i;

    }
    if(flag==0 || vectordenumeros[i]>0)
    {
        maximo=vectordenumeros[i];
        iaux2=i;
        flag=1;
    }
    if(minimo<vectordenumeros[i])
    {
        minimo=vectordenumeros[i];
        iaux=i;
    }
    if(vectordenumeros[i]>maximo)
    {
        maximo=vectordenumeros[i];
        iaux2=i;
    }

}
printf("\n minimo[%d]: %d\n",iaux,minimo);
printf("  maximo[%d]: %d\n",iaux2,maximo);




    return 0;
}
