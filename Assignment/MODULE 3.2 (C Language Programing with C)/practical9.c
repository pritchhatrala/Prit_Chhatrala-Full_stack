<<<<<<< HEAD:MODULE 3.2 (C Language Programing with C)/practical9.c
// sum of odd numbers

#include <stdio.h>

int main() {
    int numbers[10];
    int oddSum = 0;

    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
        if (numbers[i] % 2 != 0) {
            oddSum += numbers[i];
        }
    }

    printf("The sum of odd numbers is: %d\n", oddSum);

}
=======
#include <stdio.h>

int main() {
    int num, first_digit, last_digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    last_digit = num % 10;

    while (num >= 10) {
        num /= 10;
    }
    first_digit = num;

    int sum = first_digit + last_digit;

    printf("Summation of the first and last digit: %d\n", sum);

}
>>>>>>> 9372596b8d8a5284dc08a9a11ab0da7b531014c4:assignment/MODULE 3.2 (C Language Programing with C)/practical9.c
