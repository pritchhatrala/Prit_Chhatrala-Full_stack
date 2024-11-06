<<<<<<< HEAD:MODULE 3.2 (C Language Programing with C)/practical3.c
#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    (num % 2 == 0) ? printf("%d is even.\n", num) : printf("%d is odd.\n", num);

}

