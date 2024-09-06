#include <stdio.h>

int main() {
    char str1[100], str2[100], result[200];
    int i, j;

    // Input the first string
    printf("Enter the first string: ");
    scanf("%s", str1);

    // Input the second string
    printf("Enter the second string: ");
    scanf("%s", str2);

    // Copy characters from the first string to the result string
    for (i = 0; str1[i] != '\0'; ++i) {
        result[i] = str1[i];
    }

    // Concatenate characters from the second string to the result string
    for (j = 0; str2[j] != '\0'; ++j) {
        result[i + j] = str2[j];
    }

    // Null-terminate the result string
    result[i + j] = '\0';

    // Display the concatenated string
    printf("Concatenated string: %s\n", result);

    return 0;
}
