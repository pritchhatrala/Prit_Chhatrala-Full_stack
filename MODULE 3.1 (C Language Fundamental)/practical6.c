<<<<<<< HEAD:MODULE 3.1 (C Language Fundamental)/practical6.c
#include <stdio.h>

int main() {
    int choice;
    float years, days;

    printf("=====Choose an option:=====");
    printf("\n1. Convert years to days");
    printf("\n2. Convert days to years");
    printf("\nEnter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter the number of years: ");
        scanf("%f", &years);
        days = years * 365; 
        printf("%.2f years is approximately %.2f days.\n", years, days);
    } 
    else if (choice == 2) {
        printf("Enter the number of days: ");
        scanf("%f", &days);
        years = days / 365; 
        printf("%f days is approximately %.2f years.\n", days, years);
    } else {
        printf("\nInvalid choice");
    }

    return 0;
}
=======
#include <stdio.h>

int main() {
    int choice;
    float years, days;

    printf("=====Choose an option:=====");
    printf("\n1. Convert years to days");
    printf("\n2. Convert days to years");
    printf("\nEnter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter the number of years: ");
        scanf("%f", &years);
        days = years * 365; 
        printf("%.2f years is approximately %.2f days.\n", years, days);
    } 
    else if (choice == 2) {
        printf("Enter the number of days: ");
        scanf("%f", &days);
        years = days / 365; 
        printf("%f days is approximately %.2f years.\n", days, years);
    } else {
        printf("\nInvalid choice");
    }

    return 0;
}
>>>>>>> 9372596b8d8a5284dc08a9a11ab0da7b531014c4:assignment/MODULE 3.1 (C Language Fundamental)/practical6.c
