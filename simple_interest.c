#include <stdio.h>

void main() {
    float amount, rate, time, simple_interest;
    
    printf("Enter amount, rate, and time: ");
    scanf("%f %f %f", &amount, &rate, &time);
    
    simple_interest = (amount * rate * time) / 100;
    
    printf("Simple Interest: %.2f\n", simple_interest);
    
    getch();
}
