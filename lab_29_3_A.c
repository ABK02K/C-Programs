#include<stdio.h>

int max_of_three (int a, int b, int c) {
    int max = a;

    if(b > max)
        max = b;
    if(c > max)
        max = c;

    return max;
}

void main() {
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("Greatest number: %d\n", max_of_three(num1, num2, num3));
    
}
