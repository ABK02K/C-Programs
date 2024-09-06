#include <stdio.h>

int main() {
    int size, i, j;

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
    
    int n = sizeof(arr) / sizeof(arr[0]);

    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // Print the sorted array
    printf("The Sorted array using Bubble Sort algorithm is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}