#include<stdio.h>

int main(void) {
    int c = 0;
    int spaces = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            if (spaces <= 1)
                putchar(c);
            ++spaces;
        }
        if (c != ' ') {
            putchar(c);
            spaces = 0;
        }
    }
    return 0;
}