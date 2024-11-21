#include <stdio.h>

int main() {
    int n;

    printf("Enter the number up to which you want tables: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Table of %d:\n", i);
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n"); 
    }

}
