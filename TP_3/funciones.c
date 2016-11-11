#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <conio.h>
#include "funciones.h"

/* Defino la opción menú */
void menu(int opc, peliculas peli[], char archivo_html[], char guardar[], int maximo){
    int success;

    do{
       system("cls");

       printf("Seleccionar una opcion:\n");
       printf("1- Agregar pelicula\n");
       printf("2- Borrar pelicula\n");
       printf("3- Modificar una pelicula\n");
       printf("4- Generar un listado .html de las peliculas\n");
       printf("5- Salir\n");
       printf("\n\tOpcion: ");
       scanf("%d", &opc);

       switch(opc)
       {
           case 1:
               success = agregar_pelicula(peli, guardar, maximo);
                   if(success == 1)
                   {
                       system("cls");
                       printf("\nOperacion exitosa.");
                       printf("\nPulsar una tecla para continuar...");
                       getche();
                   }
                   else
                   {
                       system("cls");
                       printf("\nSe ha producido un error.");
                       printf("\nPulsar una tecla para continuar...");
                       getche();
                   }
                   break;
           case 2:
               borrar_pelicula(peli, guardar, maximo);
                   if(success == 1)
                   {
                       system("cls");
                       printf("\nOperacion exitosa.");
                       printf("\nPulsar una tecla para continuar...");
                       getche();
                   }
                   else
                   {
                       system("cls");
                       printf("\nSe ha producido un error.");
                       printf("\nPulsar una tecla para continuar...");
                       getche();
                   }
                   break;
           case 3:
               modificar_pelicula(peli, guardar, maximo);
               break;
           case 4:
               generar_pagina(peli, archivo_html, 100);
               break;
           case 5:
               system("cls");
                   printf("\nSaliendo del programa...");
                   return;
               break;
           default:
               printf("\nSe ha elegido una opción incorrecta.\nVuelva a elegir."); /* mensaje de error. */
               break;
       }
  }while(opc <= 5 && opc >= 1);      /* Condición para que se cumpla el bucle do. En la opción 5 se sale del bucle. */
  return;                /* No es necesario pero es por si falla el bucle o no funciona el punto 5 (case 5) */
}

/* Defino la función que agrega peliculas */
int agregar_pelicula(peliculas peli[], char guardar[], int mx)
{
        FILE *arch_bin;
        int siguiente = 0;
        char continuar = 's';

        if((arch_bin = fopen(guardar, "wb")) == NULL)                       /* Se crea un archivo en binario para guardar los datos, en la misma comprobación de creación. */
        {
            printf("\nError al crear el archivo de salvaddo.");
            exit (-1);
        }

        do
        {
            system("cls");
            if(peli[siguiente].free_pos == true && siguiente < mx)              /* Mientras la posición este libre y no se pase del máximo del array de peliculas */
            {
                 printf("\nIngrese los datos de la pelicula ");
                 printf("\n---------------------------------\n");
                 printf("Ingrese el titulo: ");
                 fflush(stdin);
                 gets(peli[siguiente].titulo);
                 printf("Ingrese el genero: ");
                 gets(peli[siguiente].genero);
                 printf("Ingrese la duracion en minutos: ");
                 scanf("%d", &peli[siguiente].duracion);
                 printf("Ingrese el puntaje: ");
                 scanf("%f", &peli[siguiente].puntaje);
                 printf("Ingrese una descripcion: ");
                 printf("\n--------------------------\n");
                 fflush(stdin);
                 gets(peli[siguiente].descripcion);
                 printf("Ingrese el link de la imagen: \n");
                 gets(peli[siguiente].link_imagen);
                 peli[siguiente].free_pos = false;
                 siguiente++;

                 /* Condición de salida */
                 printf("\n\nIngresar algun titulo mas?");
                 continuar = getche();
            }
            else                                                            /* Si la posición no está libre, pasa a la siguiente. */
            {
                siguiente++;
                continue;                                                   /* Fuerza la vuelta al principio del bulce do.*/
            }
        }while(continuar == 'S');

        /* Una vez terminada la carga de datos, se guarda la información en el archivo */
        if(fwrite(&peli, sizeof(peliculas), 1, arch_bin))
        {
             fclose(arch_bin);
             return 1;
        }
        else
        {
            fclose(arch_bin);
            return 0;
        }
}

/* Defino la función de borrar una pelicula. */
int borrar_pelicula(peliculas peli[], char guardar[], int mx)
{
    FILE *arch_bin;
    if((arch_bin = fopen(guardar, "wb")) == NULL)                       /* Se crea un archivo en binario para guardar los datos, en la misma comprobación de creación. */
    {
         printf("\nError al crear el archivo de salvaddo.");
         exit (-1);
    }

    int i, selec;

    /* Secuencia para mostrar el listado de las peliculas */
    printf("\nListado de peliculas:\n");
    printf("---------------------\n");
    for(i = 0; i < mx; i++)
    {
       if(peli[i].free_pos == false)
       {
          printf("%d. %s\t %s\t %.2f\n", i +1, peli[i].titulo, peli[i].genero, peli[i].puntaje);
       }
    }
    printf("\n\nSeleccione la pelicula a borrar: ");
    scanf("%d", &selec);
    peli[selec -1].free_pos = true;

    /* Una vez terminada la carga de datos, se guarda la información en el archivo */
    if(fwrite(&peli, sizeof(peliculas), 1, arch_bin))
    {
        fclose(arch_bin);
        return 1;
    }
    else
    {
        fclose(arch_bin);
        return 0;
    }
}

/* Defino la función de modificar una pelicula. */
void modificar_pelicula(peliculas peli[], char guardar[], int mx)
{
    int i;
    FILE *arch_bin;
    if((arch_bin = fopen(guardar, "rb")) == NULL)                       /* Se crea un archivo en binario para guardar los datos, en la misma comprobación de creación. */
    {
         printf("\nError al crear el archivo de salvaddo.");
         exit (-1);
    }

    peliculas mv_prueba[mx];

    while(!feof(arch_bin)){
       fread(&mv_prueba, sizeof(peliculas), 1, arch_bin);
    }

    for(i = 0; i < mx; i++){
       if(peli[i].free_pos == false){
          printf("%d. %s\t %s\t %.2f\n", i +1, mv_prueba[i].titulo, mv_prueba[i].genero, mv_prueba[i].puntaje);
       }
    }
    getche();
    return;
}

/* Defino la función de generar un archivo .html con el listado de las películas. */
void generar_pagina(peliculas *peli, char archivo_html[], char cant)
{
    FILE*archivo;
    char aux[100];
    int i;

    strcpy(aux, archivo_html);
    strcat(aux, ".html");

    archivo = fopen(aux, "w");

    if(archivo==NULL){
        printf("Error al generar el .html\n");
        exit(1);
    }

    fprintf(archivo, "<html><html lang='en'><head><meta charset='utf-8'><meta http-equiv='X-UA-Compatible' content='IE=edge'><meta name='viewport' content='width=device-width, initial-scale=1'><title>Cartelera</title><link href='css/bootstrap.min.css' rel='stylesheet'><link href='css/custom.css' rel='stylesheet'></head><body><div class='container'><div class='row'>");

    for(i=0;i<cant;i++){
       fprintf(archivo, "<article class='col-md-4 article-intro'><a href='#'><img class='img-responsive img-rounded' src='%s' alt=''></a><h3><a href='#'>%s</a></h3><ul><li>Genero: %s</li><li>Puntaje: %d</li><li>Duracion: %d</li></ul><p>%s</p></article>",(peli+i)->link_imagen, (peli+i)->titulo, (peli+i)->genero, (peli+i)->puntaje, (peli+i)->duracion, (peli+i)->descripcion);
    }
    fprintf(archivo, "</div><!-- /.row --></div><!-- /.container --><!-- jQuery --><script src='js/jquery-1.11.3.min.js'></script><!-- Bootstrap Core JavaScript --><script src='js/bootstrap.min.js'></script><!-- IE10 viewport bug workaround --><script src='js/ie10-viewport-bug-workaround.js'></script><!-- Placeholder Images --><script src='js/holder.min.js'></script></body></html>");
}
