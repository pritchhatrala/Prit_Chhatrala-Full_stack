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
