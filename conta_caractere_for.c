#include<stdio.h>

int main(void) {
    long nc;
    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("O total de chars: %ld\n", nc);
    return 0;
}