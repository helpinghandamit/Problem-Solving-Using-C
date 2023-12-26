#include <stdio.h>

void main() {
    float side, volume;
    
    printf("Enter the side of the cube: ");
    scanf("%f", &side);
    
    volume = side * side * side;
    
    printf("Volume of the cube: %.2f\n", volume);
    
    getch();
}
