    /*Este void fué de prueba, es totalmente inecesario una función para sólo mostrar algo en pantalla igualmente,
    pero como era de prueba lo dejé*/
    void mostrar (void){
        printf("Trabajo Practico #1 - Calculadora cuasi-inteligente!\n");
        return;
    }
    /*Uso esta función tanto para pedir el valor de A como la de B*/
    float numero(){
        float num;
        printf("Ingrese numero: ");
        scanf("%f", &num);
        printf("\n");
        return num;
    }
    /*Creo la función "sumatoria" donde entran dos valores, los sumo bajo un flotante y lo devuelvo*/
    float sumatoria(float num1, float num2){
        float resultado;
        resultado=num1+num2;
        return resultado;
        }
    /*Creo la función "restar" donde entran dos valores, los resto bajo un flotante y lo devuelvo*/
    float restar(float num1, float num2){
        float resultado;
        resultado=num1-num2;
        return resultado;
    }
    /*Creo la función "division" donde entran dos valores, los divido bajo un flotante y lo devuelvo*/
    float division(float num1, float num2){
        float resultado;
        resultado=num1/num2;
        return resultado;
    }
    /*Creo la función "multiplicacion" donde entran dos valores, los multiplico bajo un flotante y lo devuelvo*/
    float multiplicacion(float num1, float num2){
        float resultado;
        resultado=num1*num2;
        return resultado;
    }
    /*Creo la función "factorial" donde uso sólo un valor entero en un FOR para que se vaya multiplicando
    desde uno hasta el numero ingresado y devuelvo el resultado*/
    int factorial(int num){
        int resultado=1, i;
        for(i=1; i<=num; i++){
            resultado=resultado*i;
        }
        return resultado;
    }

