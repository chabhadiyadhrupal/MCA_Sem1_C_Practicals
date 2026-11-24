/*
 * Harivandana College || HVC
 * Subject: Programming with C (MCA Semester 1)
 * Practical 6
 * Question: Write a program to compute Fahrenheit from centigrade (f=1.8*c +32).
 */

#include <stdio.h>

int main() {
    float c, f;

    printf("Enter temperature in Centigrade (Celsius): ");
    scanf("%f", &c);

    f = (1.8 * c) + 32.0;

    printf("Temperature in Centigrade = %.2f C\n", c);
    printf("Temperature in Fahrenheit (f = 1.8*c + 32) = %.2f F\n", f);

    return 0;
}
