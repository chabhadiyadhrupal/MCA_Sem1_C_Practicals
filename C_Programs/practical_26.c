/*
 * Harivandana College || HVC
 * Subject: Programming with C (MCA Semester 1)
 * Practical 26
 * Question: Write a C program to read and store the roll no and marks of 20 students using array.
 */

#include <stdio.h>

int main() {
    int roll_no[20];
    float marks[20];
    int i, n = 20;

    printf("Enter Roll No and Marks for %d students:\n", n);
    for (i = 0; i < n; i++) {
        printf("Student %d Roll No: ", i + 1);
        scanf("%d", &roll_no[i]);
        printf("Student %d Marks  : ", i + 1);
        scanf("%f", &marks[i]);
    }

    printf("\n========== Student Records ==========\n");
    printf("%-10s %-15s %-10s\n", "Sr. No.", "Roll Number", "Marks");
    printf("-------------------------------------\n");
    for (i = 0; i < n; i++) {
        printf("%-10d %-15d %-10.2f\n", i + 1, roll_no[i], marks[i]);
    }
    printf("=====================================\n");

    return 0;
}
