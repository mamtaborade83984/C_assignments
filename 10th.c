#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 10
#define MAX_NAME_LENGTH 50

int compareNames(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main() {
    char nameOfStudents[MAX_STUDENTS][MAX_NAME_LENGTH];
    int numOfStudents;


    printf("Enter number of students (up to %d): ", MAX_STUDENTS);
    scanf("%d", &numOfStudents);
    getchar();

    if (numOfStudents > MAX_STUDENTS) {
        printf("Number of students exceeds maximum limit.\n");
        return 1;
    }

    printf("Enter names of students:\n");
    for (int i = 0; i < numOfStudents; i++) {
        fgets(nameOfStudents[i], MAX_NAME_LENGTH, stdin);

        nameOfStudents[i][strcspn(nameOfStudents[i], "\n")] = '\0';
    }


    qsort(nameOfStudents, numOfStudents, sizeof(nameOfStudents[0]), compareNames);

 
    printf("\nSorted names of students:\n");
    for (int i = 0; i < numOfStudents; i++) {
        printf("%s\n", nameOfStudents[i]);
    }

    return 0;
}

