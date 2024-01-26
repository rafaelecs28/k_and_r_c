#include <stdio.h>

int main(void) {
    int inicio = 0, fim = 300, passo = 20;
    float fahr = inicio, celsius = inicio;
    
    printf("Tabela que converte Fahrenheit para Celsius\n");
    printf("-------------------------------------------\n");
    printf("|Fahrenheit                        Celsius|\n");

    while (fahr <= fim) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("|%4.fF\t\t\t\t   %6.1fC|\n", fahr, celsius);
        fahr += passo;
    }

    printf("-------------------------------------------\n");
    return 0;
}