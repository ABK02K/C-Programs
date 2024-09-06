#include <stdio.h>
long long factorial(int n);
int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Error! Factorial of a negative number doesn't exist.");
    } else {
        long long fact = factorial(number);
        printf("Factorial of %d = %lld", number, fact);
    }

    return 0;
}
long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}


