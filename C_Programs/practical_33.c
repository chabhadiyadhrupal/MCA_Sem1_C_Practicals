/*
 * Harivandana College || HVC
 * Subject: Programming with C (MCA Semester 1)
 * Practical 33
 * Question: Write a function in the program to return 1 if number is prime otherwise return 0
 */

#include <stdio.h>

// Function returns 1 if prime, 0 otherwise
int isPrime(int num) {
    int i;
    if (num <= 1)
        return 0;
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (isPrime(number) == 1) {
        printf("%d is a Prime number (Function returned 1).\n", number);
    } else {
        printf("%d is NOT a Prime number (Function returned 0).\n", number);
    }

    return 0;
}
