/*
 * Harivandana College || HVC
 * Subject: Programming with C (MCA Semester 1)
 * Practical 11
 * Question: Write a program to read marks from keyboard and your program should displayequivalent grade according to following table(if else ladder)
 *  Marks Grade
 *  100 - 80 Distinction
 *  79 - 60 First Class
 *  59 - 40 Second Class
 *  < 40 Fail
 */

#include <stdio.h>

int main() {
    float marks;

    printf("Enter marks obtained: ");
    scanf("%f", &marks);

    if (marks > 100.0 || marks < 0.0) {
        printf("Invalid marks entered! Marks must be between 0 and 100.\n");
    } else if (marks >= 80.0) {
        printf("Marks: %.2f | Grade: Distinction\n", marks);
    } else if (marks >= 60.0) {
        printf("Marks: %.2f | Grade: First Class\n", marks);
    } else if (marks >= 40.0) {
        printf("Marks: %.2f | Grade: Second Class\n", marks);
    } else {
        printf("Marks: %.2f | Grade: Fail\n", marks);
    }

    return 0;
}
