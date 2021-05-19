#ifndef COLOR_H_INCLUDED
#define COLOR_H_INCLUDED

typedef struct
{
    int id;
    char nombreColor[20];
}eColor;

void mostrarColor(eColor colorRecibido);


int mostrarListaDeColores(eColor listaDeDeColores[], int cantidad);

int cargarDescripcionColor(eColor listaDeColores[],int cantidad,int idRecibido,char descripcionDevuelta[]);

int validarColor(eColor listaDeDeColores[], int cantidad,int idRecibido);

#endif // COLOR_H_INCLUDED
