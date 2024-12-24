#include <stdio.h>

#define MAX_STUDENTS 50

struct Student {
    int rollNo;
    float marks;
};

int main() {
    struct Student students[MAX_STUDENTS];
    int numStudents;
    int topperIndex = 0; 

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Input student details
    for (int i = 0; i < numStudents; i++) {
        printf("\nStudent %d:\n", i + 1);

        printf("Enter roll number: ");
        scanf("%d", &students[i].rollNo);

        printf("Enter marks: ");
        scanf("%f", &students[i].marks);

        // Update topperIndex if current student has higher marks
        if (students[i].marks > students[topperIndex].marks) {
            topperIndex = i;
        }
    }

    // Display topper details
    printf("\nTopper Details:\n");
    printf("Roll No: %d\n", students[topperIndex].rollNo);
    printf("Marks: %.2f\n", students[topperIndex].marks);

    return 0;
}
