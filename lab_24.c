#include <stdio.h>

int main() {
    char str[100], target;
    int count = 0, i;

    // Input the string
    printf("Enter a string: ");
    scanf("%s", str);

    // Input the character to be counted
    printf("Enter the character to count: ");
    scanf(" %c", &target); // Note the space before %c to consume any leading whitespace

    // Count the occurrence of the character in the string
    for (i = 0; str[i] != '\0'; ++i) {
        if (str[i] == target) {
            count++;
        }
    }

    // Display the count of the character
    printf("Number of occurrences of '%c' in the string: %d\n", target, count);

    return 0;
}
