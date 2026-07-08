#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice;
    double num1, num2, result;

    while (1) {
        printf("\n=== MENU-DRIVEN CALCULATOR ===\n");
        printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n'); // clear buffer
            continue;
        }

        if (choice == 5) {
            printf("Exiting calculator...\n");
            break;
        }

        printf("Enter two numbers: ");
        if (scanf("%lf %lf", &num1, &num2) != 2) {
            printf("Invalid numbers!\n");
            while (getchar() != '\n');
            continue;
        }

        switch (choice) {
            case 1: result = num1 + num2; printf("Result: %.2lf\n", result); break;
            case 2: result = num1 - num2; printf("Result: %.2lf\n", result); break;
            case 3: result = num1 * num2; printf("Result: %.2lf\n", result); break;
            case 4:
                if (num2 == 0) printf("Error: Division by zero!\n");
                else { result = num1 / num2; printf("Result: %.2lf\n", result); }
                break;
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}