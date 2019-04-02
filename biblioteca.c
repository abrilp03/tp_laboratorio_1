#include <stdio.h>
#include "biblioteca.h"


int pedirOpciones(char texto[])
{
    int opcion;

    printf(" %s",texto);
    scanf(" %d",&opcion);

    return opcion;
}

float suma (float a, float b)
{
    float sumar;

    sumar = a + b;

    return sumar;
}

float resta (float a, float b)
{
    float restar;

    restar = a - b;

    return restar;
}

float division (float a, float b)
{
    float dividir;

    if(b != 0)
    {
        dividir = a / b;
    }
    else
    {
        printf("---No es posible dividir por cero---\n");
        return 0;
    }

    return dividir;
}

float multiplicacion (float a, float b)
{
    float multiplicar;

    multiplicar = a * b;

    return multiplicar;
}

int factorial (int num)
{
    int resultado;


    if(num == 0 || num == 1)
    {
        resultado = 1;
    }
    else
    {
        resultado = num * factorial(num-1);

    }
    return resultado;

}







