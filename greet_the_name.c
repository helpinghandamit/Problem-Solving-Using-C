#include <stdio.h>

void main() {
    char name[50]; // Declare a character array to store the name

    // Prompt the user to enter their name
    printf("Enter your name: ");
    
    // Read the inputted name from the user and store it in the 'name' array
    scanf("%s", name);

    // Display a greeting message using the entered name
    printf("Hello, %s!\n", name);

    getch();
}
