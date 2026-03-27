#include <stdio.h>
#include <stdlib.h>
int scd(int a, int b){
    if(b == 0){
        return a;
    }
    return scd(b, a % b);
}
int gcd(int a, int b){
    if(b == 0){
        return a;
    }
    return gcd(b, a % b);
}
int main(){
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("The SCD of %d and %d is: %d\n", num1, num2, scd(num1, num2));
    printf("The GCD of %d and %d is: %d\n", num1, num2, gcd(num1, num2));
    return 0;
}   

