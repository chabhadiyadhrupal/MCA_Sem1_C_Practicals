/*
 * Harivandana College || HVC
 * Subject: Programming with C (MCA Semester 1)
 * Practical 41
 * Question: Write a C program to swap the two values using pointers.
 */

#include <stdio.h>

// Function to swap two numbers using pointers (call by reference)
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    printf("Enter value of x: ");
    scanf("%d", &x);
    printf("Enter value of y: ");
    scanf("%d", &y);

    printf("\nBefore Swapping: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After Swapping : x = %d, y = %d\n", x, y);

    return 0;
}
