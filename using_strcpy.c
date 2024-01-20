#include <stdio.h>
#include <string.h>

void main() {
    char source[100], destination[100];
    
    printf("Enter a string: ");
    scanf("%s", source);
    
    strcpy(destination, source);
    
    printf("Copied string: %s\n", destination);
    
    getch();
}
