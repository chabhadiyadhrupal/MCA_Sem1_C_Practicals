/*
 * Harivandana College || HVC
 * Subject: Programming with C (MCA Semester 1)
 * Practical 36
 * Question: Write a program to read structure elements from keyboard.
 */

#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float percentage;
};

int main() {
    struct Student s;

    printf("Enter Student Details:\n");
    printf("Roll Number: ");
    scanf("%d", &s.rollNo);
    printf("Name: ");
    scanf(" %[^\n]s", s.name);
    printf("Percentage: ");
    scanf("%f", &s.percentage);

    printf("\n===== Displaying Structure Elements =====\n");
    printf("Roll Number : %d\n", s.rollNo);
    printf("Name        : %s\n", s.name);
    printf("Percentage  : %.2f%%\n", s.percentage);
    printf("=========================================\n");

    return 0;
}
