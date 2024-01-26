#include <stdio.h>

/*
Programa que apresenta uma tabela de conversão Fahrenheit para Celsius de 0 até 300 tendo um passo de 20.
*/

int main(void) {
    /*
    inicio -> limite inferior (0)
    fim -> limite superior (300)
    incr -> passo (20)
    */
    int inicio = 0, fim = 300, incr = 20;
    float fahr = inicio, celsius = inicio;
    while (fahr <= fim) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%4.0f %6.1f\n", fahr, celsius);
        fahr += incr;
    }
    return 0;
}