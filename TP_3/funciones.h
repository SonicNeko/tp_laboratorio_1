#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

/* Estructura */
typedef struct
{
  char titulo[30];
  char genero[20];
  int duracion;
  float puntaje;
  char descripcion[1024];
  char link_imagen[500];
  bool free_pos;
}peliculas;

/* Funcoines */
int agregar_pelicula(peliculas peli[], char guardar[], int mx);                                 /* Punto 1 */
int borrar_pelicula(peliculas peli[], char guardar[], int mx);                                  /* Punto 2 */
void modificar_pelicula(peliculas peli[], char guardar[], int mx);                              /* Punto 3 */
void generar_pagina(peliculas *peli, char archivo_html[], char cant);                     /* Punto 4 */
void menu(int opc, peliculas peli[], char archivo_html[], char guardar[], int maximo);          /* menú de opcones */


#endif // FUNCIONES_H_INCLUDED
