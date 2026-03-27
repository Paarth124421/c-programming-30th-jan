#include <stdio.h>
#include <math.h>
int factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return n * factorial(n - 1);
}
int is_prime(int n){
    if(n <= 1){
        return 0;
    }
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}
void main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("square root of %d is %.2f\n", num, sqrt(num));
    printf("square of %d is %d\n", num, pow(num, 2));
    printf("cube of %d is %d\n", num, pow(num, 3));
    printf("factorial of %d is %d\n", num, factorial(num));
    if(is_prime(num)){
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    return 0;
}