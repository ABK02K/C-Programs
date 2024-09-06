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

    int low = 0, high = n - 1, mid;

    while (low <= high) {
        mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            printf("%d found at index %d.\n", target, mid);
            break;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (low > high) {
        printf("%d not found in the array.\n", target);
    }

    return 0;
}
