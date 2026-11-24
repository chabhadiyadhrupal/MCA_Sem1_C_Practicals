/*
 * Harivandana College || HVC
 * Subject: Programming with C (MCA Semester 1)
 * Practical 34
 * Question: Write a program to find factorial of a number using recursion.
 */

#include <stdio.h>

// Recursive function to calculate factorial
unsigned long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;
    unsigned long long result;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error! Factorial of a negative number is undefined.\n");
    } else {
        result = factorial(num);
        printf("Factorial of %d using recursion = %llu\n", num, result);
    }

    return 0;
}
