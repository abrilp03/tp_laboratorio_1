#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayEmployees.h"
#include "otherfunctionsValidations.h"

#define LEN 1000
//#define TAMHARCODEO 3

int main()
{
    int option;
    int seguir;
    float salary;
    int sector;
    char name[51];
    char lastName[51];
    int givenId;
    int order;
    int modifyOption;

    sEmployee listEmployees[LEN];
    initEmployees(listEmployees, LEN);

    //harcodeoEmployee(listEmployees, TAMHARCODEO);

    do
    {
        option = getInt("\n\t\t----ABM---- \n\n1. ALTAS\n\n2. MODIFICAR\n\n3. BAJA\n\n4. INFORMAR\n\n5. SALIR DEL SISTEMA\n\n \nINGRESE UNA OPCION: ");

        switch(option)
        {
            case 1:
                givenId = giveEmployeeID(listEmployees, LEN);
                getString("\nIngrese nombre de empleado: ",name);
                while(errorInDataString(name)==0)
                {
                    getString("\nError. Reingrese nombre de empleado: ",name);
                }
                getString("\nIngrese apellido de empleado: ", lastName);
                while(errorInDataString(lastName)==0)
                {
                    getString("\nError. Reingrese apellido de empleado: ", lastName);
                }
                sector = getInt("\nIngrese sector del empleado: ");
                salary = getInt("\nIngrese salario de empleado: ");

                addEmployee(listEmployees,LEN,givenId,name,lastName,salary,sector);
                break;
            case 2:
                if(initEmployees(listEmployees,LEN)==0)
                {
                    printf("\nEmpleados no ingresados.\n");
                }
                else
                {
                    printf(" ingrese id de empleado a modificar \n");
                    scanf("%d", &givenId);
                    fflush(stdin);
                    modifyOption = getInt("\nMODIFICAR: \n1.NOMBRE \n2.APELLIDO \n3.SALARIO \n4.SECTOR\n\n \nINGRESE UNA OPCION: ");

                    modifyEmployee(listEmployees,LEN,givenId,modifyOption,name,lastName,salary,sector);
                }

                break;
            case 3:
                if(initEmployees(listEmployees,LEN)==0)
                {
                    printf("\nEmpleados no ingresados.\n");
                }
                else
                {
                    removeEmployee(listEmployees,LEN,givenId);
                }
                break;
            case 4:
                if(initEmployees(listEmployees,LEN)==0)
                {
                    printf("\nEmpleados no ingresados.\n");
                }
                else
                {
                    order = getInt("\nOrdenamiento Ascendente(1) o Descendente(0): ");
                    sortEmployees(listEmployees,LEN,order);
                    printEmployees(listEmployees,LEN);
                }

                break;
            case 5:
                seguir = 5;
                break;
            default:
                printf("\nLa opcion ingresada es incorrecta.\n\n");
                break;
        }

        system("pause");
        system("cls");

    }while(option != seguir);

    return 0;
}
