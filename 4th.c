#include <stdio.h>
int main() {
    int marks[5];
    int totalMarks = 0, i;
    float average;
    char grade;

    printf("Enter marks of five subjects:\n");
    for (i = 0; i < 5; i++) {
        printf("Subject %d Marks: ", i + 1);
        scanf("%d", &marks[i]);
        totalMarks += marks[i];
    }

    average = totalMarks / 5.0;

    if (average >= 90) {
        grade = 'E';
    } else if (average >= 80) {
        grade = 'A';
    } else if (average >= 70) {
        grade = 'B';
    } else if (average >= 60) {
        grade = 'C';
    } else {
        grade = 'F';
    }

    printf("Total Marks: %d\n", totalMarks);
    printf("Average Marks: %.2f\n", average);
    printf("Grade: %c\n", grade);

    return 0;
}
