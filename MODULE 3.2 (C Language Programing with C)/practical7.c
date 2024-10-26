<<<<<<< HEAD:MODULE 3.2 (C Language Programing with C)/practical7.c
// how many odd numbers are There
#include <stdio.h>

int main() {
    int numbers[10];
    int oddCount = 0;

    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
        if (numbers[i] % 2 != 0) {
            oddCount++;
        }
    }

    printf("There are %d odd numbers.\n", oddCount);

}
=======
#include <stdio.h>

int main() {
    int num, max_digit = 0, counter;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        num = -num;
    }

    while (num != 0) {
        counter = num % 10;    
        if (counter > max_digit) {
            max_digit = counter;  
        }
        num /= 10;  
    }

   
    printf("Max digit is: %d\n", max_digit);

}
>>>>>>> 9372596b8d8a5284dc08a9a11ab0da7b531014c4:assignment/MODULE 3.2 (C Language Programing with C)/practical7.c
