#include <stdio.h>
#include <stdlib.h>
#include "funciones.h" /*Incluyo "funciones.h" para conectar las funciones con el main*/

int main()
{
    /*Asigno los flotantes y enteros*/
    float num1=0, num2=0, suma, resta, div, mult;
    int fact, opcion=0;
    char seguir='s';
    /*Se crea un "while" con valor "seguir" en 's', mientras que el valor del char sea 's' va a seguir
    mostrando el menú y pedir al usuario que ingrese un número, en el case 9 del switch está asignado
    el cambio de estado del char a 'n' para fianlizar el while salir del programa*/
    while(seguir=='s')
    {
        mostrar();
        printf("\n");
        printf("1- Ingresar 1er operando (A=%.2f)\n", num1);
        printf("2- Ingresar 2do operando (B=%.2f)\n", num2);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n\n");

        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);
        /*Creo un "while" para evitar que el usuario ponga otro numero que no sea del 1 al 9*/
        while(opcion < 1 || opcion > 9){
            printf("Error!\nIngrese una opcion del 1 al 9: ");
            scanf("%d", &opcion);
        }
        printf("\n");
        switch(opcion){
            /*En los dos primeros case pedimos un numero y usa la misma función para ambos casos*/
            case 1:
                num1=numero();
                system("pause");
                system("cls");
                break;
            case 2:
                num2=numero();
                system("pause");
                system("cls");
                break;
            /*En los case 3 y 4 llamo a las funciones para sumar y restar y las muestro*/
            case 3:
                suma=sumatoria(num1, num2);
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
            /*En este case llamo a la función "division" pero le agrego un if/else para verificar
            que si llega a haber algún cero en cualquiera de los operandos directamente muestre que
            no se puede dividir por cero*/
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
            /*En este case llamo a la funcion para multiplicar y lo muestro*/
            case 6:
                mult=multiplicacion(num1, num2);
                printf("La division es: %.2f\n\n", mult);
                system("pause");
                system("cls");
                break;
            /*En este case llamo a la función "factorial" pero le agrego un if/else para verificar
            que si llega a haber un cero en el operando directamente muestre que el resultado es 1*/
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
            /*En este case copié y pegué todos los case anteriores ya que me pide que muestre todas las
            operaciones juntas*/
            case 8:
                suma=sumatoria(num1, num2);
                printf("La suma es: %.2f\n\n", suma);

                resta=restar(num1, num2);
                printf("La resta es: %.2f\n\n", resta);

                div=division(num1, num2);
                if(num1==0 || num2==0){
                    printf("No se puede dividir por cero!\n\n");
                }
                else{
                    printf("La division es: %.2f\n\n", div);
                }

                mult=multiplicacion(num1, num2);
                printf("La multiplicacion es: %.2f\n\n", mult);

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
            /*En este case se cambio el valor del "seuir" para salir del WHILE y finalizar el programa*/
            case 9:
                seguir = 'n';
                break;
        }
    }
    return 0;
}
