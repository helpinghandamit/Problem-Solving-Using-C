#include <stdio.h>
#include <string.h>

void main() {
    char str[100];
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    strrev(str);
    
    printf("Reversed string: %s\n", str);
    
    getch();
}
