#include <stdio.h>

void main() {
    int dividend, divisor, quotient, remainder;
    printf("Enter dividend and divisor: ");
    scanf("%d %d", &dividend, &divisor);
    
    quotient = dividend / divisor;
    remainder = dividend % divisor;
    
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);
    
    getch();
}
