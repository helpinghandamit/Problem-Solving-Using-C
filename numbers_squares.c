#include <stdio.h>

void printSquares(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf("Number: %d, Square: %d\n", i, i * i);
    }
}

void main() {
    printSquares(20);
    getch();
}
