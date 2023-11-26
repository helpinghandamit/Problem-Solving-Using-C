#include <stdio.h>

void main() {
    int num1, num2, sum;

    // Prompt the user to enter two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate the sum of the two numbers
    sum = num1 + num2;

    // Display the result
    printf("Sum: %d\n", sum);

    getch();
}
