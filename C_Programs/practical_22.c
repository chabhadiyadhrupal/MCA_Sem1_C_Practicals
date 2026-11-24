/*
 * Harivandana College || HVC
 * Subject: Programming with C (MCA Semester 1)
 * Practical 22
 * Question: Write a C program to find 1+1/2! +1/3! +1/4! +...... +1/n!
 */

#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0, fact = 1.0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        fact *= i;
        sum += (1.0 / fact);
    }

    printf("Sum of series (1 + 1/2! + 1/3! + ... + 1/%d!) = %.6lf\n", n, sum);

    return 0;
}
