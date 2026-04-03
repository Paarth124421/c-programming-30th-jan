#include <stdio.h>
#include <string.h>
struct employee {
    char name[50];
    char designation[50];
    char gender;
    int date_of_joining;
    double salary;
};
int main() {
    struct employee employees[100];
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        
        printf("Name: ");
        scanf(" %[^\n]", employees[i].name); // Reads full name with spaces

        printf("Designation: ");
        scanf(" %[^\n]", employees[i].designation); // Reads "Assistant Manager" correctly

        printf("Gender (M/F): ");
        scanf(" %c", &employees[i].gender);

        printf("Date of Joining (YYYYMMDD): ");
        scanf("%d", &employees[i].date_of_joining);

        printf("Salary: ");
        scanf("%lf", &employees[i].salary);
    }
    printf("\ntotal number of employees: %d\n", n);
    int male_count =0, female_count = 0;
    for (int i = 0; i < n; i++) {
        if (employees[i].gender == 'M' || employees [i].gender== 'm') {   
            male_count++;
        } else {
            female_count++;
        }
    }
    printf("Total male employees: %d\n", male_count);
    printf("Total female employees: %d\n", female_count);
    
    printf("\nEmployees with salary greater than 10000:\n");
    for (int i = 0; i < n; i++) {
        if (employees[i].salary > 10000) {
            printf("Name: %s, Designation: %s, Salary: %.2lf\n", employees[i].name, employees[i].designation, employees[i].salary);
        }
    }
    printf("\n employees with designation 'Assistant Manager':\n");
    for (int i = 0; i < n; i++) {
        if (strcmp(employees[i].designation, "Assistant Manager") == 0) {
            printf("Name: %s, Gender: %c, Date of Joining: %d, Salary: %.2lf\n", employees[i].name, employees[i].gender, employees[i].date_of_joining, employees[i].salary);
        }
    }
    return 0;
}