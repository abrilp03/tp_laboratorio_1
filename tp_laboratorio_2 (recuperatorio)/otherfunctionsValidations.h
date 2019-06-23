#ifndef OTHERFUNCTIONSVALIDATIONS_H_INCLUDED
#define OTHERFUNCTIONSVALIDATIONS_H_INCLUDED

/** \brief Toma un mensaje y devuelve un entero
 *
 * \param [] char cadena donde se escribe lo que pide
 * \return int devuelve lo ingresado por el usuario
 *
 */
int getInt(char []);

/** \brief toma un mensaje y devuelve un float
 *
 * \param [] char cadena donde se escribe lo que pide
 * \return float devuelve el float ingresado por el usuario
 *
 */
float getFloat(char []);

/** \brief Toma una mensaje y lo guarda en una variable
 *
 * \param [] char cadena donde escribe lo que pide
 * \param [] char donde guarda el mensaje
 * \return void mensaje guardado
 *
 */
void getString(char [], char []);

/** \brief verifica si es numero o no
 *
 * \param [] char analiza una cadena
 * \return int devuelve 0 si no es numero y 1 si es numero
 *
 */
int isNumber(char []);



#endif // OTHERFUNCTIONSVALIDATIONS_H_INCLUDED
