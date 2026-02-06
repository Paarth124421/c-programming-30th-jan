#include <stdio.h>

int main(){
    int a[10];
    int i;
    printf("enter 10 numbers:\n");
    for (i=0;i<10;i=i+1){
        scanf("%d",&a[i]);
    }
    printf("you entered\n");
    for (i=0;i<10;i=i+1){
        printf("%d\n",a[i]);
    }
    return 0;
}