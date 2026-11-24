/*
 * Harivandana College || HVC
 * Subject: Programming with C (MCA Semester 1)
 * Practical 24
 * Question: Write a program to print following patterns :
 * i) 1
 *    12
 *    123
 *    1234
 *    12345
 * ii 12345
 *    1234
 *    123
 *    12
 *    1
 * iii) 55555
 *      4444
 *      333
 *      22
 *      1
 * iv) 1
 *     22
 *     333
 *     4444
 *     55555
 */

#include <stdio.h>

int main() {
    int i, j;

    printf("Pattern i):\n");
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    printf("\nPattern ii):\n");
    for (i = 5; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    printf("\nPattern iii):\n");
    for (i = 5; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }

    printf("\nPattern iv):\n");
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}
