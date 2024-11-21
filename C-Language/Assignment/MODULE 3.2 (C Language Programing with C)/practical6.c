// How many Even numbers are There

#include <stdio.h>

int main() {
    int numbers[10];
    int evenCount = 0;

    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
        if (numbers[i] % 2 == 0) {
            evenCount++;
        }
    }

    printf("There are %d even numbers.\n", evenCount);

}

