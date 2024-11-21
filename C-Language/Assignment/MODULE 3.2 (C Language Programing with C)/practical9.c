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
