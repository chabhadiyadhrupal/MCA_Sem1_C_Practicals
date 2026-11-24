/*
 * Harivandana College || HVC
 * Subject: Programming with C (MCA Semester 1)
 * Practical 10
 * Question: Write a C program to check whether the entered character is capital, small letter,digit or any special character.
 */

#include <stdio.h>

int main() {
    char ch;

    printf("Enter any character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("'%c' is a Capital Letter (Uppercase).\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("'%c' is a Small Letter (Lowercase).\n", ch);
    } else if (ch >= '0' && ch <= '9') {
        printf("'%c' is a Digit.\n", ch);
    } else {
        printf("'%c' is a Special Character.\n", ch);
    }

    return 0;
}
