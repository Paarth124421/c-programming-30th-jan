#include <stdio.h>
int main(){
    int N;
    printf("enter the number of integers: ");
    scanf("%d", &N);
    int numbers[N],even_numbers[N],odd_numbers[N];
    int even_count=0, odd_count=0;
    printf("enter the integers: ");
    for(int i=0; i<N; i++){
        scanf("%d", &numbers[i]);
        if(numbers[i] % 2 == 0){
            even_numbers[even_count++] = numbers[i];
        } else {
            odd_numbers[odd_count++] = numbers[i];
        }
    }
    printf("even numbers: ");
    for(int i=0; i<even_count; i++){
        printf("%d ", even_numbers[i]);
    }
    printf("\nodd numbers: ");
    for(int i=0; i<odd_count; i++){
        printf("%d ", odd_numbers[i]);
    }
    printf("\n");
    return 0;
}
