<<<<<<< HEAD:MODULE 3.1 (C Language Fundamental)/prectical5.c
#include <stdio.h>

int main()
 {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0) {

        if (year % 100 == 0) {
            
            if (year % 400 == 0) {
                printf("\n%d is a leap year.", year); 
            } 
            else {
                printf("\n%d is not a leap year.", year); 
            }
        } 
        else {
            printf("\n%d is a leap year.", year);
        }
    } else {
        printf("\n%d is not a leap year.", year);
    }

    return 0;
}
=======
#include <stdio.h>

int main()
 {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0) {

        if (year % 100 == 0) {
            
            if (year % 400 == 0) {
                printf("\n%d is a leap year.", year); 
            } 
            else {
                printf("\n%d is not a leap year.", year); 
            }
        } 
        else {
            printf("\n%d is a leap year.", year);
        }
    } else {
        printf("\n%d is not a leap year.", year);
    }

    return 0;
}
>>>>>>> 9372596b8d8a5284dc08a9a11ab0da7b531014c4:assignment/MODULE 3.1 (C Language Fundamental)/prectical5.c
