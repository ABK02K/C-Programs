#include <stdio.h>
#include <string.h>

// Define the structure for employee information
struct Employee {
    char name[50];
    int empId;
    float salary;
};

int main() {
    int n, i, j;

    // Input the number of employees
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Declare an array of structures to store employee information
    struct Employee employees[n];

    // Input information for each employee
    for (i = 0; i < n; ++i) {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Employee ID: ");
        scanf("%d", &employees[i].empId);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    // Sort employees' names in ascending order
    for (i = 0; i < n - 1; ++i) {
        for (j = i + 1; j < n; ++j) {
            if (strcmp(employees[i].name, employees[j].name) > 0) {
                // Swap the names
                struct Employee temp = employees[i];
                employees[i] = employees[j];
                employees[j] = temp;
            }
        }
    }

    // Display information of employees with names in ascending order
    printf("\nEmployee Information (Sorted by Name):\n");
    printf("%-20s %-10s %-10s\n", "Name", "Emp ID", "Salary");
    for (i = 0; i < n; ++i) {
        printf("%-20s %-10d %-10.2f\n", employees[i].name, employees[i].empId, employees[i].salary);
    }

    return 0;
}
