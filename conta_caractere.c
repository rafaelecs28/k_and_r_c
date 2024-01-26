#include<stdio.h>

int main(void) {
    long nc = 0;
    while(getchar() != EOF) {
        ++nc;
    }
    printf("O total de caracteres %ld\n", nc);
    return 0;
}