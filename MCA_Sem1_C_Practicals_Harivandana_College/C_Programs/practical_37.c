/*
 * Harivandana College || HVC
 * Subject: Programming with C (MCA Semester 1)
 * Practical 37
 * Question: Define a structure type struct personal that would contain person name, joining date and salary using this structure to read this information of 5 people and print the same on screen.
 */

#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct personal {
    char name[50];
    struct Date joinDate;
    float salary;
};

int main() {
    struct personal persons[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("--- Enter Information for Person %d ---\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]s", persons[i].name);
        printf("Joining Date (dd mm yyyy): ");
        scanf("%d %d %d", &persons[i].joinDate.day, &persons[i].joinDate.month, &persons[i].joinDate.year);
        printf("Salary: ");
        scanf("%f", &persons[i].salary);
    }

    printf("\n======================== PERSONAL DETAILS ========================\n");
    printf("%-5s %-20s %-15s %-12s\n", "No.", "Name", "Joining Date", "Salary (Rs.)");
    printf("------------------------------------------------------------------\n");
    for (i = 0; i < 5; i++) {
        printf("%-5d %-20s %02d/%02d/%-9d %-12.2f\n",
               i + 1, persons[i].name,
               persons[i].joinDate.day, persons[i].joinDate.month, persons[i].joinDate.year,
               persons[i].salary);
    }
    printf("==================================================================\n");

    return 0;
}
