#include <stdio.h>
#include <math.h>
int main() {
    int num, temp, remainder, result = 0;
    
    printf("Enter an integer:");
    scanf("%d", &num);

    temp = num;
    
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, 3);
        temp /= 10;
    }
    
    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
    
    return 0;
}