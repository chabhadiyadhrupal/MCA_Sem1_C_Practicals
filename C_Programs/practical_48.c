/*
 * Harivandana College || HVC
 * Subject: Programming with C (MCA Semester 1)
 * Practical 48
 * Question: Read a text file which name is given in command line and print the total number of character in each line and total number of lines in a file.
 * File Name: sample.txt
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    FILE *fp;
    char line[500];
    int lineCount = 0;
    int charCount;

    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    fp = fopen(argv[1], "r");
    if (fp == NULL) {
        printf("Error: Could not open file %s\n", argv[1]);
        return 1;
    }

    printf("Analyzing file: %s\n\n", argv[1]);
    while (fgets(line, sizeof(line), fp) != NULL) {
        lineCount++;
        charCount = strlen(line);
        if (line[charCount - 1] == '\n')
            charCount--; // Exclude newline character
        printf("Line %d: %d characters\n", lineCount, charCount);
    }

    fclose(fp);
    printf("\nTotal Number of Lines in File: %d\n", lineCount);

    return 0;
}
