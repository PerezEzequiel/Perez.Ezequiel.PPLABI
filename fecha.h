#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED
typedef struct
{
    int dia;
    int mes;
    int anio;
}eFecha;

int compararFecha(eFecha f1, eFecha f2);

void mostrarFecha(eFecha fecha);

int pedirYvalidarFecha(int* dia, int* mes, int* anio);



#endif // FECHA_H_INCLUDED
