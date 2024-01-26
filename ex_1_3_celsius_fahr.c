#include <stdio.h>

int main(void) {
    int inicio = 0, fim = 300, passo = 20;
    float celsius = inicio, fahr = inicio;
    while (celsius <= fim) {
        fahr = (celsius * (9.0 / 5.0)) + 32.0;
        printf("%4.f %6.1f\n", celsius, fahr);
        celsius += passo;
    }
    return 0;
}