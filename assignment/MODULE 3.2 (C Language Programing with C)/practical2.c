#include <stdio.h>

int main() {
    int a;
    int b;

    printf("Enter first numbers: ");
    scanf("%d", &a);

    printf("Enter second numbers: ");
    scanf("%d", &b);
    printf("Before swapping:\na = %d,\nb = %d", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nAfter swapping:\na = %d,\nb = %d", a, b);

}
