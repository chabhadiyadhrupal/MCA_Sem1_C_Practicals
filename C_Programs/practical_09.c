/*
 * Harivandana College || HVC
 * Subject: Programming with C (MCA Semester 1)
 * Practical 9
 * Question: Write a program to read three numbers from keyboard and find out maximum out ofthese three. (nested if else)
 */

#include <stdio.h>

int main() {
    int a, b, c, max;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b) {
        if (a >= c) {
            max = a;
        } else {
            max = c;
        }
    } else {
        if (b >= c) {
            max = b;
        } else {
            max = c;
        }
    }

    printf("Numbers entered: %d, %d, %d\n", a, b, c);
    printf("Maximum number: %d\n", max);

    return 0;
}
