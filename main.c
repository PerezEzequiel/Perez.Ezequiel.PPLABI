#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "datos.h"
#include "datawarehouse.h"
#define TBICICLETAS 20
#define TCOLOR 5
#define TTIPO 4
#define TSERVICIO 4
#define TTRABAJO 20

int main()
{
    int contador=0;
    char opcion;
    char bandera = 'n';
    int nextIdBicicleta=20000;
    int nextidTrabajo=50000;
    eBicicleta listaDeBicicletas[TBICICLETAS];
    eColor listaDeColores[TCOLOR];
    eTipo listaDeTipos[TTIPO];
    eServicio listaDeServicios[TSERVICIO];
    eTrabajo listaDeTrabajos[TTRABAJO];


    hardcodearColores(listaDeColores,TCOLOR);
    hardcodearTipos(listaDeTipos,TTIPO);
    hardcodearServicios(listaDeServicios,TSERVICIO);

    inicializarListaBicicletas(listaDeBicicletas, TBICICLETAS);
    inicializarListaDeTrabajos(listaDeTrabajos,TTRABAJO);
    hardcodearBicicletas(listaDeBicicletas,TBICICLETAS,10,&nextIdBicicleta);
    hardcodearTrabajos(listaDeTrabajos,TTRABAJO,10,&nextidTrabajo);


    do
    {

        contarBicicletas(listaDeBicicletas,TBICICLETAS,&contador);
        system("cls");
        mostrarMenuChar("\n****Primer Parcial Lab I A****\n\nA. Alta bicicleta\nB. Modificar bicicleta\nC. Baja bicicleta\nD. Listar bicicletas\nE. Listar tipos\nF. Listar colores\nG. Listar Servicios\nH. Alta trabajo\nI. Listar trabajos\nJ. Salir\nQue desea hacer?: ",&opcion);

        switch(opcion)
        {
        case 'a':
            if(altaDeBicicleta(listaDeBicicletas,TBICICLETAS,listaDeTipos,TTIPO,listaDeColores,TCOLOR,&nextIdBicicleta))
            {
                printf("Alta con exito\n");
            }

            break;
        case 'b':
            if(contador > 0 &&  modificarBicicleta(listaDeBicicletas,TBICICLETAS,listaDeTipos,TTIPO,listaDeColores,TCOLOR))
            {
                printf("Modificacion exitosa\n");
            }
            else
            {
                printf("Error, cargue una bicicleta\n");
            }
            break;
        case 'c':
            if(contador > 0 && bajaDeBicicleta(listaDeBicicletas,TBICICLETAS,listaDeTipos,TTIPO,listaDeColores,TCOLOR))
            {
                printf("Baja exitosa\n");
            }
            else
            {
                printf("Error, cargue una bicicleta\n");
            }
            break;
        case 'd':
            system("cls");
            if(contador > 0 && ordenarBicicletasPorTipoYrodado(listaDeBicicletas,TBICICLETAS,1) && mostrarListaDeBicicletas(listaDeBicicletas,TBICICLETAS,listaDeTipos,TTIPO,listaDeColores,TCOLOR))
            {
                printf("Muestra con exito\n");
            }
            else
            {
                printf("Error, cargue una bicicleta\n");
            }
            break;
        case 'e':
            system("cls");
            if(contador > 0 &&  mostrarListaDeTipos(listaDeTipos,TTIPO))
            {
                printf("Muestra con exito\n");
            }
            else
            {
                printf("Error, cargue una bicicleta\n");
            }
            break;
        case 'f':
            system("cls");
            if(contador > 0 && mostrarListaDeColores(listaDeColores,TCOLOR))
            {
                printf("Muestra con exito\n");
            }
            else
            {
                printf("Error, cargue una bicicleta\n");
            }
            break;
        case 'g':
            system("cls");
            if(contador > 0 && mostrarListaDeServicios(listaDeServicios,TSERVICIO))
            {
                printf("Muestra con exito\n");
            }
            else
            {
                printf("Error, cargue una bicicleta\n");
            }
            break;
        case 'h':
            if(contador > 0 && altaDeDeTrabajo(listaDeTrabajos,TTRABAJO,&nextidTrabajo,listaDeBicicletas,TBICICLETAS,listaDeTipos,TTIPO,listaDeColores,TCOLOR,listaDeServicios,TSERVICIO))
            {
                printf("Alta con exito\n");
            }
            else
            {
                printf("Error, cargue una bicicleta\n");
            }
            break;
        case 'i':
            system("cls");
            if(contador > 0 && mostrarListaDeTrabajo(listaDeTrabajos,TTRABAJO,listaDeBicicletas,TBICICLETAS,listaDeServicios,TSERVICIO))
            {
                printf("Muestra de trabajos exitosa\n\n");
            }
            else
            {
                printf("Error, cargue una bicicleta\n");
            }
            break;
        case 'j':
            getCaracter("Desea salir?s/n:",&bandera,"Error, ingrese un caracter: ","Error ingrese s/n",'s','n');
            break;
        }
        system("pause");
        contador = 0;
    }
    while(bandera != 's');

    return 0;
}
