#include <stdio.h>

void main() {
    // Declare variables to store three real numbers
    float num1, num2, num3, average;

    // Prompt the user to enter three real numbers
    printf("Enter three real numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    // Calculate the average
    average = (num1 + num2 + num3) / 3.0;

    // Display the result
    printf("Average: %.2f\n", average);

    getch();
}
