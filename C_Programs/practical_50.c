/*
 * Harivandana College || HVC
 * Subject: Programming with C (MCA Semester 1)
 * Practical 50
 * Question: Program for deleting the spaces from the contents of file.
 * File Name: input.txt, output.txt
*/

#include <stdio.h>

int main() {
    FILE *fin, *fout;
    char ch;

    fin = fopen("input.txt", "r");
    fout = fopen("output.txt", "w");

    if (fin == NULL || fout == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read characters and skip space ' '
    while ((ch = fgetc(fin)) != EOF) {
        if (ch != ' ') {
            fputc(ch, fout);
        }
    }

    fclose(fin);
    fclose(fout);

    printf("Spaces removed successfully from input.txt and saved to output.txt!\n");

    // Display original and modified contents
    printf("\n--- Resulting File (output.txt without spaces) ---\n");
    fout = fopen("output.txt", "r");
    while ((ch = fgetc(fout)) != EOF) {
        putchar(ch);
    }
    fclose(fout);

    return 0;
}
