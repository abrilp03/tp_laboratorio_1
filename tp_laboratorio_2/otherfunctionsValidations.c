#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "otherfunctionsValidations.h"


int getInt(char text[])
{
    int option;

    printf(" %s",text);
    scanf(" %d",&option);
    fflush(stdin);

    return option;
}

void getString(char mensaje[], char input[])
    {
        printf(mensaje);
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

int errorInDataString(char cadena[])
{
    int retorno = 1;
    int len;
    len = strlen(cadena);

    if(0 < len)
    {
       if(isNumber(cadena))
        {
            retorno = 0;
        }
    }

    return retorno;
}




