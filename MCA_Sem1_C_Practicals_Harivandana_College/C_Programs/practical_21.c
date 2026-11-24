/*
 * Harivandana College || HVC
 * Subject: Programming with C (MCA Semester 1)
 * Practical 21
 * Question: Write a program to evaluate the series 1^2+2^2+3^2+……+n^2
 */

#include <stdio.h>

int main() {
    int n, i;
    long long sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Series: ");
    for (i = 1; i <= n; i++) {
        sum += (long long)i * i;
        if (i == 1)
            printf("%d^2", i);
        else
            printf(" + %d^2", i);
    }

    printf("\nSum of the series = %lld\n", sum);

    return 0;
}
