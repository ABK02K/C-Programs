#include <stdio.h>

int main() {
    char str[100], rev[100];
    int len = 0, i, j, isPalindrome = 1; // Added a flag variable

    printf("Enter a string: ");
    gets(str);

    while (str[len] != '\0') 
        len++;

    for (i = len - 1, j = 0; i >= 0 ; i--, j++)
        rev[j] = str[i];
    rev[j] = '\0';

    for(i = 0; i < len; i++) {
        if (str[i] != rev[i]) {
            isPalindrome = 0; // Set flag if a mismatch is found
            break; // Exit the loop early if a mismatch is found
        }
    }

    if (isPalindrome)
        printf("%s is a palindrome.\n", str);
    else
        printf("%s is not a palindrome.\n", str);

    return 0;
}
