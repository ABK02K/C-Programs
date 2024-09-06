#include<stdio.h>

void max_of_three(int *a, int *b, int *c, int *max) {
    *max = *a;

    if(*b > *max)
        *max = *b;
    if(*c > *max)
        *max = *c;
}

void main() {
    int num1, num2, num3, max;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    max_of_three(&num1, &num2, &num3, &max);
    printf("Greatest number: %d\n", max);
    
}
