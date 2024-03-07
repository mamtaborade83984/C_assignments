#include <stdio.h>

// Define Student structure
struct Student {
    char studentName[50];
    char rollNo[20];
    int totalMarks;
};

// Function to read student data
void readStudentData(struct Student *student) {
    printf("Enter student name: ");
    scanf("%s", student->studentName);

    printf("Enter roll number: ");
    scanf("%s", student->rollNo);

    printf("Enter total marks obtained: ");
    scanf("%d", &student->totalMarks);
}

// Function to display student data
void displayStudentData(const struct Student *student) {
    printf("Student Name: %s\n", student->studentName);
    printf("Roll Number: %s\n", student->rollNo);
    printf("Total Marks Obtained: %d\n", student->totalMarks);
}

int main() {
    struct Student student;

    // Read student data
    readStudentData(&student);

    // Display student data
    printf("\nStudent Information:\n");
    displayStudentData(&student);

    return 0;
}
