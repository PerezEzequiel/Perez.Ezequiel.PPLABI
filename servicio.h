#ifndef SERVICIO_H_INCLUDED
#define SERVICIO_H_INCLUDED

typedef struct
{
    int id;
    char descripcion[25];
    float precio;
}eServicio;

void mostrarServicio(eServicio servicioRecibido);
int mostrarListaDeServicios(eServicio listaDeDeServicios[], int cantidad);

int cargarDescripcionServicio(eServicio listaDeServicios[],int cantidad,int idRecibido,char descripcionDevuelta[]);

int validarServicio(eServicio listaDeServicios[],int cantidad, int idRecibido);

#endif // SERVICIO_H_INCLUDED
