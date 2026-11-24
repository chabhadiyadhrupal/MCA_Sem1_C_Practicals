/*
 * Harivandana College || HVC
 * Subject: Programming with C (MCA Semester 1)
 * Practical 5
 * Question: Write a C program to enter a distance in to kilometre and convert it in to meter, feet,inches and centimetre.
 */

#include <stdio.h>

int main() {
    float km, meter, feet, inches, cm;

    printf("Enter distance in kilometers: ");
    scanf("%f", &km);

    meter = km * 1000.0;
    cm = km * 100000.0;
    feet = km * 3280.84;
    inches = km * 39370.1;

    printf("\nDistance Conversions for %.2f km:\n", km);
    printf("Meters      = %.2f m\n", meter);
    printf("Centimeters = %.2f cm\n", cm);
    printf("Feet        = %.2f ft\n", feet);
    printf("Inches      = %.2f in\n", inches);

    return 0;
}
