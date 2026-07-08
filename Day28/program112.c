#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    struct Contact contacts[100];
    int count = 0, choice;
    char searchName[50];

    while(1) {
        printf("\n=== Contact Management System ===\n");
        printf("1. Add Contact\n2. View Contacts\n3. Search Contact\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            printf("Enter name: ");
            scanf("%s", contacts[count].name);
            printf("Enter phone: ");
            scanf("%s", contacts[count].phone);
            count++;
            printf("Contact added successfully!\n");
        }
        else if(choice == 2) {
            printf("\n--- Contact List ---\n");
            for(int i = 0; i < count; i++)
                printf("%d. %s - %s\n", i+1, contacts[i].name, contacts[i].phone);
        }
        else if(choice == 3) {
            printf("Enter name to search: ");
            scanf("%s", searchName);
            int found = 0;
            for(int i = 0; i < count; i++) {
                if(strcmp(contacts[i].name, searchName) == 0) {
                    printf("Found: %s - %s\n", contacts[i].name, contacts[i].phone);
                    found = 1;
                    break;
                }
            }
            if(!found) printf("Contact not found!\n");
        }
        else if(choice == 4) {
            printf("Exiting program...\n");
            break;
        }
        else {
            printf("Invalid choice!\n");
        }
    }
    return 0;
}