#include <stdio.h>
void swap_by_value(int a, int b) {
    printf("before swap_by_value: a = %d, b = %d\n", a, b);
    int temp = a;
    a = b;
    b = temp;
    printf("after swap_by_value: a = %d, b = %d\n", a, b);
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
    swap_by_value(x, y);
    printf("Before swap by reference: x = %d, y = %d\n", x, y);
    swap_by_reference(&x, &y);
    printf("After swap by reference: x = %d, y = %d\n", x, y);
    return 0;
}   
