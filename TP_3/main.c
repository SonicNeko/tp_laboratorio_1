#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <conio.h>
#include "funciones.h"

/* Programa principal */
int main()
{
  /* variables */
  int opcion = 0;
  int max = 100;
  int i;
  char arch_html[] = "lista_peli.html";
  char arch_pelis[] = "peliculas.bin";

  /* defino un array de 100 estructuras peliculas */
  peliculas movie[max];

  /* Bucle que inicia la variable free en true */
  for(i = 0; i < max; i++)
  {
      movie[i].free_pos = true;
  }

  /* Programa */
  menu(opcion, movie, arch_html, arch_pelis, max);
  return 0;
}

