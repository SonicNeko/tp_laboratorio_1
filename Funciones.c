    /*Este void fu� de prueba, es totalmente inecesario una funci�n para s�lo mostrar algo en pantalla igualmente,
    pero como era de prueba lo dej�*/
    void mostrar (void){
        printf("Trabajo Practico #1 - Calculadora cuasi-inteligente!\n");
        return;
    }
    /*Uso esta funci�n tanto para pedir el valor de A como la de B*/
    float numero(){
        float num;
        printf("Ingrese numero: ");
        scanf("%f", &num);
        printf("\n");
        return num;
    }
    /*Creo la funci�n "sumatoria" donde entran dos valores, los sumo bajo un flotante y lo devuelvo*/
    float sumatoria(float num1, float num2){
        float resultado;
        resultado=num1+num2;
        return resultado;
        }
    /*Creo la funci�n "restar" donde entran dos valores, los resto bajo un flotante y lo devuelvo*/
    float restar(float num1, float num2){
        float resultado;
        resultado=num1-num2;
        return resultado;
    }
    /*Creo la funci�n "division" donde entran dos valores, los divido bajo un flotante y lo devuelvo*/
    float division(float num1, float num2){
        float resultado;
        resultado=num1/num2;
        return resultado;
    }
    /*Creo la funci�n "multiplicacion" donde entran dos valores, los multiplico bajo un flotante y lo devuelvo*/
    float multiplicacion(float num1, float num2){
        float resultado;
        resultado=num1*num2;
        return resultado;
    }
    /*Creo la funci�n "factorial" donde uso s�lo un valor entero en un FOR para que se vaya multiplicando
    desde uno hasta el numero ingresado y devuelvo el resultado*/
    int factorial(int num){
        int resultado=1, i;
        for(i=1; i<=num; i++){
            resultado=resultado*i;
        }
        return resultado;
    }

