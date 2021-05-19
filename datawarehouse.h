#ifndef DATAWAREHOUSE_H_INCLUDED
#define DATAWAREHOUSE_H_INCLUDED
#include "trabajo.h"

int hardcodearTipos(eTipo listaDeTipos[],int cantidad);

int hardcodearColores(eColor listaDeColores[],int cantidad);

int hardcodearServicios(eServicio listaDeServicios[],int cantidad);

int hardcodearBicicletas(eBicicleta listaDeBicicletas[],int cantidad,int cantidadCargar,int* pNextId);

int hardcodearTrabajos(eTrabajo listaDeTrabajos[],int cantidad,int cantidadCargar,int* pNextId);

#endif // DATAWAREHOUSE_H_INCLUDED
