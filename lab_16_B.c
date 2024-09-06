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
        // Find the minimum element in the unsorted region
        int min_idx = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        // Swap the found minimum element with the first element of the unsorted region
        if (min_idx != i) {
            int temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
    }

    // Print the sorted array
    printf("The Sorted array using selection Sort algorithm is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}