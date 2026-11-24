/*
 * Harivandana College || HVC
 * Subject: Programming with C (MCA Semester 1)
 * Practical 7
 * Question: Write a C program to find that the accepted number is Negative, Positive or Zero.
 */

#include <stdio.h>

int main() {
    double number;

    printf("Enter any number: ");
    scanf("%lf", &number);

    if (number > 0) {
        printf("The entered number %.2lf is Positive.\n", number);
    } else if (number < 0) {
        printf("The entered number %.2lf is Negative.\n", number);
    } else {
        printf("The entered number is Zero.\n");
    }

    return 0;
}
