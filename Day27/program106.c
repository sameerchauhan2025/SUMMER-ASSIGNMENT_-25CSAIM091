#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

// Structure to store employee details
struct Employee {
    int id;
    char name[50];
    char department[30];
    float salary;
};

struct Employee employees[MAX];
int count = 0;

// Function to add an employee
void addEmployee() {
    if (count >= MAX) {
        printf("Employee limit reached!\n");
        return;
    }
    struct Employee emp;
    printf("Enter Employee ID: ");
    if (scanf("%d", &emp.id) != 1) { printf("Invalid input!\n"); return; }
    printf("Enter Name: ");
    scanf(" %[^\n]", emp.name);
    printf("Enter Department: ");
    scanf(" %[^\n]", emp.department);
    printf("Enter Salary: ");
    if (scanf("%f", &emp.salary) != 1) { printf("Invalid input!\n"); return; }

    employees[count++] = emp;
    printf("Employee added successfully!\n");
}

// Function to display all employees
void displayEmployees() {
    if (count == 0) {
        printf("No employees to display.\n");
        return;
    }
    printf("\n--- Employee List ---\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d | Name: %s | Dept: %s | Salary: %.2f\n",
               employees[i].id, employees[i].name, employees[i].department, employees[i].salary);
    }
}

// Function to search employee by ID
void searchEmployee() {
    int id;
    printf("Enter Employee ID to search: ");
    if (scanf("%d", &id) != 1) { printf("Invalid input!\n"); return; }
    for (int i = 0; i < count; i++) {
        if (employees[i].id == id) {
            printf("Found: %s from %s Dept, Salary: %.2f\n",
                   employees[i].name, employees[i].department, employees[i].salary);
            return;
        }
    }
    printf("Employee not found.\n");
}

int main() {
    int choice;
    while (1) {
        printf("\n--- Employee Management System ---\n");
        printf("1. Add Employee\n2. Display Employees\n3. Search Employee\n4. Exit\n");
        printf("Enter choice: ");
        if (scanf("%d", &choice) != 1) { printf("Invalid input!\n"); break; }

        switch (choice) {
            case 1: addEmployee(); break;
            case 2: displayEmployees(); break;
            case 3: searchEmployee(); break;
            case 4: exit(0);
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}