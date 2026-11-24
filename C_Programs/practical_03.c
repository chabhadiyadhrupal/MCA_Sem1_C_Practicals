/*
 * Harivandana College || HVC
 * Subject: Programming with C (MCA Semester 1)
 * Practical 3
 * Question: Write a program to calculate simple interest (i = (p*r*n)/100 )
 * i = Simple interest p= Principal amount r = Rate of interest n = Number of years.
 */

#include <stdio.h>

int main() {
    float i, p, r, n;

    printf("Enter Principal amount (p): ");
    scanf("%f", &p);
    printf("Enter Rate of interest (r): ");
    scanf("%f", &r);
    printf("Enter Number of years (n): ");
    scanf("%f", &n);

    i = (p * r * n) / 100.0;

    printf("Principal Amount = Rs. %.2f\n", p);
    printf("Rate of Interest = %.2f%%\n", r);
    printf("Time Period      = %.1f Years\n", n);
    printf("Simple Interest (i = (p*r*n)/100) = Rs. %.2f\n", i);

    return 0;
}
