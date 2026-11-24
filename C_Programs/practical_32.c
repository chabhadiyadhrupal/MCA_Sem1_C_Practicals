/*
 * Harivandana College || HVC
 * Subject: Programming with C (MCA Semester 1)
 * Practical 32
 * Question: Write a program that defines a function to add first n numbers.
 */

#include <stdio.h>

// User defined function to calculate sum of first n numbers
long long sumOfNNumbers(int n) {
    long long sum = 0;
    int i;
    for (i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int n;
    long long total;

    printf("Enter positive integer n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a number greater than or equal to 1.\n");
    } else {
        total = sumOfNNumbers(n);
        printf("Sum of first %d natural numbers = %lld\n", n, total);
    }

    return 0;
}
