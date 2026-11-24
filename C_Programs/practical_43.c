/*
 * Harivandana College || HVC
 * Subject: Programming with C (MCA Semester 1)
 * Practical 43
 * Question: Write a program to access elements using pointer.
 */

#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    int i;

    printf("Accessing array elements using pointer arithmetic:\n");
    for (i = 0; i < 5; i++) {
        printf("Element at index %d = %d (address: %p)\n", i, *(ptr + i), (void *)(ptr + i));
    }

    return 0;
}
