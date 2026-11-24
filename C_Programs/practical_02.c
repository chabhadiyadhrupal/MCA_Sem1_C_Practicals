/*
 * Harivandana College || HVC
 * Subject: Programming with C (MCA Semester 1)
 * Practical 2
 * Question: Write a program to find area of triangle(a=h*b*.5)
 *  a = area h = height b = base.
 */

#include <stdio.h>

int main() {
    float a, h, b;

    printf("Enter base of triangle (b): ");
    scanf("%f", &b);
    printf("Enter height of triangle (h): ");
    scanf("%f", &h);

    a = h * b * 0.5;

    printf("Base = %.2f\n", b);
    printf("Height = %.2f\n", h);
    printf("Area of Triangle (a = h * b * 0.5) = %.2f\n", a);

    return 0;
}
