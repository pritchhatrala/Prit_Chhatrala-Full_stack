#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

    printf("Calculator Menu:\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("Result of Addition: %.2f\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result of Subtraction: %.2f\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result of Multiplication: %.2f\n", result);
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result of Division: %.2f\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice! Please enter a valid option (1-4).\n");
    }

}
<<<<<<< HEAD:MODULE 3.3 (File Handling and Debugging)/practical2.c
=======
=======
#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

    printf("Calculator Menu:\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("Result of Addition: %.2f\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result of Subtraction: %.2f\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result of Multiplication: %.2f\n", result);
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result of Division: %.2f\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice! Please enter a valid option (1-4).\n");
    }

}
>>>>>>> 9372596b8d8a5284dc08a9a11ab0da7b531014c4:assignment/MODULE 3.3 (File Handling and Debugging)/practical2.c
>>>>>>> 88c6a4f9f46e210385f966a3c869bc915477bd67:Assignment/MODULE 3.3 (File Handling and Debugging)/practical2.c
