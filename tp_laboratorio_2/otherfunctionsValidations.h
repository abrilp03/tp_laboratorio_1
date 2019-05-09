#ifndef OTHERFUNCTIONSVALIDATIONS_H_INCLUDED
#define OTHERFUNCTIONSVALIDATIONS_H_INCLUDED

/** \brief Pide para que devuelva un entero
 *
 * \param [] char cadena donde escribe lo que pide
 * \return int devuelve lo ingresado por el usuario
 *
 */
int getInt(char []);

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

/** \brief comprueba si hay un numero en la cadena
 *
 * \param [] char cadena a analizar
 * \return int 1 si no hay numero y 0 si hay numero
 *
 */
int errorInDataString(char []);

#endif // OTHERFUNCTIONSVALIDATIONS_H_INCLUDED
