#include <stdio.h>

int findLargest(int num1, int num2, int num3) {
    if (num1 > num2 && num1 > num3)
        return num1;
    else if (num2 > num1 && num2 > num3)
        return num2;
    else
        return num3;
}

int main() {
    int num1, num2, num3;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    printf("The largest number is: %d\n", findLargest(num1, num2, num3));
    
    return 0;
}
