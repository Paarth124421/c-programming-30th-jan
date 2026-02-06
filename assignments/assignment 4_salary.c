#include <stdio.h>
int main(){
    float basic_salary,gross_salary,ta,hra,tax,net_salary;
    printf("Enter the basic salary:");
    scanf("%f",&basic_salary);
    ta=0.05*basic_salary;
    hra=0.1*basic_salary;
    gross_salary=basic_salary+ta+hra;
    tax=0.02*gross_salary;
    net_salary=gross_salary-tax;
    printf("Gross salary: %.2f\n",gross_salary);
    printf("Tax: %.2f\n",tax);
    printf("Net salary: %.2f\n",net_salary);
    return 0;
}