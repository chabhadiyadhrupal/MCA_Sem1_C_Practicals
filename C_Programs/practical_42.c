/*
 * Harivandana College || HVC
 * Subject: Programming with C (MCA Semester 1)
 * Practical 42
 * Question: Write a C program to print the address of character and the character of string usingpointer.
 */

#include <stdio.h>

int main() {
    char str[] = "HELLO";
    char *ptr = str;
    int index = 0;

    printf("String: %s\n\n", str);
    printf("%-8s %-12s %-15s\n", "Index", "Character", "Memory Address");
    printf("----------------------------------------\n");

    while (*ptr != '\0') {
        printf("%-8d '%c'         %p\n", index, *ptr, (void *)ptr);
        ptr++;
        index++;
    }
    printf("----------------------------------------\n");

    return 0;
}
