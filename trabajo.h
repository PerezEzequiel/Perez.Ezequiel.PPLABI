#ifndef TRABAJO_H_INCLUDED
#define TRABAJO_H_INCLUDED
#include "bicicleta.h"
#include "servicio.h"
#include "fecha.h"
typedef struct
{
    int id;
    int idBicicleta;
    int idServicio;
    eFecha fecha;
    int isEmpty;
}eTrabajo;

eTrabajo crearTrabajo(int* nextId,eBicicleta listaDeBicicletas[],int cantidadDeBicicletas,eTipo listaDeTipos[],int cantidadDeTipos,eColor listaDeColores[],int cantidadDeColores,eServicio listaDeServicios[],int cantidadDeServicios);
int inicializarListaDeTrabajos(eTrabajo listaDeTrabajo[], int cantidad);
int buscarTrabajoLibre(eTrabajo listaDeTrabajo[],int cantidad);

int altaDeDeTrabajo(eTrabajo listaDeTrabajo[],int cantidadDeTrabajo,int* nextId,eBicicleta listaDeBicicletas[],int cantidadDeBicicletas,eTipo listaDeTipos[],int cantidadDeTipos,eColor listaDeColores[],int cantidadDeColores,eServicio listaDeServicios[],int cantidadDeServicios);

int mostrarTrabajo(eTrabajo trabajoRecibido,eBicicleta listaDeBicicletas[],int cantidadDeBicicletas,eServicio listaDeServicios[],int cantidadDeServicios);
int mostrarListaDeTrabajo(eTrabajo listaDeTrabajo[],int cantidadDeTrabajo,eBicicleta listaDeBicicletas[],int cantidadDeBicicletas,eServicio listaDeServicios[],int cantidadDeServicios);


#endif // TRABAJO_H_INCLUDED
