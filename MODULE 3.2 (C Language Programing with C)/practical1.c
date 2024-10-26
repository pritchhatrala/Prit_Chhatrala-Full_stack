<<<<<<< HEAD:MODULE 3.2 (C Language Programing with C)/practical1.c
#include<stdio.h>

float Addition(float, float);
float Subtraction(float, float);
float Multiplication(float, float);
float Division(float, float);
int modulo(int, int);


void main()
{
float number1, number2;
int choice;

 do
    {

        printf("\n");
        printf("\nEnter number 1:");
        scanf("%f", &number1);
        printf("Enter number 2:");
        scanf("%f", &number2);

        printf("\n1. +");
        printf("\n2. -");
        printf("\n3. *");
        printf("\n4. /");
        printf("\n5. mod");
        printf("\n6. Exit");
        printf("\nChoose your operation from above:");

        scanf("%d", &choice);

        if (choice == 6)
        {
            printf("Thank you");
            break;
        }

        switch (choice)
        {
        case 1:
            printf("addition of %.2f and %.2f is: %.2f", number1, number2, Addition(number1, number2));
            break;
        case 2:
            printf("\nSubtraction of %.2f and %.2f is: %.2f", number1, number2, Subtraction(number1, number2));
            break;
        case 3:
            printf("\nMultiplication of %.2f and %.2f is: %.2f", number1, number2, Multiplication(number1, number2));
            break;
        case 4:
            printf("\nDivision of %.2f and %.2f is: %.2f", number1, number2, Division(number1, number2));
            break;
        case 5:
            printf("\nModulo of %.2f and %.2f is: %d", number1, number2, modulo(number1, number2));
            break;
        default:
            printf("Wrong input");
            break;
        }

    } while (1);
}

float Addition(float number1, float number2)
{
    return number1 + number2;
}
float Subtraction(float number1, float number2)
{
    return number1 - number2;
}
float Multiplication(float number1, float number2)
{
    return number1 * number2;
}
float Division(float number1, float number2)
{
    return number1 / number2;
}
int modulo(int number1, int number2)
{
    return number1 % number2;
}
=======
#include<stdio.h>

float Addition(float, float);
float Subtraction(float, float);
float Multiplication(float, float);
float Division(float, float);
int modulo(int, int);


void main()
{
float number1, number2;
int choice;

 do
    {

        printf("\n");
        printf("\nEnter number 1:");
        scanf("%f", &number1);
        printf("Enter number 2:");
        scanf("%f", &number2);

        printf("\n1. +");
        printf("\n2. -");
        printf("\n3. *");
        printf("\n4. /");
        printf("\n5. mod");
        printf("\n6. Exit");
        printf("\nChoose your operation from above:");

        scanf("%d", &choice);

        if (choice == 6)
        {
            printf("Thank you");
            break;
        }

        switch (choice)
        {
        case 1:
            printf("addition of %.2f and %.2f is: %.2f", number1, number2, Addition(number1, number2));
            break;
        case 2:
            printf("\nSubtraction of %.2f and %.2f is: %.2f", number1, number2, Subtraction(number1, number2));
            break;
        case 3:
            printf("\nMultiplication of %.2f and %.2f is: %.2f", number1, number2, Multiplication(number1, number2));
            break;
        case 4:
            printf("\nDivision of %.2f and %.2f is: %.2f", number1, number2, Division(number1, number2));
            break;
        case 5:
            printf("\nModulo of %.2f and %.2f is: %d", number1, number2, modulo(number1, number2));
            break;
        default:
            printf("Wrong input");
            break;
        }

    } while (1);
}

float Addition(float number1, float number2)
{
    return number1 + number2;
}
float Subtraction(float number1, float number2)
{
    return number1 - number2;
}
float Multiplication(float number1, float number2)
{
    return number1 * number2;
}
float Division(float number1, float number2)
{
    return number1 / number2;
}
int modulo(int number1, int number2)
{
    return number1 % number2;
}
>>>>>>> 9372596b8d8a5284dc08a9a11ab0da7b531014c4:assignment/MODULE 3.2 (C Language Programing with C)/practical1.c
