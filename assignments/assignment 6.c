#include <stdio.h>
int factorial_recursive(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return n * factorial_recursive(n - 1);
}
int non_recursive_factorial(int n){
    int result = 1;
    for(int i = 2; i <= n; i++){
        result *= i;
    }
    return result;
}
int main(){
    int n;
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &n);
    if(n < 0){
        printf("Factorial is not defined for negative numbers.\n");
        return 0;
    }
    printf("Factorial of %d (recursive): %d\n", n, factorial_recursive(n));
    printf("Factorial of %d (non-recursive): %d\n", n   , non_recursive_factorial(n));
    return 0;
}   