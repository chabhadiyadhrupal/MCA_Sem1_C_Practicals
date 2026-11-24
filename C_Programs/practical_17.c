/*
 * Harivandana College || HVC
 * Subject: Programming with C (MCA Semester 1)
 * Practical 17
 * Question: Write a program to generate first n number of Fibonacci series
 */

#include <stdio.h>

int main() {
    int n, i;
    long long t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    printf("Fibonacci Series up to %d terms:\n", n);

    for (i = 1; i <= n; ++i) {
        if (i == 1) {
            printf("%lld", t1);
            continue;
        }
        if (i == 2) {
            printf(", %lld", t2);
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        printf(", %lld", nextTerm);
    }
    printf("\n");

    return 0;
}
