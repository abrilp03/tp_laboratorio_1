#ifndef ARRAYEMPLOYEES_H_INCLUDED
#define ARRAYEMPLOYEES_H_INCLUDED
#include "otherfunctionsValidations.h"
#define LIBRE 0
#define OCUPADO 1

/** \brief Estrucura con datos del empleado
 */
typedef struct
{
    int id;
    char name[51];
    char lastName[51];
    float salary;
    int sector;
    int isEmpty;

}sEmployee;

/** \brief Datos harcodeados de la estructura
 *
 * \param sEmployee toma el array de estructura
 * \param int toma el tamaño del array
 * \return datos ingresados
 *
 */
void harcodeoEmployee (sEmployee [], int, int);

/** \brief incializa la bandera "isEmpty" en TRUE
 *
 * \param [] sEmployee toma el array de estructura
 * \param int toma el tamaño del array de estructura
 * \return int devuelve 0 una vez recorrio el array
 *
 */
int initEmployees(sEmployee [], int);

/** \brief toma los datos ingresados del empleado por el usuario
 *
 * \param [] sEmployee toma el array de estructura
 * \param int tamaño del array
 * \param int id del empleado
 * \param [] char nombre del empleado
 * \param [] char apellido del empleado
 * \param float salario del empleado
 * \param int sector del empleado
 * \return int -1 si hubo error y 0 si pudo guardarlo
 *
 */
int addEmployee(sEmployee [], int, int, char [], char [], float, int);

/** \brief Genera un id de empleado
 *
 * \param [] sEmployee toma el array de estructura
 * \param int tamaño de la estructura
 * \return int id del empleado
 *
 */
int giveEmployeeID(sEmployee [], int);

/** \brief muestra los empleados
 *
 * \param sEmployee toma el array de estructura
 * \return void datos del empleado con un printf
 *
 */
void showEmployee(sEmployee);

/** \brief Informa los empleados que hay dados de alta
 *
 * \param [] sEmployee toma el array de estructura
 * \param int tamaño del array
 * \return void empelados guardados
 *
 */
void printEmployees(sEmployee [], int);

/** \brief Busca los empleados
 *
 * \param [] sEmployee toma el array de estructura
 * \param int tamaño de la estructura
 * \param int id del empleado
 * \return int -1 si no lo encontro y si lo encontro la posicion
 *
 */
int findEmployeeByID(sEmployee [], int, int);

/** \brief Da de baja a un empleado
 *
 * \param [] sEmployee toma el array de estructura
 * \param int tamaño de la estructura
 * \param int id del empleado
 * \return int -1 si no lo encontro  y 0 si lo encontro y pudo borrar
 *
 */
int removeEmployee(sEmployee [], int, int);

/** \brief Ordena los empleados ya sea de mayor a menor o de menor a mayor
 *
 * \param [] sEmployee toma el array de estructura
 * \param int tamaño de la estructura
 * \param int 1 si es de menor a mayor y 0 si es de mayor a menor
 * \return int -1 si no pudo hacerlo y 0 si pudo hacerlo
 *
 */
int sortEmployees(sEmployee [], int, int);

/** \brief modifica un empleado segun el parametro escogido por el usuario
 *
 * \param [] sEmployee toma el array de estructura
 * \param int tamaño de la estructura
 * \param int id del empleado a modificar
 * \param int option que guarda para modificar
 * \param [] char nombre recibido
 * \param [] char apellido recibido
 * \param float salario recibido
 * \param int sector recibido
 * \return int -1 si no lo pudo hacer y 0 si pudo hacerlo
 *
 */
int modifyEmployee(sEmployee [], int, int,int, char [],char [],float,int);


#endif // ARRAYEMPLOYEES_H_INCLUDED
