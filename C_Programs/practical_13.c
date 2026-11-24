/*
 * Harivandana College || HVC
 * Subject: Programming with C (MCA Semester 1)
 * Practical 13
 * Question: Write a C program to read no 1 to 7 and print relatively day Sunday to Saturday.
 */

#include <stdio.h>

int main() {
    int dayNo;

    printf("Enter day number (1 - 7): ");
    scanf("%d", &dayNo);

    switch (dayNo) {
        case 1:
            printf("Day 1: Sunday\n");
            break;
        case 2:
            printf("Day 2: Monday\n");
            break;
        case 3:
            printf("Day 3: Tuesday\n");
            break;
        case 4:
            printf("Day 4: Wednesday\n");
            break;
        case 5:
            printf("Day 5: Thursday\n");
            break;
        case 6:
            printf("Day 6: Friday\n");
            break;
        case 7:
            printf("Day 7: Saturday\n");
            break;
        default:
            printf("Invalid input! Please enter a number from 1 to 7.\n");
    }

    return 0;
}
