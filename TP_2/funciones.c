#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "funciones.h"


/** \brief Inicializo el array en cero.
 *
 * \param nombre, edad, dni y el flag.
 * \param
 * \return
 *
 */
void indexZero(ePersona users[], int max){
    int i;
    for(i=0; i<max ; i++){
        users[i].flag=0;
    }
    return;
}

/** \brief Cargo los datos en la estructura ePersona
 *
 * \param Nombre, Edad, DNI
 * \param Flag
 * \return
 *
 */
void carga_datos(ePersona lista[], int max, int cant){

    if (cant < max){

        printf("Nombre: ");
        fflush(stdin);
        gets(lista[cant].nombre);

        printf("Edad: ");
        scanf("%d", &lista[cant].edad);
        while(lista[cant].edad < 0 || lista[cant].edad > 150){
            if(lista[cant].edad < 0){
                printf("A%cn no naci%c, por favor reingrese la edad: ", 163, 162);
                scanf("%d", &lista[cant].edad);
            }
            else{
                printf("Est%c muy viejo para estar vivo, por favor reingrese la edad: ", 160);
                scanf("%d", &lista[cant].edad);
            }
        }
        fflush(stdin);

        printf("DNI: ");
        scanf("%ld", &lista[cant].dni);
        while(lista[cant].dni < 1000000 || lista[cant].dni > 99999999){
            printf("Error!\nReingrese el n%cmero de DNI: ", 163);
            scanf("%ld", &lista[cant].dni);
        }
        fflush(stdin);
        printf("\n");

        lista[cant].flag=1;
    }
    else{
        printf("Error! La lista est%c llena, borr%c al que peor te caiga...\n\n", 160, 160);
    }
    return;
}

/** \brief Ordeno el array de estructuras y lo muestro en pantalla.
 *
 * \param estructura ePersona
 * \param
 * \return
 *
 */
void ordenYmuestra(ePersona users[], int max){
    int i, j;
    ePersona aux;

    for(i=0; i<max-1; i++){
        for(j=i+1; j<max; j++){
            if(users[i].flag!=0 && users[j].flag!=0){
                if(strcmp(users[i].nombre, users[j].nombre)>0){
                    aux=users[i];
                    users[i]=users[j];
                    users[j]=aux;
                }
            }
        }
    }

    for(i=0; i<max-1; i++){
        for(j=i+1; j<max; j++){
            if(users[i].flag==0 && users[j].flag!=0){
                aux=users[i];
                users[i]=users[j];
                users[j]=aux;
            }
        }
    }

    for(i=0; i<max; i++){
        if(users[i].flag==1){
        printf("\n%d. Nombre: %s\t Edad: %d\t DNI: %ld", i+1, users[i].nombre, users[i].edad, users[i].dni);
        }
    }
    printf("\n");
    return;
}

/** \brief Borro los datos de la posición elegida.
 *
 * \param datos de la estructura ePersona
 * \param La elección de posición a borrar
 * \return
 *
 */
void borrar_datos(ePersona users[], int max){
    int i;
    for(i=0; i<max; i++){
        if(users[i].flag==1){
        printf("\n%d. Nombre: %s\t Edad: %d\t DNI: %ld", i+1, users[i].nombre, users[i].edad, users[i].dni);
        }
    }
    printf("\n");
    printf("\nElija la posición del usuario a borrar: ");
    scanf("%d", &i);
    i--;
    strcpy(users[i].nombre, "\0");
    users[i].edad=0;
    users[i].dni=0;
    users[i].flag=0;

    return;
}

/** \brief Se manipula un gráfico que señala el porcentaje de
 * edades en forma de barras de asteriscos.
 * \param de las edades cargadas anteriormente
 * \param
 * \return
 *
 */
void chart(ePersona users[], int max){
    int i, hasta18=0, de19a35=0, mayorDe35=0, flag=0, mayor, m=0;

    for(i=0; i<max; i++){
        if(users[i].flag==1){
        m++;
        }
    }

    for(i=0; i<m; i++){
        if(users[i].edad > 0 && users[i].edad <= 18){
            hasta18++;
        }
        else if(users[i].edad > 18 && users[i].edad <=35){
            de19a35++;
        }
        else{
            mayorDe35++;
        }
    }

    if(hasta18 >= de19a35 && hasta18 >= mayorDe35){
        mayor = hasta18;
    }else{
        if(de19a35 >= hasta18 && de19a35 >= mayorDe35)
        {
            mayor = de19a35;
        }
        else{
        mayor = mayorDe35;
        }
    }

    for(i=mayor; i>0; i--){
        if(i<10){
            printf("%02d|",i);
        }
        else
            printf("%02d|",i);

        if(i<= hasta18){
            printf("*");
        }
        if(i<= de19a35){
            flag=1;
            printf("\t*");
        }
        if(i<= mayorDe35){
            if(flag==0)
                printf("\t\t*");
            if(flag==1)
                printf("\t*");

        }
        //Bajo una linea luego de cada iteracion
        printf("\n");
    }
    printf("--+-----------------");
    printf("\n  |<18\t19-35\t>35");
    printf("\n   %d\t%d\t%d", hasta18, de19a35, mayorDe35);
    printf("\n\n");
    return;
}
