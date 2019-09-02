#include "inputs.h"

int getInt(int* numero,char mensaje[],int min,int max)
{
    int retorno=0;

    printf("%s",mensaje);
    scanf("%d",numero);

    while(*numero<min || *numero>max)
    {
        printf("ERROR. Re%s",mensaje);
        scanf("%d",numero);
    }

    return retorno;
}


