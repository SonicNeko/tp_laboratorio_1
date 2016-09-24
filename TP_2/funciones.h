#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct{
    char nombre[30];
    int edad;
    long int dni;
    int flag;
}ePersona;

void indexZero(ePersona users[], int max);
void carga_datos(ePersona lista[], int max, int cant);
void ordenYmuestra(ePersona users[], int max);
void borrar_datos(ePersona users[], int max);
void chart(ePersona users[], int max);

/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
long int buscarPorDni(ePersona lista[], int dni);


#endif // FUNCIONES_H_INCLUDED
