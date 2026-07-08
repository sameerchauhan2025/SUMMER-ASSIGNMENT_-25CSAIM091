#include <stdio.h>

int main() {
    int choice, tickets;
    float price, total = 0;

    printf("=== Ticket Booking System ===\n");
    printf("1. Movie - Rs. 250\n");
    printf("2. Train  - Rs. 120\n");
    printf("3. Bus    - Rs. 80\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: price = 250; break;
        case 2: price = 120; break;
        case 3: price = 80;  break;
        default: 
            printf("Invalid choice!\n");
            return 0;
    }

    printf("Enter number of tickets: ");
    scanf("%d", &tickets);

    total = price * tickets;
    printf("Total cost: Rs. %.2f\n", total);
    printf("Booking Confirmed! Enjoy your trip/show.\n");

    return 0;
}