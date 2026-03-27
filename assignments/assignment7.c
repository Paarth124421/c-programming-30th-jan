#include <stdio.h>
struct student {
    char name[50];
    int rollno;
    float m1, m2, m3,m4,m5;
    float average;
};
struct student s[100];
int n;

int main() {
    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
    printf("Enter details of student %d\n: ", i + 1);
    printf("enter name: ");
    scanf("%s", s[i].name);
    printf("enter roll number: ");
    scanf("%d", &s[i].rollno);
    printf("enter marks of 5 subjects:\n");
    printf("subject 1: ");
    scanf("%f", &s[i].m1);
    printf("subject 2: ");
    scanf("%f", &s[i].m2);
    printf("subject 3: ");      
    scanf("%f", &s[i].m3);
    printf("subject 4: ");
    scanf("%f", &s[i].m4);
    printf("subject 5: ");
    scanf("%f", &s[i].m5);
s[i].average = (s[i].m1 + s[i].m2 + s[i].m3 + s[i].m4 + s[i].m5) / 5;
}
printf("\nName\tRoll No\tMarks\tAverage\n");
for (int i = 0; i < n; i++) {
    printf("student %d:\n", i + 1);
    printf("Name: %s\n", s[i].name);
    printf("Roll No: %d\n", s[i].rollno);
    printf("Marks: %.2f %.2f %.2f %.2f %.2f\n", s[i].m1, s[i].m2, s[i].m3, s[i].m4, s[i].m5);
    printf("Average: %.2f\n", s[i].average);
    }
    
    return 0;
}