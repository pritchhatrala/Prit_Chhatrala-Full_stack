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
