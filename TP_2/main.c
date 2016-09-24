#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "funciones.h"


int main()
{
    int i, opcion=0, max=20, cont=0;
    char seguir='s';
    ePersona users[max];
    ePersona aux;

    indexZero(users, max);

    while(seguir=='s'){
        printf("-------------------\n");
        printf("|**Base de Datos**|\n");
        printf("-------------------\n");
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por nombre\n");
        printf("4- Imprimir gr%cfico de edades\n", 160);
        printf("5- Salir\n\n");

        printf("Ingrese una opci%cn: ", 162);
        scanf("%d",&opcion);
        while(opcion < 1 || opcion > 5){
            printf("Error!\nIngrese una opci%cn del 1 al 5: ", 162);
            scanf("%d", &opcion);
        }
        printf("\n");

        switch(opcion){
            case 1:
                carga_datos(users, max, cont);
                cont++;
                system("pause");
                system("cls");
                break;
            case 2:
                borrar_datos(users, max);
                system("cls");
                if(cont==0){
                break;
                }
                cont--;
                system("pause");
                system("cls");
                break;
            case 3:
                ordenYmuestra(users, max);
                system("pause");
                system("cls");
                break;
            case 4:
                chart(users, max);
                system("pause");
                system("cls");
                break;
            case 5:
                seguir = 'n';
                break;
        }
    }
    return 0;
}


