/*
 * Harivandana College || HVC
 * Subject: Programming with C (MCA Semester 1)
 * Practical 49
 * Question: Write a program to merge two files into the third file.
 * File Name: file1.txt, file2.txt, file3.txt
*/

#include <stdio.h>

int main() {
    FILE *f1, *f2, *f3;
    char ch;

    f1 = fopen("file1.txt", "r");
    f2 = fopen("file2.txt", "r");
    f3 = fopen("file3.txt", "w");

    if (f1 == NULL || f2 == NULL || f3 == NULL) {
        printf("Error opening files!\n");
        return 1;
    }

    // Copy contents of file1.txt into file3.txt
    while ((ch = fgetc(f1)) != EOF) {
        fputc(ch, f3);
    }

    // Copy contents of file2.txt into file3.txt
    while ((ch = fgetc(f2)) != EOF) {
        fputc(ch, f3);
    }

    printf("Successfully merged file1.txt and file2.txt into file3.txt!\n");

    fclose(f1);
    fclose(f2);
    fclose(f3);

    // Print merged contents
    f3 = fopen("file3.txt", "r");
    printf("\n--- Merged File Contents (file3.txt) ---\n");
    while ((ch = fgetc(f3)) != EOF) {
        putchar(ch);
    }
    fclose(f3);

    return 0;
}
