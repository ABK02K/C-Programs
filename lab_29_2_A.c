#include<stdio.h>

int sum_of_digits(int n ) {
    int sum = 0;
    while(n != 0) {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}

void main() {
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);

    printf("Sum of digits: %d\n", sum_of_digits(num));
    
}
