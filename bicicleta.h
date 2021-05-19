#ifndef BICICLETA_H_INCLUDED
#define BICICLETA_H_INCLUDED

#include "color.h"
#include "tipo.h"

typedef struct
{
    int id;
    char marca[20];
    int idTipo;
    int idColor;
    float rodado;
    int isEmpty;
}eBicicleta;



/** \brief inicializa el todos los isEmpty del array en true
 *
 * \param listaDeBicicletas[] eBicicleta lista recibida de bicicletas
 * \param cantidadDeBicicletas int tam de bicicletas
 * \return int retorna 1 si, el puntero es diferente de NULL y si el tam es mayor a 0, de lo contrario retorna -1
 *
 */
int inicializarListaBicicletas(eBicicleta listaDeBicicletas[], int cantidadDeBicicletas);




/** \brief busca en el array, una posicion libre
 *
 * \param listaDeBicicletas[] eBicicleta lista recibida de bicicletas
 * \param cantidadDeBicicletas int tam de bicicletas
 * \return int retorna diferente de -1, si, el puntero es diferente de NULL, el tam mayor a 0 y si encontro lugar
 *
 */
int buscarBicicletaLibre(eBicicleta listaDeBicicletas[], int cantidadDeBicicletas);


/** \brief Crea y valida una bicicleta
 *
 * \param nextId int* id a asginar
 * \param listaDeTipos[] eTipo lista recibida de tipos
 * \param cantidadDeTipos int tam de tipos
 * \param listaDeColores[] eColor  lista recibida de colores
 * \param cantidadDeColores int tam de colores
 * \return eBicicleta retorna una bicicleta.
 *
 */
eBicicleta crearBicicleta(int* nextId,eTipo listaDeTipos[],int cantidadDeTipos, eColor listaDeColores[],int cantidadDeColores);

/** \brief Agrega en un lugar libre, una bicicleta
 *
 * \param listaDeBicicletas[] eBicicleta lista recibida de bicicletas
 * \param cantidadDeBicicletas int tam de bicicleta
 * \param listaDeTipos[] eTipo lista recibida de tipos
 * \param cantidadDeTipos int tam de tipos
 * \param listaDeColores[] eColor lista recibida de colores
 * \param cantidadDeColores int tam de colores
 * \param nextId int* id a asginar
 * \return int  Retorna -1 si, los punteros son NULL o los tam son menor que 0.
 *
 */
int altaDeBicicleta(eBicicleta listaDeBicicletas[], int cantidadDeBicicletas,eTipo listaDeTipos[],int cantidadDeTipos, eColor listaDeColores[],int cantidadDeColores,int* nextId);

/** \brief Busca una bicicleta por el parametro recibido
 *
 * \param listaDeBicicletas[] eBicicleta  lista recibida de bicicletas
 * \param cantidadDeBicicletas int tam de bicicleta
 * \param idRecibido int id a buscar
 * \return int Retorna diferente de -1 si, el puntero es diferente de NULL, el tam mayor a 0 y si encontro una posicion con ese id
 *
 */
int buscarBicicletaPorId(eBicicleta listaDeBicicletas[], int cantidadDeBicicletas,int idRecibido);


/** \brief Muestra la lista de bicicletas
 *
 * \param listaDeBicicletas[] eBicicleta lista recibida de bicicletas
 * \param cantidadDeBicicletas int tam de bicicleta
 * \param listaDeTipos[] eTipo lista recibida de tipos
 * \param cantidadDeTipos int  tam de tipos
 * \param listaDeColores[] eColor lista recibida de colores
 * \param cantidadDeColores int tam de colores
 * \return int Retorna 1 si los punteros sin diferente de NULL y los tam mayor a 0, de lo contrario retorna -1
 *
 */
int mostrarListaDeBicicletas(eBicicleta listaDeBicicletas[], int cantidadDeBicicletas,eTipo listaDeTipos[],int cantidadDeTipos, eColor listaDeColores[],int cantidadDeColores);

/** \brief Muestra una sola bicicleta
 *
 * \param bicicletaRecibida eBicicleta Bicicleta recibida
 * \param listaDeTipos[] eTipo  lista recibida de tipos
 * \param cantidadDeTipos int tam de tipos
 * \param listaDeColores[] eColor eColor lista recibida de colores
 * \param cantidadDeColores int int tam de colores
 * \return int Retorna -1 si no pudo mostrar esa bicicleta(punteros igual a NULL o tam menor a 0 o no se pudo cargar la descripcion), de lo contrario devuelve 1
 *
 */
int mostrarBicicleta(eBicicleta bicicletaRecibida,eTipo listaDeTipos[],int cantidadDeTipos,eColor listaDeColores[],int cantidadDeColores);

int buscarBicicletaPorId(eBicicleta listaDeBicicletas[], int cantidadDeBicicletas,int idRecibido);

int modificarBicicleta(eBicicleta listaDeBicicletas[], int cantidadDeBicicletas,eTipo listaDeTipos[],int cantidadDeTipos, eColor listaDeColores[],int cantidadDeColores);

int bajaDeBicicleta(eBicicleta listaDeBicicletas[], int cantidadDeBicicletas,eTipo listaDeTipos[],int cantidadDeTipos, eColor listaDeColores[],int cantidadDeColores);

int validarRodado(float arrayDeRodadosValidos[],int cantidad,float rodadoRecibido);

int validarBicicleta(eBicicleta listaDeBicicletas[], int cantidad,int idRecibido);

int cargarMarcaBicicleta(eBicicleta listaDeBicicletas[], int cantidadDeBicicletas,int idRecibido, char marcaDevuelta[]);

int ordenarBicicletasPorTipoYrodado(eBicicleta listaDeBicicletas[], int cantidad,int order);

int contarBicicletas(eBicicleta listaDeBicicletas[],int cantidad,int* cont);


#endif // BICICLETA_H_INCLUDED
