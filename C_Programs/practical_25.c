/*
 * Harivandana College || HVC
 * Subject: Programming with C (MCA Semester 1)
 * Practical 25
 * Question: Write a program to print following patterns:
 * i) AAAAA
 *    BBBB
 *    CCC
 *    DD
 *    E
 * ii) ABCDE
 *     ABCD
 *     ABC
 *     AB
 *     A
 */

#include <stdio.h>

int main() {
    int i, j;

    printf("Pattern i):\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5 - i; j++) {
            printf("%c", 'A' + i);
        }
        printf("\n");
    }

    printf("\nPattern ii):\n");
    for (i = 5; i >= 1; i--) {
        for (j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }

    return 0;
}
