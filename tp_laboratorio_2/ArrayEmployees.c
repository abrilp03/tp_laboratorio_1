#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayEmployees.h"

/*
void harcodeoEmployee (sEmployee list[], int len)
{
    float salary[3]= {5000,6000,4500};
    char name[3][51] = {"Usui","Aoi","Kazuya"};
    char lastName[3][51] = {"Takumi","Kuroshima","Miyuki"};
    int sector[3] = {20,50,30};
    int id[3] = {1,2,3};
    int isEmpty[4]= { 1, 1, 1, 1};

    int i;
    for(i=0; i<3; i++)
    {
        strcpy(list[i].name, name[i]);
        strcpy(list[i].lastName, lastName[i]);
        list[i].salary = salary[i];
        list[i].sector = sector[i];
        list[i].id = id[i];
        list[i].isEmpty = isEmpty[i];
    }
}
*/

int initEmployees(sEmployee list[],int len)
{
    int i;

    for(i=0; i<len; i++)
    {
        list[i].isEmpty = LIBRE;
    }

    return 0;
}


int addEmployee(sEmployee list[], int len, int id, char name[],char lastName[],float salary,int sector)
{
    int i;
    for(i = 0; i<len; i++)
    {
        if(list[i].isEmpty == LIBRE)
        {
            list[i].id = id;
            strcpy(list[i].name, name);
            strcpy(list[i].lastName, lastName);
            list[i].salary = salary;
            list[i].sector = sector;
            list[i].isEmpty = OCUPADO;
            return 0;
        }
    }
    return -1;
}


int giveEmployeeID(sEmployee list[], int len)
{
    int i;
    int retornoId;

    for(i=0; i<len; i++)
    {
        if(list[i].isEmpty == LIBRE)
        {
            retornoId = i+1;
            break;
        }
    }
    return retornoId;
}

void showEmployee(sEmployee oneEmployee)
{
    printf("%10d %10s %10s %10d %10.2f %5d\n", oneEmployee.id, oneEmployee.name, oneEmployee.lastName, oneEmployee.sector, oneEmployee.salary, oneEmployee.isEmpty);
}

void printEmployees(sEmployee list[], int len)
{
    int i;
    for(i=0; i<len; i++)
    {
        if(list[i].isEmpty == OCUPADO)
        {
            printf("\n");
            showEmployee(list[i]);
        }
    }
}

int findEmployeeByID(sEmployee list[], int len, int id)
{
    int i;

    for(i=0; i< len; i++)
    {

        if(list[i].id == id)
        {
            return i;
        }

    }

    return -1;
}

int removeEmployee(sEmployee list[], int len, int id)
{
    int i;
    int idGiven;
    int foundIt = findEmployeeByID(list,len,id);

    printf("Ingrese el id del empleado: ");
    fflush(stdin);
    scanf("%d", &idGiven);

    for(i=0; i<len; i++)
    {
        if(list[i].id==idGiven)
        {
            list[i].isEmpty = LIBRE;
            foundIt = 1;
            break;
        }
    }

    if(foundIt==-1)
    {
      printf("Codigo inexistente!");
    }

    return 0;
}

int sortEmployees(sEmployee list[], int len, int order)
{
    int i,j;
    int retorno = -1;
    sEmployee aux;

    if(order == 1)
    {
        for(i=0; i<len-1; i++)
        {
            for(j=i+1; j<len; j++)
            {
              if(strcmp(list[i].lastName, list[j].lastName)>0)
              {
                aux = list[i];
                list[i] = list[j];
                list[j] = aux;
                retorno = 0;
              }
            }
        }
    }
    if(order == 0)
    {
        for(i=0; i<len-1; i++)
        {
            for(j=i+1; j<len; j++)
            {
              if(strcmp(list[i].lastName, list[j].lastName)<0)
              {
                aux = list[i];
                list[i] = list[j];
                list[j] = aux;
                retorno = 0;
              }
            }
        }
    }

    return retorno;
}

int modifyEmployee(sEmployee list[], int len, int id,int option, char name[],char lastName[],float salary,int sector)
{
    int i;
    int retorno = -1;

    for(i = 0; i<len; i++)
    {
        if(list[i].isEmpty == OCUPADO && list[i].id == id)
        {
            switch(option)
            {
                case 1:
                    printf("\nIngrese nuevo nombre: ");
                    gets(name);
                    strcpy(list[i].name, name);
                    break;
                case 2:
                    printf("\nIngrese nuevo apellido: ");
                    gets(lastName);
                    strcpy(list[i].lastName, lastName);
                    break;
                case 3:
                    printf("\nIngrese nuevo salario: ");
                    scanf("%f", &salary);
                    list[i].salary = salary;
                    break;
                case 4:
                    printf("\nIngrese nuevo sector: ");
                    scanf("%d", &sector);
                    list[i].sector = sector;
                    break;
                default:
                    printf("Opcion incorrecta.");
                    break;
            }

            retorno = 0;
        }
    }
    return retorno;
}

