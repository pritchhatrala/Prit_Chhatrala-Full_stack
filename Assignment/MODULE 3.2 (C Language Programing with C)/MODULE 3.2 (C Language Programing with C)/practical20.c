#include <stdio.h>

int main() {
    char ch;  
    int i, j, n = 5; 

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            ch = 'A' + j - 1; 
            printf("%c ", ch); 
        }
        printf("\n");
    }

}
