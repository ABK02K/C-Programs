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

    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i-1;

        // Move elements of arr[0..i-1], that are greater than key, to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;
    }

    // Print the sorted array
    printf("The Sorted array using insertion Sort algorithm is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}