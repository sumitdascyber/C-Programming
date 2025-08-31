#include <stdio.h>
int main() {
    int i;

    printf("ASCII Table (0 - 127)\n");
    printf("---------------------------------\n");
    printf("Dec\tChar\t| Dec\tChar\t| Dec\tChar\t| Dec\tChar\n");
    printf("---------------------------------\n");

    for (i = 0; i <= 127; i++) {
        printf("%3d\t%c\t", i, (i >= 32 && i <= 126) ? i : ' ');

        if (i % 4 == 3) {
            printf("\n");
        } else {
            printf("| ");
        }
    }
}