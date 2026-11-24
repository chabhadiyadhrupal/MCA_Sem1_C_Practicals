/*
 * Harivandana College || HVC
 * Subject: Programming with C (MCA Semester 1)
 * Practical 23
 * Question: Write a program to print following patterns :
 * i *
 *   * *
 *   * * *
 *   * * * *
 *   * * * * *
 * ii *
 *    * *
 *    * * *
 *    * * * *
 *    * * * * *
 * iii *****
 *     ****
 *     ***
 *     **
 *     *
 */

#include <stdio.h>

int main() {
    int i, j, rows = 5;

    printf("Pattern (i):\n");
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    printf("\nPattern (ii):\n");
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    printf("\nPattern (iii):\n");
    for (i = rows; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
