#include <stdio.h>

// Function to multiply two numbers using pointers
void multiplyNumbers(int *num1, int *num2, int *result) {
    *result = (*num1) * (*num2);
}

void main() {
    int number1, number2, result;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%d", &number1);

    printf("Enter the second number: ");
    scanf("%d", &number2);

    // Call the function to multiply numbers
    multiplyNumbers(&number1, &number2, &result);

    // Display the result
    printf("The product of %d and %d is: %d\n", number1, number2, result);

    getch();
}
