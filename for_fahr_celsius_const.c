#include<stdio.h>
#define FIM 300
#define INICIO 0
#define PASSO 20

int main(void) {
    for (int fahr = INICIO; fahr <= FIM; fahr += PASSO) 
        printf("%d\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
    return 0;
}