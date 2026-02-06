#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}
int main() {
    int ch;
    float num1, num2, result;
    printf("Select operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Factorial\n");
    printf("6. power\n");
    printf("Enter choice (1-6): ");
    scanf("%d", &ch);   

    switch(ch){
        case 1:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;
        case 2:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;
        case 3:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;
        case 4:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            if(num2 != 0){
                result = num1 / num2;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        case 5:
            {
                int n;
                printf("Enter a number: ");
                scanf("%d", &n);
                if(n < 0){
                    printf("Error: Factorial of negative number doesn't exist!\n");
                } else {
                    int fact = factorial(n);
                    printf("Factorial of %d is %d\n", n, fact);
                }
            }
            break;
        case 6:
            {
                double base, exponent, power;
                printf("Enter base and exponent: ");
                scanf("%lf %lf", &base, &exponent);
                power = pow(base, exponent);
                printf("%.2lf raised to the power of %.2lf is %.2lf\n", base, exponent, power);
            }
            break;
        default:
            printf("Invalid choice!\n");
        }
    return 0;
    }