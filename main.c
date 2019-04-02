#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main()
{
    int opcion;
    float a = 0;
    float b = 0;
    float resultSuma;
    float resulResta;
    float resulDivision;
    float resulMultiplicacion;
    int resulFactorialA;
    int resulFactorialB;
    char seguir;
    seguir = 's';


    do
    {
        opcion = printf("    -----CALCULADORA----- \n1. Ingresar primer operando (A = %0.2f) \n2. Ingresar segundo operando (B = %0.2f)", a , b);
        opcion = pedirOpciones("\n3.Calcular todas las operaciones\n   a. Suma \n   b. Resta \n   c. Division \n   d. Multiplicacion \n   e. Factorial \n4. Informar los resultados \n5. Salir \nElija una opcion: ");

            switch(opcion)
            {
                case 1:
                    printf("Ingrese el primer operando: ");
                    scanf("%f", &a);
                    setbuf(stdin, NULL);

                    break;

                case 2:
                    printf("Ingrese el segundo operando: ");
                    scanf("%f", &b);
                    setbuf(stdin, NULL);

                    break;

                case 3:

                    printf("\nOperaciones Realizadas\n");

                    resultSuma = suma(a, b);

                    resulResta = resta(a,b);

                    resulDivision = division(a,b);

                    resulMultiplicacion = multiplicacion(a,b);

                    resulFactorialA = factorial(a);

                    resulFactorialB = factorial(b);

                    break;

                case 4:
                    printf("\nEl resultado de A + B es: %f\n", resultSuma);
                    printf("\nEl resultado de A - B es: %f\n", resulResta);
                    printf("\nEl resultado de A / B es: %f\n", resulDivision);
                    printf("\nEl resultado de A * B es: %f\n", resulMultiplicacion);
                    printf("\nEl resultado de A! es: %d\n", resulFactorialA);
                    printf("\nEl resultado de B! es: %d\n\n", resulFactorialB);

                    break;

                case 5:
                    seguir = 'n';

                    break;

                default:
                    printf("La opcion es incorrecta \n");

            }

        system("pause");
        system("cls");

    }while (seguir == 's');

    return 0;
}
