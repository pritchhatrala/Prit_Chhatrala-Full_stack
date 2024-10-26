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
