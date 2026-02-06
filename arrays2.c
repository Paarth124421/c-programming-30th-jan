#include <stdio.h>

int main(){
    int a[10];
    int b[10];
    int i;
    printf("enter 10 numbers:\n");
    for (i=0;i<10;i=i+1){
        scanf("%d",&a[i]);
    }
    printf("you entered\n");
      printf("enter 10 numbers for 2nd:\n");
    for (i=0;i<10;i=i+1){
        scanf("%d",&b[i]);
    }
    printf("you entered\n");  
    printf("sum of elements is:\n");
    for (i=0;i<10;i=i+1){
        printf("%d\n",a[i]+b[i]);
    }
    return 0;
}