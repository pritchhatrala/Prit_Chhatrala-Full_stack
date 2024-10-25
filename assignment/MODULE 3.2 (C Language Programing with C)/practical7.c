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
