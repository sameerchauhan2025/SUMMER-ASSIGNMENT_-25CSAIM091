#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll;
    char name[50];
    float marks[5];
    float total;
    float percentage;
    char grade;
};

void calculateResult(struct Student *s) {
    s->total = 0;
    for (int i = 0; i < 5; i++) {
        s->total += s->marks[i];
    }
    s->percentage = s->total / 5.0f;

    if (s->percentage >= 90) s->grade = 'A';
    else if (s->percentage >= 75) s->grade = 'B';
    else if (s->percentage >= 50) s->grade = 'C';
    else s->grade = 'F';
}

int main() {
    struct Student stu;
    printf("Enter Roll Number: ");
    if (scanf("%d", &stu.roll) != 1) { printf("Invalid input!\n"); return 1; }
    printf("Enter Name: ");
    scanf(" %[^\n]", stu.name);

    for (int i = 0; i < 5; i++) {
        printf("Enter marks for Subject %d: ", i + 1);
        if (scanf("%f", &stu.marks[i]) != 1 || stu.marks[i] < 0 || stu.marks[i] > 100) {
            printf("Invalid marks!\n");
            return 1;
        }
    }

    calculateResult(&stu);

    printf("\n--- Marksheet ---\n");
    printf("Roll No: %d\nName: %s\nTotal: %.2f\nPercentage: %.2f%%\nGrade: %c\n",
           stu.roll, stu.name, stu.total, stu.percentage, stu.grade);

    return 0;
}