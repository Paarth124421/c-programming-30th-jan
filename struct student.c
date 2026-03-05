#include <stdio.h>
struct student {
    char name[50];
    float  m1,m2;
    float avg;
};
int main() {
    struct student s[5];
    for(int i=0; i<5; i++) {
        printf("Enter name of student %d: ", i+1);
        scanf("%s", s[i].name);
        printf("Enter marks of student %d in subject 1: ", i+1);                    
        scanf("%f", &s[i].m1);
        printf("Enter marks of student %d in subject 2: ", i+1);
        scanf("%f", &s[i].m2);
        s[i].avg = (s[i].m1 + s[i].m2) / 2;
    }
    printf("\nName\tMarks1\tMarks2\tAverage\n");
    for(int i=0; i<5; i++) {
        printf("%s\t%.2f\t%.2f\t%.2f\n", s[i].name, s[i].m1, s[i].m2, s[i].avg      );
    }
    return 0;
}