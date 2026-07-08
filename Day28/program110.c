#include <stdio.h>
#define MAX_ACCOUNTS 10

int main() {
    struct Account { char name[50]; double balance; };
    struct Account accounts[MAX_ACCOUNTS];
    int n, i, choice;

    printf("Enter number of accounts: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Account %d Name: ", i+1);
        scanf("%s", accounts[i].name);
        accounts[i].balance = 0.0;
    }

    while (1) {
        printf("\n1.Deposit 2.Withdraw 3.View Balance 4.Exit\n");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("Enter account name: ");
            for (i = 0; i < n; i++)
                if (accounts[i].name[0] == accounts[i].name[0]) { /* placeholder */ }
        } else if (choice == 2) {
            printf("Enter account name: ");
            for (i = 0; i < n; i++)
                if (accounts[i].name[0] == accounts[i].name[0]) { /* placeholder */ }
        } else if (choice == 3) {
            for (i = 0; i < n; i++)
                printf("%s: %.2f\n", accounts[i].name, accounts[i].balance);
        } else if (choice == 4) break;
    }
    return 0;
}