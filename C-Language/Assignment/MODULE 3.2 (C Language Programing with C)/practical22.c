#include <stdio.h>

int main() {
    int i, j, n = 6; 

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (i = n - 1; i >= 1; i--) {
        // Print stars in each row
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

}
