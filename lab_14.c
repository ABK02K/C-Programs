#include <stdio.h>

int main() {
    int size, num, i;

    // Input array size
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Declare an array of given size
    int arr[size];

    // Input array elements
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    // Input the number to search
    printf("Enter the number to search: ");
    scanf("%d", &num);

    // Search for the number in the array
    for (i = 0; i < size; i++) {
        if (arr[i] == num) {
            printf("Number %d found at location %d.\n", num, i + 1);
            break; // Stop searching once the number is found
        }
    }

    // If the number is not found
    if (i == size) {
        printf("Number %d not found in the array.\n", num);
    }

    return 0;
}

