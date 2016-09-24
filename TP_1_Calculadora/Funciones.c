    /** \brief Este void fué de prueba, es totalmente inecesario una función para sólo mostrar algo en
    pantalla igualmente, pero como era de prueba lo dejé.
    *
    * \param
    * \param
    * \return Retorna un mensaje que se usó de título para la calculadora.
    *
    */
    void mostrar (void){
        printf("Trabajo Practico #1 - Calculadora cuasi-inteligente!\n");
        return;
    }

    /** \brief Uso esta función tanto para pedir el valor de A como la de B.
    *
    * \param
    * \param
    * \return El número ingresado por scanf.
    *
    */
    float numero(){
        float num;
        printf("Ingrese numero: ");
        scanf("%f", &num);
        printf("\n");
        return num;
    }

    /** \brief Creo la función "sumatoria" donde entran dos valores, los sumo bajo un flotante y lo devuelvo.
    *
    * \param num1
    * \param num2
    * \return resultado de la suma de num1 y num2
    *
    */
    float sumatoria(float num1, float num2){
        float resultado;
        resultado=num1+num2;
        return resultado;
        }

    /** \brief Creo la función "restar" donde entran dos valores, los resto bajo un flotante y lo devuelvo.
    *
    * \param num1
    * \param num2
    * \return resultado de la resta de num1 y num2
    *
    */
    float restar(float num1, float num2){
        float resultado;
        resultado=num1-num2;
        return resultado;
    }

    /** \brief Creo la función "division" donde entran dos valores, los divido bajo un flotante y lo devuelvo.
    *
    * \param num1
    * \param num2
    * \return resultado de la división entre num1 y num2
    *
    */
    float division(float num1, float num2){
        float resultado;
        resultado=num1/num2;
        return resultado;
    }

    /** \brief Creo la función "multiplicacion" donde entran dos valores, los multiplico bajo un flotante y lo devuelvo.
    *
    * \param num1
    * \param num2
    * \return resultado de la multiplicación entre num1 y num2
    *
    */
    float multiplicacion(float num1, float num2){
        float resultado;
        resultado=num1*num2;
        return resultado;
    }

    /** \brief Creo la función "factorial" donde uso sólo un valor entero en un FOR para que se vaya multiplicando
    desde uno hasta el numero ingresado y devuelvo el resultado.
    *
    * \param num
    * \param
    * \return resultado del factorial de num
    *
    */
    int factorial(int num){
        int resultado=1, i;
        for(i=1; i<=num; i++){
            resultado=resultado*i;
        }
        return resultado;
    }
