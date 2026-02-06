#include <stdio.h>
int main(){
    int marks[5];
    int total=0;
    float percentage;
    printf("Enter marks for 5 subjects:\n");
    for(int i=0;i<5;i++){
        printf("subject: %d",i+1);
        scanf("%d", &marks[i]);
        total+=marks[i];
    }
    percentage=total/5.0;
    
    if (percentage>=75){
        printf("Grade: A\n");
    }
    else if (percentage>=60){
        printf("Grade: B\n");
    }
    else if (percentage>=50){
        printf("Grade: C\n");
    }
    else if (percentage>=40){
        printf("Grade: D\n");
    }
    else{
        printf("Grade: F\n");   
    }
    return 0;
}