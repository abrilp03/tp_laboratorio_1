#ifndef BIBLIOTECA_H_INCLUDED
#define BIBLIOTECA_H_INCLUDED


/** \brief Recibe una cadena de texto para un menu
 *
 * \param char[] texto correspondiente al texto
 * \return la opcion ingresada del menu
 *
 */
int pedirOpciones(char[]);

/** \brief Toma dos numeros y los suma
 *
 * \param a float Primer numero
 * \param b float Segundo Numero
 * \return float La suma entre el primer y segundo numero respectivamente
 *
 */
float suma(float a, float b);

/** \brief Toma dos numeros y los resta
 *
 * \param a float Primer numero
 * \param b float Segundo numero
 * \return float La resta entre el primer y segundo numero respectivamente
 *
 */
float resta(float a, float b);

/** \brief Toma dos numeros y los divide si es posible
 *
 * \param divide si el numero "b" es distinto (!=) de cero
 * \param Informa que no es posible dividir por cero y retorna cero
 * \return el resultado de la division
 *
 */
float division (float a, float b);

/** \brief Toma dos numeros y los multiplica
 *
 * \param a primer numero
 * \param b segundo numero
 * \return multiplicacion entre "a" y "b"
 *
 */
float multiplicacion (float a, float b);

/** \brief Calcula el factorial del numero ingresado ("x")
 *
 * \param si num es 0 o 1 devuelve 1
 * \param calcula el factorial
 * \return el resultado del factorial
 *
 */
int factorial (int num);



#endif // BIBLIOTECA_H_INCLUDED
