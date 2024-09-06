#include<stdio.h>

int sum_of_odd_numbers(int n) {
    int sum = 0;
    for(int i = 1; i <= 2*n-1; i += 2) {
        sum += i;
    }
    return sum;
}

void main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Sum of first %d odd numbers: %d\n", num, sum_of_odd_numbers(num));
    
}
