<<<<<<< HEAD:MODULE 3.2 (C Language Programing with C)/practical5.c
#include <stdio.h>

int main() {

    for (int i = 972; i >= 897; i--) {
        printf("%d\n", i);
    }

=======
#include <stdio.h>

int main() {

    //1. WAP to print 972 to 897 using for loop
    // for (int i = 972; i >= 897; i--) {
    //     printf("%d\n", i);
    // }



    //2. WAP to take 10 no. Input from user and find out … 
   
   // Function to print the multiplication table of a number
   void printTable(int num) {
    printf("\nMultiplication table for the sum of odd numbers (%d):\n", num);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}

// Function to calculate the factorial of a number
int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

// Function to print the Fibonacci series up to a given number
void printFibonacci(int num) {
    int t1 = 0, t2 = 1, nextTerm = 0;
    printf("Fibonacci series up to %d: \n", num);

    for (int i = 1; i <= num; i++) {
        if (i == 1) {
            printf("%d, ", t1);
            continue;
        }
        if (i == 2) {
            printf("%d, ", t2);
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

        if (nextTerm > num) break;
        printf("%d, ", nextTerm);
    }
    printf("\n");
}

    int numbers[10];      
    int even_count = 0;   
    int odd_count = 0;    
    int even_sum = 0;     
    int odd_sum = 0;  

    // Input numbers from the user
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (numbers[i] % 2 == 0) {
            even_count++;      
            even_sum += numbers[i];  // Add to sum of even numbers
        } else {
            odd_count++;       
            odd_sum += numbers[i];   // Add to sum of odd numbers
        }
    }

    printf("Even numbers count: %d\n", even_count);
    printf("Odd numbers count: %d\n", odd_count);
    printf("Sum of even numbers: %d\n", even_sum);
    printf("Sum of odd numbers: %d\n", odd_sum);

     if (odd_sum > 0) {
        printTable(odd_sum);  
    } else {
        printf("No odd numbers were entered, so no table to display.\n");
    }

 // Print factorial of each number
    printf("\nFactorials of the entered numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Factorial of %d is %d\n", numbers[i], factorial(numbers[i]));
    }

    // Print Fibonacci series up to the given number 
    printf("\nFibonacci series up to sum of even numbers (%d):\n", even_sum);
    printFibonacci(even_sum);

>>>>>>> 9372596b8d8a5284dc08a9a11ab0da7b531014c4:assignment/MODULE 3.2 (C Language Programing with C)/practical5.c
}