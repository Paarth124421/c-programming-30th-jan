#include <stdio.h>
#include<math.h>
int factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return n * factorial(n - 1);
}   
int main(){
    int n;
    double x,sum,term;
    printf("Enter number of terms: ");
    scanf("%d",&n); 
    printf("Enter value of x: ");
    scanf("%lf",&x);
    sum=0;
    for(int i=0;i<n;i++){
        term=pow(x,i)/factorial(i);
        sum+=term;
    }
    printf("The sum of the series is: %lf\n",sum);
    return 0;   
}