
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to safely read a string (including spaces)
void readLine(char *str, int size) {
    if (fgets(str, size, stdin)) {
        size_t len = strlen(str);
        if (len > 0 && str[len - 1] == '\n') {
            str[len - 1] = '\0'; // Remove newline
        }
    }
}

// Function to reverse a string in place
void reverseString(char *str) {
    int i = 0, j = strlen(str) - 1;
    while (i < j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

// Function to count vowels in a string
int countVowels(const char *str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower((unsigned char)str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    return count;
}

int main() {
    char str1[200], str2[200], temp[200];
    int choice;

    printf("Enter the first string: ");
    readLine(str1, sizeof(str1));

    do {
        printf("\n===== String Operations Menu =====\n");
        printf("1. Display string\n");
        printf("2. Length of string\n");
        printf("3. Copy string\n");
        printf("4. Concatenate string\n");
        printf("5. Compare string\n");
        printf("6. Reverse string\n");
        printf("7. Count vowels\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n'); // Clear input buffer
            continue;
        }
        while (getchar() != '\n'); // Clear newline after number input

        switch (choice) {
            case 1:
                printf("String: %s\n", str1);
                break;

            case 2:
                printf("Length: %zu\n", strlen(str1));
                break;

            case 3:
                strcpy(temp, str1);
                printf("Copied string: %s\n", temp);
                break;

            case 4:
                printf("Enter another string to concatenate: ");
                readLine(str2, sizeof(str2));
                strcat(str1, str2);
                printf("After concatenation: %s\n", str1);
                break;

            case 5:
                printf("Enter another string to compare: ");
                readLine(str2, sizeof(str2));
                if (strcmp(str1, str2) == 0)
                    printf("Strings are equal.\n");
                else
                    printf("Strings are not equal.\n");
                break;

            case 6:
                reverseString(str1);
                printf("Reversed string: %s\n", str1);
                break;

            case 7:
                printf("Number of vowels: %d\n", countVowels(str1));
                break;

            case 8:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 8);

    return 0;
}