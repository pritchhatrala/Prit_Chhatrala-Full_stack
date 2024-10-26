<<<<<<< HEAD:MODULE 3.3 (File Handling and Debugging)/practical1.c
#include <stdio.h>

int findMaxnum(int arr[], int size) {
    int max = arr[0];  
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];  
        }
    }
    return max;
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int max = findMaxnum(arr, size);

    printf("The maximum number in the array is: %d\n", max);

    return 0;
}
=======
#include <stdio.h>

int findMaxnum(int arr[], int size) {
    int max = arr[0];  
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];  
        }
    }
    return max;
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int max = findMaxnum(arr, size);

    printf("The maximum number in the array is: %d\n", max);

    return 0;
}
>>>>>>> 9372596b8d8a5284dc08a9a11ab0da7b531014c4:assignment/MODULE 3.3 (File Handling and Debugging)/practical1.c
