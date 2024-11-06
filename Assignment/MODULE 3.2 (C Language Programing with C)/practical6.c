<<<<<<< HEAD:MODULE 3.2 (C Language Programing with C)/practical6.c
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
=======
#include<stdio.h>

int main(){
int number, reverse;

printf("Enter a number:");
scanf("%d",&number);

while(number>0)
{
    reverse = number % 10;
    number = number / 10;
    printf("%d",reverse);
}
}
>>>>>>> 9372596b8d8a5284dc08a9a11ab0da7b531014c4:assignment/MODULE 3.2 (C Language Programing with C)/practical6.c
