#include <stdio.h>


void reverse_string(char *str) {
    if (*str) {
        reverse_string(str + 1);
        printf("%c", *str);
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Reversed string: ");
    reverse_string(str);
    printf("\n");

}