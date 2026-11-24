/*
 * Harivandana College || HVC
 * Subject: Programming with C (MCA Semester 1)
 * Practical 39
 * Question: Design a structure student_record to contain name, branch and total marks obtained. Develop a program to read data for 10 students in a class and print them.
 */

#include <stdio.h>

struct student_record {
    char name[50];
    char branch[30];
    float total_marks;
};

int main() {
    struct student_record students[10];
    int i;

    printf("Enter records for 10 students:\n");
    for (i = 0; i < 10; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]s", students[i].name);
        printf("Branch: ");
        scanf(" %[^\n]s", students[i].branch);
        printf("Total Marks: ");
        scanf("%f", &students[i].total_marks);
    }

    printf("\n==================== CLASS STUDENT RECORDS ====================\n");
    printf("%-5s %-25s %-15s %-12s\n", "No.", "Name", "Branch", "Total Marks");
    printf("---------------------------------------------------------------\n");
    for (i = 0; i < 10; i++) {
        printf("%-5d %-25s %-15s %-12.2f\n",
               i + 1, students[i].name, students[i].branch, students[i].total_marks);
    }
    printf("===============================================================\n");

    return 0;
}
