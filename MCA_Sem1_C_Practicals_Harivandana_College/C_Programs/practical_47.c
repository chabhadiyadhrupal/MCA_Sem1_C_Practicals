/*
 * Harivandana College || HVC
 * Subject: Programming with C (MCA Semester 1)
 * Practical 47
 * Question: Write a program to accept the contents from the user and store it in the file one line at a time and print the contents of the file.
 * File Name: file.txt
*/

#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char line[200];
    int n, i;

    fp = fopen("file.txt", "w");
    if (fp == NULL) {
        printf("Cannot open file!\n");
        return 1;
    }

    printf("How many lines do you want to write? ");
    scanf("%d", &n);
    getchar(); // Clear newline buffer

    printf("Enter %d lines of text:\n", n);
    for (i = 0; i < n; i++) {
        printf("Line %d: ", i + 1);
        fgets(line, sizeof(line), stdin);
        fputs(line, fp);
    }
    fclose(fp);

    printf("\n--- Displaying Contents of file.txt ---\n");
    fp = fopen("file.txt", "r");
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }
    fclose(fp);

    return 0;
}
