/*
 * Harivandana College || HVC
 * Subject: Programming with C (MCA Semester 1)
 * Practical 40
 * Question: Write a program to print address of variable using pointer.
 */

#include <stdio.h>

int main() {
    int num = 42;
    int *ptr = &num;

    printf("Value of num: %d\n", num);
    printf("Direct address of num (&num)     : %p\n", (void *)&num);
    printf("Address stored in pointer ptr    : %p\n", (void *)ptr);
    printf("Value accessed via pointer (*ptr): %d\n", *ptr);
    printf("Address of the pointer itself    : %p\n", (void *)&ptr);

    return 0;
}
