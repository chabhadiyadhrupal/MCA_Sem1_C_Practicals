/*
 * Harivandana College || HVC
 * Subject: Programming with C (MCA Semester 1)
 * Practical 18
 * Question: Write a program to calculate average and total of 5 students for 3 subjects (use nested for loops)
 */

#include <stdio.h>

int main() {
    int i, j;
    float marks, total, avg;

    for (i = 1; i <= 5; i++) {
        total = 0;
        printf("\n--- Student %d ---\n", i);
        for (j = 1; j <= 3; j++) {
            printf("Enter marks for Subject %d: ", j);
            scanf("%f", &marks);
            total += marks;
        }
        avg = total / 3.0;
        printf("Total Marks   = %.2f / 300\n", total);
        printf("Average Marks = %.2f%%\n", avg);
    }

    return 0;
}
