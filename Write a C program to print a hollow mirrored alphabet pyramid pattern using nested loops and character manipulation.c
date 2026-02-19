/*FOLLWING OUTPUT
A B C D E F G F E D C B A
A B C D E F   F E D C B A
A B C D E       E D C B A
A B C D           D C B A
A B C               C B A
A B                   B A
A                       A */ 

#include <stdio.h>

int main() {
    int n = 7;
    int i, j;

    for(i = n; i >= 1; i--) {

        for(j = 0; j < i; j++)
            printf("%c ", 'A' + j);

        for(j = 0; j < 2*(n - i); j++)
            printf("  ");

        for(j = i - 1; j >= 0; j--)
            printf("%c ", 'A' + j);

        printf("\n");
    }

    return 0;
}

