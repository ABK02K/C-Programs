#include<stdio.h>

void sum_of_digits(int *n, int *sum) {
    while(*n != 0) {
        *sum = *sum + *n % 10;
        *n = *n / 10;
    }
}

void main() {
    int num, sum = 0;

    printf("Enter any number: ");
    scanf("%d", &num);

    sum_of_digits(&num, &sum);
    printf("Sum of digits: %d\n", sum);
    
}
