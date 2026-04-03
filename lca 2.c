#include <stdio.h>
int gcd(int num1, int num2){
    int min_num,max_num,lowest_divisor,i;
    if(num1>num2){
        min_num=num2;
        max_num=num1;
    }
    else{
        min_num=num1;
        max_num=num2;
    }
    for(i=1;i<=min_num;i++){
        if (num1%i==0 && num2%i==0){
            lowest_divisor=i;
        }
    }
    return lowest_divisor;
}
int lcm(int num1, int num2){
    int min_num,max_num,j,greatest_multiple;
    if(num1>num2){
        max_num=num1;
    }
    else{
        max_num=num2;
    }
    for(j=max_num;j>=1;j--){
        if (j%num1==0 && j%num2==0){
            greatest_multiple=j;
        }
    }
    return greatest_multiple;
}
int main(){
    int num1,num2;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    printf("lowest common divisor= %d\n",lcm(num1,num2));
    printf("greatest common divisor= %d\n",gcd(num1,num2));
    return 0;
}
