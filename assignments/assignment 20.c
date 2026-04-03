#include <stdio.h>
void swap_by_value(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}
void swap_by_reference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int x, y;
    printf("Enter first integers: ");
    scanf("%d", &x);
    printf("Enter second integers: ");
    scanf("%d", &y);
    printf("Before swap by value: x = %d, y = %d\n", x, y);
    swap_by_value(x, y);
    printf("After swap by value: x = %d, y = %d\n", x, y);
    printf("Before swap by reference: x = %d, y = %d\n", x, y);
    swap_by_reference(&x, &y);
    printf("After swap by reference: x = %d, y = %d\n", x, y);
    return 0;
}   
