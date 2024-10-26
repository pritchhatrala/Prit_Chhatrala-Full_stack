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
=======
#include <stdio.h>

int main() {
    int num, sum = 0, counter;

  
    printf("Enter a number: ");
    scanf("%d", &num);

   
    while (num != 0) {
        counter = num % 10;  
        sum += counter;      
        num /= 10;            
    }

   
    printf("Summation of the digits: %d\n", sum);

}
>>>>>>> 9372596b8d8a5284dc08a9a11ab0da7b531014c4:assignment/MODULE 3.2 (C Language Programing with C)/practical8.c
