#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure definition for a Ticket
struct Ticket {
    long ticketNumber;
    char registration[20];
    float grossWeight;
    float tareWeight;
};

// Helper Function 1: Returns the net weight
float getNetWeight(struct Ticket *t) {
    return t->grossWeight - t->tareWeight;
}

// Helper Function 2: Prints formatted details of a ticket
void printTicket(struct Ticket *t) {
    printf("%ld %s gross %.2f tare %.2f net %.2f\n", 
           t->ticketNumber, t->registration, t->grossWeight, t->tareWeight, getNetWeight(t));
}

int main() {
    int n;
    
    // Read the number of tickets
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    // Input Validation Rule
    if (n <= 0 || n > 100000) {
        printf("INVALID COUNT\n");
        return 0;
    }

    // Dynamic memory allocation
    struct Ticket *tickets = (struct Ticket *)malloc(n * sizeof(struct Ticket));
    if (tickets == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    float totalNetWeight = 0.0;
    float maxNetWeight = -1.0;
    struct Ticket heaviestTicket;

    // Read records and process
    for (int i = 0; i < n; i++) {
        scanf("%ld %s %f %f", &tickets[i].ticketNumber, tickets[i].registration, 
              &tickets[i].grossWeight, &tickets[i].tareWeight);
        
        float netWeight = getNetWeight(&tickets[i]);
        totalNetWeight += netWeight;

        // Keep track of the heaviest load
        if (netWeight > maxNetWeight) {
            maxNetWeight = netWeight;
            heaviestTicket = tickets[i];
        }
    }

    // Output results
    printf("WEIGHBRIDGE DAY BOOK\n");
    for (int i = 0; i < n; i++) {
        printTicket(&tickets[i]);
    }

    printf("Tickets: %d\n", n);
    printf("Total net weight (kg): %.2f\n", totalNetWeight);
    printf("Heaviest net load: ticket %ld %s %.2f\n", 
           heaviestTicket.ticketNumber, heaviestTicket.registration, maxNetWeight);

    // Properly release memory
    free(tickets);

    return 0;
}