#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "otherfunctionsValidations.h"


int getInt(char string[])
{
    int number;

    printf(" %s",string);
    scanf(" %d",&number);

    return number;
}

float getFloat(char string[])
{
    float number;

    printf(" %s",string);
    scanf(" %f",&number);

    return number;
}


void getString(char mensaje[], char input[])
    {
        printf(mensaje);
        fflush(stdin);
        scanf("%s", input);
    }

int isNumber(char cadena[])
{
    int i = 0;
    int retorno = 1;

    while(cadena[i] != '\0')
    {
        if(cadena[i]< '0' || cadena[i]> '9')
        {
            retorno = 0;
        }
        i++;
    }
    return retorno;

}




