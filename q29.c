// Write a program to calculate the factorial of a number.

#include <stdio.h>

int main() {
    int i, fact = 1, num;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        fact = fact * i;
    }

    printf("Factorial of %d is: %d\n", num, fact);

    return 0;
}