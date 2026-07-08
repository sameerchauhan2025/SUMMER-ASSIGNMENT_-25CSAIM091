#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int id;
    char name[50];
    float basic, hra, da, gross;
};

void calculateSalary(struct Employee *e) {
    e->hra = e->basic * 0.20f; // 20% HRA
    e->da = e->basic * 0.10f;  // 10% DA
    e->gross = e->basic + e->hra + e->da;
}

int main() {
    struct Employee emp;
    printf("Enter Employee ID: ");
    if (scanf("%d", &emp.id) != 1) { printf("Invalid input!\n"); return 1; }
    printf("Enter Name: ");
    scanf(" %[^\n]", emp.name);
    printf("Enter Basic Salary: ");
    if (scanf("%f", &emp.basic) != 1) { printf("Invalid input!\n"); return 1; }

    calculateSalary(&emp);

    printf("\n--- Salary Slip ---\n");
    printf("ID: %d\nName: %s\nBasic: %.2f\nHRA: %.2f\nDA: %.2f\nGross Salary: %.2f\n",
           emp.id, emp.name, emp.basic, emp.hra, emp.da, emp.gross);

    return 0;
}