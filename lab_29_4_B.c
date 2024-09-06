#include<stdio.h>

void sum_of_odd_numbers(int *n, int *sum) {
    for(int i = 1; i <= 2*(*n)-1; i += 2) {
        *sum += i;
    }
}

void main() {
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    sum_of_odd_numbers(&num, &sum);
    printf("Sum of first %d odd numbers: %d\n", num, sum);
    
}
