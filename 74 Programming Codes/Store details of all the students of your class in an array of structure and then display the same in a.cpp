#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 50 // Adjust as needed

struct Student {
    char name[50];
    int rollNo;
    float marks;
};

int main() {
    struct Student students[MAX_STUDENTS];
    int numStudents;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Input student details
    for (int i = 0; i < numStudents; i++) {
        printf("\nStudent %d:\n", i + 1);

        printf("Enter name: ");
        fgets(students[i].name, 50, stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0; // Remove newline

        printf("Enter roll number: ");
        scanf("%d", &students[i].rollNo);

        printf("Enter marks: ");
        scanf("%f", &students[i].marks);

        // Consume the newline character left by scanf()
        getchar(); 
    }

    // Display student details in tabular format
    printf("\nStudent Details:\n");
    printf("-------------------------------------\n");
    printf("| %-20s | %-10s | %-8s |\n", "Name", "Roll No", "Marks");
    printf("-------------------------------------\n");

    for (int i = 0; i < numStudents; i++) {
        printf("| %-20s | %-10d | %-8.2f |\n", 
               students[i].name, students[i].rollNo, students[i].marks);
    }
    printf("-------------------------------------\n");

    return 0;
}
