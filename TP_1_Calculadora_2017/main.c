#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    float num1=0, num2=0, suma, resta, div, mult;
    int fact, opcion=0;
    char seguir='s';

    while(seguir=='s')
    {
        titulo();
        printf("\n");
        printf("1- Ingresar 1er operando (A=%.2f)\n", num1);
        printf("2- Ingresar 2do operando (B=%.2f)\n", num2);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la divisi%cn (A/B)\n", 162);
        printf("6- Calcular la multiplicaci%cn (A*B)\n", 162);
        printf("7- Calcular el factorial del 1er operando (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n\n");

        printf("Ingrese una opci%cn: ", 162);
        scanf("%d", &opcion);

        while(opcion < 1 || opcion > 9){
            printf("Error!\nIngrese una opci%cn del 1 al 9: ", 162);
            scanf("%d", &opcion);
        }
        printf("\n");

        switch(opcion){
            case 1:
                num1=pedirNumero();
                system("pause");
                system("cls");
                break;
            case 2:
                num2=pedirNumero();
                system("pause");
                system("cls");
                break;
            case 3:
                suma=sumar(num1, num2);
                printf("La suma es: %.2f\n\n", suma);
                system("pause");
                system("cls");
                break;
            case 4:
                resta=restar(num1, num2);
                printf("La resta es: %.2f\n\n", resta);
                system("pause");
                system("cls");
                break;
            case 5:
                div=division(num1, num2);
                if(num2==0){
                    printf("No se puede dividir por cero!\n\n");
                }
                else{
                    printf("La division es: %.2f\n\n", div);
                }
                system("pause");
                system("cls");
                break;
            case 6:
                mult=multiplicacion(num1, num2);
                printf("La divisi%cn es: %.2f\n\n", 162, mult);
                system("pause");
                system("cls");
                break;
            case 7:
                fact=factorial(num1);
                if(num1==0){
                    printf("El factorial es: 1\n\n");
                }
                else{
                    printf("El factorial es: %.2d\n\n", fact);
                }
                system("pause");
                system("cls");
                break;
            case 8:
                suma=sumar(num1, num2);
                printf("La suma es: %.2f\n\n", suma);

                resta=restar(num1, num2);
                printf("La resta es: %.2f\n\n", resta);

                div=division(num1, num2);
                if(num1==0 || num2==0){
                    printf("No se puede dividir por cero!\n\n");
                }
                else{
                    printf("La divisi%cn es: %.2f\n\n", 162, div);
                }

                mult=multiplicacion(num1, num2);
                printf("La multiplicaci%cn es: %.2f\n\n", 162, mult);

                fact=factorial(num1);
                if(num1==0){
                    printf("El factorial es: 1\n\n");
                }
                else{
                    printf("El factorial es: %.2d\n\n", fact);
                }
                system("pause");
                system("cls");
                break;
            case 9:
                seguir = 'n';
                break;
        }
    }
    return 0;
}
