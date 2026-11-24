/*
 * Harivandana College || HVC
 * Subject: Programming with C (MCA Semester 1)
 * Practical 4
 * Question: Write a C program to interchange two numbers.
 */

#include <stdio.h>

int main() {
    int num1, num2, temp;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("\nBefore Swapping:\n");
    printf("First Number  = %d\n", num1);
    printf("Second Number = %d\n", num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("\nAfter Swapping (Interchanged):\n");
    printf("First Number  = %d\n", num1);
    printf("Second Number = %d\n", num2);

    return 0;
}
