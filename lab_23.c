#include <stdio.h>

int main() {
    char str[100];
    int count = 0, i;

    // Input the string
    printf("Enter a string: ");
    scanf("%s", str);

    // Count the number of vowels in the string
    for (i = 0; str[i] != '\0'; ++i) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            count++;
        }
    }

    // Display the count of vowels
    printf("Number of vowels in the string: %d\n", count);

    return 0;
}
