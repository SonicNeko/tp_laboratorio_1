#include "funciones.h"

    /** \brief se muestra un título
    *
    * \param
    * \param
    * \return el título del TP
    *
    */
    void titulo(void){
        printf("Trabajo Practico #1 - Calculadora\n");
        return;
    }

    /** \brief función para pedir el operando
    *
    * \param num
    * \param
    * \return el operando ingresado
    *
    */
    float pedirNumero(){
        float num;
        printf("Ingrese el operando: ");
        scanf("%f", &num);
        printf("\n");
        return num;
    }

    /** \brief función que toma dos operandos y los suma
    *
    * \param num1
    * \param num2
    * \return resultado de la suma entre los operandos num1 y num2
    *
    */
    float sumar(float num1, float num2){
        float resultado;
        resultado=num1+num2;
        return resultado;
        }

    /** \brief función que toma dos operandos y los resta
    *
    * \param num1
    * \param num2
    * \return resultado de la resta de los operandos num1 y num2
    *
    */
    float restar(float num1, float num2){
        float resultado;
        resultado=num1-num2;
        return resultado;
    }

    /** \brief función que toma dos operandos y los divide
    *
    * \param num1
    * \param num2
    * \return resultado de la división entre los operandos num1 y num2
    *
    */
    float division(float num1, float num2){
        float resultado;
        resultado=num1/num2;
        return resultado;
    }

    /** \brief función que toma dos operandos y los multiplica
    *
    * \param num1
    * \param num2
    * \return resultado de la multiplicación entre los operandos num1 y num2
    *
    */
    float multiplicacion(float num1, float num2){
        float resultado;
        resultado=num1*num2;
        return resultado;
    }

    /** \brief función que toma el primer operando y calcula su factorial
    *
    * \param num
    * \param
    * \return resultado del factorial del primer operando
    *
    */
    int factorial(int num){
        int resultado=1, i;
        for(i=1; i<=num; i++){
            resultado=resultado*i;
        }
        return resultado;
    }

