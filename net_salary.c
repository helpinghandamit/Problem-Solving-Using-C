#include <stdio.h>

void main() {
    float basic_salary, da, hra, gross_salary, pf, net_salary;
    
    printf("Enter basic salary: ");
    scanf("%f", &basic_salary);
    
    da = 0.25 * basic_salary;
    hra = 0.15 * basic_salary;
    gross_salary = basic_salary + da + hra;
    pf = 0.1 * gross_salary;
    net_salary = gross_salary - pf;
    
    printf("Net Salary: %.2f\n", net_salary);
    
    getch();
}
