/*
 * Harivandana College || HVC
 * Subject: Programming with C (MCA Semester 1)
 * Practical 8
 * Question: Write a program to read marks of a student from keyboard whether the student is pass or fail (using if else)
 */

#include <stdio.h>

int main() {
    float marks;

    printf("Enter student marks (0 - 100): ");
    scanf("%f", &marks);

    if (marks >= 40.0) {
        printf("Marks: %.2f - Result: PASS\n", marks);
    } else {
        printf("Marks: %.2f - Result: FAIL\n", marks);
    }

    return 0;
}
