#ifndef TIPO_H_INCLUDED
#define TIPO_H_INCLUDED

typedef struct
{
    int id;
    char descripcion[20];
}eTipo;

int cargarDescripcionTipo(eTipo listaDeTipos[],int cantidad,int idRecibido,char descripcionDevuelta[]);
void mostrarTipo(eTipo tipoRecibido);
int mostrarListaDeTipos(eTipo listaDetipos[], int cantidad);

int validarTipo(eTipo listaDetipos[], int cantidad,int idRecibido);

#endif // TIPO_H_INCLUDED
