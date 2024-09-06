#include <stdio.h>

int main() {
    int size, i;

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
    int target;
    
    printf("Enter the number to search: ");
    scanf("%d", &target);

    int found = 0; // Flag to indicate whether the number is found

    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("%d found at index %d.\n", target, i);
            found = 1;
            break; // Exit the loop if the number is found
        }
    }

    if (!found) {
        printf("%d not found in the array.\n", target);
    }

    return 0;
}
