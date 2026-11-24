/*
 * Harivandana College || HVC
 * Subject: Programming with C (MCA Semester 1)
 * Practical 14
 * Question: Write a C program to find out the Maximum and Minimum number from given 10 numbers
 */

#include <stdio.h>

int main() {
    int arr[10];
    int i, max, min;

    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for (i = 1; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("\nMaximum Number = %d\n", max);
    printf("Minimum Number = %d\n", min);

    return 0;
}
