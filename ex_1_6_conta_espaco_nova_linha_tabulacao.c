#include<stdio.h>

int main(void) {
    int nl = 0, space = 0, tab = 0, c = 0;
    
    while ((c = getchar()) != EOF) {
        if (c == '\n')
            ++nl;
        if (c == '\t')
            ++tab;
        if (c == ' ')
            ++space;
    }

    printf("O total de espacos, tabs e novas linhas: E %d, T %d, NL %d", space, tab, nl);
    
    return 0;
}