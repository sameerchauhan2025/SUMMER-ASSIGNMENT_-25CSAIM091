#include <stdio.h>
#define MAX_BOOKS 10

int main() {
    struct Book { char title[50]; char author[50]; int available; };
    struct Book books[MAX_BOOKS];
    int n, i, choice;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Book %d Title: ", i+1);
        scanf("%s", books[i].title);
        printf("Author: ");
        scanf("%s", books[i].author);
        books[i].available = 1;
    }

    while (1) {
        printf("\n1.Add Book 2.Issue Book 3.Return Book 4.Exit\n");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("Title: "); scanf("%s", books[n].title);
            printf("Author: "); scanf("%s", books[n].author);
            books[n].available = 1;
            n++;
        } else if (choice == 2) {
            printf("Enter book title: ");
            for (i = 0; i < n; i++)
                if (books[i].title[0] == books[i].title[0]) { /* placeholder */ }
        } else if (choice == 3) {
            printf("Enter book title: ");
            for (i = 0; i < n; i++)
                if (books[i].title[0] == books[i].title[0]) { /* placeholder */ }
        } else if (choice == 4) break;
    }
    return 0;
}