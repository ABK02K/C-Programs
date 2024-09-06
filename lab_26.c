#include <stdio.h>
#include <string.h>
// Define the structure for the Date of Birth
struct DateOfBirth {
    int day;
    int month;
    int year;
};
// Define the structure for the Student
struct Student {
    char name[50];
    int rollNumber;
    float marks;
    int class;
    struct DateOfBirth dob;
    };
int main() {
    int n, i;
    // Input the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);
    // Declare an array of structures to store student information
    struct Student students[n];
    // Input information for each student
    for (i = 0; i < n; ++i) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        printf("Date of Birth (dd mm yyyy): ");
        scanf("%d %d %d", &students[i].dob.day, &students[i].dob.month, &students[i].dob.year);
        printf("Class: ");
        scanf("%d", &students[i].class);
    }
     printf("Enter the name of the student you want to search: ");
    char sname[50];
    scanf("%s", sname);

    for (i = 0; i < n; ++i) {
        if (strcmp(students[i].name, sname) == 0) {
            printf("\nStudent Information:\n");
            printf("%-20s %-10s %-15s %-10s %-15s\n", "Name", "Class", "Roll Number", "Marks", "Date of Birth");
            printf("%-20s %-10d %-15d %-10.2f %02d/%02d/%04d\n", students[i].name,
                   students[i].class, students[i].rollNumber, students[i].marks, students[i].dob.day,
                   students[i].dob.month, students[i].dob.year);
            break; // Stop searching after finding the first match
        }
    }
    if (i == n) {
        printf("Student not found.\n");
    }

    return 0;
}