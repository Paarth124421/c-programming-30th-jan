#include <stdio.h>

int main() {
    float a, b;
    int choice;

    printf("MAIN MENU\n");
    printf("1. Add two numbers\n");
    printf("2. Subtract two numbers\n");
    printf("3. Multiply two numbers\n");
    printf("4. Divide two numbers\n");
    printf("5. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 4) {
        printf("Enter two numbers: ");
        scanf("%f %f", &a, &b);
    }

    switch (choice) {
        case 1:
        printf("Sum = %f", a + b);
        break;

        case 2:
        printf("Difference = %f", a - b);
        break;

        case 3:
        printf("Multiplication = %f", a * b);
        break;

        case 4:
        printf("Division = %f", a / b);
        break;
        
        default:
        printf("'Thank you/Invalid Choice");
        break;

    }

    return 0;
}
