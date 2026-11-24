/*
 * Harivandana College || HVC
 * Subject: Programming with C (MCA Semester 1)
 * Practical 29
 * Question: Write a program to replace a character in given string.
 */

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char oldChar, newChar;
    int i, count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Enter character to replace: ");
    scanf(" %c", &oldChar);
    printf("Enter new replacement character: ");
    scanf(" %c", &newChar);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == oldChar) {
            str[i] = newChar;
            count++;
        }
    }

    printf("\nModified String: %s\n", str);
    printf("Total replacements made: %d\n", count);

    return 0;
}
