#include <stdio.h>

int findStringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') { 
        length++;
    }
    return length;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    int length = findStringLength(str);
    printf("The length of the string is: %d\n", length - 1);

}
