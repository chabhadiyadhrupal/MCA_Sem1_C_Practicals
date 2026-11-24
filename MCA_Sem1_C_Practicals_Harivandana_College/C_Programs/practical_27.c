/*
 * Harivandana College || HVC
 * Subject: Programming with C (MCA Semester 1)
 * Practical 27
 * Question: Write a program to find maximum element from 1-Dimensional array.
 */

#include <stdio.h>

int main() {
    int arr[100], n, i, max, index = 0;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            index = i;
        }
    }

    printf("Maximum Element = %d at index %d (position %d)\n", max, index, index + 1);

    return 0;
}
