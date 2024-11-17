#include <stdio.h>

void sortArray(int arr[], int n, int ascending) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {

            if (ascending == 1) { 
                if (arr[i] > arr[j]) {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            } else { 
                if (arr[i] < arr[j]) {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
}

void displayArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n1, n2, choice;

    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter elements of the first array:\n");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter elements of the second array:\n");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Enter 1 for ascending order or 2 for descending order: ");
    scanf("%d", &choice);

    sortArray(arr1, n1, choice == 1);
    sortArray(arr2, n2, choice == 1);

    printf("\nSorted first array:\n");
    displayArray(arr1, n1);

    printf("Sorted second array:\n");
    displayArray(arr2, n2);

}
