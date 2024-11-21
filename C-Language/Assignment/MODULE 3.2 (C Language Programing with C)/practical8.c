<<<<<<< HEAD:MODULE 3.2 (C Language Programing with C)/practical8.c
// sum of even numbers
#include <stdio.h>

int main() {
    int numbers[10];
    int evenSum = 0;

    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
        if (numbers[i] % 2 == 0) {
            evenSum += numbers[i];
        }
    }

    printf("The sum of even numbers is: %d\n", evenSum);

}

