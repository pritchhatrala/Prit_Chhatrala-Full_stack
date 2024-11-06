<<<<<<< HEAD:MODULE 3.2 (C Language Programing with C)/practical4.c
#include <stdio.h>

int main() {

//1. Monday to Sunday using switch case 

 int day ;

printf("Enter a number (1-7): ");
    scanf("%d", &day);    

    switch (day)
    {
    case 0:
        printf("Sunday");
        break;
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    default:
        printf("wrong input");
    }




//2. Vowel or Consonant using switch case 
    // char ch;

    // printf("Enter a character: ");
    // scanf("%c", &ch);

    // ch = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch; 

    // switch(ch) {
    //     case 'a':
    //     printf("%c is a vowel.\n", ch);
    //     break;

    //     case 'e':
    //     printf("%c is a vowel.\n", ch);
    //     break;

    //     case 'i':
    //     printf("%c is a vowel.\n", ch);
    //     break;

    //     case 'o':
    //     printf("%c is a vowel.\n", ch);
    //     break;
        
    //     case 'u':
    //         printf("%c is a vowel.\n", ch);
    //         break;

    //     default:
    //         if((ch >= 'a' && ch <= 'z'))
    //             printf("%c is a consonant.\n", ch);
    //         else
    //             printf("%c is not an alphabet.\n", ch);
    // }

=======
#include <stdio.h>

int main() {

//1. Monday to Sunday using switch case 

 int day ;

printf("Enter a number (1-7): ");
    scanf("%d", &day);    

    switch (day)
    {
    case 0:
        printf("Sunday");
        break;
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    default:
        printf("wrong input");
    }




//2. Vowel or Consonant using switch case 
    // char ch;

    // printf("Enter a character: ");
    // scanf("%c", &ch);

    // ch = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch; 

    // switch(ch) {
    //     case 'a':
    //     printf("%c is a vowel.\n", ch);
    //     break;

    //     case 'e':
    //     printf("%c is a vowel.\n", ch);
    //     break;

    //     case 'i':
    //     printf("%c is a vowel.\n", ch);
    //     break;

    //     case 'o':
    //     printf("%c is a vowel.\n", ch);
    //     break;
        
    //     case 'u':
    //         printf("%c is a vowel.\n", ch);
    //         break;

    //     default:
    //         if((ch >= 'a' && ch <= 'z'))
    //             printf("%c is a consonant.\n", ch);
    //         else
    //             printf("%c is not an alphabet.\n", ch);
    // }

>>>>>>> 9372596b8d8a5284dc08a9a11ab0da7b531014c4:assignment/MODULE 3.2 (C Language Programing with C)/practical4.c
}