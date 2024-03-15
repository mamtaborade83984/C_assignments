#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 50


struct Employee {
    char firstName[MAX_NAME_LENGTH];
    char lastName[MAX_NAME_LENGTH];
    double monthlySalary;
};


void emp_init(struct Employee* e, const char* firstName, const char* lastName, double monthlySalary) {
    strncpy(e->firstName, firstName, MAX_NAME_LENGTH);
    e->firstName[MAX_NAME_LENGTH - 1] = '\0';
    strncpy(e->lastName, lastName, MAX_NAME_LENGTH);
    e->lastName[MAX_NAME_LENGTH - 1] = '\0'; 
    e->monthlySalary = monthlySalary;
}


void set_salary(struct Employee* e, double salary) {
    e->monthlySalary = salary;
}


void emp_display(struct Employee* e) {
    printf("Employee Name: %s %s\n", e->firstName, e->lastName);
    printf("Monthly Salary: %.2f\n", e->monthlySalary);
}


void display_yearly_salary(struct Employee* e) {
    double yearlySalary = e->monthlySalary * 12;
    printf("Yearly Salary: %.2f\n", yearlySalary);
}


void give_raise(struct Employee* e) {
    e->monthlySalary *= 1.10;
}

int main() {
    struct Employee emp1, emp2;


    emp_init(&emp1, "Mamta", "Borade", 5000.0);
    emp_init(&emp2, "Virat", "Kohli", 6000.0);


    printf("Employee 1:\n");
    emp_display(&emp1);
    display_yearly_salary(&emp1);

    printf("\nEmployee 2:\n");
    emp_display(&emp2);
    display_yearly_salary(&emp2);


    give_raise(&emp1);
    give_raise(&emp2);


    printf("\nAfter 10%% raise:\n");
    printf("Employee 1:\n");
    emp_display(&emp1);
    display_yearly_salary(&emp1);

    printf("\nEmployee 2:\n");
    emp_display(&emp2);
    display_yearly_salary(&emp2);

    return 0;
}

