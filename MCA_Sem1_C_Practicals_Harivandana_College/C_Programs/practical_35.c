/*
 * Harivandana College || HVC
 * Subject: Programming with C (MCA Semester 1)
 * Practical 35
 * Question: Write a function that will scan a character string passed as an argument and convert all lowercase character into their uppercase equivalents
 */

#include <stdio.h>

// Function to convert lowercase characters to uppercase
void toUppercase(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        i++;
    }
}

int main() {
    char text[150];

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    printf("\nOriginal text: %s", text);
    toUppercase(text);
    printf("Uppercase text: %s", text);

    return 0;
}
