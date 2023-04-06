#include <stdio.h>

// Define the structure for student record
struct Student {
    char courseName[50];
    int rollNo;
    int subjectCodes[3];
    int marks[3];
};

int main() {
    struct Student student;

    // Input student details
    printf("Enter course name: ");
    fgets(student.courseName, sizeof(student.courseName), stdin);
    printf("Enter roll number: ");
    scanf("%d", &student.rollNo);
    printf("Enter marks for three subjects:\n");
    for (int i = 0; i < 3; i++) {
        printf("Subject Code %d: ", i + 1);
        scanf("%d", &student.subjectCodes[i]);
        printf("Marks for Subject Code %d: ", i + 1);
        scanf("%d", &student.marks[i]);
    }

    // Calculate average marks
    int totalMarks = 0;
    for (int i = 0; i < 3; i++) {
        totalMarks += student.marks[i];
    }
    float averageMarks = (float)totalMarks / 3;

    // Display student details
    printf("\nStudent Details:\n");
    printf("Course Name: %s", student.courseName);
    printf("Roll Number: %d\n", student.rollNo);
    printf("Subject Codes and Marks:\n");
    for (int i = 0; i < 3; i++) {
        printf("Subject Code %d: %d\n", student.subjectCodes[i], student.marks[i]);
    }
    printf("Average Marks: %.2f\n", averageMarks);

    return 0;
}
