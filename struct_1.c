// program to store the employee details using structure
#include <stdio.h>
#include <string.h>

// defining a structure to store employee details
struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp;

    // taking input from the user
    printf("Enter employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter employee name: ");
    scanf("%s", emp.name);
    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);

    // displaying the employee details
    printf("\nEmployee Details:\n");
    printf("ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("Salary: %.2f\n", emp.salary);

    return 0;
}