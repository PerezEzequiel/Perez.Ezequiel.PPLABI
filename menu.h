#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

/** \brief Muestra un menu y devuelve la respuesta
 *
 * \param opciones[] char opciones recibida
 * \param pRespuesta char* respuesta recibida
 * \return void
 *
 */
void mostrarMenuChar(char opciones[],char* pRespuesta);


/** \brief Muestra un menu y devuelve la respuesta
 *
 * \param opciones[] char   opciones recibida
 * \param pRespuesta int*   respuesta recibida
 * \return void
 *
 */
void mostrarMenuInt(char opciones[],int* pRespuesta);

#endif // MENU_H_INCLUDED
