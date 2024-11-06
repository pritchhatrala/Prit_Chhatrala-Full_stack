#include <stdio.h>

int findStringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length - 1; 
}

void reverseString(char str[], char reversed[], int length) {
    for (int i = 0; i < length; i++) {
        reversed[i] = str[length - i - 1];
    }
    reversed[length] = '\0'; 
}

int isPalindrome(char str[], char reversed[], int length) {
    for (int i = 0; i < length; i++) {
        if (str[i] != reversed[i]) {
            return 0;
        }
    }
    return 1; 
}

int main() {
    char str[100], reversed[100];

    // Input the string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int length = findStringLength(str);

    reverseString(str, reversed, length);

    printf("Reversed string: %s\n", reversed);

    if (isPalindrome(str, reversed, length)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

}
